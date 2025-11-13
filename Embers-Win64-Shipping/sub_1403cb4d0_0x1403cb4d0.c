// 函数: sub_1403cb4d0
// 地址: 0x1403cb4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_10 = *arg1
uint64_t rax
rax.b = arg1[4].b

if (rax.b == 4)
    void* rdx_1 = arg2 + *(arg1 + 8)
    
    if (*(arg1 + 0x11) != 8)
        if (r9_10 != 0)
            int32_t r8_9 = r9_10 & 1
            
            if (r9_10 != 1)
                int32_t i_4 = r8_9 - r9_10
                int32_t i
                
                do
                    int16_t r9_8 = *(rdx_1 - 2)
                    *(rdx_1 - 2) = *(rdx_1 - 4)
                    *(rdx_1 - 4) = r9_8
                    rax = zx.q(*(rdx_1 - 8))
                    int16_t r9_9 = *(rdx_1 - 6)
                    *(rdx_1 - 6) = rax.w
                    *(rdx_1 - 8) = r9_9
                    rdx_1 -= 8
                    i = i_4
                    i_4 += 2
                while (i != 0xfffffffe)
            
            if (r8_9 != 0)
                int16_t rax_10 = *(rdx_1 - 4)
                int16_t rcx_6 = *(rdx_1 - 2)
                *(rdx_1 - 2) = rax_10
                *(rdx_1 - 4) = rcx_6
                return rax_10
    else if (r9_10 != 0)
        rax = zx.q(r9_10 - 1)
        int32_t r8_5 = r9_10 & 3
        
        if (rax.d u>= 3)
            int32_t i_3 = r8_5 - r9_10
            int32_t i_1
            
            do
                char r9_2 = *(rdx_1 - 1)
                *(rdx_1 - 1) = *(rdx_1 - 2)
                *(rdx_1 - 2) = r9_2
                char r9_3 = *(rdx_1 - 3)
                *(rdx_1 - 3) = *(rdx_1 - 4)
                *(rdx_1 - 4) = r9_3
                char r9_4 = *(rdx_1 - 5)
                *(rdx_1 - 5) = *(rdx_1 - 6)
                *(rdx_1 - 6) = r9_4
                rax = zx.q(*(rdx_1 - 8))
                char r9_5 = *(rdx_1 - 7)
                *(rdx_1 - 7) = rax.b
                *(rdx_1 - 8) = r9_5
                rdx_1 -= 8
                i_1 = i_3
                i_3 += 4
            while (i_1 != 0xfffffffc)
        
        if (r8_5 != 0)
            rax = 0
            
            do
                char r9_6 = *(rdx_1 + (rax << 1) - 1)
                *(rdx_1 + (rax << 1) - 1) = *(rdx_1 + (rax << 1) - 2)
                *(rdx_1 + (rax << 1) - 2) = r9_6
                rax -= 1
            while (neg.d(r8_5) != rax.d)
else if (rax.b == 6)
    int64_t r8_1 = *(arg1 + 8)
    
    if (*(arg1 + 0x11) != 8)
        if (r9_10 != 0)
            int64_t rdx_2 = 0
            
            do
                int16_t r8_7 = *(arg2 + r8_1 - 1 + (rdx_2 << 3) - 1)
                *(arg2 + r8_1 - 1 + (rdx_2 << 3) - 3) = *(arg2 + r8_1 - 1 + (rdx_2 << 3) - 5)
                rax = zx.q(*(arg2 + r8_1 - 1 + (rdx_2 << 3) - 7))
                *(arg2 + r8_1 - 1 + (rdx_2 << 3) - 5) = rax.w
                *(arg2 + r8_1 - 1 + (rdx_2 << 3) - 7) = r8_7
                rdx_2 -= 1
            while (neg.d(r9_10) != rdx_2.d)
    else if (r9_10 != 0)
        void* rdx = arg2 + r8_1
        int32_t r8_3 = r9_10 & 1
        
        if (r9_10 != 1)
            arg1 = zx.q(r8_3 - r9_10)
            int32_t i_2
            
            do
                char r9 = *(rdx - 1)
                *(rdx - 1) = *(rdx - 2)
                *(rdx - 2) = *(rdx - 3)
                *(rdx - 3) = *(rdx - 4)
                *(rdx - 4) = r9
                char r9_1 = *(rdx - 5)
                *(rdx - 5) = *(rdx - 6)
                char r10_1 = *(rdx - 8)
                rax = zx.q(*(rdx - 7))
                *(rdx - 6) = rax.b
                *(rdx - 7) = r10_1
                *(rdx - 8) = r9_1
                rdx -= 8
                i_2 = arg1.d
                arg1 = zx.q(arg1.d + 2)
            while (i_2 != 0xfffffffe)
        
        if (r8_3 != 0)
            r8_3.b = *(rdx - 1)
            arg1.b = *(rdx - 2)
            *(rdx - 1) = arg1.b
            arg1.b = *(rdx - 4)
            rax.b = *(rdx - 3)
            *(rdx - 2) = rax.b
            *(rdx - 3) = arg1.b
            *(rdx - 4) = r8_3.b

return rax
