// 函数: sub_140a8b380
// 地址: 0x140a8b380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *arg1
int32_t rax_1 = 0
char rsi = *(*(r9 + 8) + 0x28) & 1

if (rsi == 0)
    int64_t* rcx = *arg2
    rax_1 = (*(*rcx + 0x38))(rcx)
    r9 = *arg1

int32_t arg_8 = rax_1
int64_t* r9_1 = *(r9 + 8)
int64_t* rcx_1 = r9_1[1]
int32_t* rdx = *rcx_1
int64_t* rax_5

if (&rdx[1] u> rcx_1[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(r9_1 + 0x29) & 0x20) != 0)
        rax_5 = sub_140b54070(r9_1, rdx_1, arg3)
    else
        rax_5 = (*(*r9_1 + 0x150))(r9_1, rdx_1, 4)
else
    arg_8 = *rdx
    rax_5 = r9_1[1]
    *rax_5 += 4

int32_t rcx_3 = arg_8
uint64_t var_48
int32_t var_40
int32_t arg_18
int64_t* rbx_2
void*** rsi_9

if (rcx_3 == 1)
    if (rsi == 0)
        int64_t* r9_5 = *(*arg1 + 8)
        int64_t* rcx_41 = r9_5[1]
        int64_t rax_47 = *rcx_41 + 4
        
        if (rax_47 u<= rcx_41[1])
            *rcx_41 = rax_47
            return rax_47
        
        int64_t rax_48 = *r9_5
        int32_t rdi
        rdi.b = *(*arg2 + 8) != 0
        arg_18 = rdi
        return (*(rax_48 + 0x150))(r9_5, &arg_18, 4)
    
    void*** rax_32 = j_sub_140a82f30(0x10)
    rsi_9 = rax_32
    
    if (rax_32 == 0)
        rsi_9 = nullptr
    else
        *rsi_9 = &data_142e62608
        int64_t* r9_4 = *(*arg1 + 8)
        int64_t* rdx_19 = r9_4[1]
        int32_t* rax_33 = *rdx_19
        
        if (&rax_33[1] u> rdx_19[1])
            int32_t rax_35
            rax_35.b = rsi_9[1].b != 0
            arg_18 = rax_35
            (*(*r9_4 + 0x150))(r9_4, &arg_18, 4)
            rsi_9[1].b = arg_18 != 0
        else
            rax_33.b = *rax_33 != 0
            rsi_9[1].b = rax_33.b
            int64_t* rax_34 = r9_4[1]
            *rax_34 += 4
    
    int64_t* rax_38 = j_sub_140a82f30(0x18)
    rbx_2 = rax_38
    
    if (rax_38 == 0)
    label_140a8b9c0:
        rbx_2 = nullptr
        goto label_140a8b9c6
    
    rax_38[1].d = 1
    *(rax_38 + 0xc) = 1
    *rbx_2 = &data_142d42ea8
    rbx_2[2] = rsi_9
