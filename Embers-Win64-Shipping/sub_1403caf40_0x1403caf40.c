// 函数: sub_1403caf40
// 地址: 0x1403caf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t var_20 = rbx
uint64_t r10 = zx.q(*arg1)
uint8_t r11_1 = (arg3 u>> 8).b
uint64_t result
result.b = arg1[4].b

if (result.b == 2)
    result.b = *(arg1 + 0x11)
    
    if (result.b == 0x10)
        result = r10 * 2
        void* rsi_10 = result * 3
        
        if (arg4 s< 0)
            int64_t rbx_27 = arg2 + rsi_10
            *(rbx_27 + (r10 << 1) - 1) = r11_1
            *(rbx_27 + (r10 << 1) - 2) = arg3.b
            
            if (r10.d u>= 2)
                void* rsi_19 = rsi_10 - 1
                uint64_t rdi_14 = r10
                
                do
                    *(arg2 + (rdi_14 << 3) - 3) = *(arg2 + rsi_19)
                    *(arg2 + (rdi_14 << 3) - 4) = *(arg2 + rsi_19 - 1)
                    *(arg2 + (rdi_14 << 3) - 5) = *(arg2 + rsi_19 - 2)
                    *(arg2 + (rdi_14 << 3) - 6) = *(arg2 + rsi_19 - 3)
                    *(arg2 + (rdi_14 << 3) - 7) = *(arg2 + rsi_19 - 4)
                    *(arg2 + (rdi_14 << 3) - 8) = *(arg2 + rsi_19 - 5)
                    *(arg2 + (rdi_14 << 3) - 9) = r11_1
                    *(arg2 + (rdi_14 << 3) - 0xa) = arg3.b
                    rdi_14 -= 1
                    rsi_19 -= 6
                while (rdi_14.d != 1)
            
            *(arg1 + 0x12) = 0x4004
            *(arg1 + 8) = zx.q(r10.d << 3)
        else
            if (r10.d != 0)
                void* rsi_11 = rsi_10 - 1
                uint64_t rbx_15 = r10
                
                do
                    *(arg2 + (rbx_15 << 3) - 1) = *(arg2 + rsi_11)
                    *(arg2 + (rbx_15 << 3) - 2) = *(arg2 + rsi_11 - 1)
                    *(arg2 + (rbx_15 << 3) - 3) = *(arg2 + rsi_11 - 2)
                    *(arg2 + (rbx_15 << 3) - 4) = *(arg2 + rsi_11 - 3)
                    *(arg2 + (rbx_15 << 3) - 5) = *(arg2 + rsi_11 - 4)
                    *(arg2 + (rbx_15 << 3) - 6) = *(arg2 + rsi_11 - 5)
                    *(arg2 + (rbx_15 << 3) - 7) = r11_1
                    *(arg2 + (rbx_15 << 3) - 8) = arg3.b
                    rbx_15 -= 1
                    rsi_11 -= 6
                while (rbx_15.d != 0)
            
            *(arg1 + 0x12) = 0x4004
            result = zx.q((r10 << 3).d)
            *(arg1 + 8) = result
    else if (result.b == 8)
        void* rdx_1 = arg2 + r10 * 3
        void* rax_3 = rdx_1 + r10
        
        if (arg4 s< 0)
            *(rax_3 - 1) = arg3.b
            
            if (r10.d u>= 2)
                int32_t rdi_11 = (r10.d - 1) & 1
                
                if (r10.d != 2)
                    int32_t i_2 = rdi_11 + 1 - r10.d
                    int32_t i
                    
                    do
                        *(rax_3 - 2) = *(rdx_1 - 1)
                        *(rax_3 - 3) = *(rdx_1 - 2)
                        *(rax_3 - 4) = *(rdx_1 - 3)
                        *(rax_3 - 5) = arg3.b
                        *(rax_3 - 6) = *(rdx_1 - 4)
                        *(rax_3 - 7) = *(rdx_1 - 5)
                        rbx = zx.q(*(rdx_1 - 6))
                        rdx_1 -= 6
                        *(rax_3 - 8) = rbx.b
                        *(rax_3 - 9) = arg3.b
                        rax_3 -= 8
                        i = i_2
                        i_2 += 2
                    while (i != 0xfffffffe)
                
                if (rdi_11 != 0)
                    rbx.b = *(rdx_1 - 1)
                    *(rax_3 - 2) = rbx.b
                    rbx.b = *(rdx_1 - 2)
                    *(rax_3 - 3) = rbx.b
                    rdx_1.b = *(rdx_1 - 3)
                    *(rax_3 - 4) = rdx_1.b
                    *(rax_3 - 5) = arg3.b
        else if (r10.d != 0)
            int32_t rsi_6 = r10.d & 1
            
            if (r10.d != 1)
                int32_t i_3 = rsi_6 - r10.d
                int32_t i_1
                
                do
                    *(rax_3 - 1) = *(rdx_1 - 1)
                    *(rax_3 - 2) = *(rdx_1 - 2)
                    *(rax_3 - 3) = *(rdx_1 - 3)
                    *(rax_3 - 4) = arg3.b
                    *(rax_3 - 5) = *(rdx_1 - 4)
                    *(rax_3 - 6) = *(rdx_1 - 5)
                    rbx = zx.q(*(rdx_1 - 6))
                    rdx_1 -= 6
                    *(rax_3 - 7) = rbx.b
                    *(rax_3 - 8) = arg3.b
                    rax_3 -= 8
                    i_1 = i_3
                    i_3 += 2
                while (i_1 != 0xfffffffe)
            
            if (rsi_6 != 0)
                rbx.b = *(rdx_1 - 1)
                *(rax_3 - 1) = rbx.b
                rbx.b = *(rdx_1 - 2)
                *(rax_3 - 2) = rbx.b
                rdx_1.b = *(rdx_1 - 3)
                *(rax_3 - 3) = rdx_1.b
                *(rax_3 - 4) = arg3.b
        
        *(arg1 + 0x12) = 0x2004
        result = zx.q((r10 << 2).d)
        *(arg1 + 8) = result
