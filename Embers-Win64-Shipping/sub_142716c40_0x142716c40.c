// 函数: sub_142716c40
// 地址: 0x142716c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t result = __security_cookie ^ &var_58
int64_t result_1 = result

if (*(arg1 + 0xd8) != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x38) s> 0)
        int32_t* rbx_1 = nullptr
        
        do
            int64_t rcx = *(arg1 + 0x30)
            int32_t var_38 = *(rbx_1 + rcx)
            int32_t var_34_1 = *(rbx_1 + rcx + 4)
            int32_t var_30_1 = *(rbx_1 + rcx + 8)
            int32_t var_2c_1 = *(rbx_1 + rcx + 0xc)
            int32_t var_28_1 = *(rbx_1 + rcx + 0x10)
            int32_t var_24_1 = *(rbx_1 + rcx + 0x14)
            char var_20_1 = *(rbx_1 + rcx + 0x18)
            char var_1f_1 = *(rbx_1 + rcx + 0x19)
            char var_1e_1 = *(rbx_1 + rcx + 0x1a)
            char var_1d_1 = *(rbx_1 + rcx + 0x1b)
            result = sub_1426164d0(*(arg1 + 0xd8), i, &var_38)
            i += 1
            rbx_1 = &rbx_1[7]
        while (i s< *(arg1 + 0x38))

__security_check_cookie(result_1 ^ &var_58)
return result
