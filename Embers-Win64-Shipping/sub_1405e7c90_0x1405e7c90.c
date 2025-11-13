// 函数: sub_1405e7c90
// 地址: 0x1405e7c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t* rcx = *(arg1 + 0x38)
int32_t rcx_1
int32_t var_38

if (rcx == 0)
    int64_t var_30
    __builtin_memset(&var_30, 0, 0x20)
    int32_t rax_5 = (*(*arg2 + 0x108))(arg2, &var_30)
    rcx_1 = rax_5
    int64_t var_28
    
    if (rax_5 s>= 0)
        if (var_30 != 0x10000073646976 || var_28 != 0x719b3800aa000080)
            rcx_1 = -0x3ff2c943
        else
            int64_t var_20
            int32_t rax_9 = (*(*arg2 + 0x50))(arg2, &data_1434cbb90, &var_20)
            rcx_1 = rax_9
            
            if (rax_9 s>= 0)
                int64_t rcx_4 = var_20
                int64_t var_18
                
                if ((rcx_4 != 0x494d767a48617031 || var_18 != 0x3790dc259df278b4)
                        && (rcx_4 != 0x494d767a48617035 || var_18 != 0x3790dc259df278b4)
                        && (rcx_4 != 0x494d767a48617059 || var_18 != 0x3790dc259df278b4)
                        && (rcx_4 != 0x494d767a4861704d || var_18 != 0x3790dc259df278b4))
                    rcx_1 = -0x3ff2c943
                else
                    int32_t rax_12 = (*(*arg2 + 0x40))(arg2, &data_1434cbc10, &var_38)
                    rcx_1 = rax_12
                    
                    if (rax_12 s>= 0)
                        rcx_1 = (*(*arg2 + 0x40))(arg2, &data_1434cbc20, &var_38)
else
    var_38 = 0
    rcx_1 = -0x3ff2c943
    
    if ((*(*rcx + 0x118))(rcx, arg3, &var_38) == 0)
        rcx_1 = 0
__security_check_cookie(rax_1 ^ &var_58)
return zx.q(rcx_1)
