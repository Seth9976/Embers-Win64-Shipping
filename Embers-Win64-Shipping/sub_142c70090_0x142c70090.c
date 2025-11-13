// 函数: sub_142c70090
// 地址: 0x142c70090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0xc0)

if (rcx != 0 && arg2 != 0)
    for (void* i = *sub_142c52fe0(rcx); i != 0; i = *(i + 0x10))
        int64_t r8_1 = -1
        
        do
            r8_1 += 1
        while ((i + 0x18)[r8_1] != 0)
        
        if (sub_142c704d0(i + 0x18, arg2, r8_1).d != 0)
            sub_142c64850(arg1, "Server %s is blacklisted\n", arg2, arg3)
            int64_t rax_1
            rax_1.b = 1
            return rax_1

int64_t* rax
rax.b = 0
return rax
