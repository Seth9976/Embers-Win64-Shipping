// 函数: sub_141f98dc0
// 地址: 0x141f98dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xc)
void* rcx = *arg1
int32_t i_2 = arg1[1].d

if (rax s>= 0)
    if (i_2 != 0)
        char* rax_1 = rcx + 4
        int32_t i
        
        do
            if (*rax_1 != 0)
                *rax_1 = 0
            
            rax_1 = &rax_1[8]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    arg1[1].d = 0
    return sub_140908eb0(&arg1[2]) __tailcall

if (i_2 != 0)
    void* rax_3 = rcx + 4
    int32_t i_1
    
    do
        if (*rax_3 != 0)
            *rax_3 = 0
        
        rax_3 += 8
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rax = *(arg1 + 0xc)

arg1[1].d = 0

if (rax != 0)
    sub_1405c5570(arg1, 0)

return sub_140908eb0(&arg1[2]) __tailcall
