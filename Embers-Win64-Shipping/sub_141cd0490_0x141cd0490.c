// 函数: sub_141cd0490
// 地址: 0x141cd0490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
void* r10_2 = (rdi << 4) + arg1[0x15]
int64_t* r11 = arg1
void* var_58 = r10_2
int64_t rbp = sx.q(*(r10_2 + 0xc))
int32_t arg_10 = rbp.d
int64_t rsi = rbp * 0x28
void* rbx_1 = arg1[0x1c] + rsi
int32_t* r9 = *(rbx_1 + 0x10)
int64_t r8 = sx.q(*(rbx_1 + 0x18))
int32_t* rdx_2 = r9
void* rcx = &r9[r8]

if (r9 != rcx)
    do
        if (*rdx_2 == rdi.d)
            int32_t rdx_4 = ((rdx_2 - r9) s>> 2).d
            
            if (rdx_4 != 0xffffffff)
                void* rcx_1 = &r9[sx.q(rdx_4)]
                memmove(rcx_1, rcx_1 + 4, (r8.d - rdx_4 - 1) << 2)
                *(rbx_1 + 0x18) -= 1
                r11 = arg1
                r10_2 = var_58
            
            break
        
        rdx_2 = &rdx_2[1]
    while (rdx_2 != rcx)

int64_t* rbx_4

if (*(rsi + arg1[0x1c] + 0x18) != 0)
    rbx_4 = arg1
