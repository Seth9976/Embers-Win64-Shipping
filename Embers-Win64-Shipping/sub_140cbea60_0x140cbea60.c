// 函数: sub_140cbea60
// 地址: 0x140cbea60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
char r9 = *(arg1 + 0x28)
int64_t* rbx = *(arg1 + 0x20)

if (rax u< data_143e1d660 || rax u>= data_143e1d668)
    arg1.b = 0
else
    arg1.b = 1

if (rax != 0 && arg1.b == 0)
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(*(rax + 0xc))
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_1
    int64_t rdx_2 = sx.q(zx.d(rax_3.w) - rdx_1) * 3
    int64_t rcx_3 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3))
    void* r8_1 = rcx_3 + (rdx_2 << 3)
    int32_t rdx_3 = *(rcx_3 + (rdx_2 << 3) + 8)
    uint8_t rax_9 = (rdx_3 u>> 0x1d).b
    
    if ((rax_9 & 1) != 0 && r9 != 0)
        *arg2 = 0
        return rax_9
    
    char arg_8
    void* r13_3
    int64_t r15
    
    if (((rdx_3 u>> 0x1c).b & 1) == 0)
        rax = zx.q(*(r8_1 + 0xc))
        
        if (rax.d s> 0 && ((rdx_3 u>> 0x17).b & 1) == 0)
            *(r8_1 + 8) = rdx_3 | 0x800000
            int16_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rax.d)
            uint32_t rdx_23 = zx.d(temp2_1)
            int32_t rax_41 = temp3_1 + rdx_23
            int64_t rdx_24 = sx.q(zx.d(rax_41.w) - rdx_23) * 3
            int64_t rcx_31 = *(data_143e1d9a0 + (sx.q(rax_41 s>> 0x10) << 3))
            void* r8_3 = rcx_31 + (rdx_24 << 3)
            int32_t rcx_32 = *(rcx_31 + (rdx_24 << 3) + 8)
            rax = zx.q(rcx_32 u>> 0x1c)
            
            if ((rax.b & 1) != 0)
                int32_t rax_47 = *(r8_3 + 0xc)
                *(r8_3 + 8) = rcx_32 & 0xefffffff
                int64_t r13
                r13.b = 0
                void* r11_3 = sx.q(not.d(rax_47)) * 0x50 + data_143e1d678
                arg_8.q = r11_3
                int32_t* i = *(r11_3 + 0x18)
                
                for (void* r10_2 = &i[sx.q(*(r11_3 + 0x20))]; i != r10_2; i = &i[1])
                    int32_t rax_51 = *i
                    
                    if (rax_51 s>= 0)
                        int64_t rdx_26 = sx.q(zx.d(rax_51.w)) * 3
                        int64_t rcx_35 = *(data_143e1d9a0 + (sx.q(rax_51 s>> 0x10) << 3))
                        int32_t rcx_36 = *(rcx_35 + (rdx_26 << 3) + 8)
                        
                        if (((rcx_36 u>> 0x1d).b & 1) != 0)
                            *i = 0xffffffff
                            r13.b = 1
                        else
                            *(rcx_35 + (rdx_26 << 3) + 8) = rcx_36 & 0xefffffff
                
                int32_t* rdi_4 = *(r11_3 + 0x28)
                r15.b = 0
                rax = sx.q(*(r11_3 + 0x30))
                void* r12_2 = &rdi_4[rax]
                
                if (rdi_4 != r12_2)
                    do
                        rax = zx.q(*rdi_4)
                        
                        if (rax.d s>= 0)
                            int64_t rdx_28 = sx.q(zx.d(rax.w)) * 3
                            int64_t rcx_39 = *(data_143e1d9a0 + (sx.q(rax.d s>> 0x10) << 3))
                            int64_t* rsi_3 = rcx_39 + (rdx_28 << 3)
                            int32_t rdx_29 = *(rcx_39 + (rdx_28 << 3) + 8)
                            rax = zx.q(rdx_29 u>> 0x1d)
                            
                            if ((rax.b & 1) != 0)
                                *rdi_4 = 0xffffffff
                                r15.b = 1
                            else
                                rax = zx.q(rdx_29 u>> 0x1c)
                                
                                if ((rax.b & 1) == 0)
                                    int32_t rcx_43 = *(rsi_3 + 0xc)
                                    
                                    if (rcx_43 s> 0)
                                        rax = zx.q(rdx_29 u>> 0x17)
                                        
                                        if ((rax.b & 1) == 0)
                                            uint32_t rax_64 = zx.d(rcx_43.w)
                                            rsi_3[1].d = rdx_29 | 0x800000
                                            
                                            if (rcx_43 s< 0)
                                                rcx_43 += 0xffff
                                                rax_64 -= 0x10000
                                            
                                            int64_t rdx_34 = sx.q(rax_64) * 3
                                            int64_t rcx_46 =
                                                *(data_143e1d9a0 + (sx.q(rcx_43 s>> 0x10) << 3))
                                            void* r8_4 = rcx_46 + (rdx_34 << 3)
                                            int32_t rcx_47 = *(rcx_46 + (rdx_34 << 3) + 8)
                                            rax = zx.q(rcx_47 u>> 0x1c)
                                            
                                            if ((rax.b & 1) != 0)
                                                *(r8_4 + 8) = rcx_47 & 0xefffffff
                                                rax = sub_140cc2a60(not.d(*(r8_4 + 0xc)), rbx)
                                else
                                    int64_t r14_4 = *rsi_3
                                    rsi_3[1].d = rdx_29 & 0xefffffff
                                    int64_t rbp_3 = sx.q(rbx[1].d)
                                    int32_t rax_62 = (rbp_3 + 1).d
                                    rbx[1].d = rax_62
                                    
                                    if (rax_62 s> *(rbx + 0xc))
                                        sub_1405a4d70(rbx)
                                    
                                    rax = *rbx
                                    *(rax + (rbp_3 << 3)) = r14_4
                                    int32_t rcx_41 = *(rsi_3 + 0xc)
                                    
                                    if (rcx_41 s< 0)
                                        rax = sub_140cc2a60(not.d(rcx_41), rbx)
                        
                        rdi_4 = &rdi_4[1]
                    while (rdi_4 != r12_2)
                    
                    if (r15.b != 0 || r13.b != 0)
                        goto label_140cbef9d
                else if (r13.b != 0)
                label_140cbef9d:
                    r13_3 = arg_8.q
                    int64_t rdi_5 = 0
                    int32_t* rsi_4 = *(r13_3 + 8)
                    rax = &rsi_4[sx.q(*(r13_3 + 0x10))]
                    uint64_t r14_6 = sx.q(*(r13_3 + 0x10)) << 2 u>> 2
                    
                    if (rsi_4 u> rax)
                        r14_6 = 0
                    
                    if (r14_6 != 0)
                        do
                            int32_t rax_69 = *rsi_4
                            uint32_t rdx_36 = zx.d(rax_69.w)
                            
                            if (rax_69 s< 0)
                                rax_69 += 0xffff
                                rdx_36 -= 0x10000
                            
                            int64_t rbp_4 = sx.q(rbx[1].d)
                            int32_t rax_73 = (rbp_4 + 1).d
                            int64_t r15_2 = *(*(data_143e1d9a0 + (sx.q(rax_69 s>> 0x10) << 3))
                                + sx.q(rdx_36) * 0x18)
                            rbx[1].d = rax_73
                            
                            if (rax_73 s> *(rbx + 0xc))
                                sub_1405a4d70(rbx)
                            
                            rax = *rbx
                            rsi_4 = &rsi_4[1]
                            rdi_5 += 1
                            *(rax + (rbp_4 << 3)) = r15_2
                        while (rdi_5 != r14_6)
                    
                    *(r13_3 + 0x48) = 1
                    data_143e1d69c = 1
    else
        int32_t rdx_4 = rdx_3 & 0xefffffff
        *(r8_1 + 8) = rdx_4
        
        if (((rdx_4 u>> 0x18).b & 1) != 0)
            arg_8 = 0
            r13_3 = sx.q(not.d(*(r8_1 + 0xc))) * 0x50 + data_143e1d678
            int32_t* i_1 = *(r13_3 + 0x18)
            
            for (void* r10_1 = &i_1[sx.q(*(r13_3 + 0x20))]; i_1 != r10_1; i_1 = &i_1[1])
                int32_t rax_17 = *i_1
                
                if (rax_17 s>= 0)
                    int64_t rdx_8 = sx.q(zx.d(rax_17.w)) * 3
                    int64_t rcx_7 = *(data_143e1d9a0 + (sx.q(rax_17 s>> 0x10) << 3))
                    int32_t rcx_8 = *(rcx_7 + (rdx_8 << 3) + 8)
                    
                    if (((rcx_8 u>> 0x1d).b & 1) != 0)
                        *i_1 = 0xffffffff
                        arg_8 = 1
                    else
                        *(rcx_7 + (rdx_8 << 3) + 8) = rcx_8 & 0xefffffff
            
            int32_t* rdi_2 = *(r13_3 + 0x28)
            r15.b = 0
            rax = sx.q(*(r13_3 + 0x30))
            void* r12_1 = &rdi_2[rax]
            
            if (rdi_2 != r12_1)
                do
                    rax = zx.q(*rdi_2)
                    
                    if (rax.d s>= 0)
                        int64_t rdx_10 = sx.q(zx.d(rax.w)) * 3
                        int64_t rcx_11 = *(data_143e1d9a0 + (sx.q(rax.d s>> 0x10) << 3))
                        int64_t* rsi_1 = rcx_11 + (rdx_10 << 3)
                        int32_t rdx_11 = *(rcx_11 + (rdx_10 << 3) + 8)
                        rax = zx.q(rdx_11 u>> 0x1d)
                        
                        if ((rax.b & 1) != 0)
                            *rdi_2 = 0xffffffff
                            r15.b = 1
                        else
                            rax = zx.q(rdx_11 u>> 0x1c)
                            
                            if ((rax.b & 1) == 0)
                                int32_t rcx_15 = *(rsi_1 + 0xc)
                                
                                if (rcx_15 s> 0)
                                    rax = zx.q(rdx_11 u>> 0x17)
                                    
                                    if ((rax.b & 1) == 0)
                                        uint32_t rax_30 = zx.d(rcx_15.w)
                                        rsi_1[1].d = rdx_11 | 0x800000
                                        
                                        if (rcx_15 s< 0)
                                            rcx_15 += 0xffff
                                            rax_30 -= 0x10000
                                        
                                        int64_t rdx_16 = sx.q(rax_30) * 3
                                        int64_t rcx_18 =
                                            *(data_143e1d9a0 + (sx.q(rcx_15 s>> 0x10) << 3))
                                        void* r8_2 = rcx_18 + (rdx_16 << 3)
                                        int32_t rcx_19 = *(rcx_18 + (rdx_16 << 3) + 8)
                                        rax = zx.q(rcx_19 u>> 0x1c)
                                        
                                        if ((rax.b & 1) != 0)
                                            *(r8_2 + 8) = rcx_19 & 0xefffffff
                                            rax = sub_140cc2a60(not.d(*(r8_2 + 0xc)), rbx)
                            else
                                int64_t r14_1 = *rsi_1
                                rsi_1[1].d = rdx_11 & 0xefffffff
                                int64_t rbp_1 = sx.q(rbx[1].d)
                                int32_t rax_28 = (rbp_1 + 1).d
                                rbx[1].d = rax_28
                                
                                if (rax_28 s> *(rbx + 0xc))
                                    sub_1405a4d70(rbx)
                                
                                rax = *rbx
                                *(rax + (rbp_1 << 3)) = r14_1
                                int32_t rcx_13 = *(rsi_1 + 0xc)
                                
                                if (rcx_13 s< 0)
                                    rax = sub_140cc2a60(not.d(rcx_13), rbx)
                    
                    rdi_2 = &rdi_2[1]
                while (rdi_2 != r12_1)
                
                if (r15.b != 0 || arg_8 != 0)
                    goto label_140cbed03
            else if (arg_8 != 0)
            label_140cbed03:
                int64_t rdi_3 = 0
                int32_t* rsi_2 = *(r13_3 + 8)
                rax = &rsi_2[sx.q(*(r13_3 + 0x10))]
                uint64_t r14_3 = sx.q(*(r13_3 + 0x10)) << 2 u>> 2
                
                if (rsi_2 u> rax)
                    r14_3 = 0
                
                if (r14_3 != 0)
                    do
                        int32_t rax_35 = *rsi_2
                        uint32_t rdx_18 = zx.d(rax_35.w)
                        
                        if (rax_35 s< 0)
                            rax_35 += 0xffff
                            rdx_18 -= 0x10000
                        
                        int64_t rbp_2 = sx.q(rbx[1].d)
                        int32_t rax_39 = (rbp_2 + 1).d
                        int64_t r15_1 = *(*(data_143e1d9a0 + (sx.q(rax_35 s>> 0x10) << 3))
                            + sx.q(rdx_18) * 0x18)
                        rbx[1].d = rax_39
                        
                        if (rax_39 s> *(rbx + 0xc))
                            sub_1405a4d70(rbx)
                        
                        rax = *rbx
                        rsi_2 = &rsi_2[1]
                        rdi_3 += 1
                        *(rax + (rbp_2 << 3)) = r15_1
                    while (rdi_3 != r14_3)
                
                *(r13_3 + 0x48) = 1
                data_143e1d69c = 1
        else
            int64_t rdi_1 = sx.q(rbx[1].d)
            int32_t rax_12 = (rdi_1 + 1).d
            rbx[1].d = rax_12
            
            if (rax_12 s> *(rbx + 0xc))
                sub_1405a4d70(rbx)
            
            rax = *arg2
            *(*rbx + (rdi_1 << 3)) = rax

return rax
