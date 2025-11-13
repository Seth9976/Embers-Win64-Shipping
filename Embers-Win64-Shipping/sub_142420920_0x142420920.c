// 函数: sub_142420920
// 地址: 0x142420920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg4)
uint128_t result = arg2
void* rax_1 = (*(*arg1 + 0x150))()
uint128_t zmm0

if (rax_1 != 0)
    int64_t* rax_2
    rax_2, zmm0 = sub_142437e30(rax_1, 0, 1)
    int64_t rdx_1 = *rax_2
    (*(rdx_1 + 0x638))(rax_2, rdx_1)
    
    if (not(zmm0.d f== *(arg1 + 0x3a4)))
        *(arg1 + 0x3a4) = zmm0.d
        sub_142403800(arg1)

arg2 = _mm_cvtpd_ps(zx.o(data_14399f938))

if (arg2.d f>= 0.25f)
    sub_142403800(arg1)
else
    float zmm2 = *(arg1 + 0x114) f/ _mm_cvtepi32_ps(zx.o(arg1[0x22].d)).d
    
    if (result.d f!= 0f)
        bool cond:0_1 = 0f f== *(arg1 + (rsi << 2) + 0x108)
        *(arg1 + (rsi << 2) + 0x100) = 0
        
        if (not(cond:0_1))
            uint32_t r8_1 = zx.d(*arg3)
            zmm0.d = _mm_cvtepi32_ps(zx.o(r8_1 + 1)).d f* zmm2
            
            if (arg2.d f>= zmm0.d)
                arg2.d = arg2.d f/ zmm2
                *arg3 = (int.d(arg2.d)).b
            else
                arg2.d = arg2.d f* result.d
                zmm0.d = _mm_cvtepi32_ps(zx.o(r8_1)).d f* zmm2
                result.d = arg2.d f/ zmm0.d
        
        char rax_5 = *arg3
        
        if (rax_5 == 0)
            *(arg1 + (rsi << 2) + 0x108) = 0
        else
            arg2.d = result.d f/ _mm_cvtepi32_ps(zx.o(rax_5)).d
            *(arg1 + (rsi << 2) + 0x108) = arg2.d
    else
        zmm0.d = arg2.d f+ *(arg1 + (rsi << 2) + 0x100)
        *(arg1 + (rsi << 2) + 0x100) = zmm0.d
        
        if (zmm0.d f>= zmm2)
            *(arg1 + (rsi << 2) + 0x108) = 0
        else
            result.d = arg2.d f* *(arg1 + (rsi << 2) + 0x108)
            result.d = result.d f/ zmm2

*arg3 = 0
return result
