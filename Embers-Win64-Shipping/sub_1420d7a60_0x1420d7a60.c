// 函数: sub_1420d7a60
// 地址: 0x1420d7a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result

if ((arg4 & 1) != 0)
label_1420d7d92:
    result = (*arg3)(*(arg3 + 8))
    int32_t rsi_1 = 0
    
    if (arg1 s> 0)
        do
            int64_t rcx_20 = arg2[1]
            int32_t var_70 = rsi_1
            result = (*arg2)(rcx_20, &var_70)
            rsi_1 += 1
        while (rsi_1 s< arg1)
else
    if (sub_140b011d0() == 0)
        goto label_1420d7d92
    
    int64_t* rax_2 = sub_140a242a0()
    int32_t rax_3 = (*(*rax_2 + 0x18))(rax_2)
    int32_t rbp_1 = arg1
    
    if (rax_3 s<= arg1)
        rbp_1 = rax_3
    
    if (rbp_1 == 0)
        goto label_1420d7d92
    
    int32_t* rax_4 = j_sub_140a82f30(0x38)
    int32_t* result_1
    
    if (rax_4 == 0)
        result_1 = nullptr
    else
        int64_t rcx_1 = *arg2
        int64_t var_58 = rcx_1
        
        if (rcx_1 != 0)
            int64_t var_50_1 = arg2[1]
        
        result_1 = sub_1408b8e30(rax_4, arg1, rbp_1, 0, &var_58, arg4)
    
    void*** rax_6 = j_sub_140a82f30(0x18)
    
    if (rax_6 == 0)
        rax_6 = nullptr
    else
        rax_6[1].d = 1
        *rax_6 = &data_142da8100
        *(rax_6 + 0xc) = 1
        rax_6[2] = result_1
    
    void var_48
    int64_t* rax_7 = sub_140789ce0(&var_48, nullptr, 0xff)
    void* rdx_2 = *rax_7
    *(rdx_2 + 0x10) = result_1
    *(rdx_2 + 0x18) = rax_6
    
    if (rax_6 != 0)
        rax_6[1].d += 1
    
    *(rdx_2 + 0x20) = rbp_1 - 1
    void* rcx_8 = *rax_7
    int32_t r8_3 = rax_7[2].d
    int64_t* rdx_3 = rax_7[1]
    int64_t* rbx_1 = *(rcx_8 + 0x30)
    int64_t* var_68_1 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = var_68_1
    
    sub_1407c9b70(rcx_8, rdx_3, r8_3, 1)
    
    if (rbx_1 != 0)
        int32_t rax_8 = *rdi_1
        *rdi_1 -= 1
        
        if (rax_8 == 1)
            sub_140a2f6e0(var_68_1)
    
    (*arg3)(*(arg3 + 8))
    
    if (0 == result_1[0xa])
        result_1[0xa] = 0
    else
        result_1[0xa]
    
    int64_t rax_10 = *(result_1 + 0x10)
    char r8_4 = *(result_1 + 0x32)
    int32_t rcx_11 = result_1[1]
    int32_t rdx_4 = *result_1
    int32_t var_74_1 = rcx_11
    int32_t var_94_1 = rdx_4
    char var_98_1 = r8_4
    int64_t r13_1
    
    if (rax_10 == 0)
        r13_1 = rax_10
    else
        r13_1 = *(result_1 + 0x18)
    
    int32_t r12_1 = rdx_4 - 1
    int32_t var_78_1 = r12_1
    
    while (true)
        int32_t rbx_2 = result_1[0xa]
        result_1[0xa] += 1
        
        if (r8_4 != 0 && rbx_2 s> r12_1)
            rbx_2 = r12_1
        
        if (rbx_2 s< rdx_4)
            int32_t rbp_3 = rcx_11
            
            if (rbx_2 == r12_1)
                rbp_3 = result_1[2] + rcx_11
            
            int32_t rdi_2 = 0
            
            if (rbp_3 s> 0)
                do
                    int32_t var_80 = rbx_2 * rcx_11 + rdi_2
                    rax_10(r13_1, &var_80)
                    rdi_2 += 1
                while (rdi_2 s< rbp_3)
                
                r12_1 = var_78_1
                rcx_11 = var_74_1
                rdx_4 = var_94_1
                r8_4 = var_98_1
            
            int32_t rax_12 = result_1[0xb]
            result_1[0xb] += 1
            
            if (rax_12 + 1 == rdx_4)
                break
        
        if (rbx_2 s>= r12_1)
            if (sub_140a80f40() == 0 || (arg4 & 4) == 0)
                int64_t* rcx_16 = *(result_1 + 0x20)
                (*(*rcx_16 + 0x20))(rcx_16, 0xffffffff, 0)
            else
                int64_t* rcx_13 = *(result_1 + 0x20)
                
                if ((*(*rcx_13 + 0x20))(rcx_13, 1, 0) == 0)
                    char i
                    
                    do
                        int64_t* rax_18 = sub_140a242a0()
                        int64_t r8_5 = *rax_18
                        (*(r8_5 + 0x30))(rax_18, zx.q(data_14399e5e0), r8_5)
                        int64_t* rcx_15 = *(result_1 + 0x20)
                        i = (*(*rcx_15 + 0x20))(rcx_15, 1, 0)
                    while (i == 0)
            
            break
    
    result = result_1
    result[0xc].b = 1
    int64_t* rbx_3 = rax_6
    
    if (rbx_3 != 0)
        result = zx.q(rbx_3[1].d)
        rbx_3[1].d -= 1
        
        if (result.d == 1)
            result = (**rbx_3)(rbx_3)
            int32_t rdi_3 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rdi_3 == 1)
                return (*(*rbx_3 + 8))(rbx_3, zx.q(rdi_3))

return result
