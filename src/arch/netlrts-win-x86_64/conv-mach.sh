CMK_CC="$CHARMBIN/unix2nt_cc -D_CRT_SECURE_NO_DEPRECATE "
CMK_CPP_C="$CMK_CC -E"
CMK_CPP_CHARM="/usr/bin/cpp -P"
CMK_CXX="$CHARMBIN/unix2nt_cc -D_CRT_SECURE_NO_DEPRECATE "
CMK_LD="$CMK_CC"
CMK_LDXX="$CMK_CXX"

CMK_SEQ_CC="$CMK_CC"
CMK_SEQ_CXX="$CMK_CXX"
CMK_SEQ_LD="$CMK_LD"
CMK_SEQ_LDXX="$CMK_LDXX"

CMK_CF77="f77"
CMK_CF90="f90"
CMK_AR="$CHARMBIN/unix2nt_ar "
CMK_RANLIB="echo "
CMK_LIBS=""
CMK_XIOPTS=""
CMK_F90LIBS="-lvast90 -lg2c"
CMK_MOD_EXT="vo"
CMK_POST_EXE=".exe"
CMK_QT="none"
