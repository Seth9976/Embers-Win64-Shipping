// 函数: sub_14236d9c0
// 地址: 0x14236d9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
void var_218
sub_14234f710(&var_218, arg5)
char var_54

if ((*(arg4 + 0x180) & 2) == 0)
    char var_54_1 = var_54 & 0xfd
else
    void* rdi_1
    
    if ((arg1[0x7e].b & 1) == 0)
        void* rdi_2 = arg1[9]
        
        if (rdi_2 != 0)
            rdi_1 = rdi_2 + 0x28
            goto label_14236da2d
        
        var_54_1 = var_54 & 0xfd
    else
        rdi_1 = &arg1[0xa]
    label_14236da2d:
        void var_1f8
        
        if (rdi_1 == 0)
            var_54_1 = var_54 & 0xfd
        else
            sub_141dd0940(arg4, &var_218, sub_141e7aaf0(arg2, &var_1f8), rdi_1)
sub_14236d8f0(arg1, arg2, arg3, arg4, &var_218, arg6)
int64_t result = sub_142351ee0(&var_218)
__security_check_cookie(rax_1 ^ &var_248)
return result
