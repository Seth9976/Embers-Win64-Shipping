// 函数: sub_141c48a50
// 地址: 0x141c48a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

BOOL result = 0
bool z

if (0 == arg1[0x26].d)
    arg1[0x26].d = 0
    z = true
else
    result = arg1[0x26].d
    z = false

if (z)
    result = TryEnterCriticalSection(&arg1[0x21])
    
    if (result != 0)
        if (arg1[0xd].d != 4)
            return LeaveCriticalSection(&arg1[0x21])
        
        int32_t rax = 0
        
        if (0 == arg1[0x28].d)
            arg1[0x28].d = 0
        else
            rax = arg1[0x28].d
        
        int32_t rax_1
        
        if (rax != 0xffffffff)
            rax_1 = 0
            
            if (0 == *(arg1 + 0x144))
                *(arg1 + 0x144) = 0
            else
                rax_1 = *(arg1 + 0x144)
        
        if (rax == 0xffffffff || rax_1 == 0xffffffff)
            int64_t rdx_10
            
            if (arg1[0x1d].d != 1)
                rdx_10 = arg1[0x1b]
            else
                rdx_10 = arg1[0x19]
            
            (*(*arg1 + 0xc0))(arg1, rdx_10)
            return LeaveCriticalSection(&arg1[0x21])
        
        int32_t rax_2 = 0
        
        if (0 == arg1[0x28].d)
            arg1[0x28].d = 0
        else
            rax_2 = arg1[0x28].d
        
        int64_t* rcx_2 = sx.q(rax_2) * 0x38 + arg1[0x15]
        *(rcx_2 + 0x34)
        *(rcx_2 + 0x34) = 0
        int64_t* rcx_3 = *rcx_2
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x18))(rcx_3)
        
        int32_t rax_6 = 0
        
        if (0 == arg1[0x28].d)
            arg1[0x28].d = 0
        else
            rax_6 = arg1[0x28].d
        
        int64_t rcx_4 = arg1[0x15]
        int64_t rbp_1 = sx.q(mods.dp.d(sx.q(rax_6 + 1), arg1[0x29].d))
        int64_t* rsi_1 = rbp_1 * 0x38
        bool z_1
        
        if (0 == *(rsi_1 + rcx_4 + 0x34))
            *(rsi_1 + rcx_4 + 0x34) = 0
            z_1 = true
        else
            *(rsi_1 + rcx_4 + 0x34)
            z_1 = false
        
        char rax_12
        int64_t* rcx_5
        
        if (z_1)
            rcx_5 = *(rsi_1 + arg1[0x15])
            
            if (rcx_5 != 0)
                rax_12 = (*(*rcx_5 + 0x20))(rcx_5, zx.q(data_143a12bf4), 0)
        
        if (not(z_1) || (rcx_5 != 0 && rax_12 != 0))
            int32_t rax_15 = 0
            
            if (0 == arg1[0x28].d)
                arg1[0x28].d = 0
            else
                rax_15 = arg1[0x28].d
            
            void* rcx_9 = sx.q(mods.dp.d(sx.q(rax_15 + 1), arg1[0x29].d)) * 0x38 + arg1[0x15]
            int32_t temp14_1 = *(rcx_9 + 0x30)
            void* rdx_8
            
            if (temp14_1 != 1)
                rdx_8 = *(rcx_9 + 0x20)
            else
                rdx_8 = *(rcx_9 + 0x10)
            
            int32_t r8_1 = *(rcx_9 + 0x18)
            
            if (temp14_1 != 1)
                sub_141c477b0(arg1, rdx_8, r8_1)
            else
                sub_141c479d0(arg1, rdx_8, r8_1)
            
            int64_t rax_19 = arg1[0x15]
            arg1[0x1e].b = 0
            data_143f34adc = 0
            int64_t rdx_9
            
            if (*(rsi_1 + rax_19 + 0x30) != 1)
                rdx_9 = *(rsi_1 + rax_19 + 0x20)
            else
                rdx_9 = *(rsi_1 + rax_19 + 0x10)
            
            (*(*arg1 + 0xc0))(arg1, rdx_9)
            arg1[0x28].d
            arg1[0x28].d = rbp_1.d
            int64_t* rcx_12 = *(rsi_1 + arg1[0x15])
            (*(*rcx_12 + 0x18))(rcx_12)
        else
            data_143f34ad8 += 1
            data_143f34adc += 1
            
            if (arg1[0x1e].b == 0)
                arg1[0x1e].b = 1
            
            if (arg1[0x1d].d != 1)
                (*(*arg1 + 0xc0))(arg1, arg1[0x1b])
            else
                (*(*arg1 + 0xc0))(arg1, arg1[0x19])
        
        result = LeaveCriticalSection(&arg1[0x21])
        int64_t* rcx_14 = arg1[0x20]
        
        if (rcx_14 != 0)
            jump(*(*rcx_14 + 0x10))

return result
