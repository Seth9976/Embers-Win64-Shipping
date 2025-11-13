// 函数: sub_14060abb0
// 地址: 0x14060abb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg4

if (arg2 s<= arg4)
    rbp = arg2

char r10 = 0
int64_t rbx = sx.q(rbp)

if (rbp s> 0)
    char* rcx = nullptr
    
    do
        int16_t rdx = arg3[rcx]
        rcx[arg1] = rdx.b
        int16_t rax_1
        
        if (sx.w(rdx.b) != rdx || rdx.b s< 0)
            rax_1.b = 1
        else
            rax_1.b = 0
        
        r10 |= rax_1.b
        rcx = &rcx[1]
    while (rcx s< rbx)
    
    if (r10 != 0)
        char* rcx_1 = nullptr
        
        do
            int16_t r8 = arg3[rcx_1]
            
            if (sx.w(r8.b) != r8 || r8.b s< 0)
                rcx_1[arg1] = arg5
            
            rcx_1 = &rcx_1[1]
        while (rcx_1 s< rbx)
        
        sub_140a3a710(arg3, rbp)

if (arg2 s>= arg4)
    return arg1 + rbx

return 0
