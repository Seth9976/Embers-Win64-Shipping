// 函数: sub_142bc4d40
// 地址: 0x142bc4d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int32_t arg_8 = 0

if (arg1 + 5 u<= arg2)
    uint64_t i_2 = zx.q(*(arg1 + 4))
    void* rbx_1 = arg1 + 5
    int32_t r8 = arg3[0xf].d
    uint32_t rbp_1 = zx.d(*(arg1 + 3))
    int32_t rsi_1 = r8 + i_2.d
    
    if (rsi_1 u> *(arg3 + 0x7c))
        int32_t rsi_3 = (rsi_1 + 3) & 0xfffffffc
        int64_t rax_2 = sub_142b99a90(*arg3, 0x28, r8, rsi_3, arg3[0x10], &arg_8)
        r9 = arg_8
        arg3[0x10] = rax_2
        
        if (r9 != 0)
            return zx.q(r9)
        
        *(arg3 + 0x7c) = rsi_3
    
    int32_t r10_2 = rbp_1 & 1
    int32_t r11_2 = rbp_1 & 2
    int32_t rcx_1 = r10_2 + 9
    
    if (r11_2 == 0)
        rcx_1 = r10_2 + 8
    
    int32_t r12_2 = rbp_1 & 4
    int32_t rax_4 = rcx_1 + 1
    
    if (r12_2 == 0)
        rax_4 = rcx_1
    
    int32_t rsi_5 = rbp_1 & 8
    int32_t rdx = rax_4 + 1
    
    if (rsi_5 == 0)
        rdx = rax_4
    
    int32_t rbp_2 = rbp_1 & 0x10
    uint32_t* r8_1 = arg3[0x10] + zx.q(arg3[0xf].d) * 0x28
    int32_t rax_7 = rdx + 1
    
    if (rbp_2 == 0)
        rax_7 = rdx
    
    if (zx.q(rax_7 * i_2.d) + rbx_1 u<= arg2)
        if (i_2.d != 0)
            uint64_t i_1 = i_2
            uint64_t i
            
            do
                uint32_t rcx_5
                void* rbx_2
                
                if (r10_2 == 0)
                    rcx_5 = zx.d(*rbx_1)
                    rbx_2 = rbx_1 + 1
                else
                    rbx_2 = rbx_1 + 2
                    rcx_5 = zx.d(*rbx_1) << 8 | zx.d(*(rbx_2 - 1))
                
                *r8_1 = rcx_5
                uint32_t rcx_8
                void* rbx_3
                
                if (r11_2 == 0)
                    rcx_8 = zx.d(*rbx_2)
                    rbx_3 = rbx_2 + 1
                else
                    rbx_3 = rbx_2 + 2
                    rcx_8 = zx.d(*rbx_2) << 8 | zx.d(*(rbx_3 - 1))
                
                r8_1[1] = rcx_8
                r8_1[2] = zx.d(*rbx_3)
                uint32_t rcx_11
                void* rbx_4
                
                if (r12_2 == 0)
                    rcx_11 = zx.d(*(rbx_3 + 1))
                    rbx_4 = rbx_3 + 3
                else
                    rbx_4 = rbx_3 + 4
                    rcx_11 = zx.d(*(rbx_3 + 1)) << 8 | zx.d(*(rbx_4 - 2))
                
                r8_1[5] = rcx_11 << 8 | zx.d(*(rbx_4 - 1))
                uint32_t rcx_16
                void* rbx_5
                
                if (rsi_5 == 0)
                    rcx_16 = zx.d(*rbx_4)
                    rbx_5 = rbx_4 + 2
                else
                    rbx_5 = rbx_4 + 3
                    rcx_16 = zx.d(*rbx_4) << 8 | zx.d(*(rbx_5 - 2))
                
                r8_1[6] = rcx_16 << 8 | zx.d(*(rbx_5 - 1))
                uint32_t rcx_21
                
                if (rbp_2 == 0)
                    rcx_21 = zx.d(*rbx_5)
                    rbx_1 = rbx_5 + 1
                else
                    rbx_1 = rbx_5 + 2
                    rcx_21 = zx.d(*rbx_5) << 8 | zx.d(*(rbx_1 - 1))
                
                r8_1[7] = rcx_21
                r8_1 = &r8_1[0xa]
                i = i_1
                i_1 -= 1
            while (i != 1)
            r9 = arg_8
        
        arg3[0xf].d += i_2.d
        return zx.q(r9)

return 8
