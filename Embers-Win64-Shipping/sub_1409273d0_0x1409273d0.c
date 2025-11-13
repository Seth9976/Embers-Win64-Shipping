// 函数: sub_1409273d0
// 地址: 0x1409273d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t rax_2 = sub_1409276f0(arg1, arg2)

if (rax_2 == 0)
    void*** rax_3 = j_sub_140a82f30(zx.q((rax_2 + 0x30).d))
    void*** rsi_1
    
    if (rax_3 == 0)
        rsi_1 = nullptr
    else
        rsi_1 = sub_14091a200(rax_3, arg2)
    
    void*** rax_5 = j_sub_140a82f30(0x18)
    void*** rbx_1 = rax_5
    
    if (rax_5 == 0)
        rbx_1 = nullptr
    else
        rax_5[1].d = 1
        *(rax_5 + 0xc) = 1
        *rbx_1 = &data_142d42e98
        rbx_1[2] = rsi_1
    
    void**** rdi_1 = &rsi_1[1]
    
    if (rsi_1 == 0)
        rdi_1 = nullptr
    
    if (rdi_1 != 0)
        void* rax_6
        
        if (*rdi_1 != 0)
            rax_6 = rdi_1[1]
        
        if (*rdi_1 == 0 || rax_6 == 0 || *(rax_6 + 8) s<= 0)
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            *rdi_1 = rsi_1
            int64_t* rcx_2 = rdi_1[1]
            
            if (rbx_1 != rcx_2)
                if (rbx_1 != 0)
                    *(rbx_1 + 0xc) += 1
                    rcx_2 = rdi_1[1]
                
                if (rcx_2 != 0)
                    int32_t temp4_1 = *(rcx_2 + 0xc)
                    *(rcx_2 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rcx_2 + 8))(rcx_2, 1)
                
                rdi_1[1] = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*rbx_1)[1](rbx_1, 1)
    
    int64_t var_c8
    int64_t var_b8
    sub_140596d10(&var_b8, (*(*arg2 + 0x30))(arg2, &var_c8))
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t rcx_7 = var_c8
    int64_t var_90
    __builtin_memset(&var_90, 0, 0x2c)
    int32_t var_64_1 = 0x80
    int32_t var_60_1 = 0xffffffff
    int32_t var_5c_1 = 0
    int64_t var_50_1 = 0
    int32_t var_48_1 = 0
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
    
    int64_t rdi_2 = sx.q(*(arg1 + 0x28))
    int32_t var_98_1 = 0xffffffff
    int32_t rax_14 = (rdi_2 + 1).d
    *(arg1 + 0x28) = rax_14
    
    if (rax_14 s> *(arg1 + 0x2c))
        sub_1407c3920(arg1 + 0x20)
    
    int64_t* rdi_4 = rdi_2 * 0x78 + *(arg1 + 0x20)
    sub_140596d10(rdi_4, &var_b8)
    rdi_4[2] = rsi_1
    rdi_4[3] = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void* rcx_12 = &rdi_4[7]
    rdi_4[4].d = var_98_1
    rdi_4[5] = 0
    rdi_4[6] = 0
    *(rcx_12 + 0x10) = 0
    *(rcx_12 + 0x18) = 0
    *(rcx_12 + 0x1c) = 0x80
    void* rax_19 = *(rcx_12 + 0x10)
    
    if (rax_19 != 0)
        rcx_12 = rax_19
    
    *rcx_12 = 0
    *(rcx_12 + 8) = 0
    rdi_4[0xb].d = 0xffffffff
    *(rdi_4 + 0x5c) = 0
    rdi_4[0xd] = 0
    rdi_4[0xe].d = 0
    sub_14091bd10(&rdi_4[5], &var_90)
    int32_t var_48_2 = 0
    
    if (var_50_1 != 0)
        sub_140a74f90(var_50_1)
    
    sub_1409259a0(&var_90, 0)
    int64_t var_70
    
    if (var_70 != 0)
        sub_140a74f90(var_70)
    
    int64_t rcx_17 = var_90
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp6_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
    
    int64_t rcx_20 = var_b8
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)

int64_t result = sub_1409276f0(arg1, arg2)
__security_check_cookie(rax_1 ^ &var_e8)
return result
