// 函数: sub_142bc4fd0
// 地址: 0x142bc4fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0

if (arg3[0xb] != 0)
    return 0

if (&arg1[1] u<= arg2)
    uint32_t rbx_1 = zx.d(*arg1)
    uint64_t rbp_2 = zx.q(rbx_1) & 0xf
    int32_t i_1 = (rbx_1 u>> 4) + rbp_2.d
    
    if (&arg1[1 + zx.q(i_1 * 2)] u<= arg2)
        void* rax = sub_142b99a90(*arg3, 4, 0, i_1, 0, &arg_18)
        int32_t rdx_2 = arg_18
        void* r8_1 = rax
        
        if (rdx_2 == 0)
            arg3[0xb] = rax
            arg3[9] = rax + (rbp_2 << 2)
            
            if (i_1 != 0)
                void* rax_1 = arg1
                int32_t i
                
                do
                    uint16_t rcx_2 = zx.w(*(rax_1 + 1))
                    rax_1 += 2
                    r8_1 += 4
                    *(r8_1 - 4) = sx.d(rcx_2 << 8) | zx.d(*rax_1)
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                return zx.q(arg_18)
        
        return zx.q(rdx_2)

return 8
