// 函数: sub_141d2cbe0
// 地址: 0x141d2cbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143222700
arg1[2] = *arg3
arg1[4] = 0

if (arg1[2] != 0)
    void* rax_1 = arg3[2]
    void* rcx = &arg3[4]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (**rcx)(rcx)

uint32_t rcx_1 = zx.d(*arg2)
void*** rdx_1

if (rcx_1 == 1)
    void*** rax_9 = j_sub_140a82f30(0x78)
    rdx_1 = rax_9
    
    if (rax_9 == 0)
        rdx_1 = nullptr
    else
        rdx_1[1].d = 0xff7fffff
        void* rcx_8 = &rdx_1[7]
        *rdx_1 = &data_1432227c8
        rdx_1[2] = 0
        rdx_1[3] = 0
        rdx_1[4].d = 0xff7fffff
        rdx_1[9] = 0
        rdx_1[0xa] = 0
        __builtin_memset(&rdx_1[0xb], 0, 0x20)
        __builtin_memset(&rdx_1[5], 0, 0x2c)
        *(rcx_8 + 0x1c) = 0x80
        void* rax_10 = *(rcx_8 + 0x10)
        
        if (rax_10 != 0)
            rcx_8 = rax_10
        
        *rcx_8 = 0
        *(rcx_8 + 8) = 0
        rdx_1[0xb].d = 0xffffffff
        *(rdx_1 + 0x5c) = 0
        rdx_1[0xd] = 0
        rdx_1[0xe].d = 0
else if (rcx_1 == 2)
    void*** rax_7 = j_sub_140a82f30(0xf8)
    
    if (rax_7 == 0)
        rdx_1 = nullptr
    else
        rdx_1 = sub_141d2c430(rax_7)
else if (rcx_1 == 3)
    void*** rax_5 = j_sub_140a82f30(0x160)
    
    if (rax_5 == 0)
        rdx_1 = nullptr
    else
        rdx_1 = sub_141d2caa0(rax_5)
else if (rcx_1 != 4)
    rdx_1 = nullptr
else
    void*** rax_3 = j_sub_140a82f30(0x50)
    
    if (rax_3 == 0)
        rdx_1 = nullptr
    else
        rdx_1 = sub_141d2c8f0(rax_3)

arg1[0xa] = rdx_1
arg1[0xb] = 0
arg1[0xc] = 0

if (*arg3 != 0)
    void* rdx_2 = arg3[2]
    void* rcx_9 = &arg3[4]
    
    if (rdx_2 != 0)
        rcx_9 = rdx_2
    
    int64_t rdx_3 = *rcx_9
    (*(rdx_3 + 0x10))(rcx_9, rdx_3)

return arg1
