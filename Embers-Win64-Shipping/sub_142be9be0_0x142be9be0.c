// 函数: sub_142be9be0
// 地址: 0x142be9be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1 + 0x498, 0, 0x28)

for (int32_t* i = *(arg1 + 0xf8); i u< &i[zx.q(*(arg1 + 0xf4)) * 4]; i = &i[4])
    if (*i == 0x42444620 && i[3] != 0)
        uint64_t rdi_1 = zx.q(i[3])
        
        if (sub_142b97060(arg2, i[2], arg3) == 0 && rdi_1.d u>= 8)
            int32_t rax_1 = sub_142b96670(arg2, rdi_1.d, arg1 + 0x498)
            
            if (rax_1 == 0)
                char* r11_1 = *(arg1 + 0x498)
                *(arg1 + 0x4a0) = &r11_1[rdi_1]
                uint64_t r9_3 = zx.q(zx.d(r11_1[2]) << 8) | zx.q(r11_1[3])
                uint32_t rcx_10 =
                    ((zx.d(r11_1[4]) << 8 | zx.d(r11_1[5])) << 8 | zx.d(r11_1[6])) << 8
                    | zx.d(r11_1[7])
                
                if ((zx.d(*r11_1) << 8 | zx.d(r11_1[1])) == 1 && rcx_10 u>= 8
                        && (rcx_10 - 8) u>> 2 u>= r9_3.d && rcx_10 + 1 u<= rdi_1.d)
                    *(arg1 + 0x4b0) = rdi_1.d - rcx_10
                    void* rdx_2 = &r11_1[8]
                    int64_t r8_7 = 0
                    void* r14_2 = &r11_1[zx.q(rcx_10)]
                    *(arg1 + 0x4b4) = r9_3.d
                    *(arg1 + 0x4a8) = r14_2
                    void* rdi_4 = zx.q((r9_3 << 2).d) + rdx_2
                    void* r10_1 = nullptr
                    
                    if (r9_3.d u>= 2)
                        uint64_t j_1 = zx.q(((r9_3 - 2).d u>> 1) + 1)
                        uint64_t j
                        
                        do
                            r9_3 = zx.q(r9_3.d - 2)
                            r8_7 += (zx.q(*(rdx_2 + 2)) << 8 | zx.q(*(rdx_2 + 3))) * 0xa
                            uint64_t rcx_15 = zx.q(*(rdx_2 + 6)) << 8
                            uint64_t rax_11 = zx.q(*(rdx_2 + 7))
                            rdx_2 += 8
                            r10_1 += (rcx_15 | rax_11) * 0xa
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                    
                    if (r9_3.d != 0)
                        rdi_4 += (zx.q(*(rdx_2 + 2)) << 8 | zx.q(*(rdx_2 + 3))) * 0xa
                    
                    if (r10_1 + r8_7 + rdi_4 u<= r14_2)
                        *(arg1 + 0x4b8) = 1
                        return zx.q(rax_1)
                
                sub_142b97020(arg2, arg1 + 0x498)
                __builtin_memset(arg1 + 0x498, 0, 0x28)
        
        break

return 8
