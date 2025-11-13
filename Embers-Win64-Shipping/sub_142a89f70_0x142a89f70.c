// 函数: sub_142a89f70
// 地址: 0x142a89f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg3)
char* rcx = nullptr
char* rbx = arg2

if (arg3 s< 0)
    result = -1
    
    do
        result += 1
    while (arg2[result] != 0)

if (result.d s> 0)
    while (true)
        if (*rbx == 0x2d)
            if (rcx == 0)
                break
            
            if (arg1(arg4, zx.q(rbx.d - rcx.d)).b == 0)
                break
            
            rcx = nullptr
        else if (rcx == 0)
            rcx = rbx
        
        rbx = &rbx[1]
        
        if (&rbx[neg.q(arg2)] s>= sx.q(result.d))
            if (rcx != 0)
                return arg1(arg4, zx.q(rbx.d - rcx.d))
            
            break

result.b = 0
return result
