// 函数: sub_140998500
// 地址: 0x140998500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_1 = *(arg3 + 0x10) u>> 2

if ((rax_1.b & 1) == 0)
    char* rax_4 = *(arg2 + 0x10)
    *rax_4 = 0
    return rax_4

int32_t r10 = *(arg3 + 0x20)
int32_t r9 = 0

if (r10 s> 0)
    int32_t** r8 = *(arg3 + 0x18)
    
    do
        int32_t* rcx_1 = *r8
        rax_1 = rcx_1[sx.q(arg2[1])]
        
        if (rcx_1[sx.q(*arg2)] != rax_1)
            char* rax_3 = *(arg2 + 0x10)
            *rax_3 = 0
            return rax_3
        
        r9 += 1
        r8 = &r8[2]
    while (r9 s< r10)

return rax_1
