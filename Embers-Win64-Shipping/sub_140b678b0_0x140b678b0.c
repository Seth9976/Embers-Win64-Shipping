// 函数: sub_140b678b0
// 地址: 0x140b678b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
wchar16 localeName[0x58]

if (GetUserDefaultLocaleName(&localeName, 0x55) == 0)
    sub_140a47130(arg1)
else
    int32_t rcx_1 = 0
    *arg1 = 0
    arg1[1] = 0
    
    if (localeName[0] != 0)
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while (localeName[rdi_1] != 0)
        
        if (rdi_1.d + 1 s> 0)
            sub_1405947f0(arg1, rdi_1.d + 1)
            rcx_1 = arg1[1].d
        
        int32_t rax_3 = rcx_1 + rdi_1.d + 1
        arg1[1].d = rax_3
        
        if (rax_3 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, &localeName, (rdi_1.d + 1) * 2)

__security_check_cookie(rax_1 ^ &var_e8)
return arg1
