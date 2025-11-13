// 函数: sub_142ba2850
// 地址: 0x142ba2850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[1].d
int32_t r13 = 0
int32_t rbp = arg1[2].d
int32_t r15 = *(arg1 + 0xc)
int64_t* rbx = arg1
int32_t r12 = *(arg1 + 0x14)
int64_t rsi = *arg1
*(arg1 + 0x1c) = 0
*(arg1 + 0x2c) = 0
arg1[7].d = 0
arg1[9].d = 0
arg1[0x11a].d = 0
arg1[0x11c].d = 0
int32_t rdi = sx.d(*arg2)
int32_t r8 = arg1[5].d
int32_t arg_10 = 0

if (rdi u<= 8)
    if (arg1[6] == 0)
        arg1[5].d = 8
        arg1[6] = &arg1[0x230]
    
    goto label_142ba293d

if (rdi u<= r8)
    goto label_142ba293d

if (arg1[6] == &arg1[0x230])
    arg1[6] = 0

int32_t rdi_2 = (rdi + 3) & 0xfffffffc
rbx[6] = sub_142b99a90(rsi, 8, r8, rdi_2, arg1[6], &arg_10)
int32_t rax_5 = arg_10

if (rax_5 == 0)
    rbx[5].d = rdi_2
label_142ba293d:
    int32_t r8_1 = rbx[3].d
    int32_t rcx_2 = sx.d(arg2[1]) + 2
    
    if (rcx_2 u<= 0x60)
        if (rbx[4] == 0)
            rbx[3].d = 0x60
            rbx[4] = &rbx[0x238]
        
        goto label_142ba29c3
    
    if (rcx_2 u<= r8_1)
        goto label_142ba29c3
    
    if (rbx[4] == &rbx[0x238])
        rbx[4] = 0
    
    int32_t rdi_4 = (rcx_2 + 9) & 0xfffffff8
    rbx[4] = sub_142b99a90(rsi, 0x30, r8_1, rdi_4, rbx[4], &arg_10)
    rax_5 = arg_10
    
    if (rax_5 == 0)
        rbx[3].d = rdi_4
    label_142ba29c3:
        *(rbx + 0x1c) = sx.d(arg2[1])
        *(rbx + 0x2c) = sx.d(*arg2)
        rbx[0xb].d = 2
        rbx[0x11e].d = 0xffffffff
        
        if (sub_142b94cd0(arg2) == 1)
            rbx[0xb].d = 0xfffffffe
            rbx[0x11e].d = 1
        
        int64_t rax_13 = sx.q(*(rbx + 0x1c))
        void* r10_1 = rbx[4]
        int32_t rdx = rax
        rbx[1].d = rdx
        rbx[2].d = rbp
        *(rbx + 0xc) = r15
        *(rbx + 0x14) = r12
        rbx[0x22f] = 0
        void* var_68_1 = r10_1
        
        if (rax_13.d != 0)
            void* i_2 = rax_13 * 0x30 + r10_1
            void* i = i_2
            void* var_58_1 = *(arg2 + 0x10)
            uint32_t rax_18 = (zx.q(*(*(rbx[0x22e] + 8) + 0x68)) * 5).d << 2 u>> 0xb
            int64_t r15_1 = sx.q(**(arg2 + 0x18))
            void* rsi_3 = r15_1 * 0x30 + r10_1
            void* rbp_1 = rsi_3
            
            if (r10_1 u< i_2)
                int16_t* rbx_1 = *(arg2 + 8)
                void* rdi_5 = r10_1 + 3
                void* r12_3 = nullptr
                
                do
                    *(rdi_5 - 1) = 0x404
                    *(rdi_5 + 9) = *rbx_1
                    *(rdi_5 + 0xb) = rbx_1[2]
                    int32_t rcx_9 = r15 + sub_142b93e80(*rbx_1, rdx)
                    *(rdi_5 + 0xd) = rcx_9
                    *(rdi_5 + 1) = rcx_9
                    char* r10_2 = var_58_1
                    int32_t rcx_12 = r12 + sub_142b93e80(*(rbx_1 + 4), rbp)
                    *(rdi_5 + 0x11) = rcx_12
                    *(rdi_5 + 5) = rcx_12
                    *(rsi_3 + 0xc) = *(*(arg2 + 8) + (r15_1 << 3))
                    *(rsi_3 + 0xe) = *(*(arg2 + 8) + (r15_1 << 3) + 4)
                    int32_t rax_28 = sx.d(*r10_2) & 3
                    int16_t rax_29
                    
                    if (rax_28 == 0)
                        rax_29 = 1
                    else if (rax_28 == 2)
                        rax_29 = 2
                    else
                        rax_29 = 0
                    
                    *(rdi_5 - 3) = rax_29
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(sx.d(*(rdi_5 + 9)) - sx.d(*(rbp_1 + 0xc)))
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(sx.d(*(rdi_5 + 0xb)) - sx.d(*(rbp_1 + 0xe)))
                    
                    if ((temp1_1 ^ temp0_1) - temp0_1 + (temp3_1 ^ temp2_1) - temp2_1 s< rax_18)
                        *rbp_1 |= 0x20
                    
                    *(rdi_5 + 0x25) = rbp_1
                    *(rbp_1 + 0x20) = rdi_5 - 3
                    rbp_1 = rdi_5 - 3
                    
                    if (rdi_5 - 3 == rsi_3)
                        r13 += 1
                        r12_3 += 2
                        
                        if (r13 s< sx.d(*arg2))
                            r15_1 = sx.q(*(r12_3 + *(arg2 + 0x18)))
                            rsi_3 = r15_1 * 0x30 + var_68_1
                            rbp_1 = rsi_3
                    
                    rdx = rax
                    rdi_5 += 0x30
                    rbx_1 = &rbx_1[4]
                    var_58_1 = &r10_2[1]
                while (rdi_5 - 3 u< i)
                
                rbx = arg1
                i_2 = i
                r10_1 = var_68_1
            
            int64_t* rdx_4 = rbx[6]
            void* r8_6 = *(arg2 + 0x18)
            void* r9_4 = &rdx_4[sx.q(*(rbx + 0x2c))]
            int16_t rax_42 = 0
            
            while (rdx_4 u< r9_4)
                r8_6 += 2
                *rdx_4 = sx.q(rax_42) * 0x30 + r10_1
                rdx_4 = &rdx_4[1]
                rax_42 = *(r8_6 - 2) + 1
            
            void* rsi_6 = rbx[6]
            uint64_t r13_1 = zx.q(rax_18)
            int64_t* arg_8 = rsi_6
            int32_t arg_18
            arg_18.q = 0
            int32_t r15_2 = ((r13_1 << 1) + -ffffffffffffffff).d
            void* rcx_20 = rsi_6 + (sx.q(*(rbx + 0x2c)) << 3)
            uint64_t r14_4 = (rcx_20 - rsi_6 + 7) u>> 3
            
            if (rsi_6 u> rcx_20)
                r14_4 = 0
            
            uint32_t arg_20
            arg_20.q = r14_4
            
            if (r14_4 != 0)
                int64_t i_1
                
                do
                    int16_t* j_4 = *rsi_6
                    int16_t* j_2 = j_4
                    
                    for (int16_t* j = *(j_4 + 0x28); j != j_4; j = *(j + 0x28))
                        int32_t temp8_1
                        int32_t temp9_1
                        temp8_1:temp9_1 = sx.q(sx.d(j_2[7]) - sx.d(j[7]))
                        int32_t temp10_1
                        int32_t temp11_1
                        temp10_1:temp11_1 = sx.q(sx.d(j_2[6]) - sx.d(j[6]))
                        
                        if ((temp9_1 ^ temp8_1) - temp8_1 + (temp11_1 ^ temp10_1) - temp10_1
                                s>= r15_2)
                            break
                        
                        j_2 = j
                    
                    *(j_2 + 0x18) = 0
                    void* r11_1 = &j_2[0xc]
                    *(j_2 + 0x1c) = 0
                    int16_t* j_1 = j_2
                    int32_t r10_4 = 0
                    int32_t rbx_2 = 0
                    int16_t* j_3 = j_2
                    
                    do
                        int32_t rax_53 = sx.d(j_3[6])
                        int16_t* j_5 = j_3
                        j_3 = *(j_3 + 0x20)
                        r10_4 += sx.d(j_3[6]) - rax_53
                        rbx_2 += sx.d(j_3[7]) - sx.d(j_5[7])
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(rbx_2)
                        int32_t temp6_1
                        int32_t temp7_1
                        temp6_1:temp7_1 = sx.q(r10_4)
                        
                        if ((temp5_1 ^ temp4_1) - temp4_1 + (temp7_1 ^ temp6_1) - temp6_1
                                s>= r13_1.d)
                            int32_t rdx_17 = ((j_3 - j_1) s/ 0x30).d
                            *r11_1 = rdx_17
                            *(j_3 + 0x1c) = neg.d(rdx_17)
                            char r8_15
                            int32_t r11_3
                            
                            if (rbx_2 s>= r10_4)
                                r11_3 = neg.d(r10_4)
                                
                                if (rbx_2 s< r11_3)
                                    r8_15 = -1
                                    r10_4 = rbx_2
                                else
                                    r8_15 = 2
                                    r11_3 = rbx_2
                            else if (rbx_2 s< neg.d(r10_4))
                                r8_15 = -2
                                r11_3 = neg.d(rbx_2)
                            else
                                r11_3 = r10_4
                                r8_15 = 1
                                r10_4 = rbx_2
                            
                            int32_t temp12_1
                            int32_t temp13_1
                            temp12_1:temp13_1 = sx.q(r10_4)
                            
                            if (r11_3 s<= ((temp13_1 ^ temp12_1) - temp12_1) * 0xe)
                                r8_15 = 4
                            
                            *(j_1 + 3) = r8_15
                            
                            for (j_1 = *(j_1 + 0x20); j_1 != j_3; j_1 = *(j_1 + 0x20))
                                j_1[1].b = r8_15
                                *(j_1 + 3) = r8_15
                            
                            j_3[1].b = r8_15
                            r11_1 = &j_1[0xc]
                            r10_4 = 0
                            rbx_2 = 0
                            int32_t rdx_25 = ((j_2 - j_1) s/ 0x30).d
                            *r11_1 = rdx_25
                            *(j_2 + 0x1c) = neg.d(rdx_25)
                        else
                            *j_3 |= 0x10
                    while (j_3 != j_2)
                    
                    r15_2 = ((r13_1 << 1) + -ffffffffffffffff).d
                    rsi_6 = &arg_8[1]
                    i_1 = arg_18.q + 1
                    arg_8 = rsi_6
                    arg_18.q = i_1
                while (i_1 u< arg_20.q)
                i_2 = i
            
            if (var_68_1 u< i_2)
                char* r8_16 = var_68_1 + 3
                
                do
                    int16_t rbx_3 = *(r8_16 - 3)
                    
                    if ((rbx_3.b & 0x10) == 0 && r8_16[-1] == 4 && *r8_16 == 4)
                        int32_t rcx_23 = sx.d(*(r8_16 + 9))
                        void* r9_7 = &r8_16[-3 + sx.q(*(r8_16 + 0x15)) * 0x30]
                        void* r10_7 = &r8_16[-3 + sx.q(*(r8_16 + 0x19)) * 0x30]
                        
                        if (((rcx_23 - sx.d(*(r10_7 + 0xc))) ^ (sx.d(*(r9_7 + 0xc)) - rcx_23))
                                s>= 0)
                            int32_t rcx_24 = sx.d(*(r8_16 + 0xb))
                            
                            if (((rcx_24 - sx.d(*(r10_7 + 0xe))) ^ (sx.d(*(r9_7 + 0xe)) - rcx_24))
                                    s>= 0)
                                *(r8_16 - 3) = rbx_3 | 0x10
                                int32_t rdx_35 = ((r9_7 - r10_7) s/ 0x30).d
                                *(r10_7 + 0x18) = rdx_35
                                *(r9_7 + 0x1c) = neg.d(rdx_35)
                    
                    r8_16 = &r8_16[0x30]
                while (&r8_16[-3] u< i_2)
                
                if (var_68_1 u< i_2)
                    int16_t* rbx_4 = var_68_1 + 0xe
                    
                    do
                        char rax_85 = (rbx_4[-7]).b
                        
                        if ((rax_85 & 0x10) == 0)
                            if ((rax_85 & 3) != 0)
                                rbx_4[-7] |= 0x10
                            else
                                char rax_86 = *(rbx_4 - 0xb)
                                char rdx_37 = rbx_4[-6].b
                                
                                if (rax_86 != rdx_37)
                                    if (sx.d(rdx_37) == neg.d(sx.d(rax_86)))
                                        rbx_4[-7] |= 0x10
                                else if (rax_86 != 4)
                                    rbx_4[-7] |= 0x10
                                else
                                    int32_t rdx_38 = sx.d(*rbx_4)
                                    int32_t rcx_27 = sx.d(rbx_4[-1])
                                    void* rdi_10 = &rbx_4[-7 + sx.q(*(rbx_4 + 0xa)) * 0x18]
                                    void* rsi_10 = &rbx_4[-7 + sx.q(*(rbx_4 + 0xe)) * 0x18]
                                    
                                    if (sub_142b989d0(rcx_27 - sx.d(*(rsi_10 + 0xc)), 
                                            rdx_38 - sx.d(*(rsi_10 + 0xe)), 
                                            sx.d(*(rdi_10 + 0xc)) - rcx_27, 
                                            sx.d(*(rdi_10 + 0xe)) - rdx_38) != 0)
                                        int32_t rdx_42 = ((rdi_10 - rsi_10) s/ 0x30).d
                                        *(rsi_10 + 0x18) = rdx_42
                                        *(rdi_10 + 0x1c) = neg.d(rdx_42)
                                        rbx_4[-7] |= 0x10
                        
                        rbx_4 = &rbx_4[0x18]
                    while (&rbx_4[-7] u< i_2)
        
        return arg_10

return rax_5
