// 函数: sub_1418e06e0
// 地址: 0x1418e06e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
int64_t r8
result, r8 = sub_1418bdeb0(arg2)

if (*(arg1 + 0xf4) != 0)
    int32_t rcx_1 = 0
    int32_t rsi_1 = 0
    int64_t var_58
    __builtin_memset(&var_58, 0, 0x24)
    int32_t arg_8 = 0
    int64_t var_50
    
    if (*(arg1 + 0xf0) s> 0)
        void* r14_1 = arg1 + 0x100
        int64_t var_48_1
        
        while (true)
            int64_t r15_1 = *(r14_1 + 0x10)
            var_48_1.d = rsi_1 + 1
            
            if (rsi_1 + 1 s> rcx_1)
                sub_140775520(&var_50)
            
            int64_t rdx_1 = sx.q(rsi_1) * 0x48
            __builtin_memset(rdx_1 + var_50, 0, 0x48)
            int64_t rax_3 = var_50
            *(rdx_1 + rax_3) = 0x2d
            *(rdx_1 + rax_3 + 0x28) = r15_1
            *(rdx_1 + rax_3 + 0x30) = 1
            *(rdx_1 + rax_3 + 0x38) = 1
            *(rdx_1 + rax_3 + 0x40) = 1
            *(rdx_1 + rax_3 + 0x20) = -1
            int64_t rcx_4 = var_50
            *(rcx_4 + rdx_1 + 0x34) = *(arg1 + 0xfc)
            *(rcx_4 + rdx_1 + 0x3c) = *(arg1 + 0xf8)
            int64_t rax_6 = var_50
            *(rdx_1 + rax_6 + 0x10) = 0x100
            *(rdx_1 + rax_6 + 0x18) = 2
            var_58.d |= 0x400
            *(rdx_1 + rax_6 + 0x14) = 0x20
            *(rdx_1 + rax_6 + 0x1c) = 5
            int64_t rax_7 = *r14_1
            r14_1 += 0x18
            var_58:4.d |= 0x80
            result = *(rax_7 + sx.q(*(arg1 + 0xf8)) * 0x10)
            int32_t rdx_5 = arg_8 + 1
            arg_8 = rdx_5
            *(result + (sx.q(*(arg1 + 0xfc)) << 2)) = 5
            
            if (rdx_5 s>= *(arg1 + 0xf0))
                break
            
            rcx_1 = var_48_1:4.d
            rsi_1 = var_48_1.d
        
        int32_t var_38
        
        if (var_48_1.d s> 0 || var_38 s> 0)
            r8.b = 1
            result = sub_1418c1fc0(&var_58, arg2)
    
    if (*(arg1 + 0xf5) != 0)
        result = sub_1418ec6f0(arg1 + 0xf0)
    
    int64_t var_40
    
    if (var_40 != 0)
        result = sub_140a74f90(var_40)
    
    int64_t rcx_9 = var_50
    
    if (rcx_9 != 0)
        result = sub_140a74f90(rcx_9)

*(arg1 + 0x1c8) = 0
*(arg1 + 0x1c0) = 0
return result
