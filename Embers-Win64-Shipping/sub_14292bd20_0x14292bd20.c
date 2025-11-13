// 函数: sub_14292bd20
// 地址: 0x14292bd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t var_28 = arg1
int32_t* rcx = data_143fecfd0

if (rcx != 0)
    int32_t rax_2 = sub_1428989f0(rcx, &var_28)
    
    if (rax_2 s>= 0)
        int64_t rax_3 = sub_142898ea0(data_143fecfd0, rax_2)
        __security_check_cookie(rax_1 ^ &var_58)
        return rax_3

int64_t rax_4 = sub_1428a8f00(&var_28, &data_1435377f0, 0x1b, 0x14, sub_1428aeb70)
__security_check_cookie(rax_1 ^ &var_58)
return rax_4
