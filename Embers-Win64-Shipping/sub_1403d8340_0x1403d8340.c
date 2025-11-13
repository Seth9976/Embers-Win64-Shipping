// 函数: sub_1403d8340
// 地址: 0x1403d8340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t rax
rax.b = *(arg1 + 0x10)

if (rax.b == 4)
    int32_t r9_3 = *arg1
    
    if (*(arg1 + 0x11) != 8)
        if (r9_3 != 0)
            int32_t r8_8 = r9_3 & 1
            
            if (r9_3 != 1)
                int32_t i_5 = r8_8 - r9_3
                int32_t i
                
                do
                    int16_t r9_5 = *arg2
                    *arg2 = *(arg2 + 2)
                    *(arg2 + 2) = r9_5
                    int16_t r9_6 = *(arg2 + 4)
                    rax = *(arg2 + 6)
                    *(arg2 + 4) = rax
                    *(arg2 + 6) = r9_6
                    arg2 = &arg2[8]
                    i = i_5
                    i_5 += 2
                while (i != 0xfffffffe)
            
            if (r8_8 != 0)
                int16_t rax_11 = *arg2
                *arg2 = *(arg2 + 2)
                *(arg2 + 2) = rax_11
                return rax_11
    else if (r9_3 != 0)
        int32_t r8_4 = r9_3 & 3
        
        if (r9_3 - 1 u>= 3)
            int32_t i_4 = r8_4 - r9_3
            int32_t i_1
            
            do
                char r10_1 = *arg2
                *arg2 = arg2[1]
                arg2[1] = r10_1
                char r10_2 = arg2[2]
                arg2[2] = arg2[3]
                arg2[3] = r10_2
                char r10_3 = arg2[4]
                arg2[4] = arg2[5]
                arg2[5] = r10_3
                char r10_4 = arg2[6]
                rax = zx.w(arg2[7])
                arg2[6] = rax.b
                arg2[7] = r10_4
                arg2 = &arg2[8]
                i_1 = i_4
                i_4 += 4
            while (i_1 != 0xfffffffc)
        
        if (r8_4 != 0)
            int64_t rcx_4 = 0
            
            do
                char r8_5 = arg2[rcx_4 << 1]
                rax = zx.w(arg2[(rcx_4 << 1) + 1])
                arg2[rcx_4 << 1] = rax.b
                arg2[(rcx_4 << 1) + 1] = r8_5
                rcx_4 += 1
            while ((r9_3 & 3) != rcx_4.d)
else if (rax.b == 6)
    int32_t i_2 = *arg1
    
    if (*(arg1 + 0x11) != 8)
        if (i_2 != 0)
            int64_t rcx_5 = 0
            
            do
                int16_t r8_6 = *(arg2 + (rcx_5 << 3))
                arg2[rcx_5 << 3] = arg2[(rcx_5 << 3) + 2]
                *(arg2 + (rcx_5 << 3) + 1) = *(arg2 + (rcx_5 << 3) + 3)
                arg2[(rcx_5 << 3) + 3] = arg2[(rcx_5 << 3) + 5]
                rax = *(arg2 + (rcx_5 << 3) + 6)
                *(arg2 + (rcx_5 << 3) + 4) = rax
                *(arg2 + (rcx_5 << 3) + 6) = r8_6
                rcx_5 += 1
            while (i_2 != rcx_5.d)
    else if (i_2 != 0)
        int32_t r8_2 = i_2 & 1
        
        if (i_2 != 1)
            arg1 = zx.q(r8_2 - i_2)
            int32_t i_3
            
            do
                char r9_1 = *arg2
                *arg2 = arg2[1]
                *(arg2 + 1) = *(arg2 + 2)
                arg2[3] = r9_1
                char r9_2 = arg2[4]
                arg2[4] = arg2[5]
                rax = *(arg2 + 6)
                *(arg2 + 5) = rax
                arg2[7] = r9_2
                arg2 = &arg2[8]
                i_3 = arg1.d
                arg1 = zx.q(arg1.d + 2)
            while (i_3 != 0xfffffffe)
        
        if (r8_2 != 0)
            rax.b = *arg2
            arg1.b = arg2[1]
            *arg2 = arg1.b
            *(arg2 + 1) = *(arg2 + 2)
            arg2[3] = rax.b

return rax
