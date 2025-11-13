// 函数: sub_1420e5200
// 地址: 0x1420e5200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0)
    return 

void* rax = arg1
int64_t r15_1 = arg2
int64_t rcx = sx.q(arg3)
int64_t r14_1 = 0
int64_t var_50_1 = 0
int64_t var_58_1 = rcx

do
    int64_t* r8 = *(r15_1 + (r14_1 << 3))
    int32_t* rbp_1 = *(rax + 0x18)
    int64_t* rsi_1 = *(rax + 0x20)
    
    if (r8 != 0)
        int32_t i = *(r8 + 0xc)
        void* rdi_1
        
        if (i s>= data_143e1d9b4)
            rdi_1 = nullptr
        else
            uint32_t rdx = zx.d(i.w)
            int32_t i_4 = i
            
            if (i s< 0)
                i_4 = i + 0xffff
                rdx -= 0x10000
            
            rdi_1 = *(data_143e1d9a0 + (sx.q(i_4 s>> 0x10) << 3)) + sx.q(rdx) * 0x18
            rcx = var_58_1
        
        int32_t i_5 = *(rdi_1 + 0xc)
        
        if (i_5 != *rbp_1)
            char rcx_3 = *(rdi_1 + 0xb) & 1
            
            if (rcx_3 != 0 || i_5 != 0)
                if (rcx_3 == 0)
                    i = i_5
                
                void* const rax_19
                
                if (i s>= data_143e1d9b4)
                    rax_19 = nullptr
                else
                    uint32_t rdx_8 = zx.d(i.w)
                    int32_t i_6 = i
                    
                    if (i s< 0)
                        i_6 = i + 0xffff
                        rdx_8 -= 0x10000
                    
                    rax_19 = *(data_143e1d9a0 + (sx.q(i_6 s>> 0x10) << 3)) + sx.q(rdx_8) * 0x18
                
                void* rdi_2 = *(rbp_1 + 8)
                int32_t* r8_3 = *(rdi_2 + 0x18)
                int64_t rdx_10 = sx.q(*(rdi_2 + 0x20))
                int32_t* rcx_14 = r8_3
                void* r13_3 = sx.q(not.d(*(rax_19 + 0xc))) * 0x50 + data_143e1d678
                void* rax_23 = &r8_3[rdx_10]
                
                if (r8_3 != rax_23)
                    while (*rcx_14 != i)
                        rcx_14 = &rcx_14[1]
                        
                        if (rcx_14 == rax_23)
                            goto label_1420e546e
                
                if (r8_3 == rax_23 || ((rcx_14 - r8_3) s>> 2).d == 0xffffffff)
                label_1420e546e:
                    int32_t rax_24 = (rdx_10 + 1).d
                    *(rdi_2 + 0x20) = rax_24
                    
                    if (rax_24 s> *(rdi_2 + 0x24))
                        sub_1405a4cf0(rdi_2 + 0x18)
                    
                    *((rdx_10 << 2) + *(rdi_2 + 0x18)) = i
                
                sub_1408d92c0(r13_3 + 0x38, rbp_1)
                int64_t rbp_2 = 0
                int32_t* rsi_4 = *(r13_3 + 0x18)
                uint64_t r15_3 = sx.q(*(r13_3 + 0x20)) << 2 u>> 2
                
                if (rsi_4 u> &rsi_4[sx.q(*(r13_3 + 0x20))])
                    r15_3 = 0
                
                if (r15_3 != 0)
                    do
                        int32_t i_1 = *rsi_4
                        
                        if (i_1 != *rbp_1)
                            void* rdi_3 = *(rbp_1 + 8)
                            int32_t* rdx_12 = *(rdi_3 + 0x18)
                            int64_t r8_4 = sx.q(*(rdi_3 + 0x20))
                            int32_t* rcx_19 = rdx_12
                            void* rax_28 = &rdx_12[r8_4]
                            
                            if (rdx_12 != rax_28)
                                while (*rcx_19 != i_1)
                                    rcx_19 = &rcx_19[1]
                                    
                                    if (rcx_19 == rax_28)
                                        goto label_1420e550b
                            
                            if (rdx_12 == rax_28 || ((rcx_19 - rdx_12) s>> 2).d == 0xffffffff)
                            label_1420e550b:
                                int32_t rax_29 = (r8_4 + 1).d
                                *(rdi_3 + 0x20) = rax_29
                                
                                if (rax_29 s> *(rdi_3 + 0x24))
                                    sub_1405a4cf0(rdi_3 + 0x18)
                                
                                *((r8_4 << 2) + *(rdi_3 + 0x18)) = i_1
                        
                        rsi_4 = &rsi_4[1]
                        rbp_2 += 1
                    while (rbp_2 != r15_3)
                
                int32_t* r14_3 = *(r13_3 + 0x28)
                int64_t rsi_5 = 0
                uint64_t r12_2 = sx.q(*(r13_3 + 0x30)) << 2 u>> 2
                
                if (r14_3 u> &r14_3[sx.q(*(r13_3 + 0x30))])
                    r12_2 = 0
                
                if (r12_2 != 0)
                    do
                        void* rbx_2 = *(rbp_1 + 8)
                        int32_t i_2 = *r14_3
                        int32_t* rdx_14 = *(rbx_2 + 0x28)
                        int64_t r8_5 = sx.q(*(rbx_2 + 0x30))
                        int32_t* rax_33 = rdx_14
                        void* rcx_23 = &rdx_14[r8_5]
                        
                        if (rdx_14 != rcx_23)
                            while (*rax_33 != i_2)
                                rax_33 = &rax_33[1]
                                
                                if (rax_33 == rcx_23)
                                    goto label_1420e55ae
                        
                        if (rdx_14 == rcx_23 || ((rax_33 - rdx_14) s>> 2).d == 0xffffffff)
                        label_1420e55ae:
                            int32_t rax_36 = (r8_5 + 1).d
                            *(rbx_2 + 0x30) = rax_36
                            
                            if (rax_36 s> *(rbx_2 + 0x34))
                                sub_1405a4cf0(rbx_2 + 0x28)
                            
                            *((r8_5 << 2) + *(rbx_2 + 0x28)) = i_2
                        
                        r14_3 = &r14_3[1]
                        rsi_5 += 1
                    while (rsi_5 != r12_2)
                
                r15_1 = arg2
                r14_1 = var_50_1
            else if (i s> data_143e1d994)
                if (sub_1420de8c0(rbp_1, r8) == 0)
                label_1420e536b:
                    void* rbx_1 = *(rbp_1 + 8)
                    int32_t* rdx_6 = *(rbx_1 + 0x28)
                    int64_t r8_2 = sx.q(*(rbx_1 + 0x30))
                    int32_t* rcx_8 = rdx_6
                    int32_t i_3 = *(*(r15_1 + (r14_1 << 3)) + 0xc)
                    void* rax_13 = &rdx_6[r8_2]
                    
                    if (rdx_6 != rax_13)
                        while (*rcx_8 != i_3)
                            rcx_8 = &rcx_8[1]
                            
                            if (rcx_8 == rax_13)
                                goto label_1420e53b1
                    
                    if (rdx_6 == rax_13 || ((rcx_8 - rdx_6) s>> 2).d == 0xffffffff)
                    label_1420e53b1:
                        int32_t rax_14 = (r8_2 + 1).d
                        *(rbx_1 + 0x30) = rax_14
                        
                        if (rax_14 s> *(rbx_1 + 0x34))
                            sub_1405a4cf0(rbx_1 + 0x28)
                        
                        *((r8_2 << 2) + *(rbx_1 + 0x28)) = i_3
                else
                    int64_t* r9_1 = *(r15_1 + (r14_1 << 3))
                    
                    if ((r9_1[1].d & 0x1400) != 0)
                        goto label_1420e536b
                    
                    int32_t r10_1 = *(r9_1 + 0xc)
                    void* const rax_9
                    
                    if (r10_1 s>= data_143e1d9b4)
                        rax_9 = nullptr
                    else
                        uint32_t rdx_3 = zx.d(r10_1.w)
                        int32_t rax_5 = r10_1
                        
                        if (r10_1 s< 0)
                            rax_5 = r10_1 + 0xffff
                            rdx_3 -= 0x10000
                        
                        rax_9 = *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(rdx_3) * 0x18
                    
                    if (((*(rax_9 + 8) u>> 0x1e).b & 1) != 0)
                        goto label_1420e536b
                    
                    sub_1420dc470(rbp_1, r10_1, rdi_1, r9_1, rsi_1, 1)
            
            rcx = var_58_1
        
        rax = arg1
    
    r14_1 += 1
    var_50_1 = r14_1
while (r14_1 s< rcx)
