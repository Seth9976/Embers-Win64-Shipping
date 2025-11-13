// 函数: sub_140b19390
// 地址: 0x140b19390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(divs.dp.q(sx.o(*arg1), 0xc92a69c000))
zmm0[0] = zmm0[0] + 1721426.0
float temp0_1 = _mm_cvtpd_ps(zmm0)
uint64_t rbx_2 = zx.q((int.d(temp0_1 + temp0_1 - 0.5f) s>> 1) + 0x10bd9)
int32_t r11_2 = (rbx_2 << 2).d s/ 0x23ab1
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(r11_2 * 0x23ab1 + 3)
int32_t rbx_3 = rbx_2.d + neg.d((temp5 + (temp4 & 3)) s>> 2)
int32_t r10_2 = (rbx_3 + 1) * 0xfa0 s/ 0x164b09
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(r10_2 * 0x5b5)
uint64_t rbx_4 = zx.q(rbx_3 + 0x1f - ((temp9 + (temp8 & 3)) s>> 2))
int32_t r9_2 = ((rbx_4 * 5).d << 4) s/ 0x98f
uint64_t r8_2 = zx.q(r9_2 s/ 0xb)
int32_t r11_5 = (r11_2 - 0x31) * 0x64 + r8_2.d + r10_2
int32_t rbx_5 = rbx_4.d - r9_2 * 0x98f s/ 0x50
int64_t r10_3 = sx.q(r9_2 - ((r8_2 * 3).d << 2) + 2)

if (r10_3 s> 1)
    int64_t r8_3 = 1
    
    do
        int32_t rax_35
        
        if (r8_3 != 2)
            rax_35 = *(&data_142e746f0 + (r8_3 << 2))
        else
            int32_t rax_28 = r11_5 & 0x80000003
            
            if (rax_28 s< 0)
                rax_28 = ((rax_28 - 1) | 0xfffffffc) + 1
            
            if (rax_28 != 0)
                rax_35 = *(&data_142e746f0 + (r8_3 << 2))
            else
                int32_t rdx_16
                
                if (r11_5 == r11_5 s/ 0x64 * 0x64)
                    int32_t temp18_1
                    int32_t temp19_1
                    temp18_1:temp19_1 = muls.dp.d(0x51eb851f, r11_5)
                    rdx_16 = temp18_1 s>> 7
                
                if (r11_5 == r11_5 s/ 0x64 * 0x64 && r11_5 != (rdx_16 + (rdx_16 u>> 0x1f)) * 0x190)
                    rax_35 = *(&data_142e746f0 + (r8_3 << 2))
                else
                    rax_35 = 0x1d
        
        rbx_5 += rax_35
        r8_3 += 1
    while (r8_3 s< r10_3)

return zx.q(rbx_5)
