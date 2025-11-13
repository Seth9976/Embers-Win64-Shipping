// 函数: sub_1420e4600
// 地址: 0x1420e4600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_1423d2320(arg3)
int64_t r15 = data_143f483b0
int32_t rbp
rbp.b = rax == 0
int64_t rcx_1

if (data_143de5480 == 0)
    rcx_1 = 0
else
    rcx_1.b = GetCurrentThreadId() != data_143de5470

char rax_2

if (*(r15 + (rcx_1 << 2)) != 0)
    rax_2 = sub_1419ba670(arg3)

if (*(r15 + (rcx_1 << 2)) == 0 || rax_2 == 0)
    void* rcx_5 = *(arg1 + (zx.q(rbp) << 3) + 0x20)
    
    if (rcx_5 == 0 || *(rcx_5 + 0x78) == 0)
    label_1420e4720:
        *arg2 = 0
        arg2[1].d = 0
        *(arg2 + 0xc) = 0x3f800000
        *(arg2 + 0x14) = 0
        *(arg2 + 0x1c) = 0x3f800000
        *(arg2 + 0x24) = 0
        *(arg2 + 0x2c) = 0x3f800000
        *(arg2 + 0x34) = 0
        *(arg2 + 0x3c) = 0x3f800000
        __builtin_memset(&arg2[8], 0, 0x2c)
        *(arg2 + 0x6c) = 0x3f800000
        *(arg2 + 0x74) = 0
        *(arg2 + 0x7c) = 0x3f800000
        *(arg2 + 0x84) = 0
        *(arg2 + 0x8c) = 0x3f800000
        *(arg2 + 0x94) = 0
        *(arg2 + 0x9c) = 0x3f800000
        arg2[0x14] = 0
        arg2[0x16].d = 0
    else
        sub_1422f6910(arg2, arg1 + 0x20, *(arg1 + 0x30), *(arg1 + 0x38), arg1 + 0x50, arg1 + 0x90, 
            arg1 + 0xd0, arg1 + 0xd8, rax)
else
    void* rdx_1 = *(arg1 + 0x48)
    
    if (rdx_1 == 0 || *(rdx_1 + 0x78) == 0)
        goto label_1420e4720
    
    sub_1422eb0d0(arg2, rdx_1, arg1 + 0x50, arg1 + 0x90, arg1 + 0xd0, arg1 + 0xd8, rax)

return arg2
