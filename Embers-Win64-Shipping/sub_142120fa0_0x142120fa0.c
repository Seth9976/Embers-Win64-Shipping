// 函数: sub_142120fa0
// 地址: 0x142120fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* i = arg2

if (arg2 == arg1)
    return 

arg2.b = 1
sub_142120460(arg1, arg2.b)
int64_t r14_1 = 0
int32_t rdi_1 = 0
int32_t rbp_1 = 0
int64_t var_48 = 0
int32_t var_3c_1 = 0

do
    int64_t rsi_1 = sx.q(rdi_1)
    rdi_1 = (rsi_1 + 1).d
    
    if (rdi_1 s> rbp_1)
        sub_1405a4d70(&var_48)
        rbp_1 = var_3c_1
        r14_1 = var_48
    
    *(r14_1 + (rsi_1 << 3)) = i
    
    if (i == 0)
        break
    
    void* rax_1 = sub_142543020()
    void* rdx_1 = *(i + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx_1 + 0x38))
        break
    
    if (*(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        break
    
    i = *(i + 0xd0)
while (i != 0)

int64_t r13_1 = sx.q(rdi_1 - 1)
int64_t var_50_1 = r13_1

if (rdi_1 - 1 s>= 0)
    bool cond:0_1
    
    do
        void* r13_2 = *(r14_1 + (r13_1 << 3))
        
        if (r13_2 != 0)
            void* rax_5 = sub_142543020()
            void* rdx_2 = *(r13_2 + 0x10)
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                void* rax_27 = sub_1425312f0()
                void* rdx_11 = *(r13_2 + 0x10)
                int64_t rax_28 = sx.q(*(rax_27 + 0x38))
                
                if (rax_28.d s<= *(rdx_11 + 0x38)
                        && *(*(rdx_11 + 0x30) + (rax_28 << 3)) == rax_27 + 0x30)
                    int32_t rdx_12 = *(r13_2 + 0x2d8)
                    arg1[0x1d].d = 0
                    
                    if (*(arg1 + 0xec) != rdx_12)
                        sub_140991380(&arg1[0x1c], rdx_12)
                    
                    int32_t i_1 = 0
                    
                    if (*(r13_2 + 0x2d8) s> 0)
                        int32_t* r14_5 = nullptr
                        int64_t* r15_1 = nullptr
                        
                        do
                            int64_t rdi_6 = sx.q(arg1[0x1d].d)
                            int32_t rax_30 = (rdi_6 + 1).d
                            arg1[0x1d].d = rax_30
                            
                            if (rax_30 s> *(arg1 + 0xec))
                                sub_140adefe0(&arg1[0x1c])
                            
                            int64_t* rdx_14 = arg1[0x1c] + rdi_6 * 0x24
                            
                            if (rdx_14 == 0)
                                rdx_14 = nullptr
                            else
                                *rdx_14 = 0
                                rdx_14[1].b = 2
                                *(rdx_14 + 0xc) = 0xffffffff
                                __builtin_memset(&rdx_14[2], 0, 0x14)
                            
                            i_1 += 1
                            int64_t rcx_19 = *(r15_1 + *(r13_2 + 0x2d0))
                            r15_1 = &r15_1[2]
                            *rdx_14 = rcx_19
                            int32_t rcx_20 = *(r14_5 + *(r13_2 + 0x400))
                            r14_5 = &r14_5[1]
                            rdx_14[2].d = rcx_20
                        while (i_1 s< *(r13_2 + 0x2d8))
                    
                    int32_t rdx_15 = *(r13_2 + 0x318)
                    arg1[0x1f].d = 0
                    
                    if (*(arg1 + 0xfc) != rdx_15)
                        sub_1405a5220(&arg1[0x1e], rdx_15)
                    
                    int32_t i_2 = 0
                    
                    if (*(r13_2 + 0x318) s> 0)
                        int64_t* rsi_7 = nullptr
                        
                        do
                            int64_t rdi_7 = sx.q(arg1[0x1f].d)
                            int32_t rax_34 = (rdi_7 + 1).d
                            arg1[0x1f].d = rax_34
                            
                            if (rax_34 s> *(arg1 + 0xfc))
                                sub_1405c4f50(&arg1[0x1e])
                            
                            int64_t rdx_18 = rdi_7 * 0x30
                            int64_t* rdx_19 = rdx_18 + arg1[0x1e]
                            
                            if (rdx_18 == neg.q(arg1[0x1e]))
                                rdx_19 = nullptr
                            else
                                *rdx_19 = 0
                                rdx_19[1].b = 2
                                *(rdx_19 + 0xc) = 0xffffffff
                                __builtin_memset(&rdx_19[2], 0, 0x20)
                            
                            i_2 += 1
                            *rdx_19 = *(rsi_7 + *(r13_2 + 0x310))
                            int128_t zmm0_2 = *(rsi_7 + *(r13_2 + 0x410))
                            rsi_7 = &rsi_7[2]
                            *(rdx_19 + 0x10) = zmm0_2
                        while (i_2 s< *(r13_2 + 0x318))
                    
                    int32_t rdx_20 = *(r13_2 + 0x358)
                    arg1[0x21].d = 0
                    
                    if (*(arg1 + 0x10c) != rdx_20)
                        sub_1405c5660(&arg1[0x20], rdx_20)
                    
                    int32_t i_3 = 0
                    
                    if (*(r13_2 + 0x358) s> 0)
                        int64_t* r14_6 = nullptr
                        int64_t* r15_2 = nullptr
                        
                        do
                            int64_t rdi_8 = sx.q(arg1[0x21].d)
                            int32_t rax_37 = (rdi_8 + 1).d
                            arg1[0x21].d = rax_37
                            
                            if (rax_37 s> *(arg1 + 0x10c))
                                sub_1405c4ec0(&arg1[0x20])
                            
                            int64_t* rdx_22 = arg1[0x20] + rdi_8 * 0x28
                            
                            if (rdx_22 == 0)
                                rdx_22 = nullptr
                            else
                                *rdx_22 = 0
                                rdx_22[1].b = 2
                                *(rdx_22 + 0xc) = 0xffffffff
                                __builtin_memset(&rdx_22[2], 0, 0x18)
                            
                            i_3 += 1
                            int64_t rcx_27 = *(r15_2 + *(r13_2 + 0x350))
                            r15_2 = &r15_2[2]
                            *rdx_22 = rcx_27
                            int64_t rcx_28 = *(r14_6 + *(r13_2 + 0x420))
                            r14_6 = &r14_6[1]
                            rdx_22[2] = rcx_28
                        while (i_3 s< *(r13_2 + 0x358))
                    
                    int32_t rdx_23 = *(r13_2 + 0x3d8)
                    arg1[0x23].d = 0
                    
                    if (*(arg1 + 0x11c) != rdx_23)
                        sub_1405c5660(&arg1[0x22], rdx_23)
                    
                    int32_t i_4 = 0
                    
                    if (*(r13_2 + 0x3d8) s> 0)
                        int64_t* r14_7 = nullptr
                        int64_t* r15_3 = nullptr
                        
                        do
                            int64_t rdi_9 = sx.q(arg1[0x23].d)
                            int32_t rax_41 = (rdi_9 + 1).d
                            arg1[0x23].d = rax_41
                            
                            if (rax_41 s> *(arg1 + 0x11c))
                                sub_1405c4ec0(&arg1[0x22])
                            
                            int64_t* rdx_25 = arg1[0x22] + rdi_9 * 0x28
                            
                            if (rdx_25 == 0)
                                rdx_25 = nullptr
                            else
                                *rdx_25 = 0
                                rdx_25[1].b = 2
                                *(rdx_25 + 0xc) = 0xffffffff
                                __builtin_memset(&rdx_25[2], 0, 0x18)
                            
                            i_4 += 1
                            int64_t rcx_32 = *(r15_3 + *(r13_2 + 0x3d0))
                            r15_3 = &r15_3[2]
                            *rdx_25 = rcx_32
                            int64_t rcx_33 = *(r14_7 + *(r13_2 + 0x450))
                            r14_7 = &r14_7[1]
                            rdx_25[2] = rcx_33
                        while (i_4 s< *(r13_2 + 0x3d8))
                    
                    r14_1 = var_48
            else
                int64_t* i_5 = *(r13_2 + 0xe0)
                
                for (void* rbp_2 = i_5 + sx.q(*(r13_2 + 0xe8)) * 0x24; i_5 != rbp_2; i_5 += 0x24)
                    int64_t* rcx_4 = arg1[0x1c]
                    int64_t r8_3 = sx.q(arg1[0x1d].d)
                    int64_t rsi_2 = r8_3 * 9
                    void* rdx_3 = rcx_4 + (rsi_2 << 2)
                    
                    if (rcx_4 == rdx_3)
                    label_1421210f9:
                        int32_t rax_10 = (r8_3 + 1).d
                        arg1[0x1d].d = rax_10
                        
                        if (rax_10 s> *(arg1 + 0xec))
                            sub_140adefe0(&arg1[0x1c])
                        
                        int64_t rcx_6 = arg1[0x1c]
                        *(rcx_6 + (rsi_2 << 2)) = *i_5
                        *(rcx_6 + (rsi_2 << 2) + 0x10) = *(i_5 + 0x10)
                        *(rcx_6 + (rsi_2 << 2) + 0x20) = i_5[4].d
                    else
                        while (*rcx_4 != *i_5)
                            rcx_4 += 0x24
                            
                            if (rcx_4 == rdx_3)
                                goto label_1421210f9
                        
                        rcx_4[2].d = i_5[2].d
                
                int64_t* rbx_1 = *(r13_2 + 0xf0)
                void* r14_4 = &rbx_1[sx.q(*(r13_2 + 0xf8)) * 6]
                
                if (rbx_1 != r14_4)
                    void* rbp_3 = &rbx_1[2]
                    
                    do
                        int64_t* rcx_7 = arg1[0x1e]
                        int64_t r8_4 = sx.q(arg1[0x1f].d)
                        int64_t rsi_4 = r8_4 * 6
                        void* rdx_5 = &rcx_7[rsi_4]
                        
                        if (rcx_7 == rdx_5)
                        label_142121192:
                            int32_t rax_14 = (r8_4 + 1).d
                            arg1[0x1f].d = rax_14
                            
                            if (rax_14 s> *(arg1 + 0xfc))
                                sub_1405c4f50(&arg1[0x1e])
                            
                            int64_t rax_15 = arg1[0x1e]
                            *(rax_15 + (rsi_4 << 3)) = *rbx_1
                            *(rax_15 + (rsi_4 << 3) + 0x10) = *(rbx_1 + 0x10)
                            *(rax_15 + (rsi_4 << 3) + 0x20) = *(rbx_1 + 0x20)
                        else
                            while (*rcx_7 != *rbx_1)
                                rcx_7 = &rcx_7[6]
                                
                                if (rcx_7 == rdx_5)
                                    goto label_142121192
                            
                            *(rcx_7 + 0x10) = *rbp_3
                        
                        rbx_1 = &rbx_1[6]
                        rbp_3 += 0x30
                    while (rbx_1 != r14_4)
                
                int64_t* i_6 = *(r13_2 + 0x100)
                
                for (void* rbp_4 = &i_6[sx.q(*(r13_2 + 0x108)) * 5]; i_6 != rbp_4; i_6 = &i_6[5])
                    int64_t* rcx_10 = arg1[0x20]
                    int64_t r8_5 = sx.q(arg1[0x21].d)
                    int64_t rsi_5 = r8_5 * 5
                    void* rdx_7 = &rcx_10[rsi_5]
                    
                    if (rcx_10 == rdx_7)
                    label_142121229:
                        int32_t rax_18 = (r8_5 + 1).d
                        arg1[0x21].d = rax_18
                        
                        if (rax_18 s> *(arg1 + 0x10c))
                            sub_1405c4ec0(&arg1[0x20])
                        
                        int64_t rax_19 = arg1[0x20]
                        *(rax_19 + (rsi_5 << 3)) = *i_6
                        *(rax_19 + (rsi_5 << 3) + 0x10) = *(i_6 + 0x10)
                        *(rax_19 + (rsi_5 << 3) + 0x20) = i_6[4]
                    else
                        while (*rcx_10 != *i_6)
                            rcx_10 = &rcx_10[5]
                            
                            if (rcx_10 == rdx_7)
                                goto label_142121229
                        
                        rcx_10[2] = i_6[2]
                
                int64_t* i_7 = *(r13_2 + 0x110)
                
                for (void* rbp_5 = &i_7[sx.q(*(r13_2 + 0x118)) * 5]; i_7 != rbp_5; i_7 = &i_7[5])
                    int64_t* rcx_13 = arg1[0x22]
                    int64_t r8_6 = sx.q(arg1[0x23].d)
                    int64_t rsi_6 = r8_6 * 5
                    void* rax_21 = &rcx_13[rsi_6]
                    
                    if (rcx_13 == rax_21)
                    label_1421212b5:
                        int32_t rax_22 = (r8_6 + 1).d
                        arg1[0x23].d = rax_22
                        
                        if (rax_22 s> *(arg1 + 0x11c))
                            sub_1405c4ec0(&arg1[0x22])
                        
                        int64_t rax_23 = arg1[0x22]
                        *(rax_23 + (rsi_6 << 3)) = *i_7
                        *(rax_23 + (rsi_6 << 3) + 0x10) = *(i_7 + 0x10)
                        *(rax_23 + (rsi_6 << 3) + 0x20) = i_7[4]
                    else
                        while (*rcx_13 != *i_7)
                            rcx_13 = &rcx_13[5]
                            
                            if (rcx_13 == rax_21)
                                goto label_1421212b5
                        
                        rcx_13[2] = i_7[2]
                
                r14_1 = var_48
        
        r13_1 = var_50_1 - 1
        cond:0_1 = var_50_1 - 1 s>= 0
        var_50_1 = r13_1
    while (cond:0_1)

sub_142129e50(arg1)

if (r14_1 != 0)
    sub_140a74f90(r14_1)
