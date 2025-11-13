// 函数: sub_140f50850
// 地址: 0x140f50850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
char r14 = 0
int32_t var_128 = 0

if ((*(*arg1 + 0x1b0))() == 0)
    sub_140dc0fb0(arg1, arg2, arg3, arg4)
else
    int64_t* rcx = data_143e29f28
    char rax_5 = (*(*rcx + 0xa0))(rcx, arg4)
    int64_t* rcx_1 = data_143e29f28
    int64_t r8 = *rcx_1
    char rax_6 = (*(r8 + 0x90))(rcx_1, arg4, r8)
    int64_t var_138
    
    if (arg1[0x92].b == 0)
        void* rax_18
        int64_t* rbx_4
        
        if (rax_6 != 2)
            if (rax_6 == 3)
                rbx_4 = arg1[0x89]
                int64_t i = arg1[0x88]
                
                if (rbx_4 != 0)
                    rbx_4[1].d += 1
                
                if (i == 0)
                    goto label_140f50c0a
                
                if (rbx_4 != 0)
                    rbx_4[1].d += 1
                
                int64_t* r9_1 = arg1[0x93]
                int64_t* r8_3 = *r9_1
                int64_t r10_1 = sx.q(r9_1[1].d)
                int64_t* rcx_21 = r8_3
                void* rax_21 = &r8_3[r10_1 * 2]
                int32_t rcx_22
                
                if (r8_3 == rax_21)
                label_140f50ba2:
                    rcx_22 = -1
                else
                    while (*rcx_21 != i)
                        rcx_21 = &rcx_21[2]
                        
                        if (rcx_21 == rax_21)
                            goto label_140f50ba2
                    
                    rcx_22 = ((rcx_21 - r8_3) s>> 4).d
                
                if (rcx_22 s< (r10_1 - 1).d)
                    int64_t rcx_25 = (sx.q(rcx_22) + 1) * 2
                    var_138 = r8_3[rcx_25]
                    rax_18 = r8_3[rcx_25 + 1]
                label_140f50bc6:
                    void* var_130_2 = rax_18
                    
                    if (rax_18 != 0)
                        *(rax_18 + 8) += 1
                    
                    sub_140f60ae0(arg1, &var_138)
                
                goto label_140f50be0
            
            sub_140f0b6d0(arg1, arg2, arg3, arg4)
        else
            rbx_4 = arg1[0x89]
            int64_t rdx_9 = arg1[0x88]
            
            if (rbx_4 != 0)
                rbx_4[1].d += 1
            
            if (rdx_9 != 0)
                if (rbx_4 != 0)
                    rbx_4[1].d += 1
                
                int64_t* r9 = arg1[0x93]
                int64_t* r8_2 = *r9
                int64_t* rax_14 = r8_2
                void* rcx_20 = &r8_2[sx.q(r9[1].d) * 2]
                
                if (r8_2 != rcx_20)
                    do
                        if (*rax_14 == rdx_9)
                            int32_t rax_16 = ((rax_14 - r8_2) s>> 4).d
                            
                            if (rax_16 s< 1)
                                goto label_140f50be0
                            
                            int64_t rdx_11 = sx.q(rax_16) * 2
                            var_138 = r8_2[rdx_11 - 2]
                            rax_18 = r8_2[rdx_11 - 1]
                            goto label_140f50bc6
                        
                        rax_14 = &rax_14[2]
                    while (rax_14 != rcx_20)
                
            label_140f50be0:
                
                if (rbx_4 == 0)
                    goto label_140f50c0a
                
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp4_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
                
                goto label_140f50c0a
            
        label_140f50c0a:
            sub_140e194c0(arg2)
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp1_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
    else if (rax_5 != 0)
        int64_t* rbx_2
        int64_t r12
        
        if (rax_5 == 1)
            rbx_2 = var_128.q
            r12.b = 1
        else
            rbx_2 = *(arg4 + 0x28)
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            r14 = 1
            
            if (*(arg4 + 0x18) == data_143e1e080)
                r12.b = 1
            else
                r12.b = 0
        
        if ((r14 & 1) != 0 && rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp5_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        char rbx_3 = *(arg1 + 0x491)
        
        if (r12.b != 0)
            sub_140f51a30(arg1, 0)
        
        if (rbx_3 == 0)
            sub_140dc0fb0(arg1, arg2, arg3, arg4)
        else
            sub_140e194c0(arg2)
    else if (*(arg1 + 0x491) != 0)
        int64_t* rcx_6 = arg1[0x8a] + 0x4e8
        *(arg1 + 0x491) = 0
        (*(*rcx_6 + 0xc8))(rcx_6, &var_128)
        int32_t var_120
        
        if (var_120 s> 0)
            int64_t* rcx_7 = var_128.q
            var_138 = *rcx_7
            void* rax_9 = rcx_7[1]
            void* var_130_1 = rax_9
            
            if (rax_9 != 0)
                *(rax_9 + 8) += 1
            
            sub_140f59470(arg1, &var_138, 3)
        
        int32_t var_64
        int32_t var_64_1 = var_64 & 0xffffff00
        char var_118 = 1
        int64_t var_110_1 = 0
        int64_t var_108_1 = 0
        char var_f8_1 = 0
        int64_t var_f0
        __builtin_memset(&var_f0, 0, 0x88)
        int32_t var_68_1 = 0x20702
        sub_140dbdce0(&var_118, sub_140f2cda0(&arg1[1], &var_138), 2, 0)
        sub_140e51550(arg2, &var_118)
        sub_140597700(&var_118)
        sub_140596d80(&var_128)
    else
        *(arg1 + 0x491) = 1
        sub_140e78f50(data_143e29f28, &arg1[0x7f], 0)
        sub_140910050(&arg1[0x8e])
        sub_140f09b10(arg1, arg2, arg5)

__security_check_cookie(rax_1 ^ &var_158)
return arg2
