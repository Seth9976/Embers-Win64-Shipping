// 函数: sub_141d600d0
// 地址: 0x141d600d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t* var_28 = __security_cookie ^ &var_68
int32_t i_1 = arg4
int128_t* rbp = arg2

if (arg4 != 0)
    void* rdi_1 = arg3 + 0x10
    int32_t i
    
    do
        int64_t* rcx = *(rdi_1 - 8)
        int128_t* rsi_1 = rbp
        rbp += 0x28
        int64_t var_48 = *(rdi_1 - 0x10)
        int64_t* var_40_1 = rcx
        
        if (rcx != 0)
            rcx[1].d += 1
            rcx = var_40_1
        
        if (&var_48 != rsi_1)
            int128_t zmm1 = var_48.o
            int128_t var_38_1 = zmm1
            var_48.o = *rsi_1
            rcx = var_40_1
            *rsi_1 = zmm1
        
        if (rcx != 0)
            rcx[1].d -= 1
            
            if (rcx[1].d == 1)
                (**var_40_1)(var_40_1)
                int32_t rax_4 = *(var_40_1 + 0xc)
                *(var_40_1 + 0xc) -= 1
                
                if (rax_4 == 1)
                    (*(*var_40_1 + 8))(var_40_1, 1)
        
        rsi_1[1].d = *rdi_1
        sub_140597df0(rsi_1 + 0x18, rdi_1 + 8)
        rdi_1 += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
__security_check_cookie(var_28 ^ &var_68)
return result
