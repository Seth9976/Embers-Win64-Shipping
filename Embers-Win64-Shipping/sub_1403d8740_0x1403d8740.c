// 函数: sub_1403d8740
// 地址: 0x1403d8740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
*(arg1 + 0x4a8) = 0x21
int32_t var_28
sub_1403cc480(arg1, &var_28, 8)
int32_t temp0 = _bswap(var_28)

if (temp0 s< 0)
    png_error(arg1, "PNG unsigned integer out of range")
    noreturn

int32_t var_24
*(arg1 + 0x254) = var_24
sub_1403be750(arg1)
sub_1403be770(arg1, arg1 + 0x254, 4)
char rax_3 = *(arg1 + 0x254)

if (rax_3 - 0x41 u<= 0x39 && rax_3 - 0x5b u>= 6)
    rax_3 = *(arg1 + 0x255)
    
    if (rax_3 - 0x41 u<= 0x39 && rax_3 - 0x5b u>= 6)
        rax_3 = *(arg1 + 0x256)
        
        if (rax_3 - 0x41 u<= 0x39 && rax_3 - 0x5b u>= 6)
            rax_3 = *(arg1 + 0x257)
            
            if (rax_3 - 0x41 u<= 0x39 && rax_3 - 0x5b u> 5)
                *(arg1 + 0x4a8) = 0x41
                __security_check_cookie(rax_1 ^ &var_48)
                return zx.q(temp0)

png_chunk_error(arg1, "invalid chunk type")
noreturn
