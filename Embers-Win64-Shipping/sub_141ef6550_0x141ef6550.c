// 函数: sub_141ef6550
// 地址: 0x141ef6550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = 0
uint64_t result = zx.q(arg3)
int32_t rdi = arg2

if (arg2 == 6)
    rsi = result.b

if (arg2 == 2)
    result = sub_1405be820(arg1)
    
    if (result == 0 || *(result + 0x120) == 0)
        rdi = 1
    else
        result = (*(*arg1 + 0x5c0))(arg1)
        
        if (result.b == 0)
            rdi = 1
        else
            int64_t rcx_1 = arg1[0x29]
            
            if (rcx_1 == 0)
                rdi = 1
            else
                result = sub_141dec0a0(rcx_1)
                
                if (result == 0)
                    rdi = 1

uint32_t rbp = zx.d(arg1[0x2d].b)

if (rbp != rdi)
label_141ef65d2:
    int64_t rax_1 = *arg1
    char r14_1 = *(arg1 + 0x169)
    arg1[0x2d].b = rdi.b
    *(arg1 + 0x169) = rsi
    result = (*(rax_1 + 0x5c0))(arg1)
    
    if (result.b != 0)
        return (*(*arg1 + 0x598))(arg1, zx.q(rbp), zx.q(r14_1))
else if (rdi == 6 && rsi != *(arg1 + 0x169))
    goto label_141ef65d2

return result
