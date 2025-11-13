// 函数: sub_14297bb00
// 地址: 0x14297bb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *arg1
int64_t* r9 = *(i + 0x10)

if (*(r9 + 0x19) == 0)
    int64_t* rcx = *r9
    
    if (*(rcx + 0x19) == 0)
        int64_t* rax_2
        
        do
            rax_2 = *rcx
            r9 = rcx
            rcx = rax_2
        while (*(rax_2 + 0x19) == 0)
    
    *arg1 = r9
    return arg1

void* i_1 = *(i + 8)

if (*(i_1 + 0x19) == 0)
    while (i == *(i_1 + 0x10))
        *arg1 = i_1
        i = i_1
        i_1 = *(i_1 + 8)
        
        if (*(i_1 + 0x19) != 0)
            break

*arg1 = i_1
return arg1
