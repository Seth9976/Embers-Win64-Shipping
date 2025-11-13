// 函数: sub_141b07fd0
// 地址: 0x141b07fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_142452380()
void* rdx = *(arg3 + 0x10)
int64_t rax_1 = sx.q(*(rax + 0x38))
void*** rcx_1

if (rax_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_1 << 3)) != rax + 0x30)
    void* rax_3 = sub_1425881f0()
    void* rdx_2 = *(arg3 + 0x10)
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
        arg2[4].b |= 3
        rcx_1 = arg2
        
        if ((arg2[4].b & 2) == 0)
            rcx_1 = *arg2
        
        rcx_1[1].w = 0
    else
        rcx_1 = arg2
        arg2[4].b |= 3
        uint8_t rdx_1 = *(arg3 + 0x14d) u>> 2 & 1
        
        if ((arg2[4].b & 2) != 0)
            rcx_1[1].b = rdx_1
            *(rcx_1 + 9) = 0
        else
            rcx_1 = *arg2
            rcx_1[1].b = rdx_1
            *(rcx_1 + 9) = 0
else
    rcx_1 = arg2
    arg2[4].b |= 3
    
    if ((arg2[4].b & 2) == 0)
        rcx_1 = *arg2
    
    rcx_1[1].b = *(arg3 + 0x58) u>> 5 & 1
    *(rcx_1 + 9) = 0

*rcx_1 = &data_143059ff8
return arg2
