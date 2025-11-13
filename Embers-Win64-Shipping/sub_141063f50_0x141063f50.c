// 函数: sub_141063f50
// 地址: 0x141063f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = arg2

if (*arg1 s> 1)
    *arg3 = 0x10
    arg2.b = 0x40
else
    uint32_t rax_1 = zx.d(*(arg2 + 1))
    char temp0_1 = rax_1.b
    int32_t rdx_2
    
    if (temp0_1 == 0)
        rdx_2 = rax_1
    else
        uint64_t rflags_1
        char temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_1)
        int32_t rcx
        
        if (temp0_1 == 0)
            rcx = 0x20
        else
            rcx = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_1 - 1)
        char rdx_1
        
        if (rax_1 == 1)
            rdx_1 = 0x20
        else
            rdx_1 = 0x1f - temp0_3
        
        rdx_2 = 1 << ((0x20 - rdx_1) & (not.d(rcx << 0x1a s>> 0x1f)).b)
        
        if (rdx_2 u>= 0x10)
            rdx_2 = 0x10
    
    *arg3 = rdx_2.b
    arg2 = zx.q(*(rdi + 2))
    char temp1_1 = arg2.b
    
    if (temp1_1 != 0)
        uint64_t rflags_3
        char temp0_4
        temp0_4, rflags_3 = _bit_scan_reverse(arg2.d)
        int32_t rcx_5
        
        if (temp1_1 == 0)
            rcx_5 = 0x20
        else
            rcx_5 = 0x1f - temp0_4
        
        int32_t rcx_7 = rcx_5 << 0x1a s>> 0x1f
        uint64_t rflags_4
        char temp0_5
        temp0_5, rflags_4 = _bit_scan_reverse((arg2 - 1).d)
        char rdx_3
        
        if (rcx_7 == 0)
            rdx_3 = 0x20
        else
            rdx_3 = 0x1f - temp0_5
        
        arg2 = zx.q(1 << ((not.d(rcx_7)).b & (0x20 - rdx_3)))
        
        if (arg2.d u>= 0x40)
            arg2 = 0x40

arg3[2] = arg2.b
char result_1 = *(rdi + 3)
uint32_t result

if (*arg1 s> 2)
    result = zx.d(result_1)
    
    if (result_1 u> 0x10)
        result = 0x10
    
    arg3[1] = result.b
    arg3[3] = arg4 << 4
else
    uint32_t result_2 = zx.d(result_1)
    
    if (result_1 u> 0x10)
        uint64_t rflags_5
        char temp0_6
        temp0_6, rflags_5 = _bit_scan_reverse(result_2)
        int32_t rcx_10
        
        if (result_1 == 0x10)
            rcx_10 = 0x20
        else
            rcx_10 = 0x1f - temp0_6
        
        int32_t rcx_12 = rcx_10 << 0x1a s>> 0x1f
        uint64_t rflags_6
        char temp0_7
        temp0_7, rflags_6 = _bit_scan_reverse(result_2 - 1)
        char rdx_4
        
        if (rcx_12 == 0)
            rdx_4 = 0x20
        else
            rdx_4 = 0x1f - temp0_7
        
        result_2 = 1 << ((0x20 - rdx_4) & (not.d(rcx_12)).b)
        
        if (result_2 u>= 0x10)
            result_2 = 0x10
    
    arg3[1] = result_2.b
    result = zx.d(*(rdi + 4))
    
    if (result.b == 0 || arg4 == 0)
        arg3[3] = 0
    else
        uint32_t rax_15 = zx.d(result.b)
        uint64_t rflags_7
        char temp0_8
        temp0_8, rflags_7 = _bit_scan_reverse(rax_15)
        int32_t rcx_15
        
        if (arg4 == 0)
            rcx_15 = 0x20
        else
            rcx_15 = 0x1f - temp0_8
        
        result = rax_15 - 1
        uint64_t rflags_8
        char temp0_9
        temp0_9, rflags_8 = _bit_scan_reverse(result)
        
        if (rax_15 == 1)
            arg3[3] = 1
        else
            int32_t rbx_1 = 1 << ((not.d(rcx_15 << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_9)))
            
            if (rbx_1 u>= 0x10)
                rbx_1 = 0x10
            
            arg3[3] = rbx_1.b

return result
