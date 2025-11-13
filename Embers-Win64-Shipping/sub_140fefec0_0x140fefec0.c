// 函数: sub_140fefec0
// 地址: 0x140fefec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* rcx = *(arg2 + 0x38)
void var_58
(*(*rcx + 0x50))(rcx, &var_58)
int64_t* rcx_1 = *(arg3 + 0x38)
void var_40
(*(*rcx_1 + 0x50))(rcx_1, &var_40)
int64_t* rcx_2 = *(arg1 + 0x150)
void* result = (*(*rcx_2 + 0x178))(rcx_2, *(arg3 + 0x38), *(arg2 + 0x38))

if (*(arg1 + 0x17d18) != 0)
    result = *(arg1 + 0x17d30)
    
    if (result != 0)
        *(result + 0x10) += 1
        result = *(arg1 + 0x17d30)
        *(result + 0x14) += 1

__security_check_cookie(rax_1 ^ &var_78)
return result
