// 函数: sub_142be8700
// 地址: 0x142be8700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg1[3]
int32_t result = 0
int32_t r9_1 = *arg2
uint32_t r10_6 = ((zx.d(*(r14 + 0xc)) << 8 | zx.d(*(r14 + 0xd))) << 8 | zx.d(*(r14 + 0xe))) << 8
    | zx.d(*(r14 + 0xf))

if (r10_6 != 0)
    uint32_t r8_1 = -1
    uint64_t rdx = zx.q(r10_6)
    
    if (arg3 == 0)
        goto label_142be876e
    
    if (r9_1 u< 0xffffffff)
        r9_1 += 1
    label_142be876e:
        uint32_t rsi_1 = r10_6
        int32_t rdi_1 = 0
        
        if (r10_6 != 0)
            do
                rdx = zx.q((rsi_1 + rdi_1) u>> 1)
                void* rbp_3 = zx.q((rdx * 3).d << 2) + r14
                uint32_t r11_7 = ((zx.d(*(rbp_3 + 0x10)) << 8 | zx.d(*(rbp_3 + 0x11))) << 8
                    | zx.d(*(rbp_3 + 0x12))) << 8 | zx.d(*(rbp_3 + 0x13))
                r8_1 = ((zx.d(*(rbp_3 + 0x14)) << 8 | zx.d(*(rbp_3 + 0x15))) << 8
                    | zx.d(*(rbp_3 + 0x16))) << 8 | zx.d(*(rbp_3 + 0x17))
                
                if (r9_1 u>= r11_7)
                    if (r9_1 u<= r8_1)
                        uint32_t rax_6 = ((zx.d(*(rbp_3 + 0x18)) << 8 | zx.d(*(rbp_3 + 0x19))) << 8
                            | zx.d(*(rbp_3 + 0x1a))) << 8 | zx.d(*(rbp_3 + 0x1b))
                        
                        if (rax_6 u<= r11_7 - r9_1 - 1)
                            result = rax_6 - r11_7 + r9_1
                        else
                            result = 0
                        
                        break
                    
                    rdi_1 = (rdx + 1).d
                else
                    rsi_1 = rdx.d
            while (rdi_1 u< rsi_1)
        
        if (arg3 != 0)
            void* r11_8 = *arg1
            
            if (r9_1 u> r8_1)
                rdx = zx.q(rdx.d + 1)
                
                if (rdx.d == r10_6)
                    return 0
            
            int32_t result_1 = 0
            arg1[5].b = 1
            *(arg1 + 0x2c) = r9_1
            *(arg1 + 0x34) = rdx.d
            
            if (result u< *(r11_8 + 0x10))
                result_1 = result
            
            result = result_1
            
            if (result_1 != 0)
                arg1[6].d = result_1
            else
                sub_142be88c0(arg1)
                result = 0
                
                if (arg1[5].b != 0)
                    result = arg1[6].d
            
            *arg2 = *(arg1 + 0x2c)

return result
