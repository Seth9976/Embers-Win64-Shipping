// 函数: sub_1429da0b0
// 地址: 0x1429da0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx

if (arg5 != 0xa)
    rbx = 3
else if (arg1 == 0 || arg2 == 0)
    rbx = 8
else if (arg2[1].d != 5)
    rbx = 3
else if (test_bit(arg4, 0x10) && (*(arg2 + 0xc) & 0x40000) == 0)
    rbx = 4
else if (test_bit(arg4, 0x11) && (*(arg2 + 0xc) & 0x80000) == 0)
    rbx = 4
else if (test_bit(arg4, 0x12) && (*(arg2 + 0xc) & 0x100000) == 0)
    rbx = 4
else if ((*(arg2 + 0xc) & 1) != 0)
    int64_t rsi_1 = 0
    *arg1 = 0
    __builtin_memset(&arg1[2], 0, 0x28)
    arg1[1] = arg2
    *arg1 = *arg2
    arg1[6] = 0
    arg1[4].d = arg4
    arg1[5] = arg3
    int32_t rax_2 = arg2[2](arg1, 0)
    rbx = rax_2
    
    if (rax_2 != 0)
        int64_t* rax_3 = arg1[6]
        
        if (rax_3 != 0)
            rsi_1 = *rax_3
        
        arg1[3] = rsi_1
        sub_1429d9fc0(arg1)
else
    rbx = 4

if (arg1 != 0)
    arg1[2].d = rbx

return zx.q(rbx)
