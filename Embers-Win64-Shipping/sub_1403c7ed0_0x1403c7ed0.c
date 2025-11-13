// 函数: sub_1403c7ed0
// 地址: 0x1403c7ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = arg1
uint64_t r11 = zx.q(*arg1)
uint64_t result
result.b = arg1[4].b

if (result.b == 0)
    uint32_t r15_1
    
    if (arg3 == 0)
        r15_1 = 0
    else
        r15_1 = zx.d(*(arg3 + 8))
    
    result.b = *(r9 + 0x11)
    
    if (result.b u<= 7)
        uint64_t r10_5
        
        if (result.b == 1)
            result = zx.q((r15_1 & 1) * 0xff)
            r15_1 = result.d
            
            if (r11.d == 0)
                r10_5 = 0
            else
                arg1 = zx.q(not.d((r11 - 1).d)) & 7
                void* rdi_5 = arg2 + r11
                int32_t rsi_11 = (r11 - 1).d
                uint64_t result_1 = zx.q(rsi_11 u>> 3) + arg2
                int32_t r10_4 = r11.d & 1
                
                if (rsi_11 != 0)
                    int32_t i_2 = r10_4 - r11.d
                    int32_t i
                    
                    do
                        result.b = sbb.b(result.b, result.b, test_bit(zx.d(*result_1), arg1.d))
                        *(rdi_5 - 1) = result.b
                        result = result_1 - 1
                        
                        if (arg1.d != 7)
                            result = result_1
                        
                        int32_t rcx_11 = (arg1 + 1).d
                        
                        if (arg1.d == 7)
                            rcx_11 = 0
                        
                        result_1.b = sbb.b(result_1.b, result_1.b, test_bit(zx.d(*result), rcx_11))
                        *(rdi_5 - 2) = result_1.b
                        rdi_5 -= 2
                        result_1 = result - 1
                        
                        if (rcx_11 != 7)
                            result_1 = result
                        
                        arg1 = zx.q(rcx_11 + 1)
                        
                        if (rcx_11 == 7)
                            arg1 = nullptr
                        
                        i = i_2
                        i_2 += 2
                    while (i != 0xfffffffe)
                
                if (r10_4 != 0)
                    result = zx.q(*result_1)
                    result.b = sbb.b(result.b, result.b, test_bit(result.d, arg1.d))
                    *(rdi_5 - 1) = result.b
                
                r10_5 = r11
        else if (result.b == 2)
            r15_1 = (r15_1 & 3) * 0x55
            r10_5 = 0
            
            if (r11.d != 0)
                arg1 = zx.q(not.d((r11 * 2).d + 6)) & 6
                void* rbp_12 = zx.q((r11 - 1).d u>> 2) + arg2
                uint64_t rbx_7 = r11
                
                do
                    uint64_t rdi_8 = zx.q(zx.d(*rbp_12) u>> arg1.b) & 3
                    *(arg2 + rbx_7 - 1) = (rdi_8.d << 6).b | (rdi_8.d << 4).b | (rdi_8 * 5).b
                    bool cond:2_1 = arg1.d == 6
                    bool cond:3_1 = arg1.d == 6
                    arg1 = zx.q((arg1 + 2).d)
                    
                    if (cond:2_1)
                        rbp_12 -= 1
                    
                    if (cond:3_1)
                        arg1 = nullptr
                    
                    rbx_7 -= 1
                while (rbx_7.d != 0)
                
                r10_5 = r11
        else if (result.b != 4)
            r10_5 = r11
        else
            int32_t r15_2 = r15_1 & 0xf
            r15_1 = r15_2 << 4 | r15_2
            
            if (r11.d == 0)
                r10_5 = 0
            else
                arg1 = zx.q((r11 << 2).d) & 4
                void* r12_1 = arg2 + r11
                int32_t rax_5 = (r11 - 1).d
                void* rbp_4 = zx.q(rax_5 u>> 1) + arg2
                int32_t r14_2 = r11.d & 1
                void* rbx_2
                
                if (rax_5 == 0)
                    result = zx.q(arg1.d)
                    rbx_2 = rbp_4
                else
                    int32_t i_3 = r14_2 - r11.d
                    int32_t i_1
                    
                    do
                        void* rsi_2 = rbp_4
                        
                        if (arg1.d == 4)
                            rsi_2 = rbp_4 - 1
                        
                        rbx_2 = rsi_2 - 1
                        int32_t rax_6
                        rax_6.b = arg1.d == 4
                        
                        if (arg1.d == 4)
                            rbx_2 = rbp_4 - 1
                        
                        int32_t rbp_7 = zx.d(*rbp_4) u>> arg1.b & 0xf
                        *(r12_1 - 1) = (rbp_7 << 4).b | rbp_7.b
                        uint32_t rsi_4 = zx.d(*rsi_2) u>> (arg1.d != 4).b << 2
                        *(r12_1 - 2) = (rsi_4 << 4).b | (rsi_4.b & 0xf)
                        r12_1 -= 2
                        result = zx.q(rax_6 << 2)
                        arg1 = zx.q(result.d)
                        rbp_4 = rbx_2
                        i_1 = i_3
                        i_3 += 2
                    while (i_1 != 0xfffffffe)
                
                if (r14_2 != 0)
                    int32_t rbp_15 = zx.d(*rbx_2) u>> result.d.b & 0xf
                    *(r12_1 - 1) = (rbp_15 << 4 | rbp_15).b
                
                r10_5 = r11
        
        *(r9 + 0x11) = 8
        *(r9 + 0x13) = 8
        *(r9 + 8) = r10_5
        result.b = 8
    
    if (arg3 != 0)
        if (result.b == 0x10)
            if (r11.d != 0)
                uint32_t rcx_15 = zx.d(r15_1.w)
                int64_t rbx_18 = *(r9 + 8)
                int64_t rdi_13 = 0
                
                do
                    uint32_t rsi_16
                    
                    if (zx.d(*(arg2 + rbx_18 - 1 + (rdi_13 << 1) - 1)) != rcx_15 u>> 8
                            || zx.d(*(arg2 + rbx_18 - 1 + (rdi_13 << 1))) != zx.d(rcx_15.b))
                        rsi_16.b = 0xff
                    else
                        rsi_16 = 0
                    
                    *(arg2 + (rbx_18 << 1) - 1 + (rdi_13 << 2)) = rsi_16.b
                    *(arg2 + (rbx_18 << 1) - 1 + (rdi_13 << 2) - 1) = rsi_16.b
                    *(arg2 + (rbx_18 << 1) - 1 + (rdi_13 << 2) - 2) =
                        *(arg2 + rbx_18 - 1 + (rdi_13 << 1))
                    *(arg2 + (rbx_18 << 1) - 1 + (rdi_13 << 2) - 3) =
                        *(arg2 + rbx_18 - 1 + (rdi_13 << 1) - 1)
                    rdi_13 -= 1
                while (neg.d(r11.d) != rdi_13.d)
        else if (result.b == 8 && r11.d != 0)
            void* rax_22 = zx.q((r11 * 2).d) + arg2 - 1
            void* rdx_6 = arg2 + r11
            arg1 = zx.q(r15_1.b)
            int32_t r8_2 = r11.d & 3
            
            if ((r11 - 1).d u>= 3)
                int64_t rbp_17 = 0
                int64_t rsi_15 = 0
                
                do
                    uint32_t rbx_8
                    rbx_8.b = zx.d(*(rdx_6 + rsi_15 - 1)) != arg1.d
                    rbx_8.b = neg.b(rbx_8.b)
                    *(rax_22 + (rsi_15 << 1)) = rbx_8.b
                    *(rax_22 + (rsi_15 << 1) - 1) = *(rdx_6 + rsi_15 - 1)
                    uint32_t rbx_10
                    rbx_10.b = zx.d(*(rdx_6 + rsi_15 - 2)) != arg1.d
                    rbx_10.b = neg.b(rbx_10.b)
                    *(rax_22 + (rsi_15 << 1) - 2) = rbx_10.b
                    *(rax_22 + (rsi_15 << 1) - 3) = *(rdx_6 + rsi_15 - 2)
                    uint32_t rbx_12
                    rbx_12.b = zx.d(*(rdx_6 + rsi_15 - 3)) != arg1.d
                    rbx_12.b = neg.b(rbx_12.b)
                    *(rax_22 + (rsi_15 << 1) - 4) = rbx_12.b
                    *(rax_22 + (rsi_15 << 1) - 5) = *(rdx_6 + rsi_15 - 3)
                    uint32_t rbx_14
                    rbx_14.b = zx.d(*(rdx_6 + rsi_15 - 4)) != arg1.d
                    rbx_14.b = neg.b(rbx_14.b)
                    *(rax_22 + (rsi_15 << 1) - 6) = rbx_14.b
                    *(rax_22 + (rsi_15 << 1) - 7) = *(rdx_6 + rsi_15 - 4)
                    rsi_15 -= 4
                    rbp_17 += 8
                while (r8_2 - r11.d != rsi_15.d)
                
                rdx_6 += rsi_15
                rax_22 -= rbp_17
            
            if (r8_2 != 0)
                int64_t rbp_18 = 0
                
                do
                    uint32_t rbx_16
                    rbx_16.b = zx.d(*(rdx_6 + rbp_18 - 1)) != arg1.d
                    rbx_16.b = neg.b(rbx_16.b)
                    *(rax_22 + (rbp_18 << 1)) = rbx_16.b
                    *(rax_22 + (rbp_18 << 1) - 1) = *(rdx_6 + rbp_18 - 1)
                    rbp_18 -= 1
                while (neg.d(r8_2) != rbp_18.d)
        
        r9[4].b = 4
        *(r9 + 0x12) = 2
        arg1.b = *(r9 + 0x11)
        arg1.b *= 2
    label_1403c8466:
        *(r9 + 0x13) = arg1.b
        uint64_t rax_25 = zx.q(arg1.b)
        
        if (arg1.b u< 8)
            result = (rax_25 * r11 + 7) u>> 3
        else
            result = (rax_25 u>> 3) * r11
        
        *(r9 + 8) = result
