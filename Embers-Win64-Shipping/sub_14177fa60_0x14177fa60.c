// 函数: sub_14177fa60
// 地址: 0x14177fa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2.d)
uint32_t rsi = zx.d(arg3)
char rcx = *(rdi + *(arg1 + 0x398))
int64_t var_58
int64_t var_48
uint64_t result
int128_t zmm2

if (rcx == 0)
    int64_t rax = *(arg1 + 0x2d8)
    zmm2 = data_142d3f660
    int64_t rcx_2 = rdi << 6
    __builtin_memset(&var_58, 0, 0x30)
    *(rax + (rdi << 2)) = 0
    result = *(arg1 + 0x2a8)
    *(rcx_2 + result) = var_58.o
    *(rcx_2 + result + 0x10) = var_48.o
    int64_t var_38
    *(rcx_2 + result + 0x20) = var_38.o
    *(rcx_2 + result + 0x30) = zmm2
    
    if (rsi.b != 4)
        goto label_14177fd65
    
    goto label_14177fc73

bool cond:0

if (rcx == 4)
    if ((rsi - 2).b u> 1)
        goto label_14177fd65
    
    int64_t rax_1 = *(arg1 + 0x2d8)
    zmm2 = data_142d3f660
    int64_t rcx_4 = rdi << 6
    int64_t var_58_1
    __builtin_memset(&var_58_1, 0, 0x30)
    *(rax_1 + (rdi << 2)) = 0
    result = *(arg1 + 0x2a8)
    *(rcx_4 + result) = var_58_1.o
    int64_t var_48_1
    *(rcx_4 + result + 0x10) = var_48_1.o
    int64_t var_38_1
    *(rcx_4 + result + 0x20) = var_38_1.o
    *(rcx_4 + result + 0x30) = zmm2
    cond:0 = rsi.b == 1
else if (rcx - 2 u> 1 || rsi.b != 4)
label_14177fd65:
    cond:0 = rsi.b == 1
    
    if (rsi.b == 1)
        return sub_14177fe50(arg1, arg2.d, rsi.b) __tailcall
else
label_14177fc73:
    int64_t rdx_3 = rdi * 3
    int128_t zmm3 = data_142d3f660
    float zmm0[0x4] = 0x3f800000
    float zmm1[0x4] = 0x3f800000
    zmm0[0] = 1f f/ *(*(arg1 + 0x2c0) + (rdi << 2))
    int64_t rax_6 = *(arg1 + 0x2d8)
    int64_t var_50 = 0
    var_58 = 0
    int64_t var_40_1 = 0
    int64_t var_30
    var_30:4.d = 0
    *(rax_6 + (rdi << 2)) = zmm0[0]
    int32_t* rax_7 = *(arg1 + 0x290)
    zmm0 = var_58.o
    zmm1[0] = 1f f/ rax_7[rdi * 0x10]
    zmm2.d = 1f f/ rax_7[rdi * 0x10 + 5]
    float zmm4 = 1f f/ rax_7[rdi * 0x10 + 0xa]
    int128_t* rax_8 = *(arg1 + 0x2a8)
    zmm0[0] = zmm1[0]
    zmm1 = var_48.o
    rax_8[rdi * 4] = zmm0
    zmm0 = 0.o
    float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xd2)
    temp0_1[0] = zmm4
    float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
    temp0_2[0] = zmm2.d
    rax_8[rdi * 4 + 1] = _mm_shuffle_ps(temp0_2, temp0_2, 0xe1)
    rax_8[rdi * 4 + 2] = temp0_3
    rax_8[rdi * 4 + 3] = zmm3
    int64_t rax_9 = *(arg1 + 0x28)
    int64_t rcx_12 = *(arg1 + 0x3c8)
    *(rcx_12 + (rdx_3 << 2)) = *(rax_9 + (rdx_3 << 2))
    *(rcx_12 + (rdx_3 << 2) + 8) = *(rax_9 + (rdx_3 << 2) + 8)
    arg2 = rdi << 4
    *(*(arg1 + 0x3e0) + arg2) = *(*(arg1 + 0x68) + arg2)
    cond:0 = rsi.b == 1

char* rcx_9 = *(arg1 + 0x398)
arg2.b = cond:0
result.b = rcx_9[rdi] == 1

if (result.b != arg2.b)
    int64_t rcx_5 = *(*(arg1 + 0xc8) + (rdi << 3))
    char var_60_1 = arg2.b
    AcquireSRWLockExclusive(arg1 + 0x3b8)
    int64_t r15_1 = sx.q(*(arg1 + 0x3b0))
    int32_t rax_3 = (r15_1 + 1).d
    *(arg1 + 0x3b0) = rax_3
    
    if (rax_3 s> *(arg1 + 0x3b4))
        sub_1405a4f90(arg1 + 0x3a8)
    
    *(*(arg1 + 0x3a8) + r15_1 * 0x10) = rcx_5.o
    result = ReleaseSRWLockExclusive(arg1 + 0x3b8)
    rcx_9 = *(arg1 + 0x398)

rcx_9[rdi] = rsi.b
return result
