// 函数: sub_142b44d50
// 地址: 0x142b44d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_50 = -2
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
uint32_t result

if (strcmp("currency", sub_142ab63b0(arg1 + 0x10)) != 0)
    int64_t rax_4 = sub_142ab63b0(arg1 + 0x10)
    int64_t i = 0
    int64_t rdx_3 = 0
    
    while (true)
        char rcx_6 = (*"none")[rdx_3]
        rdx_3 += 1
        
        if (rcx_6 != *(rax_4 + rdx_3 - 1))
            sub_142a48d70(arg2, u"measure-unit/", 0, 0xffffffff)
            sub_142b417d0(arg1 + 0x10, arg2)
            break
        
        if (rdx_3 == 5)
            void* rax_5 = sub_142ab6380(arg1 + 0x10)
            
            do
                char rcx_8 = (*"percent")[i]
                i += 1
                
                if (rcx_8 != *(rax_5 + i - 1))
                    if (strcmp("permille", sub_142ab6380(arg1 + 0x10)) != 0)
                        result.b = 0
                        goto label_142b44edf
                    
                    sub_142a48d70(arg2, u"permille", 0, 0xffffffff)
                    goto label_142b44ed5
            while (i != 8)
            
            sub_142a48d70(arg2, u"percent", 0, 0xffffffff)
            break
    
label_142b44ed5:
    result.b = 1
else
    sub_142a48d70(arg2, u"currency/", 0, 0xffffffff)
    void var_48
    sub_142ab6740(&var_48, arg1 + 0x10, arg3)
    int64_t rbx
    
    if (*arg3 s<= 0)
        void var_30
        sub_142a48d70(arg2, &var_30, 0, 0xffffffff)
        rbx.b = 1
    else
        rbx.b = 0
    
    sub_142ab6900(&var_48)
    result = zx.d(rbx.b)

label_142b44edf:
__security_check_cookie(rax_1 ^ &var_78)
return result
