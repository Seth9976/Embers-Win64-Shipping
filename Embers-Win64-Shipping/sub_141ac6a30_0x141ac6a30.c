// 函数: sub_141ac6a30
// 地址: 0x141ac6a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 2
float zmm7[0x4] = arg1

if (arg4 u>= 2)
    rsi = arg4

if (not(zmm7[0] > 0f))
    return zx.o(0)

int32_t rdi_1 = 0

if (arg3[1].d s> rsi)
    int32_t rax_1 = *(arg3 + 0xc)
    arg3[1].d = 0
    
    if (rax_1 s< 0 && rax_1 != 0)
        sub_140638cc0(arg3, 0)
    
    int32_t rax_2 = *(arg3 + 0x24)
    arg3[4].d = 0
    
    if (rax_2 s< 0 && rax_2 != 0)
        sub_1405dadb0(&arg3[3], 0)
    
    arg3[5].d = 0

int64_t rbp_1 = sx.q(arg3[1].d)

if (rbp_1.d == 0)
    if (rsi s> *(arg3 + 0xc))
        sub_140638cc0(arg3, rsi)
    
    if (rsi s> *(arg3 + 0x24))
        sub_1405dadb0(&arg3[3], rsi)
    
    int64_t rsi_1 = sx.q(arg3[1].d)
    int32_t rax_3 = (rsi_1 + 1).d
    arg3[1].d = rax_3
    
    if (rax_3 s> *(arg3 + 0xc))
        sub_140638a00(arg3)
    
    int64_t rcx_6 = *arg3
    int64_t rdx_3 = rsi_1 * 3
    int32_t rax_4 = arg2[1].d
    *(rcx_6 + (rdx_3 << 2)) = *arg2
    *(rcx_6 + (rdx_3 << 2) + 8) = rax_4
    int64_t rsi_2 = sx.q(arg3[4].d)
    int32_t rax_5 = (rsi_2 + 1).d
    arg3[4].d = rax_5
    
    if (rax_5 s> *(arg3 + 0x24))
        sub_1406105e0(&arg3[3])
    
    *(arg3[3] + (rsi_2 << 2)) = 0
    arg3[5].d = 0
    return zx.o(0)

int64_t r8 = *arg3
float result[0x4] = 0x3f800000
int64_t rdx_5 = sx.q(arg3[5].d)
int64_t rcx_8 = rdx_5 * 3
float zmm3 = *(arg2 + 4) f- *(r8 + (rcx_8 << 2) + 4)
float zmm2 = *arg2 f- *(r8 + (rcx_8 << 2))
arg1.d = arg2[1].d.d f- *(r8 + (rcx_8 << 2) + 8)
result[0] = 1f / zmm7[0]
zmm3 = zmm3 * result[0]
zmm2 = zmm2 * result[0]
arg1.d = arg1.d f* result[0]
arg1.d = arg1.d f* arg1.d
float temp0_1[0x4] = _mm_sqrt_ss(zx.o(0)[0], zmm3 * zmm3 + zmm2 * zmm2 f+ arg1.d)
void* rsi_3

if (rbp_1.d != rsi)
    int32_t rax_10 = (rbp_1 + 1).d
    arg3[5].d = rbp_1.d
    arg3[1].d = rax_10
    
    if (rax_10 s> *(arg3 + 0xc))
        sub_140638a00(arg3)
        r8 = *arg3
    
    int32_t rax_11 = arg2[1].d
    rsi_3 = &arg3[3]
    int64_t rcx_12 = rbp_1 * 3
    *(r8 + (rcx_12 << 2)) = *arg2
    *(r8 + (rcx_12 << 2) + 8) = rax_11
    int64_t rdi_2 = sx.q(*(rsi_3 + 8))
    int32_t rax_12 = (rdi_2 + 1).d
    *(rsi_3 + 8) = rax_12
    
    if (rax_12 s> *(rsi_3 + 0xc))
        sub_1406105e0(rsi_3)
    
    *(*rsi_3 + (rdi_2 << 2)) = temp0_1[0]
else
    int32_t rax_7 = (rdx_5 + 1).d
    rsi_3 = &arg3[3]
    
    if (rax_7 != rbp_1.d)
        rdi_1 = rax_7
    
    int32_t rax_8 = arg2[1].d
    int64_t rdx_6 = sx.q(rdi_1)
    int64_t rcx_9 = rdx_6 * 3
    *(r8 + (rcx_9 << 2)) = *arg2
    *(r8 + (rcx_9 << 2) + 8) = rax_8
    *(*rsi_3 + (rdx_6 << 2)) = temp0_1[0]
    arg3[5].d = rdi_1

int32_t i_2 = arg3[4].d
result = zx.o(0)

if (i_2 s> 0)
    int32_t* rax_14 = *rsi_3
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        result[0] = result[0] f+ *rax_14
        rax_14 = &rax_14[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1 = _mm_cvtepi32_ps(zx.o(i_2))
result[0] = result[0] f/ arg1.d

if (not(arg5 < 0f))
    arg1 = arg6
    
    if (not(arg1.d f< 0f) && not(arg1.d f<= arg5))
        result[0] = result[0] - arg5
        arg1.d = arg1.d f- arg5
        result[0] = result[0] f/ arg1.d
        
        if (result[0] < 0f)
            return zx.o(0)
        
        return __minss_xmmss_memss(result[0], 0x3f800000)

return result
