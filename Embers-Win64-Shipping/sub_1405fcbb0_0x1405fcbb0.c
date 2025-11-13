// 函数: sub_1405fcbb0
// 地址: 0x1405fcbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t* result

if (**(arg1 + 8) != 0)
    void* rcx = **(arg1 + 8)
    int64_t var_38 = *(rcx + 8)
    int64_t* rdx = *(rcx + 0x10)
    int64_t* var_30_1 = rdx
    
    if (rdx != 0)
        rdx[1].d += 1
        rdx = var_30_1
    
    if (&var_38 != arg2)
        int128_t zmm1 = var_38.o
        int128_t var_20_1 = zmm1
        var_38.o = *arg2
        *arg2 = zmm1
        rdx = var_30_1
    
    if (rdx != 0)
        rdx[1].d -= 1
        
        if (rdx[1].d == 1)
            (**var_30_1)(var_30_1, rdx)
            int32_t rdi_1 = *(var_30_1 + 0xc)
            *(var_30_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_30_1 + 8))(var_30_1, zx.q(rdi_1))
    
    result.b = 1
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_58)
return result
