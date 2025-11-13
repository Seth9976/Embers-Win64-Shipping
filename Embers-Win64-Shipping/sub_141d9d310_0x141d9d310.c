// 函数: sub_141d9d310
// 地址: 0x141d9d310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
CRITICAL_SECTION* lpCriticalSection = *arg1
int64_t var_98 = 0
int128_t* var_88 = nullptr
lpCriticalSection->__offset(0x80).d = 0
EnterCriticalSection(lpCriticalSection)
int128_t var_78

if (&var_98 != lpCriticalSection + 0x30)
    int128_t zmm5_1 = var_98.o
    int128_t zmm4_1 = var_88.o
    arg4 = var_78
    int128_t var_68
    arg3 = var_68
    var_98.o = *(lpCriticalSection + 0x30)
    int128_t zmm0 = lpCriticalSection[2].DebugInfo.o
    var_88.o = *(lpCriticalSection + 0x40)
    arg2 = *(lpCriticalSection + 0x60)
    *(lpCriticalSection + 0x30) = zmm5_1
    *(lpCriticalSection + 0x40) = zmm4_1
    lpCriticalSection[2].DebugInfo.o = arg4
    var_78 = zmm0
    int128_t var_68_1 = arg2
    *(lpCriticalSection + 0x60) = arg3
    int128_t var_58_1 = zmm5_1
    int128_t var_48_1 = zmm4_1
    int128_t var_38_1 = arg4
    int128_t var_28_1 = arg3

char temp0 = lpCriticalSection->__offset(0x78).b
lpCriticalSection->__offset(0x78).b = 1
int64_t rax_3
rax_3.b = temp0
LeaveCriticalSection(lpCriticalSection)
int64_t* rcx_2 = lpCriticalSection->__offset(0x70).q
int64_t result = (*(*rcx_2 + 0x10))(rcx_2, arg2, arg3, arg4)

if (var_98 != 0)
    int128_t* rcx_3 = &var_78
    
    if (var_88 != 0)
        rcx_3 = var_88
    
    result = var_98((*(*rcx_3 + 8))(rcx_3))
    
    if (var_98 != 0)
        int128_t* rcx_5 = &var_78
        
        if (var_88 != 0)
            rcx_5 = var_88
        
        result = (*(*rcx_5 + 0x10))(rcx_5)

__security_check_cookie(rax_1 ^ &var_b8)
return result
