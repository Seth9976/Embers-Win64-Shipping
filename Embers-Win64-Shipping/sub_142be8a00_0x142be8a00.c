// 函数: sub_142be8a00
// 地址: 0x142be8a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg1[3]
int32_t r11 = *arg2
uint32_t result = 0
uint32_t r10_6 = ((zx.d(*(r14 + 0xc)) << 8 | zx.d(*(r14 + 0xd))) << 8 | zx.d(*(r14 + 0xe))) << 8
    | zx.d(*(r14 + 0xf))

if (r10_6 != 0)
    uint32_t r9_1 = -1
    uint64_t r8_1 = zx.q(r10_6)
    
    if (arg3 == 0)
        goto label_142be8a6e
    
    if (r11 u< 0xffffffff)
        r11 += 1
    label_142be8a6e:
        uint32_t rsi_1 = r10_6
        int32_t rdi_1 = 0
        
        if (r10_6 != 0)
            do
                r8_1 = zx.q((rsi_1 + rdi_1) u>> 1)
                void* rbp_3 = zx.q((r8_1 * 3).d << 2) + r14
                r9_1 = ((zx.d(*(rbp_3 + 0x14)) << 8 | zx.d(*(rbp_3 + 0x15))) << 8
                    | zx.d(*(rbp_3 + 0x16))) << 8 | zx.d(*(rbp_3 + 0x17))
                
                if (r11 u>= (((zx.d(*(rbp_3 + 0x10)) << 8 | zx.d(*(rbp_3 + 0x11))) << 8
                        | zx.d(*(rbp_3 + 0x12))) << 8 | zx.d(*(rbp_3 + 0x13))))
                    if (r11 u<= r9_1)
                        result = ((zx.d(*(rbp_3 + 0x18)) << 8 | zx.d(*(rbp_3 + 0x19))) << 8
                            | zx.d(*(rbp_3 + 0x1a))) << 8 | zx.d(*(rbp_3 + 0x1b))
                        break
                    
                    rdi_1 = (r8_1 + 1).d
                else
                    rsi_1 = r8_1.d
            while (rdi_1 u< rsi_1)
        
        if (arg3 != 0)
            void* rdx_7 = *arg1
            
            if (r11 u> r9_1)
                r8_1 = zx.q(r8_1.d + 1)
                
                if (r8_1.d == r10_6)
                    return 0
            
            uint32_t result_1 = 0
            arg1[5].b = 1
            *(arg1 + 0x2c) = r11
            *(arg1 + 0x34) = r8_1.d
            
            if (result u< *(rdx_7 + 0x10))
                result_1 = result
            
            result = result_1
            
            if (result_1 != 0)
                arg1[6].d = result_1
            else
                sub_142be8ba0(arg1)
                result = 0
                
                if (arg1[5].b != 0)
                    result = arg1[6].d
            
            *arg2 = *(arg1 + 0x2c)

return result
