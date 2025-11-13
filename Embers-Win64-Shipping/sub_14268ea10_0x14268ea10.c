// 函数: sub_14268ea10
// 地址: 0x14268ea10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int32_t rdi = arg3
arg2[1] = 0
int64_t* rbx = arg1[0x1d]
char rax_2 = sub_14243ade0((*(*rbx + 0x150))(rbx))
char arg_8

if (rax_2 != 0)
    arg_8 = 1

if (rax_2 == 0 || *(rbx + 0x2ac) == 2)
    arg_8 = 0

int32_t r12 = arg1[0x1f].d
int32_t rax_3 = 0
int32_t r12_1 = r12 - 1
int32_t arg_20 = 0

if (r12 - 1 s>= 0)
    int64_t rcx_3 = sx.q(r12_1) << 5
    int64_t var_c0_1 = rcx_3
    int32_t var_c8_1 = r12_1 + 1
    
    while (rax_3 s< rdi)
        int32_t* rdx_1 = arg1[0x20]
        int64_t* r15_2 = arg1[0x1e] + rcx_3
        char var_a8_1 = 0
        int64_t var_a0_1 = 0
        int64_t rax_4 = *r15_2
        void* rax_6 = &rdx_1[sx.q(arg1[0x21].d) * 6]
        
        if (rdx_1 == rax_6)
        label_14268eb2d:
            int64_t var_d8
            void var_70
            int64_t* rax_8 = (*(*arg1 + 0x88))(arg1, &var_70, r15_2, &r15_2[2], var_d8)
            void*** rax_9 = j_sub_140a82f30(0x30)
            void*** rdi_1 = rax_9
            
            if (rax_9 == 0)
                rdi_1 = nullptr
            else
                *rdi_1 = &data_14345a290
                int64_t* rbx_2 = rax_8[1]
                
                if (rbx_2 != 0)
                    rbx_2[1].d += 1
                
                rdi_1[1] = *rax_8
                rdi_1[2] = rbx_2
                
                if (rbx_2 != 0)
                    rbx_2[1].d += 1
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            (**rbx_2)(rbx_2)
                            int32_t temp8_1 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (temp8_1 == 1)
                                (*(*rbx_2 + 8))(rbx_2, 1)
                
                rdi_1[3].d = 0
                rdi_1[4] = 0
                rdi_1[5] = 0
            
            void*** rbx_3 = rdi_1
            int64_t* var_68
            
            if (var_68 != 0)
                var_68[1].d -= 1
                
                if (var_68[1].d == 1)
                    (**var_68)(var_68)
                    int32_t temp5_1 = *(var_68 + 0xc)
                    *(var_68 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*var_68 + 8))(var_68, 1)
            
            void* rax_15 = rdi_1[1]
            
            if (*(rax_15 + 0x2c8) != 0 || *(rax_15 + 0x308) != 0 || *(rax_15 + 0x318) != 0
                    || *(rax_15 + 0x2f8) != 0
                    || (*(rax_15 + 0x158) != 0 && *(rax_15 + 0x338) s> 0))
                rbx_3 = nullptr
                void*** rcx_27
                
                if (data_143f7179c != 0)
                    rdi_1[3].d += 1
                    rcx_27 = rdi_1[4]
                    rdi_1[5] = 0
                label_14268ee3b:
                    sub_140a4fc50(rcx_27)
                    rdi_1[4] = 0
                    sub_1426788a0(rdi_1)
                else
                    int64_t rax_24 = data_143db7ac8
                    rdi_1[3].d += 1
                    rcx_27 = rdi_1[4]
                    rdi_1[5] = rax_24
                    
                    if (rax_24 == 0)
                        goto label_14268ee3b
                    
                    if (rcx_27 == 0)
                        rcx_27.b = 1
                        void*** rax_25 = sub_140a491d0(rcx_27.b)
                        rcx_27 = rax_25
                        rdi_1[4] = rax_25
                    
                    (*rcx_27)[3](rcx_27)
                    int64_t* rcx_28 = rdi_1[5]
                    (*(*rcx_28 + 0x10))(rcx_28, rdi_1)
                int64_t rdi_5 = sx.q(arg1[0x21].d)
                int32_t rax_28 = (rdi_5 + 1).d
                arg1[0x21].d = rax_28
                
                if (rax_28 s> *(arg1 + 0x10c))
                    sub_1405a4df0(&arg1[0x20])
                
                int64_t rax_29 = arg1[0x20]
                int64_t rcx_31 = rdi_5 * 3
                *(rax_29 + (rcx_31 << 3)) = rax_4.o
                *(rax_29 + (rcx_31 << 3) + 0x10) = rdi_1
            else if (arg_8 == 0)
                var_d8 = 0
                int64_t var_60
                int64_t* rax_16 = sub_142692200(arg1, &var_60, *r15_2, *(r15_2 + 4), nullptr)
                int64_t rdi_2 = sx.q(rax_16[1].d)
                
                if (rdi_2.d != 0)
                    int32_t rcx_12 = arg2[1].d
                    int32_t rdx_4 = rcx_12 + rdi_2.d
                    
                    if (rdx_4 s> *(arg2 + 0xc))
                        sub_1405dadb0(arg2, rdx_4)
                        rcx_12 = arg2[1].d
                    
                    memmove(*arg2 + (sx.q(rcx_12) << 2), *rax_16, (rdi_2 << 2).d)
                    rax_16[1].d = 0
                    arg2[1].d += rdi_2.d
                
                int64_t rcx_16 = var_60
                
                if (rcx_16 != 0)
                    sub_140a74f90(rcx_16)
                
                *(r15_2 + 4)
                sub_14268cea0(arg1[0x1d], *r15_2)
            
            int64_t rdi_4 = sx.q(r12_1) << 5
            int64_t rcx_18 = *(rdi_4 + arg1[0x1e] + 0x10)
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            int32_t rax_20 = arg1[0x1f].d
            int32_t rcx_20 = rax_20 - r12_1
            
            if (rcx_20 != 1)
                int64_t rax_19 = arg1[0x1e]
                memmove(rax_19 + rdi_4, (sx.q(var_c8_1) << 5) + rax_19, (rcx_20 - 1) << 5)
                rax_20 = arg1[0x1f].d
            
            arg1[0x1f].d = rax_20 - 1
            rax_3 = arg_20 + 1
            arg_20 = rax_3
            
            if (rbx_3 != 0)
                (*rbx_3)[2](rbx_3, 1)
                rax_3 = arg_20
            
            rdi = arg3
        else
            while (*rdx_1 != rax_4.d || rdx_1[1] != rax_4:4.d)
                rdx_1 = &rdx_1[6]
                
                if (rdx_1 == rax_6)
                    goto label_14268eb2d
            
            rax_3 = arg_20
        
        var_c8_1 -= 1
        rcx_3 = var_c0_1 - 0x20
        int32_t temp7_1 = r12_1
        r12_1 -= 1
        var_c0_1 = rcx_3
        
        if (temp7_1 - 1 s< 0)
            break
    
    if (rax_3 s> 0 && arg1[0x1f].d == 0)
        int32_t i_1 = arg1[0x1f].d
        
        if (i_1 != 0)
            int64_t* rbx_5 = arg1[0x1e] + 0x10
            int32_t i
            
            do
                int64_t rcx_25 = *rbx_5
                
                if (rcx_25 != 0)
                    sub_140a74f90(rcx_25)
                
                rbx_5 = &rbx_5[4]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        arg1[0x1f].d = 0
        
        if (*(arg1 + 0xfc) != 0x40)
            sub_1405a51b0(&arg1[0x1e], 0x40)

