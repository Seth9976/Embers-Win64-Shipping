// 函数: sub_140b96250
// 地址: 0x140b96250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void*** rsi = nullptr
*arg1 = 0
arg1[2] = 0
InitializeCriticalSection(&arg1[8])
SetCriticalSectionSpinCount(&arg1[8], 0xfa0)
__builtin_memset(&arg1[0xd], 0, 0x21)
void* rcx_2 = &arg1[0x15]
__builtin_memset(&arg1[0x12], 0, 0x18)
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)
void*** var_48 = nullptr
int64_t* var_30 = arg1

if (rax_2 != 0)
    rcx_2 = rax_2

*rcx_2 = 0
*(rcx_2 + 8) = 0
void* rcx_3 = &arg1[0x1f]
arg1[0x19].d = 0xffffffff
*(arg1 + 0xcc) = 0
arg1[0x1b] = 0
arg1[0x1c].d = 0
arg1[0x1d] = 0
arg1[0x1e] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_3 = *(rcx_3 + 0x10)

if (rax_3 != 0)
    rcx_3 = rax_3

void** const var_38 = &data_142e347e8
int64_t (* rax_4)(int64_t* arg1, char* arg2, int64_t* arg3) = sub_140b9be10
int64_t (* var_58)(int64_t* arg1, char* arg2, int64_t* arg3) = sub_140b9be10
*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x23].d = 0xffffffff
*(arg1 + 0x11c) = 0
arg1[0x25] = 0
arg1[0x26].d = 0
arg1[0x27] = 0
arg1[0x28].w = 1
int128_t entry_zmm2
int128_t entry_zmm3

if (arg1 != &var_58)
    entry_zmm2 = *arg1
    entry_zmm3 = *(arg1 + 0x10)
    int128_t zmm4_1 = *(arg1 + 0x20)
    int128_t zmm5_1 = *(arg1 + 0x30)
    *arg1 = var_58.o
    int128_t zmm0 = var_38.o
    *(arg1 + 0x10) = var_48.o
    *(arg1 + 0x20) = zmm0
    var_58.o = entry_zmm2
    rax_4 = var_58
    var_48.o = entry_zmm3
    rsi = var_48
    int128_t var_28
    *(arg1 + 0x30) = var_28
    var_38.o = zmm4_1
    int128_t var_28_1 = zmm5_1

if (rax_4 != 0)
    void** const* rcx_4 = &var_38
    
    if (rsi != 0)
        rcx_4 = rsi
    
    void** const rdx_1 = *rcx_4
    rdx_1[2](rcx_4, rdx_1, entry_zmm2, entry_zmm3)

__security_check_cookie(rax_1 ^ &var_78)
return arg1
