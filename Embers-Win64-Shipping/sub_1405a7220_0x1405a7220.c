// 函数: sub_1405a7220
// 地址: 0x1405a7220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg4

if (arg2 s<= arg4)
    r11 = arg2

char r10 = 0
int64_t rbx = sx.q(r11)

if (r11 s> 0)
    void* rdx = nullptr
    
    do
        int16_t rcx = sx.w(*(rdx + arg3))
        *(arg1 + (rdx << 1)) = rcx
        rdx += 1
        r10 |= rcx.b s< 0
    while (rdx s< rbx)
    
    if (r10 != 0)
        char* rcx_1 = nullptr
        
        do
            if (*(rcx_1 + arg3) s< 0)
                *(arg1 + (rcx_1 << 1)) = arg5
            
            rcx_1 = &rcx_1[1]
        while (rcx_1 s< rbx)
        
        sub_140a3a8e0(arg3, r11)

if (arg2 s>= arg4)
    return arg1 + (rbx << 1)

return 0
