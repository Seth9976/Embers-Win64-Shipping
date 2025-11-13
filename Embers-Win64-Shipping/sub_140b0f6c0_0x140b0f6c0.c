// 函数: sub_140b0f6c0
// 地址: 0x140b0f6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rcx = *arg1

while (true)
    int16_t rax_1 = *rcx
    
    if (rax_1 != 0x20 && rax_1 != 9)
        int64_t rax_2 = -1
        
        do
            rax_2 += 1
        while (arg2[rax_2] != 0)
        
        int64_t rdi = sx.q(rax_2.d)
        int32_t rax_3
        
        if (sub_140a546e0(rcx, arg2, rdi) == 0)
            int64_t rdi_1 = rdi * 2
            *arg1 += rdi_1
            rax_3 = iswalnum(**arg1)
            int16_t* rcx_2 = *arg1
            
            if (rax_3 != 0)
                *arg1 = rcx_2 - rdi_1
            else
                while (true)
                    int16_t rax_5 = *rcx_2
                    
                    if (rax_5 != 0x20 && rax_5 != 9)
                        rax_5.b = 1
                        return rax_5
                    
                    rcx_2 = &rcx_2[1]
                    *arg1 = rcx_2
        
        rax_3.b = 0
        return rax_3
    
    rcx = &rcx[1]
    *arg1 = rcx
