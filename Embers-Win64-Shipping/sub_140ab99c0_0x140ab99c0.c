// 函数: sub_140ab99c0
// 地址: 0x140ab99c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0
int16_t* result = arg1

if (*(arg2 + 0xc) s<= 0xffffffff)
    sub_1405947f0(arg2, 0)

uint64_t rax = *arg2

if (rax != 0)
    *rax = 0

wint_t _C = *result

while (_C != 0)
    if (iswalnum(_C) == 0 && *result != 0x5f)
        break
    
    int16_t rsi_1 = *result
    
    if (rsi_1 != 0)
        int32_t rdx = arg2[1].d
        int32_t rax_2
        rax_2.b = rdx s<= 0
        int32_t rbp_1 = rdx - 1
        
        if (rdx s<= 0)
            rbp_1 = 0
        
        int32_t rax_4 = rax_2 + 1 + rdx
        arg2[1].d = rax_4
        
        if (rax_4 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        int64_t rcx_3 = sx.q(rbp_1)
        *(*arg2 + (rcx_3 << 1)) = rsi_1
        *(*arg2 + (rcx_3 << 1) + 2) = 0
    
    _C = result[1]
    result = &result[1]

if (arg2[1].d s<= 1)
    return nullptr

return result