label_140a8b9c6:
    var_40.q = rbx_2
    var_48 = rsi_9
    rax_5 = &var_48
    
    if (arg2 == &var_48)
    label_140a8ba2a:
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                rax_5 = (**rbx_2)(rbx_2)
                int32_t temp4_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    return (*(*rbx_2 + 8))(rbx_2, 1)
    else
        *arg2 = rsi_9
        int64_t* rsi_11 = arg2[1]
        var_48 = 0
        
        if (rbx_2 == rsi_11)
            goto label_140a8ba2a
        
        arg2[1] = rbx_2
        var_40.q = 0
        
        if (rsi_11 != 0)
            rsi_11[1].d -= 1
            
            if (rsi_11[1].d == 1)
                rax_5 = (**rsi_11)(rsi_11)
                int32_t temp6_1 = *(rsi_11 + 0xc)
                *(rsi_11 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    rax_5 = (*(*rsi_11 + 8))(rsi_11, 1)
            
            rbx_2 = var_40.q
            goto label_140a8ba2a
else if (rcx_3 == 2)
    if (rsi != 0)
        void*** rax_27 = j_sub_140a82f30(0x18)
        rsi_9 = rax_27
        
        if (rax_27 == 0)
            rsi_9 = nullptr
        else
            *rsi_9 = &data_142e625b0
            rsi_9[1] = 0
            rsi_9[2] = 0
            sub_140a1d9d0(*(*arg1 + 8), &rsi_9[1], arg3)
        
        int64_t* rax_28 = j_sub_140a82f30(0x18)
        rbx_2 = rax_28
        
        if (rax_28 == 0)
            goto label_140a8b9c0
        
        rax_28[1].d = 1
        *(rax_28 + 0xc) = 1
        *rbx_2 = &data_142d42ea8
        rbx_2[2] = rsi_9
        goto label_140a8b9c6
    
    void* rax_29 = *arg2
    var_48 = 0
    int32_t rsi_10 = *(rax_29 + 0x10)
    int64_t r14_1 = *(rax_29 + 8)
    int32_t var_40_1 = rsi_10
    
    if (rsi_10 != 0)
        sub_1405a4c70(&var_48, rsi_10, 0)
        memcpy(var_48, r14_1, rsi_10 * 2)
    else
        int32_t var_3c_1 = 0
    
    rax_5 = sub_140a1d9d0(*(*arg1 + 8), &var_48, arg3)
    uint64_t rbx_3 = var_48
    
    if (rbx_3 != 0)
        int64_t* rcx_33 = data_143ddb3f0
        
        if (rcx_33 == 0)
            sub_140a750a0()
            rcx_33 = data_143ddb3f0
        
        return (*(*rcx_33 + 0x30))(rcx_33, rbx_3)
else
    void*** rbx_1
    
    if (rcx_3 == 3)
        if (rsi == 0)
            void* rsi_5 = *arg2
            arg_18 = *(rsi_5 + 0x10)
            int64_t* r9_3 = *(*arg1 + 8)
            int64_t* rcx_24 = r9_3[1]
            int32_t* rdx_11 = *rcx_24
            
            if (&rdx_11[1] u> rcx_24[1])
                int32_t* rdx_12 = &arg_18
                
                if ((*(r9_3 + 0x29) & 0x20) != 0)
                    rax_5 = sub_140b54070(r9_3, rdx_12, arg3)
                else
                    rax_5 = (*(*r9_3 + 0x150))(r9_3, rdx_12, 4)
            else
                arg_18 = *rdx_11
                rax_5 = r9_3[1]
                *rax_5 += 4
            
            int64_t i = *(rsi_5 + 8)
            
            for (int64_t rsi_8 = (sx.q(*(rsi_5 + 0x10)) << 4) + i; i != rsi_8; i += 0x10)
                rax_5 = sub_140a8b380(arg1, i)
        else
            void*** rax_12 = j_sub_140a82f30(0x18)
            void*** r12_1 = rax_12
            
            if (rax_12 == 0)
                r12_1 = nullptr
            else
                *r12_1 = &data_142e62660
                r12_1[1] = 0
                r12_1[2] = 0
                int64_t* r9_2 = *(*arg1 + 8)
                int64_t* rcx_12 = r9_2[1]
                int32_t* rdx_6 = *rcx_12
                
                if (&rdx_6[1] u> rcx_12[1])
                    int32_t* rdx_7 = &arg_18
                    
                    if ((*(r9_2 + 0x29) & 0x20) != 0)
                        sub_140b54070(r9_2, rdx_7, arg3)
                    else
                        (*(*r9_2 + 0x150))(r9_2, rdx_7, 4)
                else
                    arg_18 = *rdx_6
                    int64_t* rax_15 = r9_2[1]
                    *rax_15 += 4
                
                int64_t rsi_2 = sx.q(r12_1[2].d)
                int32_t rdx_8 = arg_18
                
                if (rdx_8 s> rsi_2.d)
                    r12_1[2].d = rdx_8
                    
                    if (rdx_8 s> *(r12_1 + 0x14))
                        sub_140a89230(&r12_1[1])
                    
                    memset(&r12_1[1][rsi_2 * 2], 0, sx.q(rdx_8 - rsi_2.d) << 4)
                else if (rdx_8 s< rsi_2.d)
                    r9_2.b = 1
                    sub_140a87980(&r12_1[1], rdx_8, rsi_2.d - rdx_8, r9_2.b)
                
                int64_t i_1 = r12_1[1]
                
                for (int64_t r15_4 = (sx.q(r12_1[2].d) << 4) + i_1; i_1 != r15_4; i_1 += 0x10)
                    sub_140a8b380(arg1, i_1)
            
            void*** rax_17 = j_sub_140a82f30(0x18)
            rbx_1 = rax_17
            
            if (rax_17 == 0)
                rbx_1 = nullptr
            else
                rax_17[1].d = 1
                *(rax_17 + 0xc) = 1
                *rbx_1 = &data_142d42ea8
                rbx_1[2] = r12_1
            
            var_48 = r12_1
            var_40.q = rbx_1
            rax_5 = &var_48
            
            if (arg2 == &var_48)
            label_140a8b757:
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        rax_5 = (**rbx_1)(rbx_1)
                        int32_t temp8_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            return (*rbx_1)[1](rbx_1, 1)
            else
                *arg2 = r12_1
            label_140a8b713:
                int64_t* rsi_4 = arg2[1]
                var_48 = 0
                
                if (rbx_1 == rsi_4)
                    goto label_140a8b757
                
                arg2[1] = rbx_1
                var_40.q = 0
                
                if (rsi_4 != 0)
                    rsi_4[1].d -= 1
                    
                    if (rsi_4[1].d == 1)
                        rax_5 = (**rsi_4)(rsi_4)
                        int32_t temp10_1 = *(rsi_4 + 0xc)
                        *(rsi_4 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            rax_5 = (*(*rsi_4 + 8))(rsi_4, 1)
                    
                    rbx_1 = var_40.q
                    goto label_140a8b757
    else if (rcx_3 == 4)
        if (rsi == 0)
            return sub_140a64f00(arg1, *(*arg2 + 8), arg3)
        
        void*** rax_7 = j_sub_140a82f30(0x18)
        void*** r15_1 = rax_7
        
        if (rax_7 == 0)
            r15_1 = nullptr
        else
            *r15_1 = &data_142e626b8
            void* rax_8 = j_sub_140a82f30(0x50)
            void* const rsi_1 = rax_8
            
            if (rax_8 == 0)
                rsi_1 = nullptr
            else
                int64_t* rcx_7 = rax_8 + 0x10
                *(rax_8 + 0x20) = 0
                *(rax_8 + 0x28) = 0
                __builtin_memset(rax_8 + 0x30, 0, 0x1c)
                *(rax_8 + 0x40) = 0
                *(rax_8 + 0x48) = 0
                __builtin_memset(rax_8, 0, 0x2c)
                *(rcx_7 + 0x1c) = 0x80
                int64_t* rax_9 = rcx_7[2]
                
                if (rax_9 != 0)
                    rcx_7 = rax_9
                
                *rcx_7 = 0
                rcx_7[1] = 0
                *(rsi_1 + 0x30) = 0xffffffff
            
            r15_1[1] = rsi_1
            void*** rax_10 = j_sub_140a82f30(0x18)
            
            if (rax_10 == 0)
                rax_10 = nullptr
            else
                rax_10[1].d = 1
                *rax_10 = &data_142e63320
                *(rax_10 + 0xc) = 1
                rax_10[2] = rsi_1
            
            r15_1[2] = rax_10
            sub_140a64f00(arg1, r15_1[1], arg3)
        
        void*** rax_11 = j_sub_140a82f30(0x18)
        rbx_1 = rax_11
        
        if (rax_11 == 0)
            rbx_1 = nullptr
        else
            rax_11[1].d = 1
            *(rax_11 + 0xc) = 1
            *rbx_1 = &data_142d42ea8
            rbx_1[2] = r15_1
        
        var_48 = r15_1
        var_40.q = rbx_1
        rax_5 = &var_48
        
        if (arg2 == &var_48)
            goto label_140a8b757
        
        *arg2 = r15_1
        goto label_140a8b713
return rax_5