else if (arg3 != 0 && result.b == 2)
    result.b = *(r9 + 0x11)
    
    if (result.b == 0x10)
        if (r11.d != 0)
            uint32_t rcx_8 = zx.d(*(arg3 + 2))
            uint32_t r15_3 = zx.d(*(arg3 + 4))
            uint32_t r14_3 = zx.d(*(arg3 + 6))
            char* rdx_5 = arg2 + *(r9 + 8) - 1
            int64_t rbp_8 = 0
            
            do
                uint32_t rdi_4
                
                if (zx.d(rdx_5[-5]) != rcx_8 u>> 8 || zx.d(rdx_5[-4]) != zx.d(rcx_8.b)
                        || zx.d(rdx_5[-3]) != r15_3 u>> 8 || zx.d(rdx_5[-2]) != zx.d(r15_3.b)
                        || zx.d(rdx_5[-1]) != r14_3 u>> 8 || zx.d(*rdx_5) != zx.d(r14_3.b))
                    rdi_4.b = 0xff
                else
                    rdi_4 = 0
                
                *(arg2 + zx.q((r11 << 3).d) - 1 + (rbp_8 << 3)) = rdi_4.b
                *(arg2 + zx.q((r11 << 3).d) - 1 + (rbp_8 << 3) - 1) = rdi_4.b
                *(arg2 + zx.q((r11 << 3).d) - 1 + (rbp_8 << 3) - 2) = *rdx_5
                *(arg2 + zx.q((r11 << 3).d) - 1 + (rbp_8 << 3) - 3) = rdx_5[-1]
                *(arg2 + zx.q((r11 << 3).d) - 1 + (rbp_8 << 3) - 4) = rdx_5[-2]
                *(arg2 + zx.q((r11 << 3).d) - 1 + (rbp_8 << 3) - 5) = rdx_5[-3]
                *(arg2 + zx.q((r11 << 3).d) - 1 + (rbp_8 << 3) - 6) = rdx_5[-4]
                char rax_12 = rdx_5[-5]
                rdx_5 = &rdx_5[-6]
                *(arg2 + zx.q((r11 << 3).d) - 1 + (rbp_8 << 3) - 7) = rax_12
                rbp_8 -= 1
            while (neg.d(r11.d) != rbp_8.d)
    else if (result.b == 8 && r11.d != 0)
        arg1 = arg2 + *(r9 + 8) - 1
        uint32_t r10_1 = zx.d(*(arg3 + 6))
        uint32_t rbp_1 = zx.d(*(arg3 + 4))
        uint32_t rbx_1 = zx.d(*(arg3 + 2))
        int64_t rsi_1 = 0
        
        do
            uint32_t rdx
            
            if (zx.d(*(arg1 - 2)) != rbx_1 || zx.d(*(arg1 - 1)) != rbp_1 || zx.d(*arg1) != r10_1)
                rdx.b = 0xff
            else
                rdx = 0
            
            *(zx.q((r11 << 2).d) + arg2 - 1 + (rsi_1 << 2)) = rdx.b
            *(zx.q((r11 << 2).d) + arg2 - 1 + (rsi_1 << 2) - 1) = *arg1
            *(zx.q((r11 << 2).d) + arg2 - 1 + (rsi_1 << 2) - 2) = *(arg1 - 1)
            char rdx_3 = *(arg1 - 2)
            arg1 -= 3
            *(zx.q((r11 << 2).d) + arg2 - 1 + (rsi_1 << 2) - 3) = rdx_3
            rsi_1 -= 1
        while (neg.d(r11.d) != rsi_1.d)
    
    r9[4].b = 6
    *(r9 + 0x12) = 4
    arg1.b = *(r9 + 0x11)
    arg1.b <<= 2
    goto label_1403c8466

return result
