// 函数: sub_140b1c7e0
// 地址: 0x140b1c7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 8)
int32_t r8_1 = r10 & 0x7fffffff
int32_t rax

if (r8_1 != 0)
    int32_t r9_1 = *(arg2 + 8)
    rax = r9_1 & 0x7fffffff
    
    if (rax != 0)
        int16_t r11 = *arg1
        int16_t rbx = *arg2
        bool c
        
        if (r11 == rbx)
            int16_t r11_1 = arg1[1]
            int16_t rbx_1 = arg2[1]
            c = rbx_1 u< r11_1
            
            if (rbx_1 == r11_1)
                int16_t r11_2 = arg1[2]
                int16_t rcx = arg2[2]
                
                if (r11_2 != rcx)
                    int32_t rax_5
                    rax_5.b = sbb.d(rax, rax, rcx u< r11_2) != 0
                    return rax_5
                
                if ((r10 u>> 0x1f).b == (r9_1 u>> 0x1f).b && r8_1 != rax)
                    int32_t rax_7
                    rax_7.b = sbb.d(rax, rax, rax u< r8_1) != 0
                    return rax_7
                
                int64_t rax_8
                rax_8.b = true
                return 1
        else
            c = rbx u< r11
        
        int32_t rax_3
        rax_3.b = sbb.d(rax, rax, c) != 0
        return rax_3

rax.b = 1
return rax
