iMeshDeform: 
===========
Linear Variational Subspace For Deformable Surfaces and Solids (Contributors: Jianbo Ye and Zhixin Yan)

Our working paper:

Jianbo Ye and Zhixin Yan, "On the Approximation Theory of Linear Variational Subspace Design", [arXiv:1506.08459](http://arxiv.org/abs/1506.08459) [cs.GR]

[![](https://raw.githubusercontent.com/bobye/iMeshDeform/master/screenshot.png)](https://vimeo.com/132393849)

Prerequisites:

 - Linux
 - [Intel C++ Compiler for Linux](http://software.intel.com/en-us/non-commercial-software-development)
 - CMake

Libraries:

 - OpenGL (version 2.1 or above) + GLUT
 - PETSc (with external sparse direct solver, e.g. mumps/umfpack)
 - SLEPc
 - [Intel MKL](http://software.intel.com/en-us/articles/intel-math-kernel-library-documentation)
 - [trimesh2++](https://github.com/bobye/trimesh2plus)

Sample env variables:

	source /opt/intel/bin/compilervars.sh intel64
	export SLEPC_DIR=/home/bobye/pub/slepc/slepc-3.3-p3
	export PETSC_DIR=/home/bobye/pub/petsc/petsc-3.3-p5
	export PETSC_ARCH=linux-gnu-c-debug
	export TRIMESH2_DIR=/home/bobye/pub/trimesh2++
	export TRIMESH2_ARCH=Linux64
	export MKLPATH=${MKLROOT}/lib/intel64
	PKG_CONFIG_PATH=/usr/local/lib/pkgconfig:${PKG_CONFIG_PATH}
	export PKG_CONFIG_PATH


How to run:
	
	# run examples
	cd example/test2
	./run.sh

Demo:
See demo.zip in root directory, and find accompanied tutorial.md for instructions.
