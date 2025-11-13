// 函数: sub_1428e93d0
// 地址: 0x1428e93d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
uint64_t rbx = arg3

if (arg2 != 0)
    if (rbx == 0)
        int32_t i = 0
        char* r8 = arg2
        
        if (*arg2 != 0)
            while (i u< 0x80000000)
                r8 = &r8[1]
                i += 1
                
                if (*r8 == 0)
                    break
        
        rbx = zx.q(i) & 0x7fffffff
        goto label_1428e944f
    
    uint64_t r8_1 = arg3 - 1
    
    if (rbx u<= 1)
        r8_1 = rbx
    
    if (memchr(arg2, 0, r8_1) == 0)
    label_1428e944f:
        
        if (rbx u> 1 && arg2[rbx - 1] == 0)
            rbx -= 1
        
        return sub_1428e9b80(arg1, arg2, rbx, arg4, 1, nullptr)

return 0xfffffffe
