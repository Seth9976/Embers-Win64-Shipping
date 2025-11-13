// 函数: sub_141ef2a40
// 地址: 0x141ef2a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (*(arg1 + 0x387) & 0x20) != 0
int32_t rax = arg2[1].d
int64_t var_18 = *arg2
int32_t var_10 = rax

if (cond:0 || (*(arg1 + 0x1f2) & 1) != 0)
    rax.b = 1
else
    rax = 0

float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
sub_141f49c70(arg1[0x16], &var_18, 0, 0, zmm6, zmm7, zmm8, rax.b)
*(arg1 + 0x387) &= 0xdf
void* const rdx_4
int64_t r8_1

if (arg3 == 0)
    rdx_4 = nullptr
    r8_1 = 0
else
    int32_t rax_1 = *(arg3 + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x1d).b & 1) != 0)
        rdx_4 = nullptr
        r8_1 = 0
    else
        char rax_11 = sub_141ea5e60(arg3)
        uint128_t zmm0_1
        
        if (rax_11 != 0 && *(arg3 + 0x14f) != 0)
            zmm0_1 = *(arg3 + 0x1d0)
            var_18.o = zmm0_1
        
        if (rax_11 != 0 && *(arg3 + 0x14f) != 0
                && (zmm0_1.d f!= *arg4 || var_18:4.d.d f!= arg4[1] || var_10.d f!= arg4[2]))
            rdx_4 = nullptr
            r8_1 = 0
        else
            rdx_4 = arg3
            *(arg1 + 0x2f0) = *arg5
            *(arg1 + 0x300) = arg5[1]
            *(arg1 + 0x310) = arg5[2]
            *(arg1 + 0x320) = arg5[3]
            *(arg1 + 0x330) = arg5[4]
            *(arg1 + 0x340) = arg5[5]
            *(arg1 + 0x350) = arg5[6]
            *(arg1 + 0x360) = arg5[7]
            *(arg1 + 0x370) = arg5[8]
            arg1[0x70].d = arg5[9].d
            r8_1 = *(arg5 + 0x84)

int64_t r9
r9.b = 1
int32_t result = (*(*arg1 + 0x6f0))(arg1, rdx_4, r8_1, r9)

if (arg6 != 0)
    *(arg1 + 0xc4) = data_143dbb1f8.q
    *(arg1 + 0xcc) = data_143dbb200
    *(arg1 + 0x22c) = data_143dbb1f8.q
    result = data_143dbb200
    *(arg1 + 0x234) = result

return result
