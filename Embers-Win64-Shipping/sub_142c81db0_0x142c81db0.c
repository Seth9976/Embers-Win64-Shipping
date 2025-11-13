// 函数: sub_142c81db0
// 地址: 0x142c81db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t rax_2 = sx.q(*(arg1 + 0x388))
int64_t rbx = 0xea60

if (rax_2.d s> 0)
    rbx = rax_2

int128_t var_48
int128_t var_28 = *sub_142c59600(&var_48)
int64_t result_1 = sub_142c65dc0(arg1, &var_28, 0, rbx)
int64_t result

if (result_1 == 0 || result_1 s>= rbx)
    int128_t zmm1 = var_28
    int128_t var_38 = *(arg1 + 0x970)
    var_48 = zmm1
    int64_t rax_4 = sub_142c595d0(&var_48, &var_38)
    
    if (rbx != rax_4)
        result = rbx - rax_4
    else
        result = -1
else
    result = result_1

__security_check_cookie(rax_1 ^ &var_68)
return result
