// 函数: sub_14238ba30
// 地址: 0x14238ba30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 8)
sub_1423b6620(arg2, *(rdi + 8))

if (arg2 != 0)
    arg2[1].d += 1

void* result = rdi + 0x20
void arg_8

if (result != &arg_8)
    int64_t* rcx_1 = *result
    *result = arg2
    
    if (rcx_1 != 0)
        rcx_1[1].d -= 1
        
        if (rcx_1[1].d == 1)
            jump(**rcx_1)
else if (arg2 != 0)
    arg2[1].d -= 1
    
    if (arg2[1].d == 1)
        return (**arg2)(arg2, 1)

return result
