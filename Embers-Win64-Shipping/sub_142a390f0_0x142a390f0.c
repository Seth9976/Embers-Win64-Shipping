// 函数: sub_142a390f0
// 地址: 0x142a390f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = arg3 + arg4
int32_t r12 = 0
int64_t rbx = arg3

if (arg3 s< rbp)
    do
        int32_t arg_18
        uint64_t rax_1 = sub_142a3e160(arg2, rbx, &arg_18, arg5)
        
        if (rax_1 s< 0)
            return 0xfffffffe
        
        int64_t rbx_1 = rbx + sx.q(arg_18)
        
        if (rbp s>= 0 && rbx_1 s>= rbp)
            return 0xfffffffe
        
        int64_t rax_3 = sub_142a3e270(arg2, rbx_1, &arg_18, arg5)
        
        if (rax_3 s< 0)
            return 0xfffffffe
        
        int64_t rcx_2 = sx.q(arg_18)
        
        if ((rcx_2 - 1).d u> 7)
            return 0xfffffffe
        
        rbx = rbx_1 + rcx_2
        
        if (rbx u> 0x7fffffffffffffff || (rbp s>= 0 && rbx s> rbp))
            return 0xfffffffe
        
        if (rax_3 != 0)
            int64_t result
            
            if (rax_1 == 0x80)
                char rax_5
                int512_t zmm1
                rax_5, zmm1 = sub_142a37a00(arg1)
                
                if (rax_5 == 0)
                    return 0xffffffff
                
                int64_t rdx_2 = sx.q(*(arg1 + 0x2c))
                int64_t* rcx_5 = arg1[4] + rdx_2 * 0x18
                *(arg1 + 0x2c) = (rdx_2 + 1).d
                __builtin_memset(rcx_5, 0, 0x18)
                result, arg5 = sub_142a3a450(rcx_5, arg2, rbx, rax_3, zmm1)
                
                if (result.d s< 0)
                    return result
            else if (rax_1 == 0x5654)
                result, arg5 = sub_142a3e960(arg2, rbx, rax_3, arg1)
                
                if (result.d s< 0)
                    return result
            else if (rax_1 == 0x73c4)
                int64_t arg_20
                result = sub_142a3e880(arg2, rbx, rax_3, &arg_20)
                
                if (result.d s< 0)
                    return result
                
                arg1[1] = arg_20
            else if (rax_1 == 0x91)
                result = sub_142a3ea30(arg2, rbx, rax_3)
                
                if (result s< 0)
                    return result
                
                arg1[2] = result
            else if (rax_1 == 0x92)
                result = sub_142a3ea30(arg2, rbx, rax_3)
                
                if (result s< 0)
                    return result
                
                arg1[3] = result
            rbx += rax_3
            
            if (rbx s> rbp)
                return 0xfffffffe
    while (rbx s< rbp)

if (rbx != rbp)
    r12 = -2

return zx.q(r12)
