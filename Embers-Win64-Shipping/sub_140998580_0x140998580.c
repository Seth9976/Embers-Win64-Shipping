// 函数: sub_140998580
// 地址: 0x140998580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rax_1 = (*(arg3 + 0x10) u>> 2).b

if ((rax_1 & 1) == 0)
    char* rax_3 = *(arg2 + 0x10)
    *rax_3 = 0
    return rax_3

int32_t r10 = *(arg3 + 0x20)
int32_t r9 = 0

if (r10 s> 0)
    char** r8 = *(arg3 + 0x18)
    
    do
        char* rcx = *r8
        rax_1 = rcx[sx.q(arg2[1])]
        
        if (rcx[sx.q(*arg2)] != rax_1)
            char* rax_2 = *(arg2 + 0x10)
            *rax_2 = 0
            return rax_2
        
        r9 += 1
        r8 = &r8[2]
    while (r9 s< r10)

return rax_1
