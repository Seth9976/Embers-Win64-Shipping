// 函数: sub_142ab5b50
// 地址: 0x142ab5b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
char const* const rdi

if (arg3 == 0)
    rdi = "decimalFormat"
else if (arg3 == 1)
    rdi = "currencyFormat"
else if (arg3 == 2)
    rdi = "accountingFormat"
else if (arg3 == 3)
    rdi = "percentFormat"
else
    if (arg3 != 4)
        abort()
        noreturn
    
    rdi = "scientificFormat"

char** rax = sub_142a641c0(nullptr, *(arg1 + 0x28), arg4)
char** var_20 = rax

if (*arg4 s<= 0)
    int32_t arg_18 = 0
    void* result = sub_142ab59d0(rax, arg2, rdi, arg4, &arg_18)
    
    if (*arg4 s<= 0)
        if (arg_18 s> 0)
            for (int64_t i = 0; i != 5; )
                char rax_2 = (*"latn")[i]
                i += 1
                
                if (rax_2 != arg2[i - 1])
                    arg_18 = 0
                    result = sub_142ab59d0(rax, "latn", rdi, arg4, &arg_18)
                    
                    if (*arg4 s> 0)
                        goto label_142ab5bdd
                    
                    goto label_142ab5c74
        
    label_142ab5c74:
        
        if (rax != 0)
            sub_142a5f860(rax)
        
        return result

label_142ab5bdd:

if (rax != 0)
    sub_142a5f860(rax)

return &data_143652e2c
