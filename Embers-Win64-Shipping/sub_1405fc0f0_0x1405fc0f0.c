// 函数: sub_1405fc0f0
// 地址: 0x1405fc0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t result_1 = 0
int128_t* var_88 = nullptr
EnterCriticalSection(arg1)
int128_t var_78

if (&result_1 != arg1 + 0x30)
    int128_t zmm5_1 = result_1.o
    int128_t var_58_1 = zmm5_1
    int128_t zmm4_1 = var_88.o
    int128_t var_48_1 = zmm4_1
    arg4 = var_78
    int128_t var_38_1 = arg4
    int128_t var_68
    arg3 = var_68
    int128_t var_28_1 = arg3
    result_1.o = arg1->__offset(0x30).o
    var_88.o = arg1->__offset(0x40).o
    var_78 = arg1->__offset(0x50).o
    arg2 = arg1->__offset(0x60).o
    int128_t var_68_1 = arg2
    arg1->__offset(0x30).o = zmm5_1
    arg1->__offset(0x40).o = zmm4_1
    arg1->__offset(0x50).o = arg4
    arg1->__offset(0x60).o = arg3

char temp0 = arg1->__offset(0x78).b
arg1->__offset(0x78).b = 1
int64_t rax_3
rax_3.b = temp0

if (arg1 != 0)
    LeaveCriticalSection(arg1)

int64_t* rcx_1 = arg1->__offset(0x70).q
(*(*rcx_1 + 0x10))(rcx_1, arg2, arg3, arg4, var_a8)
int64_t result = result_1

if (result != 0)
    int128_t* rcx_2 = &var_78
    
    if (var_88 != 0)
        rcx_2 = var_88
    
    result_1((*(*rcx_2 + 8))(rcx_2, arg2, arg3, arg4))
    result = result_1

if (result != 0)
    int128_t* rcx_4 = &var_78
    
    if (var_88 != 0)
        rcx_4 = var_88
    
    result = (*(*rcx_4 + 0x10))(rcx_4)

__security_check_cookie(rax_1 ^ &var_c8)
return result
