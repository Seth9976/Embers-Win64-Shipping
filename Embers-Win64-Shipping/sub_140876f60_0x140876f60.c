// 函数: sub_140876f60
// 地址: 0x140876f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2

if (&arg1[1] != &arg2[1])
    int64_t rsi_1 = sx.q(arg2[2].d)
    int64_t r14_1 = arg2[1]
    int32_t r8_1 = *(arg1 + 0x14)
    arg1[2].d = rsi_1.d
    
    if (rsi_1.d != 0 || r8_1 != 0)
        sub_140808f70(&arg1[1], rsi_1.d, r8_1)
        memcpy(arg1[1], r14_1, (rsi_1 * 0x18).d)
    else
        *(arg1 + 0x14) = 0

if (&arg1[3] != &arg2[3])
    int32_t i_2 = arg1[4].d
    
    if (i_2 != 0)
        void* rbx_2 = arg1[3] + 0x10
        int32_t i
        
        do
            sub_1407e4530(rbx_2 + 0x10)
            sub_140745ac0(rbx_2)
            rbx_2 += 0x50
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = arg2[4].d
    void* r15_1 = arg2[3]
    int32_t r8_4 = *(arg1 + 0x24)
    arg1[4].d = i_3
    
    if (i_3 != 0 || r8_4 != 0)
        sub_140808ed0(&arg1[3], i_3, r8_4)
        int32_t* r13_1 = arg1[3]
        
        if (i_3 != 0)
            void* r15_2 = r15_1 + 0x30
            void* r14_3 = &r13_1[0xb]
            int32_t i_1
            
            do
                *r13_1 = *(r15_2 - 0x30)
                *(r14_3 - 0x28) = *(r15_2 - 0x2c)
                *(r14_3 - 0x1c) = 0
                sub_1406f3c20(r14_3 - 0x1c, *(r15_2 - 0x20), *(r15_2 - 0x18), 0, 0)
                *(r14_3 - 0xc) = 0
                int32_t j_1 = *(r15_2 - 8)
                void* rbx_3 = *(r15_2 - 0x10)
                *(r14_3 - 4) = j_1
                
                if (j_1 != 0)
                    sub_140809010(r14_3 - 0xc, j_1, 0)
                    int32_t* rdi_1 = *(r14_3 - 0xc)
                    void* rbx_4 = rbx_3 + 8
                    int32_t j
                    
                    do
                        *rdi_1 = *(rbx_4 - 8)
                        rdi_1[1] = *(rbx_4 - 4)
                        sub_1407e35b0(&rdi_1[2], rbx_4)
                        rbx_4 += 0x48
                        rdi_1 = &rdi_1[0x12]
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                else
                    *r14_3 = 0
                
                r13_1 = &r13_1[0x14]
                *(r14_3 + 4) = *r15_2
                *(r14_3 + 8) = *(r15_2 + 4)
                *(r14_3 + 0xc) ^= (*(r15_2 + 8) ^ *(r14_3 + 0xc)) & 1
                *(r14_3 + 0x10) = *(r15_2 + 0xc)
                *(r14_3 + 0x18) = *(r15_2 + 0x14)
                char rax_12 = *(r15_2 + 0x18)
                r15_2 += 0x50
                *(r14_3 + 0x1c) = rax_12
                r14_3 += 0x50
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x24) = 0

return arg1
