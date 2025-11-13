// 函数: sub_140cbfbe0
// 地址: 0x140cbfbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0)
    return 

uint64_t arg_8 = arg1
int64_t r14_1 = arg2
uint64_t r9_1 = arg1
int64_t i = 0
void* r13
void* var_30_1 = r13
int64_t r15
int64_t var_38_1 = r15
int64_t i_1 = 0

do
    uint64_t rax = *(r14_1 + (i << 3))
    int64_t* rbx_1 = *(r9_1 + 0x20)
    
    if (rax u< data_143e1d660 || rax u>= data_143e1d668)
        arg1.b = 0
    else
        arg1.b = 1
    
    if (rax != 0 && arg1.b == 0)
        int32_t rax_2 = *(rax + 0xc)
        uint32_t rdx = zx.d(rax_2.w)
        
        if (rax_2 s< 0)
            rax_2 += 0xffff
            rdx -= 0x10000
        
        int64_t rdx_1 = sx.q(rdx) * 3
        int64_t rcx_1 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3))
        void* r8 = rcx_1 + (rdx_1 << 3)
        arg1 = zx.q(*(rcx_1 + (rdx_1 << 3) + 8))
        
        if (((arg1.d u>> 0x1d).b & 1) != 0 && *(r9_1 + 0x28) != 0)
            *(r14_1 + (i << 3)) = 0
        else if (((arg1.d u>> 0x1c).b & 1) == 0)
            int32_t rdx_17 = *(r8 + 0xc)
            
            if (rdx_17 s> 0 && ((arg1.d u>> 0x17).b & 1) == 0)
                uint32_t rax_37 = zx.d(rdx_17.w)
                *(r8 + 8) = arg1.d | 0x800000
                
                if (rdx_17 s< 0)
                    rdx_17 += 0xffff
                    rax_37 -= 0x10000
                
                int64_t rdx_19 = sx.q(rax_37) * 3
                int64_t rcx_20 = *(data_143e1d9a0 + (sx.q(rdx_17 s>> 0x10) << 3))
                void* r8_2 = rcx_20 + (rdx_19 << 3)
                arg1 = zx.q(*(rcx_20 + (rdx_19 << 3) + 8))
                
                if (((arg1.d u>> 0x1c).b & 1) != 0)
                    int32_t rax_41 = *(r8_2 + 0xc)
                    *(r8_2 + 8) = arg1.d & 0xefffffff
                    r13.b = 0
                    void* r11_6 = sx.q(not.d(rax_41)) * 0x50 + data_143e1d678
                    int32_t* j = *(r11_6 + 0x18)
                    
                    for (void* r10_2 = &j[sx.q(*(r11_6 + 0x20))]; j != r10_2; j = &j[1])
                        int32_t rax_45 = *j
                        
                        if (rax_45 s>= 0)
                            int64_t rdx_21 = sx.q(zx.d(rax_45.w)) * 3
                            int64_t rcx_22 = *(data_143e1d9a0 + (sx.q(rax_45 s>> 0x10) << 3))
                            arg1 = zx.q(*(rcx_22 + (rdx_21 << 3) + 8))
                            
                            if (((arg1.d u>> 0x1d).b & 1) != 0)
                                *j = 0xffffffff
                                r13.b = 1
                            else
                                *(rcx_22 + (rdx_21 << 3) + 8) = arg1.d & 0xefffffff
                    
                    int32_t* rdi_4 = *(r11_6 + 0x28)
                    r15.b = 0
                    void* r12_2 = &rdi_4[sx.q(*(r11_6 + 0x30))]
                    
                    if (rdi_4 != r12_2)
                        do
                            rax = zx.q(*rdi_4)
                            
                            if (rax.d s>= 0)
                                int64_t rdx_23 = sx.q(zx.d(rax.w)) * 3
                                arg1 = *(data_143e1d9a0 + (sx.q(rax.d s>> 0x10) << 3))
                                int64_t rsi_3 = arg1 + (rdx_23 << 3)
                                int32_t rdx_24 = *(arg1 + (rdx_23 << 3) + 8)
                                
                                if (((rdx_24 u>> 0x1d).b & 1) != 0)
                                    *rdi_4 = 0xffffffff
                                    r15.b = 1
                                else if (((rdx_24 u>> 0x1c).b & 1) == 0)
                                    arg1 = zx.q(*(rsi_3 + 0xc))
                                    
                                    if (arg1.d s> 0 && ((rdx_24 u>> 0x17).b & 1) == 0)
                                        uint32_t rax_58 = zx.d(arg1.w)
                                        *(rsi_3 + 8) = rdx_24 | 0x800000
                                        
                                        if (arg1.d s< 0)
                                            arg1 = zx.q(arg1.d + 0xffff)
                                            rax_58 -= 0x10000
                                        
                                        int64_t rdx_29 = sx.q(rax_58) * 3
                                        int64_t rcx_28 =
                                            *(data_143e1d9a0 + (sx.q(arg1.d s>> 0x10) << 3))
                                        void* r8_3 = rcx_28 + (rdx_29 << 3)
                                        arg1 = zx.q(*(rcx_28 + (rdx_29 << 3) + 8))
                                        
                                        if (((arg1.d u>> 0x1c).b & 1) != 0)
                                            *(r8_3 + 8) = arg1.d & 0xefffffff
                                            rax, arg1 = sub_140cc2a60(not.d(*(r8_3 + 0xc)), rbx_1)
                                else
                                    int64_t r14_5 = *rsi_3
                                    *(rsi_3 + 8) = rdx_24 & 0xefffffff
                                    int64_t rbp_3 = sx.q(rbx_1[1].d)
                                    int32_t rax_56 = (rbp_3 + 1).d
                                    rbx_1[1].d = rax_56
                                    
                                    if (rax_56 s> *(rbx_1 + 0xc))
                                        sub_1405a4d70(rbx_1)
                                    
                                    *(*rbx_1 + (rbp_3 << 3)) = r14_5
                                    arg1 = zx.q(*(rsi_3 + 0xc))
                                    
                                    if (arg1.d s< 0)
                                        rax, arg1 = sub_140cc2a60(not.d(arg1.d), rbx_1)
                            
                            rdi_4 = &rdi_4[1]
                        while (rdi_4 != r12_2)
                        
                        if (r15.b != 0)
                            goto label_140cc01b2
                        
                        i = i_1
                    
                    if (r13.b != 0)
                    label_140cc01b2:
                        r13 = r11_6
                        int64_t rbp_4 = 0
                        int32_t* rsi_4 = *(r13 + 8)
                        uint64_t r14_7 = sx.q(*(r13 + 0x10)) << 2 u>> 2
                        
                        if (rsi_4 u> &rsi_4[sx.q(*(r13 + 0x10))])
                            r14_7 = 0
                        
                        if (r14_7 != 0)
                            do
                                int32_t rax_63 = *rsi_4
                                uint32_t rdx_31 = zx.d(rax_63.w)
                                
                                if (rax_63 s< 0)
                                    rax_63 += 0xffff
                                    rdx_31 -= 0x10000
                                
                                int64_t rdi_5 = sx.q(rbx_1[1].d)
                                int32_t rax_67 = (rdi_5 + 1).d
                                r15 = *(*(data_143e1d9a0 + (sx.q(rax_63 s>> 0x10) << 3))
                                    + sx.q(rdx_31) * 0x18)
                                rbx_1[1].d = rax_67
                                
                                if (rax_67 s> *(rbx_1 + 0xc))
                                    sub_1405a4d70(rbx_1)
                                
                                rsi_4 = &rsi_4[1]
                                rbp_4 += 1
                                *(*rbx_1 + (rdi_5 << 3)) = r15
                            while (rbp_4 != r14_7)
                        
                    label_140cbff81:
                        i = i_1
                        *(r13 + 0x48) = 1
                        data_143e1d69c = 1
        else
            int32_t rcx_2 = arg1.d & 0xefffffff
            *(r8 + 8) = rcx_2
            
            if (((rcx_2 u>> 0x18).b & 1) != 0)
                r13.b = 0
                void* r11_3 = sx.q(not.d(*(r8 + 0xc))) * 0x50 + data_143e1d678
                int32_t* j_1 = *(r11_3 + 0x18)
                
                for (void* r10_1 = &j_1[sx.q(*(r11_3 + 0x20))]; j_1 != r10_1; j_1 = &j_1[1])
                    int32_t rax_13 = *j_1
                    
                    if (rax_13 s>= 0)
                        int64_t rdx_4 = sx.q(zx.d(rax_13.w)) * 3
                        int64_t rcx_5 = *(data_143e1d9a0 + (sx.q(rax_13 s>> 0x10) << 3))
                        arg1 = zx.q(*(rcx_5 + (rdx_4 << 3) + 8))
                        
                        if (((arg1.d u>> 0x1d).b & 1) != 0)
                            *j_1 = 0xffffffff
                            r13.b = 1
                        else
                            *(rcx_5 + (rdx_4 << 3) + 8) = arg1.d & 0xefffffff
                
                int32_t* rdi_2 = *(r11_3 + 0x28)
                r15.b = 0
                void* r12_1 = &rdi_2[sx.q(*(r11_3 + 0x30))]
                
                if (rdi_2 == r12_1)
                    goto label_140cbfee9
                
                do
                    rax = zx.q(*rdi_2)
                    
                    if (rax.d s>= 0)
                        int64_t rdx_6 = sx.q(zx.d(rax.w)) * 3
                        arg1 = *(data_143e1d9a0 + (sx.q(rax.d s>> 0x10) << 3))
                        int64_t rsi_1 = arg1 + (rdx_6 << 3)
                        int32_t rdx_7 = *(arg1 + (rdx_6 << 3) + 8)
                        
                        if (((rdx_7 u>> 0x1d).b & 1) != 0)
                            *rdi_2 = 0xffffffff
                            r15.b = 1
                        else if (((rdx_7 u>> 0x1c).b & 1) == 0)
                            arg1 = zx.q(*(rsi_1 + 0xc))
                            
                            if (arg1.d s> 0 && ((rdx_7 u>> 0x17).b & 1) == 0)
                                uint32_t rax_26 = zx.d(arg1.w)
                                *(rsi_1 + 8) = rdx_7 | 0x800000
                                
                                if (arg1.d s< 0)
                                    arg1 = zx.q(arg1.d + 0xffff)
                                    rax_26 -= 0x10000
                                
                                int64_t rdx_12 = sx.q(rax_26) * 3
                                int64_t rcx_11 = *(data_143e1d9a0 + (sx.q(arg1.d s>> 0x10) << 3))
                                void* r8_1 = rcx_11 + (rdx_12 << 3)
                                arg1 = zx.q(*(rcx_11 + (rdx_12 << 3) + 8))
                                
                                if (((arg1.d u>> 0x1c).b & 1) != 0)
                                    *(r8_1 + 8) = arg1.d & 0xefffffff
                                    rax, arg1 = sub_140cc2a60(not.d(*(r8_1 + 0xc)), rbx_1)
                        else
                            int64_t r14_2 = *rsi_1
                            *(rsi_1 + 8) = rdx_7 & 0xefffffff
                            int64_t rbp_1 = sx.q(rbx_1[1].d)
                            int32_t rax_24 = (rbp_1 + 1).d
                            rbx_1[1].d = rax_24
                            
                            if (rax_24 s> *(rbx_1 + 0xc))
                                sub_1405a4d70(rbx_1)
                            
                            *(*rbx_1 + (rbp_1 << 3)) = r14_2
                            arg1 = zx.q(*(rsi_1 + 0xc))
                            
                            if (arg1.d s< 0)
                                rax, arg1 = sub_140cc2a60(not.d(arg1.d), rbx_1)
                    
                    rdi_2 = &rdi_2[1]
                while (rdi_2 != r12_1)
                
                if (r15.b != 0)
                    goto label_140cbfef2
                
                i = i_1
            label_140cbfee9:
                
                if (r13.b != 0)
                label_140cbfef2:
                    r13 = r11_3
                    int64_t rbp_2 = 0
                    int32_t* rsi_2 = *(r13 + 8)
                    uint64_t r14_4 = sx.q(*(r13 + 0x10)) << 2 u>> 2
                    
                    if (rsi_2 u> &rsi_2[sx.q(*(r13 + 0x10))])
                        r14_4 = 0
                    
                    if (r14_4 != 0)
                        do
                            int32_t rax_31 = *rsi_2
                            uint32_t rdx_14 = zx.d(rax_31.w)
                            
                            if (rax_31 s< 0)
                                rax_31 += 0xffff
                                rdx_14 -= 0x10000
                            
                            int64_t rdi_3 = sx.q(rbx_1[1].d)
                            int32_t rax_35 = (rdi_3 + 1).d
                            r15 = *(*(data_143e1d9a0 + (sx.q(rax_31 s>> 0x10) << 3))
                                + sx.q(rdx_14) * 0x18)
                            rbx_1[1].d = rax_35
                            
                            if (rax_35 s> *(rbx_1 + 0xc))
                                sub_1405a4d70(rbx_1)
                            
                            rsi_2 = &rsi_2[1]
                            rbp_2 += 1
                            *(*rbx_1 + (rdi_3 << 3)) = r15
                        while (rbp_2 != r14_4)
                    
                    goto label_140cbff81
            else
                int64_t rdi_1 = sx.q(rbx_1[1].d)
                int32_t rax_8 = (rdi_1 + 1).d
                rbx_1[1].d = rax_8
                
                if (rax_8 s> *(rbx_1 + 0xc))
                    sub_1405a4d70(rbx_1)
                
                *(*rbx_1 + (rdi_1 << 3)) = *(r14_1 + (i << 3))
    
    r9_1 = arg_8
    i += 1
    r14_1 = arg2
    i_1 = i
while (i s< sx.q(arg3))
