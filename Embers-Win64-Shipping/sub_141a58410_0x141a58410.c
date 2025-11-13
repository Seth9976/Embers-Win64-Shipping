// 函数: sub_141a58410
// 地址: 0x141a58410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a6c860(arg1, arg2, 1)
int64_t* rdi = arg1[0x109]
int64_t var_18 = *(arg1 + 0x7d4)
int64_t var_10 = arg1[0xf8]

if (rdi[3].b != 0)
    (*(*rdi + 0x18))(rdi, &var_18)
    char rcx_1 = rdi[3].b
    
    if (rcx_1 != 0)
        rdi[3].b = 0
        rcx_1 = 0
    
    if (&var_18 != &rdi[1])
        if (rcx_1 != 0)
            rdi[3].b = 0
        
        *(rdi + 8) = var_18.o
        rdi[3].b = 1
    
    (*(*rdi + 0x10))(rdi, &var_18)

char result = sub_141a53830(arg1)

if (result == 0)
    return result

return sub_141a7bee0(arg1, 1)