else if (result.b == 0)
    result.b = *(arg1 + 0x11)
    
    if (result.b == 0x10)
        void* rsi_7 = arg2 + (r10 << 1)
        result = rsi_7 + (r10 << 1)
        
        if (arg4 s< 0)
            *(result - 1) = r11_1
            *(result - 2) = arg3.b
            
            if (r10.d u>= 2)
                if (r10.d != 2)
                    int64_t rsi_18 = neg.q(r10 << 2)
                    int64_t rdi_13 = neg.q(r10 * 2)
                    uint64_t rbx_26 = r10
                    
                    do
                        *(arg2 + (rbx_26 << 2) - 3) = *(arg2 + (rbx_26 << 1) - 1)
                        *(arg2 + (rbx_26 << 2) - 4) = *(arg2 + (rbx_26 << 1) - 2)
                        *(arg2 + (rbx_26 << 2) - 5) = r11_1
                        *(arg2 + (rbx_26 << 2) - 6) = arg3.b
                        *(arg2 + (rbx_26 << 2) - 7) = *(arg2 + (rbx_26 << 1) - 3)
                        *(arg2 + (rbx_26 << 2) - 8) = *(arg2 + (rbx_26 << 1) - 4)
                        *(arg2 + (rbx_26 << 2) - 9) = r11_1
                        *(arg2 + (rbx_26 << 2) - 0xa) = arg3.b
                        rbx_26 -= 2
                        rsi_18 += 8
                        rdi_13 += 4
                    while ((zx.d((r10 + 1).b) & 1) + 1 != rbx_26.d)
                    
                    result = arg2 - rsi_18
                    rsi_7 = arg2 - rdi_13
                
                if (((r10 - 1).b & 1) != 0)
                    arg2.b = *(rsi_7 - 1)
                    *(result - 3) = arg2.b
                    arg2.b = *(rsi_7 - 2)
                    *(result - 4) = arg2.b
                    *(result - 5) = r11_1
                    *(result - 6) = arg3.b
            
            *(arg1 + 0x12) = 0x2002
            *(arg1 + 8) = zx.q(r10.d << 2)
        else
            if (r10.d != 0)
                if (r10.d != 1)
                    int64_t rdi_5 = neg.q(r10 << 2)
                    int64_t rsi_9 = neg.q(r10 * 2)
                    uint64_t rax_4 = r10
                    
                    do
                        *(arg2 + (rax_4 << 2) - 1) = *(arg2 + (rax_4 << 1) - 1)
                        *(arg2 + (rax_4 << 2) - 2) = *(arg2 + (rax_4 << 1) - 2)
                        *(arg2 + (rax_4 << 2) - 3) = r11_1
                        *(arg2 + (rax_4 << 2) - 4) = arg3.b
                        *(arg2 + (rax_4 << 2) - 5) = *(arg2 + (rax_4 << 1) - 3)
                        *(arg2 + (rax_4 << 2) - 6) = *(arg2 + (rax_4 << 1) - 4)
                        *(arg2 + (rax_4 << 2) - 7) = r11_1
                        *(arg2 + (rax_4 << 2) - 8) = arg3.b
                        rdi_5 += 8
                        rax_4 -= 2
                        rsi_9 += 4
                    while ((r10.d & 1) != rax_4.d)
                    
                    result = arg2 - rdi_5
                    rsi_7 = arg2 - rsi_9
                
                if ((r10.b & 1) != 0)
                    arg2.b = *(rsi_7 - 1)
                    *(result - 1) = arg2.b
                    arg2.b = *(rsi_7 - 2)
                    *(result - 2) = arg2.b
                    *(result - 3) = r11_1
                    *(result - 4) = arg3.b
            
            *(arg1 + 0x12) = 0x2002
            result = zx.q((r10 << 2).d)
            *(arg1 + 8) = result
    else if (result.b == 8)
        void* rax = arg2 + r10
        void* r11_2 = rax + r10
        
        if (arg4 s< 0)
            *(r11_2 - 1) = arg3.b
            
            if (r10.d u>= 2)
                int32_t r9_6 = (r10 - 1).d & 3
                
                if ((r10 - 2).d u>= 3)
                    int64_t rsi_15 = neg.q(r10 * 2)
                    uint64_t rax_13 = r10
                    
                    do
                        *(arg2 + (rax_13 << 1) - 2) = *(arg2 + rax_13 - 1)
                        *(arg2 + (rax_13 << 1) - 3) = arg3.b
                        *(arg2 + (rax_13 << 1) - 4) = *(arg2 + rax_13 - 2)
                        *(arg2 + (rax_13 << 1) - 5) = arg3.b
                        *(arg2 + (rax_13 << 1) - 6) = *(arg2 + rax_13 - 3)
                        *(arg2 + (rax_13 << 1) - 7) = arg3.b
                        *(arg2 + (rax_13 << 1) - 8) = *(arg2 + rax_13 - 4)
                        *(arg2 + (rax_13 << 1) - 9) = arg3.b
                        rax_13 -= 4
                        rsi_15 += 8
                    while ((zx.d((r10 - 1).b) & 3) + 1 != rax_13.d)
                    
                    r11_2 = arg2 - rsi_15
                    rax = rax_13 + arg2
                
                if (r9_6 != 0)
                    int64_t rdx_2 = 0
                    
                    do
                        *(r11_2 + (rdx_2 << 1) - 2) = *(rax + rdx_2 - 1)
                        *(r11_2 + (rdx_2 << 1) - 3) = arg3.b
                        rdx_2 -= 1
                    while (neg.d(r9_6) != rdx_2.d)
        else if (r10.d != 0)
            int32_t r9_1 = r10.d & 3
            
            if ((r10 - 1).d u>= 3)
                int64_t rsi_4 = neg.q(r10 * 2)
                uint64_t rax_1 = r10
                
                do
                    *(arg2 + (rax_1 << 1) - 1) = *(arg2 + rax_1 - 1)
                    *(arg2 + (rax_1 << 1) - 2) = arg3.b
                    *(arg2 + (rax_1 << 1) - 3) = *(arg2 + rax_1 - 2)
                    *(arg2 + (rax_1 << 1) - 4) = arg3.b
                    *(arg2 + (rax_1 << 1) - 5) = *(arg2 + rax_1 - 3)
                    *(arg2 + (rax_1 << 1) - 6) = arg3.b
                    *(arg2 + (rax_1 << 1) - 7) = *(arg2 + rax_1 - 4)
                    *(arg2 + (rax_1 << 1) - 8) = arg3.b
                    rsi_4 += 8
                    rax_1 -= 4
                while ((r10.d & 3) != rax_1.d)
                
                r11_2 = arg2 - rsi_4
                rax = rax_1 + arg2
            
            if (r9_1 != 0)
                int64_t rdx = 0
                
                do
                    *(r11_2 + (rdx << 1) - 1) = *(rax + rdx - 1)
                    *(r11_2 + (rdx << 1) - 2) = arg3.b
                    rdx -= 1
                while (neg.d(r9_1) != rdx.d)
        
        *(arg1 + 0x12) = 0x1002
        result = zx.q((r10 * 2).d)
        *(arg1 + 8) = result

return result
