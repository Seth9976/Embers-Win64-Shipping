// 函数: sub_1428f30c0
// 地址: 0x1428f30c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 1

if (arg2 s>= 0)
    if (arg3 s>= 0x1f)
        do
            arg3 s>>= 7
            rax += 1
        while (arg3 s> 0)
    
    int32_t rax_1
    
    if (arg1 != 2)
        rax_1 = rax + 1
        
        if (arg2 s> 0x7f)
            int32_t i = arg2
            
            if (arg2 s> 0)
                do
                    i s>>= 8
                    rax_1 += 1
                while (i s> 0)
    else
        rax_1 = rax + 3
    
    if (rax_1 s< 0x7fffffff - arg2)
        return zx.q(rax_1 + arg2)

return 0xffffffff
