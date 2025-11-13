// 函数: sub_1420c19f0
// 地址: 0x1420c19f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int32_t r8_1 = *(arg2 + 0x80)
int32_t i = 0
int32_t r12_1 = arg1[1].d
int64_t r13_1 = sx.q(*(*(arg2 + 0x78) + 0x3c))
int32_t arg_8 = r8_1

if (r12_1 - 1 s< 0)
    return 

int32_t rsi_1 = r12_1 - 1
int64_t r14_1 = 0

do
    int32_t rcx
    
    if (rsi_1 + 1 s<= 0)
        rcx = 0
    else
        int32_t rax_1 = rand()
        r8_1 = arg_8
        rcx = rsi_1
        uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rsi_1 + 1))
        uint128_t zmm2
        zmm2.d = _mm_cvtepi32_ps(zx.o(rax_1)).d f* 3.05185094e-05f
        zmm2.d = zmm2.d f* zmm0.d
        uint64_t rax = zx.q(int.d(zmm2.d))
        
        if (rax.d s<= rsi_1)
            rcx = rax.d
    
    int32_t rdx = rcx + i
    
    if (i != rdx)
        void* rcx_1 = *arg1
        
        if ((not.b(r8_1.b) & 1) == 0 && (rcx_1.b & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1
        
        sub_140635010(rcx_1 + r14_1, sx.q(r13_1.d * rdx) + rcx_1, r13_1)
    
    r8_1 = arg_8
    i += 1
    rsi_1 -= 1
    r14_1 += r13_1
while (i s<= r12_1 - 1)
