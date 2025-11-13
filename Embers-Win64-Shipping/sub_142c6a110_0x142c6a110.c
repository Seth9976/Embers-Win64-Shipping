// 函数: sub_142c6a110
// 地址: 0x142c6a110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbp = nullptr
*(arg1 + 0x67c) = arg2
int32_t rbx = 0

if (arg2 == 0)
    if (arg3 == 0)
        rbx = 0x1b
    else
        void* rsi_1 = *arg1
        
        if (*(rsi_1 + 0xd0) != 0)
            sub_142c52530(rsi_1, 3, 2)
        
        char* rax_1 = sub_142c59e80(rsi_1, arg3, arg1[0xcc], arg1[0xcd].d, arg4)
        rbp = rax_1
        
        if (rax_1 == 0)
            sub_142c710d0(arg3)
            rbx = (&rbp[0x1b]).d
        
        if (*(rsi_1 + 0xd0) != 0)
            sub_142c52570(rsi_1, 3)

arg1[0xce] = rbp
arg1[0xcf].b = 1
return zx.q(rbx)
