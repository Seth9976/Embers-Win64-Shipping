// 函数: sub_140cbe1a0
// 地址: 0x140cbe1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = *arg2
char r9 = *(arg1 + 0x28)
int64_t* r15 = *(arg1 + 0x20)

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
    
    rax = zx.q(rdx_3 u>> 0x1c)
    char arg_8
    int64_t rbp
    void* r13_3
    
    if ((rax.b & 1) == 0)
        if (*(r8_1 + 0xc) s> 0)
            rax = zx.q(rdx_3 u>> 0x17)
            
            if ((rax.b & 1) == 0 && not(test_bit(rdx_3, 0x17)))
                while (true)
                    rax = zx.q(rdx_3)
                    bool z_6
                    
                    if (rax.d == *(r8_1 + 8))
                        *(r8_1 + 8) = rdx_3 | 0x800000
                        z_6 = true
                    else
                        rax = zx.q(*(r8_1 + 8))
                        z_6 = false
                    
                    if (z_6)
                        break
                    
                    rdx_3 = *(r8_1 + 8)
                    
                    if (test_bit(rdx_3, 0x17))
                        return rax
                
                int16_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(*(r8_1 + 0xc))
                uint32_t rdx_21 = zx.d(temp2_1)
                int32_t rax_47 = temp3_1 + rdx_21
                int64_t rdx_22 = sx.q(zx.d(rax_47.w) - rdx_21) * 3
                int64_t rcx_35 = *(data_143e1d9a0 + (sx.q(rax_47 s>> 0x10) << 3))
                rax = zx.q(*(rcx_35 + (rdx_22 << 3) + 8))
                void* r8_4 = rcx_35 + (rdx_22 << 3)
                
                if (test_bit(rax.d, 0x1c))
                    while (true)
                        bool z_7
                        
                        if (rax.d == *(r8_4 + 8))
                            *(r8_4 + 8) = rax.d & 0xefffffff
                            z_7 = true
                        else
                            *(r8_4 + 8)
                            z_7 = false
                        
                        if (z_7)
                            break
                        
                        rax = zx.q(*(r8_4 + 8))
                        
                        if (not(test_bit(rax.d, 0x1c)))
                            return rax
                    
                    arg_8 = 0
                    r13_3 = sx.q(not.d(*(r8_4 + 0xc))) * 0x50 + data_143e1d678
                    int32_t* i = *(r13_3 + 0x18)
                    
                    for (void* r10_2 = &i[sx.q(*(r13_3 + 0x20))]; i != r10_2; i = &i[1])
                        int32_t rax_57 = *i
                        
                        if (rax_57 s>= 0)
                            int64_t rdx_24 = sx.q(zx.d(rax_57.w)) * 3
                            int64_t rcx_39 = *(data_143e1d9a0 + (sx.q(rax_57 s>> 0x10) << 3))
                            void* r8_5 = rcx_39 + (rdx_24 << 3)
                            int32_t rdx_25 = *(rcx_39 + (rdx_24 << 3) + 8)
                            
                            if (((rdx_25 u>> 0x1d).b & 1) != 0)
                                *i = 0xffffffff
                                arg_8 = 1
                            else if (((rdx_25 u>> 0x1c).b & 1) != 0 && test_bit(rdx_25, 0x1c))
                                do
                                    bool z_8
                                    
                                    if (rdx_25 == *(r8_5 + 8))
                                        *(r8_5 + 8) = rdx_25 & 0xefffffff
                                        z_8 = true
                                    else
                                        *(r8_5 + 8)
                                        z_8 = false
                                    
                                    if (z_8)
                                        break
                                    
                                    rdx_25 = *(r8_5 + 8)
                                while (test_bit(rdx_25, 0x1c))
                    
                    int32_t* r14_4 = *(r13_3 + 0x28)
                    rbp.b = 0
                    rax = sx.q(*(r13_3 + 0x30))
                    void* r12_2 = &r14_4[rax]
                    
                    if (r14_4 != r12_2)
                        do
                            rax = zx.q(*r14_4)
                            
                            if (rax.d s>= 0)
                                int64_t rdx_27 = sx.q(zx.d(rax.w)) * 3
                                int64_t rcx_43 = *(data_143e1d9a0 + (sx.q(rax.d s>> 0x10) << 3))
                                int64_t* rbx_4 = rcx_43 + (rdx_27 << 3)
                                int32_t rdx_28 = *(rcx_43 + (rdx_27 << 3) + 8)
                                rax = zx.q(rdx_28 u>> 0x1d)
                                
                                if ((rax.b & 1) != 0)
                                    *r14_4 = 0xffffffff
                                    rbp.b = 1
                                else
                                    rax = zx.q(rdx_28 u>> 0x1c)
                                    
                                    if ((rax.b & 1) == 0)
                                        if (*(rbx_4 + 0xc) s> 0)
                                            rax = zx.q(rdx_28 u>> 0x17)
                                            
                                            if ((rax.b & 1) == 0 && not(test_bit(rdx_28, 0x17)))
                                                do
                                                    rax = zx.q(rdx_28)
                                                    bool z_10
                                                    
                                                    if (rax.d == rbx_4[1].d)
                                                        rbx_4[1].d = rdx_28 | 0x800000
                                                        z_10 = true
                                                    else
                                                        rax = zx.q(rbx_4[1].d)
                                                        z_10 = false
                                                    
                                                    if (z_10)
                                                        int32_t rax_74 = *(rbx_4 + 0xc)
                                                        uint32_t rdx_31 = zx.d(rax_74.w)
                                                        
                                                        if (rax_74 s< 0)
                                                            rax_74 += 0xffff
                                                            rdx_31 -= 0x10000
                                                        
                                                        int64_t rdx_32 = sx.q(rdx_31) * 3
                                                        int64_t rcx_52 = *(data_143e1d9a0
                                                            + (sx.q(rax_74 s>> 0x10) << 3))
                                                        void* r8_6 = rcx_52 + (rdx_32 << 3)
                                                        int32_t rdx_33 =
                                                            *(rcx_52 + (rdx_32 << 3) + 8)
                                                        rax = zx.q(rdx_33 u>> 0x1c)
                                                        
                                                        if ((rax.b & 1) != 0
                                                                && test_bit(rdx_33, 0x1c))
                                                            do
                                                                rax = zx.q(rdx_33)
                                                                bool z_11
                                                                
                                                                if (rax.d == *(r8_6 + 8))
                                                                    *(r8_6 + 8) = rdx_33 & 0xefffffff
                                                                    z_11 = true
                                                                else
                                                                    rax = zx.q(*(r8_6 + 8))
                                                                    z_11 = false
                                                                
                                                                if (z_11)
                                                                    rax =
                                                                        sub_140cc2730(not.d(*(r8_6 + 0xc)), r15)
                                                                    break
                                                                
                                                                rdx_33 = *(r8_6 + 8)
                                                            while (test_bit(rdx_33, 0x1c))
                                                        
                                                        break
                                                    
                                                    rdx_28 = rbx_4[1].d
                                                while (not(test_bit(rdx_28, 0x17)))
                                    else
                                        for (; test_bit(rdx_28, 0x1c); rdx_28 = rbx_4[1].d)
                                            rax = zx.q(rdx_28)
                                            bool z_9
                                            
                                            if (rax.d == rbx_4[1].d)
                                                rbx_4[1].d = rdx_28 & 0xefffffff
                                                z_9 = true
                                            else
                                                rax = zx.q(rbx_4[1].d)
                                                z_9 = false
                                            
                                            if (z_9)
                                                int64_t rdi_3 = sx.q(r15[1].d)
                                                int64_t rsi_3 = *rbx_4
                                                int32_t rax_72 = (rdi_3 + 1).d
                                                r15[1].d = rax_72
                                                
                                                if (rax_72 s> *(r15 + 0xc))
                                                    sub_1405a4d70(r15)
                                                
                                                rax = *r15
                                                *(rax + (rdi_3 << 3)) = rsi_3
                                                int32_t rcx_47 = *(rbx_4 + 0xc)
                                                
                                                if (rcx_47 s< 0)
                                                    rax = sub_140cc2730(not.d(rcx_47), r15)
                                                
                                                break
                            
                            r14_4 = &r14_4[1]
                        while (r14_4 != r12_2)
                        
                        if (rbp.b != 0 || arg_8 != 0)
                            goto label_140cbe8a7
                    else if (arg_8 != 0)
                    label_140cbe8a7:
                        int64_t rbx_5 = 0
                        int32_t* rdi_4 = *(r13_3 + 8)
                        rax = &rdi_4[sx.q(*(r13_3 + 0x10))]
                        uint64_t r14_6 = sx.q(*(r13_3 + 0x10)) << 2 u>> 2
                        
                        if (rdi_4 u> rax)
                            r14_6 = 0
                        
                        if (r14_6 != 0)
                            do
                                int32_t rax_80 = *rdi_4
                                uint32_t rdx_35 = zx.d(rax_80.w)
                                
                                if (rax_80 s< 0)
                                    rax_80 += 0xffff
                                    rdx_35 -= 0x10000
                                
                                int64_t rsi_4 = sx.q(r15[1].d)
                                int32_t rax_84 = (rsi_4 + 1).d
                                int64_t rbp_2 = *(*(data_143e1d9a0 + (sx.q(rax_80 s>> 0x10) << 3))
                                    + sx.q(rdx_35) * 0x18)
                                r15[1].d = rax_84
                                
                                if (rax_84 s> *(r15 + 0xc))
                                    sub_1405a4d70(r15)
                                
                                rax = *r15
                                rdi_4 = &rdi_4[1]
                                rbx_5 += 1
                                *(rax + (rsi_4 << 3)) = rbp_2
                            while (rbx_5 != r14_6)
                        
                        *(r13_3 + 0x48) = 1
                        data_143e1d69c = 1
    else if (test_bit(rdx_3, 0x1c))
        while (true)
            rax = zx.q(rdx_3)
            bool z_1
            
            if (rax.d == *(r8_1 + 8))
                *(r8_1 + 8) = rdx_3 & 0xefffffff
                z_1 = true
            else
                rax = zx.q(*(r8_1 + 8))
                z_1 = false
            
            if (z_1)
                break
            
            rdx_3 = *(r8_1 + 8)
            
            if (not(test_bit(rdx_3, 0x1c)))
                return rax
        
        if ((*(r8_1 + 0xb) & 1) != 0)
            arg_8 = 0
            r13_3 = sx.q(not.d(*(r8_1 + 0xc))) * 0x50 + data_143e1d678
            int32_t* i_1 = *(r13_3 + 0x18)
            
            for (void* r10_1 = &i_1[sx.q(*(r13_3 + 0x20))]; i_1 != r10_1; i_1 = &i_1[1])
                int32_t rax_16 = *i_1
                
                if (rax_16 s>= 0)
                    int64_t rdx_6 = sx.q(zx.d(rax_16.w)) * 3
                    int64_t rcx_9 = *(data_143e1d9a0 + (sx.q(rax_16 s>> 0x10) << 3))
                    void* r8_2 = rcx_9 + (rdx_6 << 3)
                    int32_t rdx_7 = *(rcx_9 + (rdx_6 << 3) + 8)
                    
                    if (((rdx_7 u>> 0x1d).b & 1) != 0)
                        *i_1 = 0xffffffff
                        arg_8 = 1
                    else if (((rdx_7 u>> 0x1c).b & 1) != 0 && test_bit(rdx_7, 0x1c))
                        do
                            bool z_2
                            
                            if (rdx_7 == *(r8_2 + 8))
                                *(r8_2 + 8) = rdx_7 & 0xefffffff
                                z_2 = true
                            else
                                *(r8_2 + 8)
                                z_2 = false
                            
                            if (z_2)
                                break
                            
                            rdx_7 = *(r8_2 + 8)
                        while (test_bit(rdx_7, 0x1c))
            
            int32_t* r14_1 = *(r13_3 + 0x28)
            rbp.b = 0
            rax = sx.q(*(r13_3 + 0x30))
            void* r12_1 = &r14_1[rax]
            
            if (r14_1 != r12_1)
                do
                    rax = zx.q(*r14_1)
                    
                    if (rax.d s>= 0)
                        int64_t rdx_9 = sx.q(zx.d(rax.w)) * 3
                        int64_t rcx_13 = *(data_143e1d9a0 + (sx.q(rax.d s>> 0x10) << 3))
                        int64_t* rbx_2 = rcx_13 + (rdx_9 << 3)
                        int32_t rdx_10 = *(rcx_13 + (rdx_9 << 3) + 8)
                        rax = zx.q(rdx_10 u>> 0x1d)
                        
                        if ((rax.b & 1) != 0)
                            *r14_1 = 0xffffffff
                            rbp.b = 1
                        else
                            rax = zx.q(rdx_10 u>> 0x1c)
                            
                            if ((rax.b & 1) == 0)
                                if (*(rbx_2 + 0xc) s> 0)
                                    rax = zx.q(rdx_10 u>> 0x17)
                                    
                                    if ((rax.b & 1) == 0 && not(test_bit(rdx_10, 0x17)))
                                        do
                                            rax = zx.q(rdx_10)
                                            bool z_4
                                            
                                            if (rax.d == rbx_2[1].d)
                                                rbx_2[1].d = rdx_10 | 0x800000
                                                z_4 = true
                                            else
                                                rax = zx.q(rbx_2[1].d)
                                                z_4 = false
                                            
                                            if (z_4)
                                                int32_t rax_33 = *(rbx_2 + 0xc)
                                                uint32_t rdx_13 = zx.d(rax_33.w)
                                                
                                                if (rax_33 s< 0)
                                                    rax_33 += 0xffff
                                                    rdx_13 -= 0x10000
                                                
                                                int64_t rdx_14 = sx.q(rdx_13) * 3
                                                int64_t rcx_22 =
                                                    *(data_143e1d9a0 + (sx.q(rax_33 s>> 0x10) << 3))
                                                void* r8_3 = rcx_22 + (rdx_14 << 3)
                                                int32_t rdx_15 = *(rcx_22 + (rdx_14 << 3) + 8)
                                                rax = zx.q(rdx_15 u>> 0x1c)
                                                
                                                if ((rax.b & 1) != 0 && test_bit(rdx_15, 0x1c))
                                                    do
                                                        rax = zx.q(rdx_15)
                                                        bool z_5
                                                        
                                                        if (rax.d == *(r8_3 + 8))
                                                            *(r8_3 + 8) = rdx_15 & 0xefffffff
                                                            z_5 = true
                                                        else
                                                            rax = zx.q(*(r8_3 + 8))
                                                            z_5 = false
                                                        
                                                        if (z_5)
                                                            rax =
                                                                sub_140cc2730(not.d(*(r8_3 + 0xc)), r15)
                                                            break
                                                        
                                                        rdx_15 = *(r8_3 + 8)
                                                    while (test_bit(rdx_15, 0x1c))
                                                
                                                break
                                            
                                            rdx_10 = rbx_2[1].d
                                        while (not(test_bit(rdx_10, 0x17)))
                            else
                                for (; test_bit(rdx_10, 0x1c); rdx_10 = rbx_2[1].d)
                                    rax = zx.q(rdx_10)
                                    bool z_3
                                    
                                    if (rax.d == rbx_2[1].d)
                                        rbx_2[1].d = rdx_10 & 0xefffffff
                                        z_3 = true
                                    else
                                        rax = zx.q(rbx_2[1].d)
                                        z_3 = false
                                    
                                    if (z_3)
                                        int64_t rdi_1 = sx.q(r15[1].d)
                                        int64_t rsi_1 = *rbx_2
                                        int32_t rax_31 = (rdi_1 + 1).d
                                        r15[1].d = rax_31
                                        
                                        if (rax_31 s> *(r15 + 0xc))
                                            sub_1405a4d70(r15)
                                        
                                        rax = *r15
                                        *(rax + (rdi_1 << 3)) = rsi_1
                                        int32_t rcx_17 = *(rbx_2 + 0xc)
                                        
                                        if (rcx_17 s< 0)
                                            rax = sub_140cc2730(not.d(rcx_17), r15)
                                        
                                        break
                    
                    r14_1 = &r14_1[1]
                while (r14_1 != r12_1)
                
                if (rbp.b != 0 || arg_8 != 0)
                    goto label_140cbe517
            else if (arg_8 != 0)
            label_140cbe517:
                int64_t rbx_3 = 0
                int32_t* rdi_2 = *(r13_3 + 8)
                rax = &rdi_2[sx.q(*(r13_3 + 0x10))]
                uint64_t r14_3 = sx.q(*(r13_3 + 0x10)) << 2 u>> 2
                
                if (rdi_2 u> rax)
                    r14_3 = 0
                
                if (r14_3 != 0)
                    do
                        int32_t rax_39 = *rdi_2
                        uint32_t rdx_17 = zx.d(rax_39.w)
                        
                        if (rax_39 s< 0)
                            rax_39 += 0xffff
                            rdx_17 -= 0x10000
                        
                        int64_t rsi_2 = sx.q(r15[1].d)
                        int32_t rax_43 = (rsi_2 + 1).d
                        int64_t rbp_1 = *(*(data_143e1d9a0 + (sx.q(rax_39 s>> 0x10) << 3))
                            + sx.q(rdx_17) * 0x18)
                        r15[1].d = rax_43
                        
                        if (rax_43 s> *(r15 + 0xc))
                            sub_1405a4d70(r15)
                        
                        rax = *r15
                        rdi_2 = &rdi_2[1]
                        rbx_3 += 1
                        *(rax + (rsi_2 << 3)) = rbp_1
                    while (rbx_3 != r14_3)
                
                *(r13_3 + 0x48) = 1
                data_143e1d69c = 1
        else
            int64_t rbx_1 = sx.q(r15[1].d)
            int32_t rax_11 = (rbx_1 + 1).d
            r15[1].d = rax_11
            
            if (rax_11 s> *(r15 + 0xc))
                sub_1405a4d70(r15)
            
            rax = *arg2
            *(*r15 + (rbx_1 << 3)) = rax

return rax
