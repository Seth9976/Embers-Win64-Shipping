// 函数: sub_140b0e470
// 地址: 0x140b0e470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_1405947f0(arg2, 0)

if (iswspace(**arg1) != 0)
    int32_t i
    
    do
        *arg1 += 2
        i = iswspace(**arg1)
    while (i != 0)

int16_t* rcx_3 = *arg1

while (true)
    int32_t rax_3 = iswalnum(*rcx_3)
    int16_t* rcx_5 = *arg1
    
    if (rax_3 == 0 && *rcx_5 != 0x5f)
        int32_t result = arg2[1].d
        int32_t rcx_8 = result - 1
        
        if (result == 0)
            rcx_8 = 0
        
        result.b = rcx_8 s> 0
        return result
    
    int16_t rsi_1 = *rcx_5
    
    if (rsi_1 != 0)
        int32_t rdx = arg2[1].d
        int32_t rax_4
        rax_4.b = rdx s<= 0
        int32_t rbp_1 = rdx - 1
        
        if (rdx s<= 0)
            rbp_1 = 0
        
        int32_t rax_6 = rax_4 + 1 + rdx
        arg2[1].d = rax_6
        
        if (rax_6 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        int64_t rcx_7 = sx.q(rbp_1)
        *(*arg2 + (rcx_7 << 1)) = rsi_1
        *(*arg2 + (rcx_7 << 1) + 2) = 0
        rcx_5 = *arg1
    
    rcx_3 = &rcx_5[1]
    *arg1 = rcx_3
