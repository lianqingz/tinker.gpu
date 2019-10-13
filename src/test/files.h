#ifndef TINKER_SRC_FILES_H_
#define TINKER_SRC_FILES_H_

#include "macro.h"

TINKER_NAMESPACE_BEGIN
// prm files
namespace commit_6fe8e913 {
extern const char* water03_prm;
extern const char* amoeba09_prm;
extern const char* amoebabio09_prm;
extern const char* amoebapro13_prm;
}

namespace commit_291a85c1 {
extern const char* amoebapro13_prm;
}

// xyz files
extern const char* watersmall_xyz;

// NaCl ion pair test set
extern const char* nacl_xyz1;
extern const char* nacl_xyz2;
extern const char* nacl_xyz3;
extern const char* nacl_key;
extern const char* nacl_xyz4;
extern const char* nacl_key4;

// local_frame test set
extern const char* local_frame_xyz;
extern const char* local_frame_key;
extern const char* local_frame_xyz2;

// crambin3 test set
extern const char* crambin3_xyz;
extern const char* crambin3_key;

// trpcage test set
extern const char* trpcage_xyz;
extern const char* trpcage_key;

// ten water molecules test set
extern const char* h2o10_xyz;
extern const char* h2o10_key;

// six argon atoms test set
extern const char* ar6_xyz;
extern const char* ar6_key;
extern const char* ar6_dyn;

// 216 argon box test set
extern const char* arbox_key;
extern const char* arbox_xyz;
extern const char* arbox_dyn;
extern const char* arbox_dyn2;
extern const char* arbox_arc;
TINKER_NAMESPACE_END

#endif