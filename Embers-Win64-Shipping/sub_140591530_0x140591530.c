// 函数: sub_140591530
// 地址: 0x140591530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t rax = j_sub_140a82f30(0x40)

if (rax == 0)
    rax = 0
else
    __builtin_memset(rax, 0, 0x40)

*arg1 = rax
arg1[1] = 0
arg1[2] = sws_freeContext
arg1[3] = 0
void* _ArgList_1 = &arg1[4]
int64_t rax_1 = j_sub_140a82f30(0x58)

if (rax_1 == 0)
    rax_1 = 0
else
    __builtin_memset(rax_1, 0, 0x58)

arg1[4] = rax_1
__builtin_memset(&arg1[5], 0, 0x18)
_ArgList_1 = &arg1[9]
__builtin_memset(&arg1[9], 0, 0x28)
void** rax_2 = j_sub_140a82f30(0x10)
rax_2[1] = 0
arg1[9] = rax_2
*rax_2 = &arg1[9]
__builtin_memset(&arg1[0xe], 0, 0x28)
void** rax_3 = j_sub_140a82f30(0x10)
rax_3[1] = 0
arg1[0xe] = rax_3
*rax_3 = &arg1[0xe]
arg1[0x13].b = 0
_Mtx_init_in_situ(&arg1[0x14], 2)
_Cnd_init_in_situ(&arg1[0x1e])
void* _ArgList = j_sub_140a82f30(0x10)

if (_ArgList == 0)
    _ArgList = nullptr
else
    *_ArgList = arg1
    *(_ArgList + 8) = sub_140591310

_ArgList_1 = _ArgList
uintptr_t rax_4 = _beginthreadex(nullptr, 0, sub_1405945a0, _ArgList, 0, &arg1[0x28])
arg1[0x27] = rax_4

if (rax_4 == 0)
    arg1[0x28].d = 0
    std::_Throw_Cpp_error(6)
    noreturn

arg1[0x29].w = 0
*(arg1 + 0x14c) = 0
return arg1
