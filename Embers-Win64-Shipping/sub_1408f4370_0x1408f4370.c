// 函数: sub_1408f4370
// 地址: 0x1408f4370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_142897860(arg4)
int64_t rdi = sx.q(arg3[1].d)

if (rax - 0xb s> rdi.d)
    arg3[1].d = rax - 0xb
    
    if (rax - 0xb s> *(arg3 + 0xc))
        sub_1405daba0(arg3)
    
    memset(rdi + *arg3, 0, sx.q(rax - 0xb - rdi.d))
else if (rax - 0xb s< rdi.d && rax - 0xb != rdi.d)
    arg3[1].d = rax - 0xb
    sub_1405dac10(arg3)

int32_t result = sub_142897560(zx.q(arg2[1].d), *arg2, *arg3, arg4, 1)

if (result != 0xffffffff)
    int64_t rsi_3 = sx.q(arg3[1].d)
    
    if (result s> rsi_3.d)
        arg3[1].d = result
        
        if (result s> *(arg3 + 0xc))
            sub_1405daba0(arg3)
        
        memset(rsi_3 + *arg3, 0, sx.q(result - rsi_3.d))
        return zx.q(result)
    
    if (result s< rsi_3.d && result != rsi_3.d)
        arg3[1].d = result
        sub_1405dac10(arg3)
else
    arg3[1].d = 0
    
    if (*(arg3 + 0xc) != 0)
        sub_1405c5510(arg3, 0)
        return zx.q(result)

return result