int32_t rsi_3 = arg1[0x21].d
int32_t rsi_4 = rsi_3 - 1

if (rsi_3 - 1 s< 0)
    return arg2

int64_t r15_4 = sx.q(rsi_4) * 0x18
int64_t r12_2 = r15_4
int32_t temp2_1

do
    int32_t* rbx_7 = arg1[0x20] + r15_4
    void* rdi_6 = *(rbx_7 + 0x10)
    bool z_1
    
    if (0 == *(rdi_6 + 0x18))
        *(rdi_6 + 0x18) = 0
        z_1 = true
    else
        *(rdi_6 + 0x18)
        z_1 = false
    
    if (z_1)
        if (*(rdi_6 + 0x28) != 0)
            int64_t* rcx_32 = *(rdi_6 + 0x20)
            (*(*rcx_32 + 0x20))(rcx_32, 0xffffffff, 0)
            *(rdi_6 + 0x28) = 0
        
        if (rbx_7[2].b == 0)
            void* r14_2 = *(*(rbx_7 + 0x10) + 8)
            int64_t var_90
            sub_142673470(arg1, &var_90, r14_2)
            int32_t var_88
            int64_t rdi_7 = sx.q(var_88)
            int64_t rbp_1 = var_90
            
            if (rdi_7.d != 0)
                int32_t rax_34 = arg2[1].d
                int32_t rdx_13 = rdi_7.d + rax_34
                int64_t* rdx_14
                
                if (rdx_13 s<= *(arg2 + 0xc))
                    rdx_14 = arg2
                else
                    sub_1405dadb0(arg2, rdx_13)
                    rdx_14 = arg2
                    rax_34 = rdx_14[1].d
                
                memcpy(*rdx_14 + (sx.q(rax_34) << 2), rbp_1, (rdi_7 << 2).d)
                arg2[1].d += rdi_7.d
            
            int32_t r8_11 = rbx_7[1]
            int32_t rdx_16 = *rbx_7
            void* rcx_37 = arg1[0x1d]
            
            if (*(r14_2 + 0x2c8) == 0)
                sub_14268cea0(rcx_37, rdx_16)
            else
                void* rcx_38 = *(rcx_37 + 0x4a8)
                
                if (rcx_38 != 0)
                    int32_t var_b8 = rdx_16
                    int32_t* var_80 = &var_b8
                    int32_t var_b4_1 = r8_11
                    void* var_78_1 = r14_2 + 0x2c0
                    void var_98
                    sub_14266ebd0(rcx_38 + 0x10, &var_98, &var_80, nullptr)
            
            if (rbp_1 != 0)
                sub_140a74f90(rbp_1)
        
        int64_t* rcx_41 = *(rbx_7 + 0x10)
        
        if (rcx_41 != 0)
            (*(*rcx_41 + 0x10))(rcx_41, 1)
        
        *(rbx_7 + 0x10) = 0
        int32_t rdx_18 = arg1[0x21].d
        int32_t rcx_44 = rdx_18 - rsi_4 - 1
        
        if (rcx_44 s>= 1)
            rcx_44 = 1
        
        if (rcx_44 != 0)
            int64_t r9_3 = arg1[0x20]
            memcpy(r9_3 + r12_2, r9_3 + sx.q(rdx_18 - rcx_44) * 0x18, rcx_44 * 0x18)
            rdx_18 = arg1[0x21].d
        
        arg1[0x21].d = rdx_18 - 1
    
    r12_2 -= 0x18
    r15_4 -= 0x18
    temp2_1 = rsi_4
    rsi_4 -= 1
while (temp2_1 - 1 s>= 0)
return arg2