else
    for (int64_t i = 0; i s< 3; )
        int64_t rsi_1 = sx.q(*(r10_2 + (i << 2)))
        void* r8_5 = r11[7]
        int64_t rax_3 = 0
        
        if (i != 2)
            rax_3 = i + 1
        
        int64_t rax_5 = *r11
        int32_t rdx_7 = *(r8_5 + sx.q(*(r10_2 + (rax_3 << 2))) * 0x18)
        int64_t r13_1 = rsi_1 * 0x18
        void* r14_1 = r8_5 + r13_1
        int64_t r8_6 = sx.q(*(r8_5 + r13_1))
        int64_t rcx_5 = r8_6 << 5
        int32_t* r9_1 = *(rcx_5 + rax_5 + 0x10)
        void* r10_3 = &r9_1[sx.q(*(rcx_5 + rax_5 + 0x18))]
        int64_t rbx_2
        
        if (r9_1 == r10_3)
        label_141cd060d:
            rbx_2 = zx.q(data_143a1c6bc)
        else
            int64_t r11_1 = r11[0xe]
            
            while (true)
                rbx_2 = sx.q(*r9_1)
                int64_t rcx_6 = rbx_2 * 3
                int32_t rcx_7 = *(r11_1 + (rcx_6 << 3))
                int32_t rax_8 = *(r11_1 + (rcx_6 << 3) + 4)
                
                if (rcx_7 == r8_6.d && rax_8 == rdx_7)
                    break
                
                if (rcx_7 == rdx_7 && rax_8 == r8_6.d)
                    break
                
                r9_1 = &r9_1[1]
                
                if (r9_1 == r10_3)
                    goto label_141cd060d
        
        int32_t* r8_7 = *(r14_1 + 8)
        int64_t r9_2 = sx.q(*(r14_1 + 0x10))
        int32_t* rdx_8 = r8_7
        void* rcx_8 = &r8_7[r9_2]
        
        if (r8_7 != rcx_8)
            do
                if (*rdx_8 == rdi.d)
                    int32_t rdx_10 = ((rdx_8 - r8_7) s>> 2).d
                    
                    if (rdx_10 != 0xffffffff)
                        void* rcx_9 = &r8_7[sx.q(rdx_10)]
                        memmove(rcx_9, rcx_9 + 4, (r9_2.d - rdx_10 - 1) << 2)
                        *(r14_1 + 0x10) -= 1
                    
                    break
                
                rdx_8 = &rdx_8[1]
            while (rdx_8 != rcx_8)
        
        r11 = arg1
        int64_t r15_1 = sx.q(rbx_2.d) * 0x18
        void* r14_3 = r11[0xe] + r15_1
        int32_t* r8_10 = *(r14_3 + 8)
        int64_t r9_5 = sx.q(*(r14_3 + 0x10))
        int32_t* rdx_12 = r8_10
        void* rcx_11 = &r8_10[r9_5]
        
        if (r8_10 != rcx_11)
            do
                if (*rdx_12 == rdi.d)
                    int32_t rdx_14 = ((rdx_12 - r8_10) s>> 2).d
                    
                    if (rdx_14 != 0xffffffff)
                        void* rcx_12 = &r8_10[sx.q(rdx_14)]
                        memmove(rcx_12, rcx_12 + 4, (r9_5.d - rdx_14 - 1) << 2)
                        *(r14_3 + 0x10) -= 1
                        r11 = arg1
                    
                    break
                
                rdx_12 = &rdx_12[1]
            while (rdx_12 != rcx_11)
        
        if (arg4 != 0 && *(r11[7] + r13_1 + 0x10) == 0)
            int32_t* rdx_16 = *arg4
            int64_t r8_13 = sx.q(arg4[1].d)
            int32_t* rcx_13 = rdx_16
            int32_t* r14_4 = r8_13 << 2
            void* rax_13 = r14_4 + rdx_16
            
            if (rdx_16 != rax_13)
                while (*rcx_13 != rsi_1.d)
                    rcx_13 = &rcx_13[1]
                    
                    if (rcx_13 == rax_13)
                        goto label_141cd0721
            
            if (rdx_16 == rax_13 || ((rcx_13 - rdx_16) s>> 2).d == 0xffffffff)
            label_141cd0721:
                int32_t rax_14 = (r8_13 + 1).d
                arg4[1].d = rax_14
                
                if (rax_14 s> *(arg4 + 0xc))
                    sub_1405a4cf0(arg4)
                    r11 = arg1
                
                *(r14_4 + *arg4) = rsi_1.d
        
        if (arg3 != 0 && *(r15_1 + r11[0xe] + 0x10) == 0)
            int32_t* rdx_18 = *arg3
            int64_t r8_14 = sx.q(arg3[1].d)
            int32_t* rax_17 = rdx_18
            int32_t* rsi_2 = r8_14 << 2
            void* rcx_17 = rsi_2 + rdx_18
            
            if (rdx_18 != rcx_17)
                while (*rax_17 != rbx_2.d)
                    rax_17 = &rax_17[1]
                    
                    if (rax_17 == rcx_17)
                        goto label_141cd0791
            
            if (rdx_18 == rcx_17 || ((rax_17 - rdx_18) s>> 2).d == 0xffffffff)
            label_141cd0791:
                int32_t rax_20 = (r8_14 + 1).d
                arg3[1].d = rax_20
                
                if (rax_20 s> *(arg3 + 0xc))
                    sub_1405a4cf0(arg3)
                    r11 = arg1
                
                *(rsi_2 + *arg3) = rbx_2.d
        
        i += 1
        r10_2 = var_58
    
    void* r15_2 = &r11[0x1c]
    int64_t rbx_3 = sx.q(*(rsi + *r15_2 + 0x20))
    int64_t r14_6 = rbx_3 << 4
    int64_t* rsi_4 = r11[0x23] + r14_6
    int32_t* r9_8 = *rsi_4
    int64_t r8_15 = sx.q(rsi_4[1].d)
    int32_t* rdx_20 = r9_8
    void* rcx_20 = &r9_8[r8_15]
    
    if (r9_8 != rcx_20)
        do
            if (*rdx_20 == arg_10)
                int32_t rdx_22 = ((rdx_20 - r9_8) s>> 2).d
                
                if (rdx_22 != 0xffffffff)
                    void* rcx_21 = &r9_8[sx.q(rdx_22)]
                    memmove(rcx_21, rcx_21 + 4, (r8_15.d - rdx_22 - 1) << 2)
                    rsi_4[1].d -= 1
                    r11 = arg1
                
                break
            
            rdx_20 = &rdx_20[1]
        while (rdx_20 != rcx_20)
    
    if (arg5 != 0 && *(r11[0x23] + r14_6 + 8) == 0)
        int32_t* rdx_24 = *arg5
        int64_t r8_20 = sx.q(arg5[1].d)
        int32_t* rcx_22 = rdx_24
        int32_t* r14_7 = r8_20 << 2
        void* rax_25 = rdx_24 + r14_7
        
        if (rdx_24 != rax_25)
            while (*rcx_22 != rbx_3.d)
                rcx_22 = &rcx_22[1]
                
                if (rcx_22 == rax_25)
                    goto label_141cd08ab
        
        if (rdx_24 == rax_25 || ((rcx_22 - rdx_24) s>> 2).d == 0xffffffff)
        label_141cd08ab:
            int32_t rax_26 = (r8_20 + 1).d
            arg5[1].d = rax_26
            
            if (rax_26 s> *(arg5 + 0xc))
                sub_1405a4cf0(arg5)
            
            *(r14_7 + *arg5) = rbx_3.d
    
    sub_141ce0dd0(r15_2, arg_10, 1)
    rbx_4 = arg1
    sub_1409d8140(&rbx_4[0x56], arg_10)

sub_140906230(&rbx_4[0x15], rdi.d, 1)
return sub_1409d8140(&rbx_4[0x4b], rdi.d) __tailcall
