// 函数: sub_1417e7b90
// 地址: 0x1417e7b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t* var_18 = __security_cookie ^ &var_58
int32_t i_1 = arg4
int32_t* rbp = arg2

if (arg4 != 0)
    void* rdi_1 = arg3 + 0x30
    int32_t i
    
    do
        int32_t* rcx = rbp
        rbp = &rbp[0x18]
        *rcx = *(rdi_1 - 0x30)
        rcx[1].b = *(rdi_1 - 0x2c)
        *(rcx + 0x10) = *(rdi_1 - 0x20)
        *(rcx + 0x20) = *(rdi_1 - 0x10)
        *(rcx + 0x30) = *rdi_1
        *(rcx + 0x40) = *(rdi_1 + 0x10)
        int64_t* rcx_1 = *(rdi_1 + 0x20)
        int64_t var_38 = *(rdi_1 + 0x18)
        int64_t* var_30_1 = rcx_1
        
        if (rcx_1 != 0)
            rcx_1[1].d += 1
            rcx_1 = var_30_1
        
        if (&var_38 != &rcx[0x12])
            int128_t zmm1 = var_38.o
            int128_t var_28_1 = zmm1
            var_38.o = *(rcx + 0x48)
            rcx_1 = var_30_1
            *(rcx + 0x48) = zmm1
        
        if (rcx_1 != 0)
            rcx_1[1].d -= 1
            
            if (rcx_1[1].d == 1)
                (**var_30_1)(var_30_1)
                int32_t rax_7 = *(var_30_1 + 0xc)
                *(var_30_1 + 0xc) -= 1
                
                if (rax_7 == 1)
                    (*(*var_30_1 + 8))(var_30_1, 1)
        
        rdi_1 += 0x60
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
__security_check_cookie(var_18 ^ &var_58)
return result
