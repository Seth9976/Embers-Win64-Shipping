// 函数: sub_142c38260
// 地址: 0x142c38260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0x61616c74)
    int32_t* rax = sub_142c38520(arg1 + 8)
    *rax = 0x11
    rax[1] = arg3
    return rax

int32_t* rax_1 = sub_142c32350(arg2)
int32_t* rbx = rax_1

if (rax_1 != 0)
    rax_1 = sub_142c38520(arg1 + 8)
    *rax_1 = rbx[1]
    
    if (arg3 != 0)
        rax_1[1] = rbx[2]
        return rax_1
    
    rax_1[1] = rbx[3]

return rax_1
