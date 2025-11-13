// 函数: sub_142abf1a0
// 地址: 0x142abf1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x198)
int16_t rax = *(rcx + 8)
int32_t rax_2

if (rax s< 0)
    rax_2 = *(rcx + 0xc)
else
    rax_2 = sx.d(rax) s>> 5

int32_t rdx = *(arg1 + 0x1a0)

if (rdx != rax_2)
    rax_2 = sub_142a486d0(rcx, rdx)
    
    if (rax_2 == 0x2a)
        void* rax_3 = *(arg1 + 0x1a8)
        
        if (*(rax_3 + 0x30) != 0)
            *arg3 = 0x10106
            return rax_3
        
        *(rax_3 + 0x34) = arg2
        *(*(arg1 + 0x1a8) + 0x30) = 1
        void* rcx_1 = *(arg1 + 0x198)
        int16_t rax_5 = *(rcx_1 + 8)
        int32_t rax_7
        
        if (rax_5 s< 0)
            rax_7 = *(rcx_1 + 0xc)
        else
            rax_7 = sx.d(rax_5) s>> 5
        
        int32_t rdx_1 = *(arg1 + 0x1a0)
        int32_t rax_8
        
        if (rdx_1 != rax_7)
            rax_8 = sub_142a486d0(rcx_1, rdx_1)
        else
            rax_8 = -1
        
        int32_t rcx_2
        rcx_2.b = rax_8 u> 0xffff
        *(arg1 + 0x1a0) += rcx_2 + 1
        *(*(arg1 + 0x1a8) + 0xa0) = *(arg1 + 0x1a0)
        sub_142abf000(arg1, arg3)
        rax_2 = *(arg1 + 0x1a0)
        *(*(arg1 + 0x1a8) + 0xa4) = rax_2

return rax_2
