// 函数: sub_142c22990
// 地址: 0x142c22990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10
uint64_t result
int512_t zmm0
result, zmm0 = sub_142bf5e40(arg2, &arg_10)
uint64_t result_1 = result
int32_t r14 = *(arg2 + 0x38)

if ((*(arg2 + 0x28) & 8) != 0)
    int32_t rdi_1 = 0
    
    if (arg_10 u> 0)
        do
            int32_t rdx_1 = arg_10
            uint64_t r11_1 = zx.q(rdi_1) * 5
            result = zx.q(sx.d(*(result_1 + (r11_1 << 2) + 0x10)))
            char rbp_1 = *(result_1 + (r11_1 << 2) + 0x12)
            
            if (result.d != 0)
                uint64_t rbx_1 = zx.q(result.d + rdi_1)
                *(result_1 + (r11_1 << 2) + 0x10) = 0
                
                if (rbx_1.d u< rdx_1)
                    int64_t r11_2
                    r11_2, zmm0 = sub_142c22bf0(result_1, rdx_1, rbx_1.d, r14, zmm0)
                    
                    if ((rbp_1 & 2) == 0)
                        uint64_t rcx_4 = rbx_1 * 5
                        uint64_t r8_2 = result_1 + (rcx_4 << 2)
                        *(result_1 + (r11_2 << 2) + 8) += *(result_1 + (rcx_4 << 2) + 8)
                        result = zx.q(r14) & 0xfffffffd
                        int32_t rdx_3 = *(r8_2 + 0xc) + *(result_1 + (r11_2 << 2) + 0xc)
                        *(result_1 + (r11_2 << 2) + 0xc) = rdx_3
                        
                        if (result.d != 4)
                            uint64_t rbx_2 = zx.q(rbx_1.d + 1)
                            
                            if (rbx_2.d u< rdi_1 + 1)
                                int32_t r8_3 = *(result_1 + (r11_2 << 2) + 8)
                                uint64_t rcx_6 = result_1 + rbx_2 * 0x14
                                result = zx.q(rdi_1 + 1 - rbx_2.d)
                                uint64_t i
                                
                                do
                                    r8_3 += *rcx_6
                                    rcx_6 += 0x14
                                    *(result_1 + (r11_2 << 2) + 8) = r8_3
                                    rdx_3 += *(rcx_6 - 0x10)
                                    *(result_1 + (r11_2 << 2) + 0xc) = rdx_3
                                    i = result
                                    result -= 1
                                while (i != 1)
                        else if (rbx_1.d u< rdi_1)
                            int32_t rcx_5 = *(result_1 + (r11_2 << 2) + 8)
                            uint64_t i_2 = zx.q(rdi_1 - rbx_1.d)
                            uint64_t i_1
                            
                            do
                                rcx_5 -= *r8_2
                                r8_2 += 0x14
                                *(result_1 + (r11_2 << 2) + 8) = rcx_5
                                rdx_3 -= *(r8_2 - 0x10)
                                *(result_1 + (r11_2 << 2) + 0xc) = rdx_3
                                i_1 = i_2
                                i_2 -= 1
                            while (i_1 != 1)
                    else
                        result = rbx_1 * 5
                        
                        if ((r14 & 0xfffffffe) != 4)
                            *(result_1 + (r11_2 << 2) + 8) += *(result_1 + (result << 2) + 8)
                        else
                            *(result_1 + (r11_2 << 2) + 0xc) += *(result_1 + (result << 2) + 0xc)
            
            rdi_1 += 1
        while (rdi_1 u< arg_10)

return result
