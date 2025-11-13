// 函数: sub_14268a650
// 地址: 0x14268a650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6d8
int64_t rax_1 = __security_cookie ^ &var_6d8
char rbp = 0
int32_t var_690 = 0
uint64_t result

if (*(arg1 + 0x4a8) != 0)
    char var_64
    char var_64_1 = var_64 & 0xfe
    int32_t var_78_1 = 0
    int32_t var_74_1 = 0x7f7fffff
    int64_t var_6c_1 = 0
    void var_678
    memset(&var_678, 0, 0x600)
    int64_t* rsi_1 = arg4[1]
    uint64_t r15_1 = *arg4
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    uint128_t* rdi_1
    
    if (r15_1 == 0)
        rdi_1 = *(arg1 + 0x340)
        r15_1 = *(arg1 + 0x338)
        
        if (rdi_1 != 0)
            *(rdi_1 + 8) += 1
        
        rbp = 1
    else
        rdi_1 = arg3
    
    if ((rbp & 1) != 0 && rdi_1 != 0)
        int32_t rax_5 = *(rdi_1 + 8)
        *(rdi_1 + 8) -= 1
        
        if (rax_5 == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_7 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_7 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t rax_11 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (rax_11 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
    
    int64_t var_6a8_1 = 0
    sub_142690270(*(arg1 + 0x4a8), arg2, arg3, r15_1, arg5, &var_678)
    
    if ((var_64_1 & 1) == 0 || var_74_1 f!= 3.40282347e+38f)
        rsi_1.b = 0
    else
        rsi_1.b = 1
    
    int64_t* rdi_2 = arg4[1]
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            int64_t rdx_2 = *rdi_2
            (*rdx_2)(rdi_2, rdx_2)
            int32_t rbx_2 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (rbx_2 == 1)
                int64_t r8_1 = *rdi_2
                (*(r8_1 + 8))(rdi_2, zx.q(rbx_2), r8_1)
    
    result = zx.q(rsi_1.b)
else
    int64_t* rdi = arg4[1]
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t rbx_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*rdi + 8))(rdi, zx.q(rbx_1))
    
    result.b = 0

__security_check_cookie(rax_1 ^ &var_6d8)
return result
