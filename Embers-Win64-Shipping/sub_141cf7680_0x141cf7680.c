// 函数: sub_141cf7680
// 地址: 0x141cf7680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
*arg1 = &data_14321d350
arg1[1] = *(arg3 + 0x18)
arg1[2] = arg3
arg1[3] = *(arg3 + 0x140)
sub_141cf7990(&arg1[6], arg2)
void*** rsi = nullptr
void* rcx_1 = &arg1[0x12]
arg1[0x10] = 0
arg1[0x11] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_4 = *(rcx_1 + 0x10)

if (rax_4 != 0)
    rcx_1 = rax_4

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x16].d = 0xffffffff
*(arg1 + 0xb4) = 0
arg1[0x18] = 0
arg1[0x19].d = 0
__builtin_memset(&arg1[0x1a], 0, 0x18)
arg1[0x1e] = 0
InitializeCriticalSection(&arg1[0x24])
SetCriticalSectionSpinCount(&arg1[0x24], 0xfa0)
arg1[0x29] = 0
void* rcx_4 = &arg1[0x30]
arg1[0x2a].d = 0
arg1[0x2b] = 0
*(arg1 + 0x160) = *(arg3 + 0xd0)
arg1[0x2e] = 0
arg1[0x2f] = 0
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_5 = *(rcx_4 + 0x10)

if (rax_5 != 0)
    rcx_4 = rax_5

*rcx_4 = 0
*(rcx_4 + 8) = 0
int64_t rcx_5 = 0x30
arg1[0x34].d = 0xffffffff
*(arg1 + 0x1a4) = 0
arg1[0x36] = 0
arg1[0x37].d = 0
int32_t rdx = *(arg3 + 0xa4)

if (rdx s>= 3)
    rcx_5 = 0x35
    
    if (*(arg1 + 0x74) != 0)
        rcx_5 = (sx.q(arg1[0xd].d) << 4) + 0x39

int64_t rax_6 = rcx_5 + 8

if (rdx s>= 2)
    rax_6 = rcx_5

uint64_t rcx_8 = zx.q(*(arg1 + 0x74))
arg1[4] = rax_6 + arg1[6]
arg1[5] = arg1[8]
int64_t r8 = *(*(arg3 + 0xe0) + (rcx_8 << 3))
*(arg1 + 0x14c) = r8
int32_t rcx_9
rcx_9.b = sub_140b5b8a0(r8.d, 0) == 0

if ((arg1[0x2a].d != 0 | rcx_9.b) != 0 && arg1[5] != 0)
    int64_t rbx_1 = sx.q(arg1[0x1b].d)
    int64_t rbp_1 = sx.q(arg1[0xd].d)
    int32_t rax_11 = (rbx_1 + rbp_1).d
    arg1[0x1b].d = rax_11
    
    if (rax_11 s> *(arg1 + 0xdc))
        sub_1405a4d70(&arg1[0x1a])
    
    memset(&arg1[0x1a][rbx_1], 0, rbp_1 << 3)
    int64_t rax_13
    
    if (*(arg3 + 0xa4) s< 5)
        rax_13 = 0
    else
        rax_13 = arg1[6]
    
    arg1[0x2b] = rax_13

void** const var_68 = &data_142e347e8
int64_t (* rax_14)(int64_t* arg1, char* arg2, int64_t* arg3) = sub_141cfc810
int64_t (* var_88)(int64_t* arg1, char* arg2, int64_t* arg3) = sub_141cfc810
void*** var_60 = arg1

if (&arg1[0x1c] != &var_88)
    arg5 = *(arg1 + 0xe0)
    arg4 = *(arg1 + 0xf0)
    int128_t zmm4_1 = *(arg1 + 0x100)
    int128_t zmm5_1 = *(arg1 + 0x110)
    *(arg1 + 0xe0) = var_88.o
    int128_t zmm0 = var_68.o
    *(arg1 + 0xf0) = nullptr.o
    *(arg1 + 0x100) = zmm0
    var_88.o = arg5
    rax_14 = var_88
    void*** var_78
    var_78.o = arg4
    rsi = var_78
    int128_t var_58
    *(arg1 + 0x110) = var_58
    var_68.o = zmm4_1
    int128_t var_58_1 = zmm5_1

if (rax_14 != 0)
    void** const* rcx_12 = &var_68
    
    if (rsi != 0)
        rcx_12 = rsi
    
    void** const rdx_2 = *rcx_12
    rdx_2[2](rcx_12, rdx_2, arg5, arg4)

__security_check_cookie(rax_1 ^ &var_a8)
return arg1
