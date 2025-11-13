// 函数: sub_141bb3b50
// 地址: 0x141bb3b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t var_40 = __security_cookie ^ &var_f8
int32_t rax_2 = *(arg1 + 0xc)
int64_t* rsi = arg3
void* const rax_9

if (rax_2 s>= data_143e1d9b4)
    rax_9 = nullptr
else
    int16_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rax_2)
    uint32_t rdx_1 = zx.d(temp1_1)
    int32_t rax_4 = temp2_1 + rdx_1
    rax_9 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_1) * 0x18

*(rax_9 + 8) &= 0xbfffffff
int32_t result
void* var_a0

if (arg4 == 0)
label_141bb3dd3:
    var_a0 = nullptr
    result = sub_1405a9f90(arg1 + 0x40, &var_a0)
    int64_t* rbx_7 = *(arg2 + 8)
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            result = (**rbx_7)(rbx_7)
            int32_t temp4_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp4_1 == 1)
                result = (*(*rbx_7 + 8))(rbx_7, 1)
    
    int64_t* rdi_3 = rsi[1]
    
    if (rdi_3 != 0)
        result = rdi_3[1].d
        rdi_3[1].d -= 1
        
        if (result == 1)
            result = (**rdi_3)(rdi_3)
            int32_t rbx_8 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (rbx_8 == 1)
                result = (*(*rdi_3 + 8))(rdi_3, zx.q(rbx_8))
