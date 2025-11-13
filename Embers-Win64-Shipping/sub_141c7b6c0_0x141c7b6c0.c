// 函数: sub_141c7b6c0
// 地址: 0x141c7b6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
uint64_t result = zx.q(arg4)
int32_t var_134 = result.d

if (arg2 == 0 || result.d u> 0xb)
    result.b = 0
else
    *arg1 = arg2
    int64_t var_e8
    __builtin_memset(&var_e8, 0, 0x44)
    
    if (arg2 != 0)
        char* rcx = arg3
        uint64_t i_5 = zx.q(arg2)
        uint64_t i
        
        do
            char rax_2 = *rcx
            
            if (rax_2 != 0)
                uint64_t rax_3 = zx.q(rax_2)
                *(&var_e8 + (rax_3 << 2)) += 1
            
            rcx = &rcx[1]
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t r9 = 0
    uint64_t rdi_1 = 0
    uint32_t i_7 = 0
    uint32_t i_15 = -1
    int32_t var_138_1 = 0
    int32_t var_128
    int32_t var_98[0x10]
    
    for (uint32_t i_1 = 1; i_1 u<= 0x10; i_1 += 8)
        uint64_t rax_4 = zx.q(i_1 - 1)
        uint64_t i_6 = zx.q(i_1)
        uint64_t r14_1 = zx.q(rax_4.d)
        void* r15_1 = &arg1[rax_4]
        int32_t r11_1 = *(&var_e8 + (i_6 << 2))
        
        if (r11_1 != 0)
            (&var_128)[r14_1] = r9
            uint32_t i_3 = i_1
            arg1[r14_1 + 0x18] = rdi_1.d
            
            if (i_15 u< i_1)
                i_3 = i_15
            
            var_98[i_6] = rdi_1.d
            i_15 = i_3
            uint32_t i_4 = i_1
            
            if (i_7 u> i_1)
                i_4 = i_7
            
            i_7 = i_4
            r9 += r11_1
            *(r15_1 + 0x1c) = ((r9 - 1) << (0x10 - i_1.b) | ((1 << (0x10 - i_1.b)) - 1)) + 1
            rdi_1 = zx.q(rdi_1.d + r11_1)
        else
            *(r15_1 + 0x1c) = r11_1
        
        uint64_t i_8 = zx.q(i_1 + 1)
        int32_t r15_2 = *(&var_e8 + (i_8 << 2))
        int32_t r11_2 = r9 * 2
        uint64_t r9_1 = zx.q(i_8.d)
        void* r14_2 = &arg1[i_6]
        
        if (r15_2 != 0)
            (&var_128)[i_6] = r11_2
            uint32_t i_16 = i_8.d
            var_98[r9_1] = rdi_1.d
            
            if (i_15 u< i_8.d)
                i_16 = i_15
            
            i_15 = i_16
            
            if (i_7 u> i_8.d)
                i_8 = zx.q(i_7)
            
            r11_2 += r15_2
            i_7 = i_8.d
            *(r14_2 + 0x1c) = ((r11_2 - 1) << (0xf - i_1.b) | ((1 << (0xf - i_1.b)) - 1)) + 1
            arg1[i_6 + 0x18] = rdi_1.d
            rdi_1 = zx.q(rdi_1.d + r15_2)
        else
            *(r14_2 + 0x1c) = r15_2
        
        uint64_t i_9 = zx.q(i_1 + 2)
        int32_t r11_3 = r11_2 * 2
        int32_t r15_3 = *(&var_e8 + (i_9 << 2))
        void* r14_3 = &arg1[r9_1]
        uint64_t r10_1 = zx.q(i_9.d)
        
        if (r15_3 != 0)
            (&var_128)[r9_1] = r11_3
            uint32_t i_17 = i_9.d
            var_98[r10_1] = rdi_1.d
            
            if (i_15 u< i_9.d)
                i_17 = i_15
            
            i_15 = i_17
            
            if (i_7 u> i_9.d)
                i_9 = zx.q(i_7)
            
            r11_3 += r15_3
            i_7 = i_9.d
            *(r14_3 + 0x1c) = ((r11_3 - 1) << (0xe - i_1.b) | ((1 << (0xe - i_1.b)) - 1)) + 1
            arg1[r9_1 + 0x18] = rdi_1.d
            rdi_1 = zx.q(rdi_1.d + r15_3)
        else
            *(r14_3 + 0x1c) = r15_3
        
        uint64_t i_10 = zx.q(i_1 + 3)
        int32_t r11_4 = r11_3 * 2
        int32_t r15_4 = *(&var_e8 + (i_10 << 2))
        void* r14_4 = &arg1[r10_1]
        uint64_t r9_2 = zx.q(i_10.d)
        
        if (r15_4 != 0)
            (&var_128)[r10_1] = r11_4
            uint32_t i_18 = i_10.d
            var_98[r9_2] = rdi_1.d
            
            if (i_15 u< i_10.d)
                i_18 = i_15
            
            i_15 = i_18
            
            if (i_7 u> i_10.d)
                i_10 = zx.q(i_7)
            
            r11_4 += r15_4
            i_7 = i_10.d
            *(r14_4 + 0x1c) = ((r11_4 - 1) << (0xd - i_1.b) | ((1 << (0xd - i_1.b)) - 1)) + 1
            arg1[r10_1 + 0x18] = rdi_1.d
            rdi_1 = zx.q(rdi_1.d + r15_4)
        else
            *(r14_4 + 0x1c) = r15_4
        
        uint64_t i_11 = zx.q(i_1 + 4)
        int32_t r11_5 = r11_4 * 2
        int32_t r15_5 = *(&var_e8 + (i_11 << 2))
        void* r14_5 = &arg1[r9_2]
        uint64_t r10_2 = zx.q(i_11.d)
        
        if (r15_5 != 0)
            (&var_128)[r9_2] = r11_5
            uint32_t i_19 = i_11.d
            var_98[r10_2] = rdi_1.d
            
            if (i_15 u< i_11.d)
                i_19 = i_15
            
            i_15 = i_19
            
            if (i_7 u> i_11.d)
                i_11 = zx.q(i_7)
            
            r11_5 += r15_5
            i_7 = i_11.d
            *(r14_5 + 0x1c) = ((r11_5 - 1) << (0xc - i_1.b) | ((1 << (0xc - i_1.b)) - 1)) + 1
            arg1[r9_2 + 0x18] = rdi_1.d
            rdi_1 = zx.q(rdi_1.d + r15_5)
        else
            *(r14_5 + 0x1c) = r15_5
        
        uint64_t i_12 = zx.q(i_1 + 5)
        int32_t r11_6 = r11_5 * 2
        int32_t r15_6 = *(&var_e8 + (i_12 << 2))
        void* r14_6 = &arg1[r10_2]
        uint64_t r9_3 = zx.q(i_12.d)
        
        if (r15_6 != 0)
            (&var_128)[r10_2] = r11_6
            uint32_t i_20 = i_12.d
            var_98[r9_3] = rdi_1.d
            
            if (i_15 u< i_12.d)
                i_20 = i_15
            
            i_15 = i_20
            
            if (i_7 u> i_12.d)
                i_12 = zx.q(i_7)
            
            r11_6 += r15_6
            i_7 = i_12.d
            *(r14_6 + 0x1c) = ((r11_6 - 1) << (0xb - i_1.b) | ((1 << (0xb - i_1.b)) - 1)) + 1
            arg1[r10_2 + 0x18] = rdi_1.d
            rdi_1 = zx.q(rdi_1.d + r15_6)
        else
            *(r14_6 + 0x1c) = r15_6
        
        uint64_t i_13 = zx.q(i_1 + 6)
        int32_t r11_7 = r11_6 * 2
        int32_t r15_7 = *(&var_e8 + (i_13 << 2))
        void* r14_7 = &arg1[r9_3]
        uint64_t r10_3 = zx.q(i_13.d)
        
        if (r15_7 != 0)
            (&var_128)[r9_3] = r11_7
            uint32_t i_21 = i_13.d
            var_98[r10_3] = rdi_1.d
            
            if (i_15 u< i_13.d)
                i_21 = i_15
            
            i_15 = i_21
            
            if (i_7 u> i_13.d)
                i_13 = zx.q(i_7)
            
            r11_7 += r15_7
            i_7 = i_13.d
            *(r14_7 + 0x1c) = ((r11_7 - 1) << (0xa - i_1.b) | ((1 << (0xa - i_1.b)) - 1)) + 1
            arg1[r9_3 + 0x18] = rdi_1.d
            rdi_1 = zx.q(rdi_1.d + r15_7)
        else
            *(r14_7 + 0x1c) = r15_7
        
        uint64_t i_14 = zx.q(i_1 + 7)
        int32_t r14_8 = *(&var_e8 + (i_14 << 2))
        int32_t r9_4 = r11_7 * 2
        void* r11_8 = &arg1[r10_3]
        
        if (r14_8 != 0)
            (&var_128)[r10_3] = r9_4
            uint32_t i_22 = i_14.d
            var_98[i_14] = rdi_1.d
            
            if (i_15 u< i_14.d)
                i_22 = i_15
            
            i_15 = i_22
            
            if (i_7 u> i_14.d)
                i_14 = zx.q(i_7)
            
            r9_4 += r14_8
            i_7 = i_14.d
            *(r11_8 + 0x1c) = ((r9_4 - 1) << (9 - i_1.b) | ((1 << (9 - i_1.b)) - 1)) + 1
            arg1[r10_3 + 0x18] = rdi_1.d
            rdi_1 = zx.q(rdi_1.d + r14_8)
        else
            *(r11_8 + 0x1c) = r14_8
        
        r9 = r9_4 * 2
    
    char* r12_1 = arg3
    arg1[1] = rdi_1.d
    
    if (rdi_1.d u<= arg1[0x2c])
    label_141c7bb9b:
        uint32_t i_2 = i_7
        int32_t r8 = 0
        arg1[6].b = i_15.b
        *(arg1 + 0x19) = i_2.b
        
        if (arg2 != 0)
            do
                char rax_29 = *r12_1
                
                if (rax_29 != 0)
                    uint64_t rax_30 = zx.q(rax_29)
                    uint64_t rdx_32 = zx.q(var_98[rax_30])
                    var_98[rax_30] = (rdx_32 + 1).d
                    *(*(arg1 + 0xb8) + (rdx_32 << 1)) = r8.w
                
                r8 += 1
                r12_1 = &r12_1[1]
            while (r8 u< arg2)
            
            i_15 = zx.d(arg1[6].b)
        
        int32_t r13_1 = 0
        
        if (var_134 u> zx.d(i_15.b))
            r13_1 = var_134
        
        arg1[2] = r13_1
        
        if (r13_1 == 0)
        label_141c7bd49:
            arg1[0x18] -= var_128
            int32_t var_124
            arg1[0x19] -= var_124
            int32_t var_120
            arg1[0x1a] -= var_120
            int32_t var_11c
            arg1[0x1b] -= var_11c
            int32_t var_118
            arg1[0x1c] -= var_118
            int32_t var_114
            arg1[0x1d] -= var_114
            int32_t var_110
            arg1[0x1e] -= var_110
            int32_t var_10c
            arg1[0x1f] -= var_10c
            int32_t var_108
            arg1[0x20] -= var_108
            int32_t var_104
            arg1[0x21] -= var_104
            int32_t var_100
            arg1[0x22] -= var_100
            int32_t var_fc
            arg1[0x23] -= var_fc
            int32_t var_f8
            arg1[0x24] -= var_f8
            int32_t var_f4
            arg1[0x25] -= var_f4
            int32_t var_f0
            arg1[0x26] -= var_f0
            int32_t var_ec
            arg1[0x27] -= var_ec
            arg1[5] = zx.d(arg1[6].b)
            arg1[4] = 0
            
            if (r13_1 != 0)
                int32_t rdx_35 = r13_1
                
                if (r13_1 u>= 1)
                    uint64_t rcx_34
                    
                    do
                        rcx_34 = zx.q(rdx_35 - 1)
                        
                        if (*(&var_e8 + (zx.q(rdx_35) << 2)) != 0)
                            arg1[4] = arg1[rcx_34 + 7]
                            
                            if (rdx_35 u>= 1)
                                uint64_t rcx_36 = zx.q(r13_1 + 1)
                                arg1[5] = rcx_36.d
                                
                                while (rcx_36.d u<= i_2)
                                    if (*(&var_e8 + (rcx_36 << 2)) != 0)
                                        arg1[5] = rcx_36.d
                                        break
                                    
                                    rcx_36 = zx.q(rcx_36.d + 1)
                            
                            break
                        
                        rdx_35 = rcx_34.d
                    while (rcx_34.d u>= 1)
            
            arg1[0x17] = 0xffffffff
            arg1[0x28] = 0xfffff
            arg1[3] = 0x20 - arg1[2]
            result.b = 1
        else
            uint64_t rdi_6 = zx.q(1 << r13_1.b)
            
            if (rdi_6.d u<= arg1[0x29])
            label_141c7bc7e:
                memset(*(arg1 + 0xa8), 0xff, zx.q(4 << r13_1.b))
                int32_t rdi_8 = 1
                
                if (r13_1 u>= 1)
                    do
                        if (*(&var_e8 + (zx.q(rdi_8) << 2)) != 0)
                            uint64_t rax_35 = zx.q(rdi_8 - 1)
                            int32_t rsi_1 = arg1[rax_35 + 7]
                            int32_t r15_9 = (&var_128)[rax_35]
                            char r14_10 = r13_1.b - rdi_8.b
                            int32_t r10_4 = 1 << r14_10
                            uint32_t rsi_2
                            
                            if (rsi_1 != 0)
                                rsi_2 = (rsi_1 - 1) u>> (0x10 - rdi_8.b)
                            else
                                rsi_2 = -1
                            
                            int32_t r12_2 = arg1[rax_35 + 0x18]
                            int32_t r11_9 = r15_9
                            
                            if (r15_9 u<= rsi_2)
                                do
                                    int32_t rax_37 = 0
                                    
                                    if (r10_4 != 0)
                                        int32_t r8_4 = rdi_8 << 0x10 | zx.d(
                                            *(*(arg1 + 0xb8) + (zx.q(r11_9 - r15_9 + r12_2) << 1)))
                                        
                                        do
                                            uint64_t rdx_34 = zx.q((r11_9 << r14_10) + rax_37)
                                            rax_37 += 1
                                            *(*(arg1 + 0xa8) + (rdx_34 << 2)) = r8_4
                                        while (rax_37 u< r10_4)
                                    
                                    r11_9 += 1
                                while (r11_9 u<= rsi_2)
                        
                        rdi_8 += 1
                    while (rdi_8 u<= r13_1)
                
                i_2 = i_7
                goto label_141c7bd49
            
            int64_t rcx_22 = *(arg1 + 0xa8)
            arg1[0x29] = rdi_6.d
            
            if (rcx_22 != 0)
                sub_141c799d0(rcx_22 - 8)
            
            if (rdi_6.d == 0)
                rdi_6 = 1
            
            result = sub_141c79a80((rdi_6 << 2) + 8, nullptr)
            
            if (result != 0)
                result += 8
                *(result - 4) = rdi_6.d
                *(result - 8) = not.d(rdi_6.d)
            
            *(arg1 + 0xa8) = result
            
            if (result != 0)
                goto label_141c7bc7e
            
            result.b = 0
    else
        arg1[0x2c] = rdi_1.d
        int32_t rax_22
        
        if (rdi_1.d == 0)
            rax_22 = -1
        label_141c7baed:
            int32_t rcx_11 = rax_22 u>> 0x10 | rax_22
            int32_t rcx_12 = rcx_11 | rcx_11 u>> 8
            int32_t rcx_13 = rcx_12 | rcx_12 u>> 4
            int32_t rcx_14 = rcx_13 | rcx_13 u>> 2
            rdi_1 = zx.q((rcx_14 u>> 1 | rcx_14) + 1)
            
            if (arg2 u< rdi_1.d)
                rdi_1 = zx.q(arg2)
            
            arg1[0x2c] = rdi_1.d
        else
            rax_22 = (rdi_1 - 1).d
            
            if ((rdi_1.d & rax_22) != 0)
                goto label_141c7baed
        int64_t rcx_15 = *(arg1 + 0xb8)
        
        if (rcx_15 != 0)
            sub_141c799d0(rcx_15 - 8)
            rdi_1 = zx.q(arg1[0x2c])
        
        if (rdi_1.d == 0)
            rdi_1 = 1
        
        result = sub_141c79a80((rdi_1 << 1) + 8, nullptr)
        
        if (result != 0)
            result += 8
            *(result - 4) = rdi_1.d
            *(result - 8) = not.d(rdi_1.d)
        
        *(arg1 + 0xb8) = result
        
        if (result != 0)
            goto label_141c7bb9b
        
        result.b = 0

__security_check_cookie(rax_1 ^ &var_158)
return result
