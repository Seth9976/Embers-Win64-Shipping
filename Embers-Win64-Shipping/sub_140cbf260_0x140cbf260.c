// 函数: sub_140cbf260
// 地址: 0x140cbf260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0)
    return 

uint64_t arg_8 = arg1
int64_t rsi_1 = arg2
uint64_t rbp
uint64_t var_10_1 = rbp
uint64_t r9_1 = arg1
int64_t i = 0
int64_t i_1 = 0

do
    uint64_t rax = *(rsi_1 + (i << 3))
    int64_t* r12_1 = *(r9_1 + 0x20)
    
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
        arg1 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3))
        int64_t r8 = arg1 + (rdx_1 << 3)
        int32_t rdx_2 = *(arg1 + (rdx_1 << 3) + 8)
        
        if (((rdx_2 u>> 0x1d).b & 1) != 0 && *(r9_1 + 0x28) != 0)
            *(rsi_1 + (i << 3)) = 0
        else
            char r13_1
            void* r15_2
            
            if (((rdx_2 u>> 0x1c).b & 1) == 0)
                if (*(r8 + 0xc) s> 0 && ((rdx_2 u>> 0x17).b & 1) == 0 && not(test_bit(rdx_2, 0x17)))
                    while (true)
                        bool z_6
                        
                        if (rdx_2 == *(r8 + 8))
                            *(r8 + 8) = rdx_2 | 0x800000
                            z_6 = true
                        else
                            *(r8 + 8)
                            z_6 = false
                        
                        if (z_6)
                            break
                        
                        rdx_2 = *(r8 + 8)
                        
                        if (test_bit(rdx_2, 0x17))
                            goto label_140cbfa5d
                    
                    int32_t rax_42 = *(r8 + 0xc)
                    uint32_t rdx_19 = zx.d(rax_42.w)
                    
                    if (rax_42 s< 0)
                        rax_42 += 0xffff
                        rdx_19 -= 0x10000
                    
                    int64_t rdx_20 = sx.q(rdx_19) * 3
                    arg1 = *(data_143e1d9a0 + (sx.q(rax_42 s>> 0x10) << 3))
                    rax = zx.q(*(arg1 + (rdx_20 << 3) + 8))
                    int64_t r8_3 = arg1 + (rdx_20 << 3)
                    
                    if (test_bit(rax.d, 0x1c))
                        while (true)
                            bool z_7
                            
                            if (rax.d == *(r8_3 + 8))
                                *(r8_3 + 8) = rax.d & 0xefffffff
                                z_7 = true
                            else
                                *(r8_3 + 8)
                                z_7 = false
                            
                            if (z_7)
                                break
                            
                            rax = zx.q(*(r8_3 + 8))
                            
                            if (not(test_bit(rax.d, 0x1c)))
                                goto label_140cbfa5d
                        
                        r13_1 = 0
                        void* r11_6 = sx.q(not.d(*(r8_3 + 0xc))) * 0x50 + data_143e1d678
                        int32_t* j = *(r11_6 + 0x18)
                        
                        for (void* r10_2 = &j[sx.q(*(r11_6 + 0x20))]; j != r10_2; j = &j[1])
                            int32_t rax_51 = *j
                            
                            if (rax_51 s>= 0)
                                int64_t rdx_22 = sx.q(zx.d(rax_51.w)) * 3
                                arg1 = *(data_143e1d9a0 + (sx.q(rax_51 s>> 0x10) << 3))
                                int64_t r8_4 = arg1 + (rdx_22 << 3)
                                int32_t rdx_23 = *(arg1 + (rdx_22 << 3) + 8)
                                
                                if (((rdx_23 u>> 0x1d).b & 1) != 0)
                                    *j = 0xffffffff
                                    r13_1 = 1
                                else if (((rdx_23 u>> 0x1c).b & 1) != 0 && test_bit(rdx_23, 0x1c))
                                    do
                                        bool z_8
                                        
                                        if (rdx_23 == *(r8_4 + 8))
                                            *(r8_4 + 8) = rdx_23 & 0xefffffff
                                            z_8 = true
                                        else
                                            *(r8_4 + 8)
                                            z_8 = false
                                        
                                        if (z_8)
                                            break
                                        
                                        rdx_23 = *(r8_4 + 8)
                                    while (test_bit(rdx_23, 0x1c))
                        
                        int32_t* r14_3 = *(r11_6 + 0x28)
                        rbp.b = 0
                        void* r15_3 = &r14_3[sx.q(*(r11_6 + 0x30))]
                        
                        if (r14_3 != r15_3)
                            do
                                rax = zx.q(*r14_3)
                                
                                if (rax.d s>= 0)
                                    int64_t rdx_25 = sx.q(zx.d(rax.w)) * 3
                                    int64_t rcx_23 = *(data_143e1d9a0 + (sx.q(rax.d s>> 0x10) << 3))
                                    rax = zx.q(*(rcx_23 + (rdx_25 << 3) + 8))
                                    int64_t* rbx_4 = rcx_23 + (rdx_25 << 3)
                                    
                                    if (((rax.d u>> 0x1d).b & 1) != 0)
                                        *r14_3 = 0xffffffff
                                        rbp.b = 1
                                    else if (((rax.d u>> 0x1c).b & 1) == 0)
                                        if (*(rbx_4 + 0xc) s> 0 && ((rax.d u>> 0x17).b & 1) == 0
                                                && not(test_bit(rax.d, 0x17)))
                                            do
                                                bool z_10
                                                
                                                if (rax.d == rbx_4[1].d)
                                                    rbx_4[1].d = rax.d | 0x800000
                                                    z_10 = true
                                                else
                                                    rbx_4[1].d
                                                    z_10 = false
                                                
                                                if (z_10)
                                                    int32_t rax_67 = *(rbx_4 + 0xc)
                                                    uint32_t rdx_28 = zx.d(rax_67.w)
                                                    
                                                    if (rax_67 s< 0)
                                                        rax_67 += 0xffff
                                                        rdx_28 -= 0x10000
                                                    
                                                    int64_t rdx_29 = sx.q(rdx_28) * 3
                                                    arg1 = *(data_143e1d9a0
                                                        + (sx.q(rax_67 s>> 0x10) << 3))
                                                    int64_t r8_5 = arg1 + (rdx_29 << 3)
                                                    int32_t rdx_30 = *(arg1 + (rdx_29 << 3) + 8)
                                                    
                                                    if (((rdx_30 u>> 0x1c).b & 1) != 0
                                                            && test_bit(rdx_30, 0x1c))
                                                        do
                                                            bool z_11
                                                            
                                                            if (rdx_30 == *(r8_5 + 8))
                                                                *(r8_5 + 8) = rdx_30 & 0xefffffff
                                                                z_11 = true
                                                            else
                                                                *(r8_5 + 8)
                                                                z_11 = false
                                                            
                                                            if (z_11)
                                                                rax, arg1 = sub_140cc2730(
                                                                    not.d(*(r8_5 + 0xc)), r12_1)
                                                                break
                                                            
                                                            rdx_30 = *(r8_5 + 8)
                                                        while (test_bit(rdx_30, 0x1c))
                                                    
                                                    break
                                                
                                                rax = zx.q(rbx_4[1].d)
                                            while (not(test_bit(rax.d, 0x17)))
                                    else
                                        while (test_bit(rax.d, 0x1c))
                                            bool z_9
                                            
                                            if (rax.d == rbx_4[1].d)
                                                rbx_4[1].d = rax.d & 0xefffffff
                                                z_9 = true
                                            else
                                                rbx_4[1].d
                                                z_9 = false
                                            
                                            if (z_9)
                                                int64_t rdi_3 = sx.q(r12_1[1].d)
                                                int64_t rsi_4 = *rbx_4
                                                int32_t rax_65 = (rdi_3 + 1).d
                                                r12_1[1].d = rax_65
                                                
                                                if (rax_65 s> *(r12_1 + 0xc))
                                                    sub_1405a4d70(r12_1)
                                                
                                                *(*r12_1 + (rdi_3 << 3)) = rsi_4
                                                arg1 = zx.q(*(rbx_4 + 0xc))
                                                
                                                if (arg1.d s< 0)
                                                    rax, arg1 = sub_140cc2730(not.d(arg1.d), r12_1)
                                                
                                                break
                                            
                                            rax = zx.q(rbx_4[1].d)
                                
                                r14_3 = &r14_3[1]
                            while (r14_3 != r15_3)
                            
                            if (rbp.b != 0)
                                goto label_140cbf9b6
                            
                            i = i_1
                        
                        if (r13_1 != 0)
                        label_140cbf9b6:
                            r15_2 = r11_6
                            int64_t rsi_5 = 0
                            int32_t* rdi_4 = *(r15_2 + 8)
                            uint64_t r14_5 = sx.q(*(r15_2 + 0x10)) << 2 u>> 2
                            
                            if (rdi_4 u> &rdi_4[sx.q(*(r15_2 + 0x10))])
                                r14_5 = 0
                            
                            if (r14_5 != 0)
                                do
                                    int32_t rax_73 = *rdi_4
                                    uint32_t rdx_32 = zx.d(rax_73.w)
                                    
                                    if (rax_73 s< 0)
                                        rax_73 += 0xffff
                                        rdx_32 -= 0x10000
                                    
                                    int64_t rbx_5 = sx.q(r12_1[1].d)
                                    int32_t rax_77 = (rbx_5 + 1).d
                                    rbp = *(*(data_143e1d9a0 + (sx.q(rax_73 s>> 0x10) << 3))
                                        + sx.q(rdx_32) * 0x18)
                                    r12_1[1].d = rax_77
                                    
                                    if (rax_77 s> *(r12_1 + 0xc))
                                        sub_1405a4d70(r12_1)
                                    
                                    rdi_4 = &rdi_4[1]
                                    rsi_5 += 1
                                    *(*r12_1 + (rbx_5 << 3)) = rbp
                                while (rsi_5 != r14_5)
                            
                        label_140cbf69a:
                            i = i_1
                            *(r15_2 + 0x48) = 1
                            data_143e1d69c = 1
            else if (test_bit(rdx_2, 0x1c))
                while (true)
                    bool z_1
                    
                    if (rdx_2 == *(r8 + 8))
                        *(r8 + 8) = rdx_2 & 0xefffffff
                        z_1 = true
                    else
                        *(r8 + 8)
                        z_1 = false
                    
                    if (z_1)
                        break
                    
                    rdx_2 = *(r8 + 8)
                    
                    if (not(test_bit(rdx_2, 0x1c)))
                        goto label_140cbfa5d
                
                if ((*(r8 + 0xb) & 1) != 0)
                    r13_1 = 0
                    void* r11_3 = sx.q(not.d(*(r8 + 0xc))) * 0x50 + data_143e1d678
                    int32_t* j_1 = *(r11_3 + 0x18)
                    
                    for (void* r10_1 = &j_1[sx.q(*(r11_3 + 0x20))]; j_1 != r10_1; j_1 = &j_1[1])
                        int32_t rax_13 = *j_1
                        
                        if (rax_13 s>= 0)
                            int64_t rdx_5 = sx.q(zx.d(rax_13.w)) * 3
                            arg1 = *(data_143e1d9a0 + (sx.q(rax_13 s>> 0x10) << 3))
                            int64_t r8_1 = arg1 + (rdx_5 << 3)
                            int32_t rdx_6 = *(arg1 + (rdx_5 << 3) + 8)
                            
                            if (((rdx_6 u>> 0x1d).b & 1) != 0)
                                *j_1 = 0xffffffff
                                r13_1 = 1
                            else if (((rdx_6 u>> 0x1c).b & 1) != 0 && test_bit(rdx_6, 0x1c))
                                do
                                    bool z_2
                                    
                                    if (rdx_6 == *(r8_1 + 8))
                                        *(r8_1 + 8) = rdx_6 & 0xefffffff
                                        z_2 = true
                                    else
                                        *(r8_1 + 8)
                                        z_2 = false
                                    
                                    if (z_2)
                                        break
                                    
                                    rdx_6 = *(r8_1 + 8)
                                while (test_bit(rdx_6, 0x1c))
                    
                    int32_t* r14_1 = *(r11_3 + 0x28)
                    rbp.b = 0
                    void* r15_1 = &r14_1[sx.q(*(r11_3 + 0x30))]
                    
                    if (r14_1 == r15_1)
                        goto label_140cbf5fd
                    
                    do
                        rax = zx.q(*r14_1)
                        
                        if (rax.d s>= 0)
                            int64_t rdx_8 = sx.q(zx.d(rax.w)) * 3
                            arg1 = *(data_143e1d9a0 + (sx.q(rax.d s>> 0x10) << 3))
                            int64_t rbx_2 = arg1 + (rdx_8 << 3)
                            int32_t rdx_9 = *(arg1 + (rdx_8 << 3) + 8)
                            
                            if (((rdx_9 u>> 0x1d).b & 1) != 0)
                                *r14_1 = 0xffffffff
                                rbp.b = 1
                            else if (((rdx_9 u>> 0x1c).b & 1) == 0)
                                if (*(rbx_2 + 0xc) s> 0 && ((rdx_9 u>> 0x17).b & 1) == 0
                                        && not(test_bit(rdx_9, 0x17)))
                                    do
                                        bool z_4
                                        
                                        if (rdx_9 == *(rbx_2 + 8))
                                            *(rbx_2 + 8) = rdx_9 | 0x800000
                                            z_4 = true
                                        else
                                            *(rbx_2 + 8)
                                            z_4 = false
                                        
                                        if (z_4)
                                            int32_t rax_30 = *(rbx_2 + 0xc)
                                            uint32_t rdx_12 = zx.d(rax_30.w)
                                            
                                            if (rax_30 s< 0)
                                                rax_30 += 0xffff
                                                rdx_12 -= 0x10000
                                            
                                            int64_t rdx_13 = sx.q(rdx_12) * 3
                                            arg1 = *(data_143e1d9a0 + (sx.q(rax_30 s>> 0x10) << 3))
                                            int64_t r8_2 = arg1 + (rdx_13 << 3)
                                            int32_t rdx_14 = *(arg1 + (rdx_13 << 3) + 8)
                                            
                                            if (((rdx_14 u>> 0x1c).b & 1) != 0
                                                    && test_bit(rdx_14, 0x1c))
                                                do
                                                    bool z_5
                                                    
                                                    if (rdx_14 == *(r8_2 + 8))
                                                        *(r8_2 + 8) = rdx_14 & 0xefffffff
                                                        z_5 = true
                                                    else
                                                        *(r8_2 + 8)
                                                        z_5 = false
                                                    
                                                    if (z_5)
                                                        rax, arg1 = sub_140cc2730(
                                                            not.d(*(r8_2 + 0xc)), r12_1)
                                                        break
                                                    
                                                    rdx_14 = *(r8_2 + 8)
                                                while (test_bit(rdx_14, 0x1c))
                                            
                                            break
                                        
                                        rdx_9 = *(rbx_2 + 8)
                                    while (not(test_bit(rdx_9, 0x17)))
                            else
                                for (; test_bit(rdx_9, 0x1c); rdx_9 = *(rbx_2 + 8))
                                    bool z_3
                                    
                                    if (rdx_9 == *(rbx_2 + 8))
                                        *(rbx_2 + 8) = rdx_9 & 0xefffffff
                                        z_3 = true
                                    else
                                        *(rbx_2 + 8)
                                        z_3 = false
                                    
                                    if (z_3)
                                        int64_t rdi_1 = sx.q(r12_1[1].d)
                                        int64_t rsi_2 = *rbx_2
                                        int32_t rax_28 = (rdi_1 + 1).d
                                        r12_1[1].d = rax_28
                                        
                                        if (rax_28 s> *(r12_1 + 0xc))
                                            sub_1405a4d70(r12_1)
                                        
                                        *(*r12_1 + (rdi_1 << 3)) = rsi_2
                                        arg1 = zx.q(*(rbx_2 + 0xc))
                                        
                                        if (arg1.d s< 0)
                                            rax, arg1 = sub_140cc2730(not.d(arg1.d), r12_1)
                                        
                                        break
                        
                        r14_1 = &r14_1[1]
                    while (r14_1 != r15_1)
                    
                    if (rbp.b != 0)
                        goto label_140cbf606
                    
                    i = i_1
                label_140cbf5fd:
                    
                    if (r13_1 != 0)
                    label_140cbf606:
                        r15_2 = r11_3
                        int64_t rsi_3 = 0
                        int32_t* rdi_2 = *(r15_2 + 8)
                        rbp = sx.q(*(r15_2 + 0x10)) << 2 u>> 2
                        
                        if (rdi_2 u> &rdi_2[sx.q(*(r15_2 + 0x10))])
                            rbp = 0
                        
                        if (rbp != 0)
                            do
                                int32_t rax_36 = *rdi_2
                                uint32_t rdx_16 = zx.d(rax_36.w)
                                
                                if (rax_36 s< 0)
                                    rax_36 += 0xffff
                                    rdx_16 -= 0x10000
                                
                                int64_t rbx_3 = sx.q(r12_1[1].d)
                                int32_t rax_40 = (rbx_3 + 1).d
                                int64_t r14_2 = *(*(data_143e1d9a0 + (sx.q(rax_36 s>> 0x10) << 3))
                                    + sx.q(rdx_16) * 0x18)
                                r12_1[1].d = rax_40
                                
                                if (rax_40 s> *(r12_1 + 0xc))
                                    sub_1405a4d70(r12_1)
                                
                                rdi_2 = &rdi_2[1]
                                rsi_3 += 1
                                *(*r12_1 + (rbx_3 << 3)) = r14_2
                            while (rsi_3 != rbp)
                        
                        goto label_140cbf69a
                else
                    int64_t rbx_1 = sx.q(r12_1[1].d)
                    int32_t rax_8 = (rbx_1 + 1).d
                    r12_1[1].d = rax_8
                    
                    if (rax_8 s> *(r12_1 + 0xc))
                        sub_1405a4d70(r12_1)
                    
                    *(*r12_1 + (rbx_1 << 3)) = *(rsi_1 + (i << 3))
    
label_140cbfa5d:
    r9_1 = arg_8
    i += 1
    rsi_1 = arg2
    i_1 = i
while (i s< sx.q(arg3))
