// 函数: sub_142616200
// 地址: 0x142616200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0xc)

if (arg2 s> rcx)
    int32_t rax_1 = rcx
    
    if (rcx == 0)
        *(arg1 + 0xc) = arg2
        rcx = arg2
        rax_1 = arg2
    
    if (rcx s< arg2)
        do
            rcx = rax_1 + 0x20
            rax_1 = rcx
        while (rcx s< arg2)
        
        *(arg1 + 0xc) = rcx
    
    int64_t rax_2 = data_143b50290(zx.q(rcx << 5), 1)
    int32_t rax = arg1[1].d
    
    if (rax != 0 && rax_2 != 0)
        memcpy(rax_2, *arg1, rax << 5)
    
    int64_t rcx_3 = *arg1
    
    if (rcx_3 != 0)
        data_143b50298(rcx_3)
    
    *arg1 = rax_2

arg1[1].d = arg2
