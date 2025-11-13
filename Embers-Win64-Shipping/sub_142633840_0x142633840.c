// 函数: sub_142633840
// 地址: 0x142633840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx = zx.q(*(arg1 + 0xc))

if (arg2 s> rcx.d)
    int32_t rax_1 = rcx.d
    
    if (rcx.d == 0)
        *(arg1 + 0xc) = arg2
        rcx = zx.q(arg2)
        rax_1 = arg2
    
    if (rcx.d s< arg2)
        do
            rcx = zx.q(rax_1 * 2)
            rax_1 = rcx.d
        while (rcx.d s< arg2)
        
        *(arg1 + 0xc) = rcx.d
    
    int64_t rax_2 = data_143b502a8(zx.q((rcx << 2).d), 1)
    int64_t rax = sx.q(arg1[1].d)
    
    if (rax.d != 0 && rax_2 != 0)
        memcpy(rax_2, *arg1, (rax << 2).d)
    
    int64_t rcx_3 = *arg1
    
    if (rcx_3 != 0)
        data_143b502b0(rcx_3)
    
    *arg1 = rax_2

arg1[1].d = arg2
