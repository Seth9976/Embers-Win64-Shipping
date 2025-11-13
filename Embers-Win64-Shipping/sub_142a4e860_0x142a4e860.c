// 函数: sub_142a4e860
// 地址: 0x142a4e860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
char* rsi = arg1

if (arg4 != 0)
    *arg4 = arg1

if (*arg1 != 0)
    char* rbx_1 = rsi
    
    do
        uint32_t rcx = zx.d(*rbx_1)
        uint64_t rax_1 = zx.q(rcx - 0x2d)
        
        if (rax_1.b u<= 0x32 && test_bit(0x4000000080003, rax_1))
            break
        
        if (sub_142a86230(rcx.b) == 0)
            break
        
        rbx_1 = &rbx_1[1]
        rdi += 1
    while (*rbx_1 != 0)
    
    if (rdi == 4)
        if (arg4 != 0)
            *arg4 = &rsi[4]
        
        if (arg3 s< 4)
            rdi = arg3
        
        if (arg3 s>= 4 || arg3 s>= 1)
            *arg2 = sub_142a863a0(zx.d(*rsi))
            rsi = &rsi[1]
        
        int64_t rbp_1 = sx.q(rdi)
        char* rbx_2 = 1
        
        if (1 s< rbp_1)
            do
                *(rbx_2 + arg2) = sub_142a86220(zx.d(*(rsi + rbx_2 - 1)))
                rbx_2 = &rbx_2[1]
            while (rbx_2 s< rbp_1)
        
        return zx.q(rdi)

return 0
