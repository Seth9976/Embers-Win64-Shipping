// 函数: sub_142222900
// 地址: 0x142222900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_10 = arg2[0]
uint128_t result = *(arg1 + 0x124)
float zmm3 = arg2[0]
arg2 = result
int32_t rax_1 = int.d(result.d f+ result.d - 0.5f) s>> 1
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rax_1))
arg2[0] = arg2[0] f- zmm0.d
*(arg1 + 0x124) = arg2[0]
int32_t rcx_1 = arg1[0x23].d + rax_1 + 1

if (rcx_1 s>= arg1[0x24].d)
    int64_t r9_1 = *(*arg1 + 0x18)
    zmm0 = _mm_cvtepi32_ps(zx.o(rcx_1))
    float temp0_2[0x4] = _mm_sqrt_ss(0, zmm0.d)
    int32_t rax_3
    int64_t r8
    
    if (zmm3 >= 0.25f)
        rax_3 = int.d(temp0_2[0])
        r8 = 0
    else
        zmm0 = temp0_2
        r8.b = 1
        rax_3 = int.d(zmm0.d)
    
    if (r9_1(zmm0, zx.q(rcx_1 + 1 + rax_3), r8) == 0)
        return result

int32_t r11 = arg1[0x23].d
int64_t rbp
int64_t arg_18 = rbp
int32_t i = 0
uint32_t arg_8 = 0xffffffff
int32_t rdx_3 = 0

if (r11 s> 0)
    int64_t r9_2 = sx.q(arg1[6].d)
    int16_t* r8_1 = arg1[0x1f]
    
    do
        uint32_t r10_1 = zx.d(*r8_1)
        int64_t rcx_3 = sx.q(*(arg1 + 0x114) * r10_1) + arg1[0x1e]
        
        if ((*(r9_2 + rcx_3) & 0xf0000000) == 0x40000000 && *(r9_2 + rcx_3 + 4) == 0)
            arg_8 = r10_1
            break
        
        rdx_3 += 1
        r8_1 = &r8_1[1]
    while (rdx_3 s< r11)

bool cond:1 = __andps_xmmxud_memxud(*(arg1[0x47] + 0x34), data_142d3f770).d f> 9.99999994e-09f
void* rsi_2 = *(arg1[3] + 0xc0)
rbp.b = cond:1

if (rsi_2 != 0)
    void* rax_11 = sub_142546fa0()
    void* rdx_4 = *(rsi_2 + 0x10)
    int64_t rax_12 = sx.q(*(rax_11 + 0x38))
    
    if (rax_12.d s<= *(rdx_4 + 0x38) && *(*(rdx_4 + 0x30) + (rax_12 << 3)) == rax_11 + 0x30
            && rax_1 + 1 s> 0 && *(arg1 + 0x269) != 0)
        arg2 = 0x3f800000
        int32_t var_48 = arg1[0x23].d
        int32_t var_44_1 = rax_1
        char var_2c_1 = rbp.b
        arg2[0] = 1f f/ _mm_cvtepi32_ps(zx.o(rax_1 + 1)).d
        int32_t rax_16 = int.d(arg2[0])
        arg2 = arg1[0x3c].d
        int32_t var_40_1 = rax_16
        int32_t var_3c_1 = arg_10.d
        float var_38_1 = arg2[0]
        zmm0 = *arg1[0x3e]
        arg2[0] = arg2[0] f- zmm0.d
        int32_t var_34_1 = zmm0.d
        float var_30_1 = arg2[0]
        sub_1422238b0(arg1, &arg_8, &var_48)

*arg1[0x3e] = arg1[0x3c].d

if (arg1[0x4d].b == 1)
    if (arg1[0x23].d s> 0)
        int64_t r8_4 = 0
        
        do
            int32_t* rdx_8 =
                sx.q(zx.d(*(arg1[0x1f] + r8_4)) * *(arg1 + 0x114)) + sx.q(arg1[6].d) + arg1[0x1e]
            
            if (rdx_8[1] == 0)
                int32_t rcx_9 = *rdx_8
                
                if ((rcx_9 & 0xf0000000) == 0x40000000)
                    *rdx_8 = (rcx_9 & 0xfffffff) | 0x10000000
            
            i += 1
            r8_4 += 2
        while (i s< arg1[0x23].d)
    
    arg1[0x4d].b = 0

data_143f511b0 += 1
return *(arg1 + 0x124)
