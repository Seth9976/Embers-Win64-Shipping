// 函数: sub_14092d130
// 地址: 0x14092d130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* r13 = arg3
int64_t* r12 = arg1
int64_t* var_110 = arg2
*(*arg3 + 0x30) = 3
void* r15 = *arg3
int32_t i_5 = *(r15 + 0x28)
void* rsi = *(r15 + 0x20)

if (i_5 != 0)
    void* rdi_1 = rsi + 0x68
    int32_t i
    
    do
        *(rdi_1 + 8) = 0
        int64_t rcx = *rdi_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        sub_1409259a0(rdi_1 - 0x40, 0)
        int64_t rcx_2 = *(rdi_1 - 0x20)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(rdi_1 - 0x40)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t* rbx_1 = *(rdi_1 - 0x50)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t rcx_6 = *rsi
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rsi += 0x78
        rdi_1 += 0x78
        i = i_5
        i_5 -= 1
    while (i != 1)
    r12 = arg1

bool cond:0 = *(r15 + 0x2c) == 0
*(r15 + 0x28) = 0

if (not(cond:0))
    sub_1407c4420(r15 + 0x20, 0)

int64_t* r14 = var_110
int64_t i_7 = sx.q(r14[1].d)

if (i_7.d != 0)
    *(*r13 + 0x30) = 2
    int64_t rbx_3 = **r13
    void* const rcx_11
    
    if (r12[9].d == *(r12 + 0x74))
    label_14092d2cf:
        rcx_11 = nullptr
    else
        int32_t rax_8 = sub_140b5ead0(rbx_3.d) + rbx_3:4.d
        void* r8 = &r12[0xf]
        void* rcx_9 = *(r8 + 8)
        
        if (rcx_9 != 0)
            r8 = rcx_9
        
        int32_t rax_10 = *(r8 + (((sx.q(r12[0x11].d) - 1) & sx.q(rax_8)) << 2))
        
        if (rax_10 == 0xffffffff)
        label_14092d2cf_1:
            rcx_11 = nullptr
        else
            int64_t r8_1 = r12[8]
            
            while (true)
                arg2 = sx.q(rax_10) * 9
                rcx_11 = r8_1 + (arg2 << 3)
                
                if (*(r8_1 + (arg2 << 3)) == rbx_3)
                    break
                
                rax_10 = *(rcx_11 + 0x40)
                
                if (rax_10 == 0xffffffff)
                    goto label_14092d2cf_2
            
            if (rax_10 == 0xffffffff)
            label_14092d2cf_2:
                rcx_11 = nullptr
    
    int64_t i_6 = i_7
    void* rsi_1 = rcx_11 + 8
    int64_t i_4 = i_7
    
    if (rcx_11 == 0)
        rsi_1 = nullptr
    
    int64_t rdi_2 = 0
    void* var_e8_1 = rsi_1
    
    if (rsi_1 != 0)
        int32_t i_1 = 0
        int32_t i_3 = 0
        
        if (*(rsi_1 + 0x28) s> 0)
            int64_t var_108_2 = 0
            
            do
                int64_t rax_11 = *(rsi_1 + 0x20)
                int64_t* r14_1 = *(rax_11 + rdi_2 + 0x18)
                int64_t rcx_12 = *(rax_11 + rdi_2 + 0x10)
                
                if (r14_1 != 0)
                    r14_1[1].d += 1
                
                if (i_4 s> 0)
                    int64_t j_2 = i_4
                    int64_t* r15_1 = nullptr
                    int64_t j
                    
                    do
                        int64_t rax_13 = *var_110
                        int64_t* rbx_4 = *(r15_1 + rax_13 + 8)
                        int64_t* rcx_13 = *(r15_1 + rax_13)
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d += 1
                        
                        if (rcx_13 != 0 && rcx_12 != 0)
                            char rax_15
                            rax_15, arg2 = (**rcx_13)(rcx_13, rcx_12)
                            
                            if (rax_15 != 0)
                                int64_t r12_1 = *(rsi_1 + 0x20)
                                void* rdi_3 = *arg3
                                int64_t rsi_2 = sx.q(*(rdi_3 + 0x28))
                                int32_t rax_17 = (rsi_2 + 1).d
                                *(rdi_3 + 0x28) = rax_17
                                
                                if (rax_17 s> *(rdi_3 + 0x2c))
                                    sub_1407c3920(rdi_3 + 0x20)
                                
                                sub_140919a30(rsi_2 * 0x78 + *(rdi_3 + 0x20), 
                                    sx.q(i_3) * 0x78 + r12_1)
                                rsi_1 = var_e8_1
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d -= 1
                            
                            if (rbx_4[1].d == 1)
                                (**rbx_4)(rbx_4)
                                int32_t temp8_1 = *(rbx_4 + 0xc)
                                *(rbx_4 + 0xc) -= 1
                                
                                if (temp8_1 == 1)
                                    (*(*rbx_4 + 8))(rbx_4, 1)
                        
                        r15_1 = &r15_1[2]
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                    i_1 = i_3
                    rdi_2 = var_108_2
                    i_4 = i_6
                
                if (r14_1 != 0)
                    r14_1[1].d -= 1
                    
                    if (r14_1[1].d == 1)
                        (**r14_1)(r14_1)
                        int32_t temp5_1 = *(r14_1 + 0xc)
                        *(r14_1 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*r14_1 + 8))(r14_1, 1)
                
                i_1 += 1
                rdi_2 += 0x78
                i_3 = i_1
                var_108_2 = rdi_2
            while (i_1 s< *(rsi_1 + 0x28))
            
            r13 = arg3
            rdi_2 = 0
            r14 = var_110
    
    if (i_4 s> 0)
        int64_t* r15_2 = nullptr
        int64_t i_2
        
        do
            void* rsi_3 = *r13
            int32_t j_1 = 0
            int64_t r14_3 = *(r15_2 + *r14)
            int64_t rcx_22
            
            if (*(rsi_3 + 0x28) s> 0)
                do
                    int64_t* rcx_21 = *(rdi_2 + *(rsi_3 + 0x20) + 0x10)
                    char rax_26
                    rax_26, arg2 = (**rcx_21)(rcx_21, r14_3)
                    
                    if (rax_26 != 0)
                        rcx_22 = sx.q(j_1) * 0x78 + *(rsi_3 + 0x20)
                        rdi_2 = 0
                        goto label_14092d499
                    
                    j_1 += 1
                    rdi_2 += 0x78
                while (j_1 s< *(rsi_3 + 0x28))
                
                rdi_2 = 0
            
            rcx_22 = 0
        label_14092d499:
            r14 = var_110
            
            if (rcx_22 == 0)
                int64_t* rbx_5 = *r14
                int64_t* rcx_23 = *(rbx_5 + r15_2)
                int64_t var_c8
                sub_140596d10(&var_c8, (*(*rcx_23 + 0x30))(rcx_23, &i_6))
                int64_t rax_29 = *(rbx_5 + r15_2)
                int64_t* rax_30 = *(rbx_5 + r15_2 + 8)
                
                if (rax_30 != 0)
                    rax_30[1].d += 1
                
                int64_t i_8 = i_6
                int64_t var_a0
                __builtin_memset(&var_a0, 0, 0x2c)
                int32_t var_74_1 = 0x80
                int32_t var_70_1 = 0xffffffff
                int32_t var_6c_1 = 0
                int64_t var_60_1 = 0
                int32_t var_58_1 = 0
                
                if (i_8 != 0)
                    sub_140a74f90(i_8)
                
                void* rbx_6 = *r13
                int32_t var_a8_1 = 0xffffffff
                int64_t rdi_4 = sx.q(*(rbx_6 + 0x28))
                int32_t rax_31 = (rdi_4 + 1).d
                *(rbx_6 + 0x28) = rax_31
                
                if (rax_31 s> *(rbx_6 + 0x2c))
                    sub_1407c3920(rbx_6 + 0x20)
                
                int64_t* rdi_6 = rdi_4 * 0x78 + *(rbx_6 + 0x20)
                sub_140596d10(rdi_6, &var_c8)
                rdi_6[2] = rax_29
                rdi_6[3] = rax_30
                
                if (rax_30 != 0)
                    rax_30[1].d += 1
                
                rdi_6[4].d = var_a8_1
                void* rcx_27 = &rdi_6[7]
                rdi_2 = 0
                rdi_6[5] = 0
                rdi_6[6] = 0
                *(rcx_27 + 0x1c) = 0x80
                void* rax_36 = *(rcx_27 + 0x10)
                
                if (rax_36 != 0)
                    rcx_27 = rax_36
                
                __builtin_memset(rcx_27, 0, 0x1c)
                rdi_6[0xb].d = 0xffffffff
                *(rdi_6 + 0x5c) = 0
                rdi_6[0xd] = 0
                rdi_6[0xe].d = 0
                sub_14091bd10(&rdi_6[5], &var_a0)
                int32_t var_58_2 = 0
                
                if (var_60_1 != 0)
                    sub_140a74f90(var_60_1)
                
                sub_1409259a0(&var_a0, 0)
                int64_t var_80
                
                if (var_80 != 0)
                    sub_140a74f90(var_80)
                
                int64_t rcx_32 = var_a0
                
                if (rcx_32 != 0)
                    sub_140a74f90(rcx_32)
                
                if (rax_30 != 0)
                    rax_30[1].d -= 1
                    
                    if (rax_30[1].d == 1)
                        (**rax_30)(rax_30)
                        int32_t temp10_1 = *(rax_30 + 0xc)
                        *(rax_30 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*rax_30 + 8))(rax_30, 1)
                
                int64_t rcx_35 = var_c8
                
                if (rcx_35 != 0)
                    sub_140a74f90(rcx_35)
            
            r15_2 = &r15_2[2]
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    
    r12 = arg1

int64_t r8_3 = *r12
arg2.b = *(*r13 + 0x30) == 2
(*(r8_3 + 0x40))(r12, arg2, r8_3)
int64_t result
result.b = 1
__security_check_cookie(rax_1 ^ &var_138)
return result
