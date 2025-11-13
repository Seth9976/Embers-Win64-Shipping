// 函数: sub_141d1edc0
// 地址: 0x141d1edc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
(*(*arg2 + 0x60))(arg2)
(*(*arg1 + 0x60))(arg1)
int32_t i_3 = (*(*arg2 + 0x48))(arg2)
int64_t r8 = *arg1
int64_t i_2 = sx.q(i_3)
int128_t* result = (*r8)(arg1, zx.q(i_2.d), r8)
int32_t rdi = 0
int64_t i_1 = i_2

if (i_2.d s> 0)
    int64_t rsi_1 = 0
    int64_t i
    
    do
        int64_t* rdx_1 = arg2[1]
        result = (sx.q(rdi) << 4) + arg1[1]
        int64_t var_58 = *(rdx_1 + rsi_1)
        int64_t* rcx_5 = *(rdx_1 + rsi_1 + 8)
        int64_t* var_50_1 = rcx_5
        
        if (rcx_5 != 0)
            rcx_5[1].d += 1
            rcx_5 = var_50_1
        
        if (&var_58 != result)
            int128_t zmm1 = var_58.o
            int128_t var_48_1 = zmm1
            var_58.o = *result
            rcx_5 = var_50_1
            *result = zmm1
        
        if (rcx_5 != 0)
            result = zx.q(rcx_5[1].d)
            rcx_5[1].d -= 1
            
            if (result.d == 1)
                (**var_50_1)(var_50_1)
                result = zx.q(*(var_50_1 + 0xc))
                *(var_50_1 + 0xc) -= 1
                
                if (result.d == 1)
                    result = (*(*var_50_1 + 8))(var_50_1, 1)
        
        rdi += 1
        rsi_1 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

__security_check_cookie(rax_1 ^ &var_78)
return result
