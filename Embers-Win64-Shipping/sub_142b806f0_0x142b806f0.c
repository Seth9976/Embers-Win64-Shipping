// 函数: sub_142b806f0
// 地址: 0x142b806f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
uint64_t var_38 = __security_cookie ^ &var_118
int32_t rdi = arg3
int32_t r12 = arg2
int32_t r15 = 2
int32_t r14

if ((arg2 & 0xffffff) == 0)
    r14 = 1
else if (zx.d(r12.w) != 0)
    int32_t r14_1
    r14_1.b = r12.b != 0
    r14 = r14_1 + 3
else
    r14 = 2

if ((rdi & 0xffffff) == 0)
    r15 = 1
else if (zx.d(rdi.w) != 0)
    int32_t r15_1
    r15_1.b = rdi.b != 0
    r15 = r15_1 + 3

uint64_t result

if (r12 u< rdi)
    int32_t rsi_1 = 4
    
    if (r14 u>= r15 || r12 != (0xffffffff << ((4 - r14) << 3).b & rdi))
        void var_d8
        memset(&var_d8, 0, 0x50)
        int64_t var_f0_1 = 0
        int64_t var_e8_1 = 0
        void var_88
        memset(&var_88, 0, 0x50)
        int32_t r13_1 = *arg1
        
        if (r14 s> r13_1)
            void var_d4
            void* r9_1 = &var_d4 + (zx.q(r14) << 4)
            int32_t r8_1 = (4 - r14) << 3
            void* r11_2 = &arg1[6 + zx.q(r14)]
            
            do
                int32_t r10_1 = *r11_2
                char rcx_4 = r8_1.b
                uint32_t rax_6 = zx.d((r12 u>> rcx_4).b)
                
                if (rax_6 u< r10_1)
                    *(r9_1 + 4) = r14
                    *(r9_1 - 4) = (1 << rcx_4) + r12
                    *(r9_1 + 8) = r10_1 - rax_6
                    *r9_1 = (0xffffff00 << rcx_4 & r12) | r10_1 << rcx_4
                
                r14 -= 1
                r12 &= 0xffffffff << (r8_1.b + 8)
                r8_1 += 8
                r11_2 -= 4
                r9_1 -= 0x10
            while (r14 s> r13_1)
        
        int32_t r12_1
        
        if (r12 u>= 0xff000000)
            r12_1 = -1
            var_f0_1.d = 0xffffffff
        else
            int32_t rdx_6 = (1 << ((4 - r13_1) << 3).b) + r12
            int32_t var_f8_2 = rdx_6
            r12_1 = rdx_6
            var_f0_1.d = rdx_6
        
        if (r15 s> r13_1)
            void var_84
            void* r9_2 = &var_84 + (zx.q(r15) << 4)
            int32_t r8_3 = (4 - r15) << 3
            void* r10_4 = &arg1[1 + zx.q(r15)]
            
            do
                int32_t r14_2 = *r10_4
                char rcx_9 = r8_3.b
                uint32_t r11_3 = zx.d((rdi u>> rcx_9).b)
                
                if (r11_3 u> r14_2)
                    *(r9_2 + 4) = r15
                    *(r9_2 - 4) = (0xffffff00 << rcx_9 & rdi) | r14_2 << rcx_9
                    *r9_2 = rdi - (1 << rcx_9)
                    *(r9_2 + 8) = r11_3 - r14_2
                
                r15 -= 1
                rdi &= 0xffffffff << (r8_3.b + 8)
                r8_3 += 8
                r10_4 -= 4
                r9_2 -= 0x10
            while (r15 s> r13_1)
        
        var_e8_1.d = r13_1
        char rcx_12 = ((4 - r13_1) << 3).b
        int32_t rdi_1 = rdi - (1 << rcx_12)
        var_f0_1:4.d = rdi_1
        void var_cc
        int32_t var_7c[0x7]
        
        if (rdi_1 u>= r12_1)
            var_e8_1:4.d = ((rdi_1 - r12_1) u>> rcx_12) + 1
        else if (r13_1 s< 4)
            int32_t r15_2 = 0
            int64_t rdi_5 = 0
            
            do
                void var_8c
                int32_t r12_2 = *(&var_8c + rdi_5)
                void var_3c
                
                if (r12_2 s> 0 && *(&var_3c + rdi_5) s> 0)
                    void var_94
                    int32_t rdx_11 = *(&var_94 + rdi_5)
                    void var_48
                    int32_t r14_3 = *(&var_48 + rdi_5)
                    void var_44
                    int32_t rax_28
                    
                    if (rdx_11 u> r14_3)
                        int32_t r8_5 = *(&var_44 + rdi_5)
                        char rcx_17 = r15_2.b
                        void var_98
                        uint32_t rdx_12 = zx.d((*(&var_98 + rdi_5) u>> rcx_17).b)
                        *(&var_94 + rdi_5) = r8_5
                        rax_28 = zx.d((r8_5 u>> rcx_17).b) - rdx_12 + 1
                    label_142b80aba:
                        *(&var_8c + rdi_5) = rax_28
                        var_7c[sx.q(rsi_1) * 4] = 0
                        
                        if (rsi_1 - 1 s> r13_1)
                            int64_t rax_36 = sx.q(rsi_1 - 1) << 4
                            uint64_t i_2 = zx.q(rsi_1 - 1 - r13_1)
                            uint64_t i
                            
                            do
                                *(&var_7c + rax_36) = 0
                                *(&var_cc + rax_36) = 0
                                rax_36 -= 0x10
                                i = i_2
                                i_2 -= 1
                            while (i != 1)
                        
                        break
                    
                    if (rdx_11 != r14_3 && sub_142b80b10(arg1, rdx_11, rsi_1) == r14_3)
                        *(&var_94 + rdi_5) = *(&var_44 + rdi_5)
                        rax_28 = *(&var_3c + rdi_5) + r12_2
                        goto label_142b80aba
                
                rsi_1 -= 1
                r15_2 += 8
                rdi_5 -= 0x10
            while (rsi_1 s> r13_1)
        
        arg1[0x28] = 0
        
        if (var_e8_1:4.d s> 0)
            arg1[0x28] = 1
            *(arg1 + 0x2c) = var_f0_1.o
        
        int64_t rcx_13 = sx.q(r13_1 + 1)
        
        if (rcx_13 s<= 4)
            int64_t i_1 = rcx_13 << 4
            
            do
                if (*(&var_7c + i_1) s> 0)
                    *((sx.q(arg1[0x28]) << 4) + arg1 + 0x2c) = *(&var_88 + i_1)
                    arg1[0x28] += 1
                
                if (*(&var_cc + i_1) s> 0)
                    *((sx.q(arg1[0x28]) << 4) + arg1 + 0x2c) = *(&var_d8 + i_1)
                    arg1[0x28] += 1
                
                i_1 += 0x10
            while (i_1 s<= 0x40)
        
        result.b = arg1[0x28] s> 0
    else
        result.b = 0
else
    result.b = 0

__security_check_cookie(var_38 ^ &var_118)
return result
