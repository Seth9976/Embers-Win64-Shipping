// 函数: sub_1426598f0
// 地址: 0x1426598f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
bool cond:0 = *(arg1 + 0x228) == 0
int64_t result = *(arg1 - 0x150)
int128_t zmm1 = *(arg1 - 0x20)
int128_t var_48 = *(arg1 - 0x30)
int128_t var_28 = *(arg1 - 0x10)
int64_t result_1 = result
int128_t var_38 = zmm1

if (not(cond:0))
    int64_t* rcx = nullptr
    
    if (data_143f71570 != 0)
        rcx = data_143f71568
    
    result = (*(*rcx + 0x48))(rcx, arg2 + 0x70, &result_1, arg1 + 0x220)

__security_check_cookie(rax_1 ^ &var_78)
return result
