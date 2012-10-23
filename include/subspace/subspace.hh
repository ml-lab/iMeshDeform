#ifndef _SUBSPACE_H_
#define _SUBSPACE_H_

//#define _SS_USE_CONFORMAL
#ifdef _SS_USE_CONFORMAL
#define MAX_CFM_STRECH    (1.5)
#endif 

#define _SS_SHOW_DEBUG

#include <vector>
#include "geometry.hh"

#define _SS_PI                       (3.141592653589793238)

namespace subspace {
  
  class Subspace {
  protected:
    // mesh type data pointer
    Mesh* mesh;

    // assembly large sparse matrix for solving subspaces
    void assembly();
    
    // allocate subspace internal datas
    void allocate();

    // switch locker between different sets of constraints
    bool ready;
  public:
    //void add_rigid_constraint(int );

    Subspace(int, char**);
    ~Subspace();
    void init(Mesh *);
    
    // offline routines
    // vg: vertices group
    void load_linear_proxies_vg(std::vector<int> &);
    void load_rotational_proxies(std::vector<int> &);

    void solve();//solve variational subspace


    // online routines
    // precompute LU and start updating thread
    void prepare(std::vector< std::vector<float> > &, std::vector<Point> &);

    // online solve and update vertices
    void update(std::vector<Point> &, bool );

    // terminate online updating thread
    void terminate();

    // io routines
    // export and import solved subspace
    void read(std::string );
    void write(std::string );

#ifdef _SS_SHOW_DEBUG
    // display debug info
    void show_debug();
#endif
  };


}
#endif /* _SUBSPACE_H_ */
