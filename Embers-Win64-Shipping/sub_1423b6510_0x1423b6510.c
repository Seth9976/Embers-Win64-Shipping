// 函数: sub_1423b6510
// 地址: 0x1423b6510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0

if (arg3 == 0)
    return arg2

int64_t* rdi = *(arg3 + 0x10)
void* rbp_2 = &rdi[sx.q(*(arg3 + 0x18)) * 4]

if (rdi == rbp_2)
    return arg2

do
    if (sub_140ab3dc0(rdi) == 0)
        int32_t rdx = arg2[1].d
        
        if (rdx s> 1)
            int32_t rsi_1 = rdx - 1
            int32_t rax_2
            rax_2.b = rdx s<= 0
            
            if (rdx s<= 0)
                rsi_1 = 0
            
            int32_t rax_4 = rax_2 + 1 + rdx
            arg2[1].d = rax_4
            
            if (rax_4 s> *(arg2 + 0xc))
                sub_140594770(arg2)
            
            int64_t rcx_2 = sx.q(rsi_1)
            *(*arg2 + (rcx_2 << 1)) = 0xa
            *(*arg2 + (rcx_2 << 1) + 2) = 0
        
        int64_t* rax_7 = sub_140ac6680(rdi)
        int32_t rcx_4 = rax_7[1].d
        int32_t r8 = rcx_4 - 1
        
        if (rcx_4 == 0)
            r8 = 0
        
        sub_140a20ba0(arg2, *rax_7, r8)
    
    rdi = &rdi[4]
while (rdi != rbp_2)

return arg2
