// 函数: sub_142b77260
// 地址: 0x142b77260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int32_t rbp = arg3

if (arg2 s<= 0)
    return 0

int64_t result = sub_142a7dd00(rdi << 4)

if (result != 0)
    if (rbp s> 0)
        if (rbp s> arg1[1].d)
            rbp = arg1[1].d
        
        if (rbp s> rdi.d)
            rbp = rdi.d
        
        memcpy(result, *arg1, rbp << 4)
    
    if (*(arg1 + 0xc) != 0)
        sub_142a7dcd0(*arg1)
    
    *arg1 = result
    arg1[1].d = rdi.d
    *(arg1 + 0xc) = 1

return result
