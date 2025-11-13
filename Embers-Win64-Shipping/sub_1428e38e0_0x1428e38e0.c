// 函数: sub_1428e38e0
// 地址: 0x1428e38e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t var_28 = arg1
int32_t* rcx = data_143fecea8
void* result_2
void* result_1

if (rcx != 0)
    int32_t rax_2 = sub_1428989f0(rcx, &var_28)
    result_2 = sub_142898ea0(data_143fecea8, rax_2)
    result_1 = result_2

void* result

if (rcx == 0 || result_2 == 0)
    result = sub_1428a8f00(&var_28, &data_1435136a0, 0x30, 0xc, sub_1428aeb70)
    result_1 = result

if ((rcx != 0 && result_2 != 0) || result != 0)
    if (arg2 != 0)
        *arg2 = *(result_1 + 4)
    
    if (arg3 != 0)
        *arg3 = *(result_1 + 8)
    
    result = 1

__security_check_cookie(rax_1 ^ &var_58)
return result
