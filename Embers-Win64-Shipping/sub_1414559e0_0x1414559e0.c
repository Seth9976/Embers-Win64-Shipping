// 函数: sub_1414559e0
// 地址: 0x1414559e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx

if (*(arg1 + 0x64) == 0)
    rbx = mods.dp.d(sx.q(arg2), arg3)
else
    rbx = -1
    int32_t r11_1 = -1
    int32_t rax = 0
    
    if (arg3 s> 0)
        void* r9 = arg1 + 0x10
        void* r8 = arg1 + 0x38
        
        do
            int32_t rcx = *r8
            int64_t* r10_1 = *r9
            
            if (r10_1 != 0 && *r10_1 != 0 && arg2 - rcx s<= arg4 && rcx u< r11_1)
                r11_1 = rcx
                rbx = rax
            
            rax += 1
            r8 += 4
            r9 += 0x10
        while (rax s< arg3)

int64_t rcx_1 = sx.q(rbx)

if (rbx != 0xffffffff)
    int64_t rdx_5 = (rcx_1 + 1) * 2
    int64_t* rax_4 = *(arg1 + (rdx_5 << 3))
    
    if (rax_4 != 0 && *rax_4 != 0 && arg2 - *(arg1 + (rcx_1 << 2) + 0x38) s<= arg4)
        *arg5 = *(rcx_1 + arg1 + 0x61)
        int64_t* rax_6 = *(arg1 + (rdx_5 << 3))
        
        if (rax_6 == 0)
            return 0
        
        return *rax_6

*arg5 = 0
return 0