else
    int64_t* rcx_4 = *arg3
    
    if (rcx_4 == 0)
        goto label_141bb3dd3
    
    if ((*(*rcx_4 + 0x28))(rcx_4) s<= 0)
        goto label_141bb3dd3
    
    void var_90
    int64_t rbx_1 = *sub_140b58170(&var_90, "ImageWrapper", 1)
    j_sub_140b3db50()
    int64_t* rax_13 = j_sub_140b407e0(&data_143de7d78, rbx_1)
    int64_t r9 = *rax_13
    void var_70
    (*(r9 + 0x40))(rax_13, &var_70, 0, r9, arg3)
    int64_t r9_1 = *rax_13
    int64_t r8
    r8.b = 1
    void var_60
    (*(r9_1 + 0x40))(rax_13, &var_60, r8, r9_1)
    int64_t r9_2 = *rax_13
    int64_t r8_1
    r8_1.b = 3
    void var_50
    (*(r9_2 + 0x40))(rax_13, &var_50, r8_1, r9_2)
    void* r13_1 = &var_70
    int64_t i = 3
    
    while (true)
        int64_t* rdi_1 = *(r13_1 + 8)
        int64_t* r12_1 = *r13_1
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int64_t __saved_r15
        
        if (r12_1 != 0)
            int64_t* r14_1 = *rsi
            
            if ((**r12_1)(r12_1, *(*(*r14_1 + 0x30))(r14_1), sx.q((*(*r14_1 + 0x28))(r14_1))) != 0)
                int64_t* rax_19
                int64_t rdx_8
                rax_19, rdx_8 = j_sub_140a82f30(0x18)
                int64_t* rsi_2 = rax_19
                
                if (rax_19 == 0)
                    rsi_2 = nullptr
                else
                    __builtin_memset(rax_19, 0, 0x18)
                
                rdx_8.b = 1
                
                if ((*(*r12_1 + 0x20))(r12_1, rdx_8, 8, rsi_2) != 0)
                    int32_t var_b0 = 2
                    int16_t var_ac_1 = 0x100
                    int64_t var_a8_1 = 3
                    int32_t rax_23 = (*(*r12_1 + 0x30))(r12_1)
                    int64_t rdx_9 = *r12_1
                    int64_t* rax_25 =
                        sub_1423bd6c0((*(rdx_9 + 0x28))(r12_1, rdx_9), rax_23, &var_b0)
                    
                    if (rax_25 != 0)
                        rax_25[0xc].b |= 1
                        (*(*rax_25 + 0x2f8))(rax_25)
                        void* rbx_9 = rax_25[0xf]
                        var_a0 = rbx_9
                        int64_t* var_98_1 = rsi_2
                        char rax_35
                        int64_t r8_4
                        rax_35, r8_4 = sub_140a80f40()
                        
                        if (rax_35 != 0)
                            r8_4.b = 1
                            sub_141bf66c0(rbx_9, rsi_2)
                        else if (data_143f138f4 != rax_35)
                        label_141bb3ef5:
                            void var_88
                            int64_t* rax_37 = sub_141ba1c90(&var_88, nullptr, 0xff)
                            *(*rax_37 + 0x10) = var_a0.o
                            void* rcx_32 = *rax_37
                            int32_t r8_5 = rax_37[2].d
                            int64_t* rdx_14 = rax_37[1]
                            int64_t* rbx_10 = *(rcx_32 + 0x28)
                            int64_t* var_c8_1 = rbx_10
                            int32_t* rsi_3 = &rbx_10[9]
                            
                            if (rbx_10 != 0)
                                *rsi_3 += 1
                                rbx_10 = var_c8_1
                            
                            sub_1405e48c0(rcx_32, rdx_14, r8_5, 1)
                            
                            if (rbx_10 != 0)
                                int32_t rbx_11 = *rsi_3
                                *rsi_3 -= 1
                                
                                if (rbx_11 == 1)
                                    sub_140a2f6e0(var_c8_1)
                        else if (data_143de5480 == rax_35)
                            r8_4.b = 1
                            sub_141bf66c0(rbx_9, rsi_2)
                        else
                            uint32_t rax_36
                            rax_36, r8_4 = GetCurrentThreadId()
                            rax_36.b = rax_36 == data_143de5470
                            
                            if (rax_36.b == 0)
                                goto label_141bb3ef5
                            
                            r8_4.b = 1
                            sub_141bf66c0(rbx_9, rsi_2)
                        
                        int64_t* var_d0 = rax_25
                        sub_1405a9f90(arg1 + 0x30, &var_d0)
                        
                        if (rdi_1 != 0)
                            rdi_1[1].d -= 1
                            
                            if (rdi_1[1].d == 1)
                                (**rdi_1)(rdi_1)
                                int32_t temp10_1 = *(rdi_1 + 0xc)
                                *(rdi_1 + 0xc) -= 1
                                
                                if (temp10_1 == 1)
                                    (*(*rdi_1 + 8))(rdi_1, 1)
                        
                        int64_t* rdi_4 = &__saved_r15
                        
                        do
                            int64_t* rbx_12 = rdi_4[-2]
                            rdi_4 = &rdi_4[-2]
                            i -= 1
                            
                            if (rbx_12 != 0)
                                rbx_12[1].d -= 1
                                
                                if (rbx_12[1].d == 1)
                                    (**rbx_12)(rbx_12)
                                    int32_t temp12_1 = *(rbx_12 + 0xc)
                                    *(rbx_12 + 0xc) -= 1
                                    
                                    if (temp12_1 == 1)
                                        (*(*rbx_12 + 8))(rbx_12, 1)
                        while (i != 0)
                        
                        sub_140669d70(arg2)
                        result = sub_140669db0(arg3)
                        break
            
            rsi = arg3
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp6_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        r13_1 += 0x10
        
        if (r13_1 == &var_40)
            int64_t* rdi_2 = &__saved_r15
            
            do
                int64_t* rbx_5 = rdi_2[-2]
                rdi_2 = &rdi_2[-2]
                i -= 1
                
                if (rbx_5 != 0)
                    rbx_5[1].d -= 1
                    
                    if (rbx_5[1].d == 1)
                        (**rbx_5)(rbx_5)
                        int32_t temp8_1 = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rbx_5 + 8))(rbx_5, 1)
            while (i != 0)
            
            goto label_141bb3dd3
__security_check_cookie(var_40 ^ &var_f8)
return result
