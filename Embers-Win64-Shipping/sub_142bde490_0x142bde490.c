// 函数: sub_142bde490
// 地址: 0x142bde490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x70)
int32_t rax_2 = ((*(arg1 + 0x30) - *(rcx + 0x10)) s>> 2).d

if (rax_2 s< 0)
    *(arg1 + 0x38) = 0x63
    rax_2.b = 1
    return rax_2

if (rax_2 s> 0)
    *(rcx + 0x1c) = rax_2
    
    if (arg2 != 0)
        void* rcx_1 = *(arg1 + 0x70)
        int16_t rax_3 = *(rcx_1 + 0x18)
        
        if ((rax_3.b & 8) == 0)
            rax_3 |= 0x20
        else
            rax_3 |= 0x10
        
        *(rcx_1 + 0x18) = rax_3
    
    void* rcx_2 = *(arg1 + 0x30)
    void* rdx = *(arg1 + 0x70)
    *(arg1 + 0x70) = rcx_2
    *(arg1 + 0x30) = rcx_2 + 0x34
    *(rcx_2 + 0x1c) = 0
    *(*(arg1 + 0x70) + 0x10) = *(arg1 + 0x30)
    *(rdx + 0x28) = *(arg1 + 0x70)
    *(arg1 + 0x68) += 1

int64_t rax_7

if (*(arg1 + 0x30) u< *(arg1 + 0x28))
    *(arg1 + 0x6b) = 0
    rax_7.b = 0
    return rax_7

*(arg1 + 0x38) = 0x62
rax_7.b = 1
return rax_7
