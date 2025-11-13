// 函数: sub_141d654c0
// 地址: 0x141d654c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_14322d1a8
arg1[0x44] = &data_14322d7d0
arg1[0x45] = &data_14322d7f0
arg1[0x46].d &= 0xfffffffe
*(arg1 + 0x234) = 0
arg1[0x48].d &= 0xffffff00
arg1[0x47] = 0x3f800000
__builtin_memset(&arg1[0x4a], 0, 0x28)
arg1[0x4f].w = 0x101
arg1[0x55].b = 1
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"SceneComp", 1)
int64_t* rax_1 = sub_1425881f0()
char var_28 = 1
arg1[0x26] = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
uint64_t rbx_1 = *sub_140b58170(&arg_8, "BindingOverrides", 1)
void* rax_4 = sub_141a6dcc0()
var_28.q = rax_4
arg1[0x51] = sub_140d1dc20(arg2, arg1, rbx_1, rax_4, var_28, 1, 0)
uint64_t rbx_2 = *sub_140b58170(&arg_8, "BurnInOptions", 1)
void* rax_7 = sub_141d6f490()
var_28.q = rax_7
arg1[0x50] = sub_140d1dc20(arg2, arg1, rbx_2, rax_7, var_28, 1, 0)
uint64_t rbx_3 = *sub_140b58170(&arg_8, "InstanceData", 1)
void* rax_10 = sub_141d6f790()
var_28.q = rax_10
arg1[0x53] = sub_140d1dc20(arg2, arg1, rbx_3, rax_10, var_28, 1, 0)
uint64_t rbx_4 = *sub_140b58170(&arg_8, "AnimationPlayer", 1)
void* rax_13 = sub_141d6ed80()
var_28.q = rax_13
void* rax_14 = sub_140d1dc20(arg2, arg1, rbx_4, rax_13, var_28, 1, 0)
*(arg1 + 0x5b) |= 1
arg1[0x52].b &= 0xf8
arg1[0x49] = rax_14
return arg1
