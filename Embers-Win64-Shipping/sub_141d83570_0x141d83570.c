// 函数: sub_141d83570
// 地址: 0x141d83570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t* var_18 = __security_cookie ^ &var_58
int32_t i_1 = arg4
void* rdi = arg3
int128_t* rbp = arg2

if (arg4 != 0)
    int32_t i
    
    do
        int64_t* rcx = *(rdi + 8)
        int128_t* rdx = rbp
        rbp = &rbp[1]
        int64_t var_38 = *rdi
        int64_t* var_30_1 = rcx
        
        if (rcx != 0)
            rcx[1].d += 1
            rcx = var_30_1
        
        if (&var_38 != rdx)
            int128_t zmm1 = var_38.o
            int128_t var_28_1 = zmm1
            var_38.o = *rdx
            rcx = var_30_1
            *rdx = zmm1
        
        if (rcx != 0)
            rcx[1].d -= 1
            
            if (rcx[1].d == 1)
                (**var_30_1)(var_30_1)
                int32_t rax_4 = *(var_30_1 + 0xc)
                *(var_30_1 + 0xc) -= 1
                
                if (rax_4 == 1)
                    (*(*var_30_1 + 8))(var_30_1, 1)
        
        rdi += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
__security_check_cookie(var_18 ^ &var_58)
return result
