// 函数: sub_141bbf0f0
// 地址: 0x141bbf0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
char r14 = 0
int32_t var_138 = 0

if ((*(*arg1 + 0x1b0))() == 0)
    sub_140dc0fb0(arg1, arg2, arg3, arg4)
else
    int64_t* rcx = data_143e29f28
    char rax_5 = (*(*rcx + 0xa0))(rcx, arg4)
    int64_t* rcx_1 = data_143e29f28
    int64_t r8 = *rcx_1
    char rax_6 = (*(r8 + 0x90))(rcx_1, arg4, r8)
    
    if (arg1[0x91].b == 0)
        int64_t rdx_12
        
        if (rax_6 == 2)
            int64_t rdx_11 = arg1[0x88]
            
            if (rdx_11 == 0)
            labelid_b:
                sub_140e194c0(arg2)
            else
                int64_t* r10_1 = arg1[0x92]
                int64_t* r9_1 = *r10_1
                int64_t* rcx_19 = r9_1
                void* r8_3 = &r9_1[sx.q(r10_1[1].d)]
                
                if (r9_1 == r8_3)
                label_141bbf41e:
                    sub_140e194c0(arg2)
                else
                    do
                        if (*rcx_19 == rdx_11)
                            int32_t rcx_22 = ((rcx_19 - r9_1) s>> 3).d
                            
                            if (rcx_22 s< 1)
                                goto label_141bbf41e_2
                            
                            rdx_12 = r9_1[sx.q(rcx_22) - 1]
                            goto label_141bbf416
                        
                        rcx_19 = &rcx_19[1]
                    while (rcx_19 != r8_3)
                    
                    sub_140e194c0(arg2)
        else if (rax_6 != 3)
            sub_140f0b6d0(arg1, arg2, arg3, arg4)
        else
            int64_t i = arg1[0x88]
            
            if (i != 0)
                int64_t* r10_2 = arg1[0x92]
                int64_t* r9_2 = *r10_2
                int64_t r11_1 = sx.q(r10_2[1].d)
                int64_t* rcx_23 = r9_2
                void* r8_4 = &r9_2[r11_1]
                int32_t rcx_24
                
                if (r9_2 == r8_4)
                label_141bbf3fe:
                    rcx_24 = -1
                else
                    while (*rcx_23 != i)
                        rcx_23 = &rcx_23[1]
                        
                        if (rcx_23 == r8_4)
                            goto label_141bbf3fe
                    
                    rcx_24 = ((rcx_23 - r9_2) s>> 3).d
                
                if (rcx_24 s< (r11_1 - 1).d)
                    rdx_12 = r9_2[sx.q(rcx_24) + 1]
                label_141bbf416:
                    sub_141be6050(arg1, rdx_12)
            
        label_141bbf41e_1:
            sub_140e194c0(arg2)
    else if (rax_5 != 0)
        int64_t* rdi_2
        int64_t r12
        
        if (rax_5 == 1)
            rdi_2 = var_138.q
            r12.b = 1
        else
            rdi_2 = *(arg4 + 0x28)
            
            if (rdi_2 != 0)
                rdi_2[1].d += 1
            
            r14 = 1
            
            if (*(arg4 + 0x18) == data_143e1e080)
                r12.b = 1
            else
                r12.b = 0
        
        if ((r14 & 1) != 0 && rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp1_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        char rdi_3 = *(arg1 + 0x489)
        
        if (r12.b != 0)
            sub_141bc0210(arg1, 0)
        
        if (rdi_3 != 0)
        label_141bbf41e_2:
            sub_140e194c0(arg2)
        else
            sub_140dc0fb0(arg1, arg2, arg3, arg4)
    else if (*(arg1 + 0x489) != 0)
        int64_t* rcx_6 = arg1[0x89] + 0x4f8
        *(arg1 + 0x489) = 0
        (*(*rcx_6 + 0xc8))(rcx_6, &var_138)
        int32_t var_130
        
        if (var_130 s> 0)
            sub_141bc4100(arg1, *var_138.q, 3)
        
        int32_t var_64
        int32_t var_64_1 = var_64 & 0xffffff00
        char var_118 = 1
        int64_t var_110_1 = 0
        int64_t var_108_1 = 0
        char var_f8_1 = 0
        int64_t var_f0
        __builtin_memset(&var_f0, 0, 0x88)
        int32_t var_68_1 = 0x20702
        void var_128
        sub_140dbdce0(&var_118, sub_140f2cda0(&arg1[1], &var_128), 2, 0)
        sub_140e51550(arg2, &var_118)
        sub_140597700(&var_118)
        int64_t rcx_12 = var_138.q
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
    else
        *(arg1 + 0x489) = 1
        sub_140e78f50(data_143e29f28, &arg1[0x7f], 0)
        sub_140910050(&arg1[0x8d])
        sub_140f09b10(arg1, arg2, arg5)

__security_check_cookie(rax_1 ^ &var_158)
return arg2
