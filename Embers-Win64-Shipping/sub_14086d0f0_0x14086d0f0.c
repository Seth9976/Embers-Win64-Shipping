// 函数: sub_14086d0f0
// 地址: 0x14086d0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t var_38 = __security_cookie ^ &var_78
int32_t i_1 = arg4
int128_t* r15 = arg2
int64_t result

if (arg4 != 0)
    void* rdi_1 = arg3 + 0x38
    int32_t i
    
    do
        int128_t* rbp_1 = r15
        r15 += 0x48
        sub_140747710(rbp_1, rdi_1 - 0x38)
        int64_t* rcx_1 = *(rdi_1 - 8)
        int64_t var_58 = *(rdi_1 - 0x10)
        int64_t* var_50_1 = rcx_1
        
        if (rcx_1 != 0)
            rcx_1[1].d += 1
            rcx_1 = var_50_1
        
        if (&var_58 != rbp_1 + 0x28)
            int128_t zmm1_1 = var_58.o
            int128_t var_48_1 = zmm1_1
            var_58.o = *(rbp_1 + 0x28)
            rcx_1 = var_50_1
            *(rbp_1 + 0x28) = zmm1_1
        
        if (rcx_1 != 0)
            rcx_1[1].d -= 1
            
            if (rcx_1[1].d == 1)
                (**var_50_1)(var_50_1)
                int32_t rax_4 = *(var_50_1 + 0xc)
                *(var_50_1 + 0xc) -= 1
                
                if (rax_4 == 1)
                    (*(*var_50_1 + 8))(var_50_1, 1)
        
        *(rbp_1 + 0x38) = *rdi_1
        result = *(rdi_1 + 8)
        rdi_1 += 0x48
        rbp_1[4].q = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
__security_check_cookie(var_38 ^ &var_78)
return result
