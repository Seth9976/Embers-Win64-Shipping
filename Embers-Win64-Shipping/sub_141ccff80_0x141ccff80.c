// 函数: sub_141ccff80
// 地址: 0x141ccff80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
int64_t* rsi = &arg1[0x1c]
int64_t* r13 = arg1
int64_t* r14 = arg4
int64_t rax = *rsi
int64_t rdx_1 = rbp * 5
int32_t* rcx = *(rax + (rdx_1 << 3) + 0x10)
void* rax_1 = rax + (rdx_1 << 3)
int32_t* var_80 = rcx
void* rax_3 = &rcx[sx.q(*(rax_1 + 0x18))]

if (rcx != rax_3)
    int64_t* r10_1 = &r13[0xe]
    int64_t* var_70_1 = r10_1
    void* r12_1 = &r13[0x15]
    int64_t i_1 = 0
    
    do
        int64_t rdi_1 = sx.q(*rcx)
        int64_t i_2 = 0
        int64_t rdx_4 = (rdi_1 << 4) + *r12_1
        int64_t var_68_1 = rdx_4
        int64_t i
        
        do
            int64_t rsi_1 = sx.q(*(rdx_4 + (i_2 << 2)))
            i = i_2 + 1
            int64_t r8 = r13[7]
            
            if (i_2 != 2)
                i_1 = i
            
            int64_t rax_5 = *r13
            int32_t rdx_5 = *(r8 + sx.q(*(rdx_4 + (i_1 << 2))) * 0x18)
            int64_t rcx_2 = rsi_1 * 3
            int64_t r8_1 = sx.q(*(r8 + (rcx_2 << 3)))
            int64_t rbp_1 = rcx_2 << 3
            int64_t rcx_4 = r8_1 << 5
            int32_t* r9 = *(rcx_4 + rax_5 + 0x10)
            void* r11_1 = &r9[sx.q(*(rcx_4 + rax_5 + 0x18))]
            
            if (r9 != r11_1)
                int64_t r14_1 = *r10_1
                
                do
                    int64_t rbx_1 = sx.q(*r9)
                    int64_t rax_7 = rbx_1 * 3
                    int32_t rcx_5 = *(r14_1 + (rax_7 << 3))
                    int32_t rax_8 = *(r14_1 + (rax_7 << 3) + 4)
                    
                    if ((rcx_5 == r8_1.d && rax_8 == rdx_5) || (rcx_5 == rdx_5 && rax_8 == r8_1.d))
                        if (rbx_1.d == data_143a1c6bc)
                            break
                        
                        int64_t r12_2 = rbx_1 * 0x18
                        void* r15_1 = r12_2 + r14_1
                        int64_t r9_1 = sx.q(*(r15_1 + 0x10))
                        int64_t rcx_6
                        int64_t rdx_6
                        int64_t r8_2
                        
                        if (r9_1.d == 2)
                            int32_t* rax_10 = *(r15_1 + 8)
                            r8_2 = r13[0x15]
                            rdx_6 = sx.q(rax_10[1])
                            rcx_6 = sx.q(*rax_10)
                        
                        if (r9_1.d != 2
                                || *(r8_2 + rcx_6 * 0x10 + 0xc) != *(r8_2 + rdx_6 * 0x10 + 0xc))
                            int32_t* r8_6 = *(r15_1 + 8)
                            int32_t* rdx_12 = r8_6
                            void* rcx_12 = &r8_6[r9_1]
                            
                            if (r8_6 != rcx_12)
                                do
                                    if (*rdx_12 == rdi_1.d)
                                        int32_t rdx_14 = ((rdx_12 - r8_6) s>> 2).d
                                        
                                        if (rdx_14 != 0xffffffff)
                                            void* rcx_13 = &r8_6[sx.q(rdx_14)]
                                            memmove(rcx_13, rcx_13 + 4, (r9_1.d - rdx_14 - 1) << 2)
                                            *(r15_1 + 0x10) -= 1
                                        
                                        break
                                    
                                    rdx_12 = &rdx_12[1]
                                while (rdx_12 != rcx_12)
                            
                            if (arg3 != 0 && *(r12_2 + r13[0xe] + 0x10) == 0)
                                void* rdx_16 = *arg3
                                int64_t r8_9 = sx.q(arg3[1].d)
                                void* rcx_14 = rdx_16
                                int32_t* r14_6 = r8_9 << 2
                                void* rax_17 = rdx_16 + r14_6
                                
                                if (rdx_16 != rax_17)
                                    while (*rcx_14 != rbx_1.d)
                                        rcx_14 += 4
                                        
                                        if (rcx_14 == rax_17)
                                            goto label_141cd026b
                                
                                if (rdx_16 == rax_17 || ((rcx_14 - rdx_16) s>> 2).d == 0xffffffff)
                                label_141cd026b:
                                    int32_t rax_18 = (r8_9 + 1).d
                                    arg3[1].d = rax_18
                                    
                                    if (rax_18 s> *(arg3 + 0xc))
                                        sub_1405a4cf0(arg3)
                                    
                                    *(r14_6 + *arg3) = rbx_1.d
                        else
                            int64_t r13_1 = 2
                            int64_t r12_3 = 0
                            
                            if (r15_1 u> r15_1 + 8)
                                r13_1 = 0
                            
                            if (r15_1 u<= r15_1 + 8)
                                do
                                    void* r14_5 = (sx.q(*r15_1) << 5) + *arg1
                                    int32_t* r8_3 = *(r14_5 + 0x10)
                                    int64_t r9_2 = sx.q(*(r14_5 + 0x18))
                                    int32_t* rax_12 = r8_3
                                    void* rdx_8 = &r8_3[r9_2]
                                    
                                    if (r8_3 != rdx_8)
                                        do
                                            if (*rax_12 == rbx_1.d)
                                                int32_t rax_14 = ((rax_12 - r8_3) s>> 2).d
                                                
                                                if (rax_14 != 0xffffffff)
                                                    void* rcx_9 = &r8_3[sx.q(rax_14)]
                                                    memmove(rcx_9, rcx_9 + 4, 
                                                        (r9_2.d - rax_14 - 1) << 2)
                                                    *(r14_5 + 0x18) -= 1
                                                
                                                break
                                            
                                            rax_12 = &rax_12[1]
                                        while (rax_12 != rdx_8)
                                    
                                    r15_1 += 4
                                    r12_3 += 1
                                while (r12_3 != r13_1)
                            
                            sub_1409d8340(var_70_1, rbx_1.d, 1)
                            r13 = arg1
                            sub_1409d8140(&r13[0x40], rbx_1.d)
                        
                        break
                    
                    r9 = &r9[1]
                while (r9 != r11_1)
                
                r14 = arg4
            
            void* rbx_3 = r13[7] + rbp_1
            int32_t* r8_10 = *(rbx_3 + 8)
            int64_t r9_7 = sx.q(*(rbx_3 + 0x10))
            int32_t* rdx_18 = r8_10
            void* rcx_18 = &r8_10[r9_7]
            
            if (r8_10 != rcx_18)
                do
                    if (*rdx_18 == rdi_1.d)
                        int32_t rdx_20 = ((rdx_18 - r8_10) s>> 2).d
                        
                        if (rdx_20 != 0xffffffff)
                            void* rcx_19 = &r8_10[sx.q(rdx_20)]
                            memmove(rcx_19, rcx_19 + 4, (r9_7.d - rdx_20 - 1) << 2)
                            *(rbx_3 + 0x10) -= 1
                        
                        break
                    
                    rdx_18 = &rdx_18[1]
                while (rdx_18 != rcx_18)
            
            if (r14 != 0 && *(r13[7] + rbp_1 + 0x10) == 0)
                int32_t* rdx_22 = *r14
                int64_t r8_13 = sx.q(r14[1].d)
                int32_t* rcx_20 = rdx_22
                void* rax_22 = &rdx_22[r8_13]
                
                if (rdx_22 != rax_22)
                    while (*rcx_20 != rsi_1.d)
                        rcx_20 = &rcx_20[1]
                        
                        if (rcx_20 == rax_22)
                            goto label_141cd033b
                
                if (rdx_22 == rax_22 || ((rcx_20 - rdx_22) s>> 2).d == 0xffffffff)
                label_141cd033b:
                    int32_t rax_23 = (r8_13 + 1).d
                    r14[1].d = rax_23
                    
                    if (rax_23 s> *(r14 + 0xc))
                        sub_1405a4cf0(r14)
                    
                    *((r8_13 << 2) + *r14) = rsi_1.d
            
            rdx_4 = var_68_1
            i_2 = i
            r10_1 = &r13[0xe]
            i_1 = 0
        while (i s< 3)
        r12_1 = &r13[0x15]
        sub_140906230(r12_1, rdi_1.d, 1)
        sub_1409d8140(&r13[0x4b], rdi_1.d)
        r10_1 = &r13[0xe]
        rcx = &var_80[1]
        i_1 = 0
        var_80 = rcx
    while (rcx != rax_3)
    
    rbp = zx.q(rbp.d)
    rsi = &r13[0x1c]

int64_t* rbx_7 = (sx.q(*(rax_1 + 0x20)) << 4) + r13[0x23]
int32_t* r9_10 = *rbx_7
int64_t r8_14 = sx.q(rbx_7[1].d)
int32_t* rdx_26 = r9_10
void* rcx_27 = &r9_10[r8_14]

if (r9_10 != rcx_27)
    do
        if (*rdx_26 == rbp.d)
            int32_t rdx_28 = ((rdx_26 - r9_10) s>> 2).d
            
            if (rdx_28 != 0xffffffff)
                void* rcx_28 = &r9_10[sx.q(rdx_28)]
                memmove(rcx_28, rcx_28 + 4, (r8_14.d - rdx_28 - 1) << 2)
                rbx_7[1].d -= 1
            
            break
        
        rdx_26 = &rdx_26[1]
    while (rdx_26 != rcx_27)

if (arg5 != 0 && rbx_7[1].d == 0)
    sub_1408d92c0(arg5, rax_1 + 0x20)

sub_141ce0dd0(rsi, rbp.d, 1)
return sub_1409d8140(&r13[0x56], rbp.d) __tailcall
