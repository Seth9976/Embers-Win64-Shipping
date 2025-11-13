// 函数: sub_14121b060
// 地址: 0x14121b060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg5
int32_t result

if (rsi == 0)
label_14121b26c:
    *arg2 = 0
    *arg3 = 0
    *arg4 = 0
    result.b = 1
else
    int32_t rdi_1 = arg6
    
    if (rdi_1 == 0)
        goto label_14121b26c
    
    int32_t rbp_1 = arg7
    
    if (rbp_1 == 0)
        goto label_14121b26c
    
    if (*(arg1 + 0xd) != 0)
        rsi = (rsi + 3) & 0xfffffffc
        rdi_1 = (rdi_1 + 3) & 0xfffffffc
        rbp_1 = (rbp_1 + 3) & 0xfffffffc
    
    int32_t result_4 = sub_14121bdb0(arg1, 0, rsi, rdi_1, rbp_1, 0)
    int32_t result_1 = result_4
    
    if (result_4 == 0xffffffff)
        result = sub_14121bdb0(arg1, 0, rsi, rdi_1, rbp_1, 1)
        result_1 = result
    
    if (result_4 != 0xffffffff || result != 0xffffffff)
        void* rdx = &arg1[4]
        void* rax = *(rdx + 0x78)
        
        if (rax != 0)
            rdx = rax
        
        int64_t rcx_1 = sx.q(result_1) * 3
        uint32_t rax_2 = zx.d(*(rdx + (rcx_1 << 3) + 8))
        void* r13_1 = rdx + (rcx_1 << 3)
        *(r13_1 + 0x14) = 1
        *arg2 = rax_2
        *arg3 = zx.d(*(r13_1 + 0xa))
        *arg4 = zx.d(*(r13_1 + 0xc))
        int32_t rdx_2 = zx.d(*(r13_1 + 8)) + rsi
        char temp0_1 = arg1[3].b
        
        if (temp0_1 == 0)
            result = arg1[2]
            
            if (*arg1 u>= rdx_2)
                rdx_2 = *arg1
            
            *arg1 = rdx_2
            int32_t rcx_18 = zx.d(*(r13_1 + 0xa)) + rdi_1
            
            if (arg1[1] u>= rcx_18)
                rcx_18 = arg1[1]
            
            arg1[1] = rcx_18
            int32_t result_2 = zx.d(*(r13_1 + 0xc)) + rbp_1
            
            if (result u>= result_2)
                result_2 = result
            
            arg1[2] = result_2
        else
            uint64_t rflags_1
            char temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rdx_2)
            int32_t rcx_2
            
            if (temp0_1 == 0)
                rcx_2 = 0x20
            else
                rcx_2 = 0x1f - temp0_2
            
            int32_t rcx_4 = rcx_2 << 0x1a s>> 0x1f
            uint64_t rflags_2
            char temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rdx_2 - 1)
            char rdx_3
            
            if (rcx_4 == 0)
                rdx_3 = 0x20
            else
                rdx_3 = 0x1f - temp0_3
            
            int32_t rdx_4 = 1 << ((not.d(rcx_4)).b & (0x20 - rdx_3))
            
            if (*arg1 u>= rdx_4)
                rdx_4 = *arg1
            
            *arg1 = rdx_4
            uint32_t rax_8 = zx.d(*(r13_1 + 0xa))
            int32_t rax_9 = rax_8 + rdi_1
            uint64_t rflags_3
            char temp0_4
            temp0_4, rflags_3 = _bit_scan_reverse(rax_9)
            int32_t rcx_7
            
            if (rax_8 == neg.d(rdi_1))
                rcx_7 = 0x20
            else
                rcx_7 = 0x1f - temp0_4
            
            uint64_t rflags_4
            char temp0_5
            temp0_5, rflags_4 = _bit_scan_reverse(rax_9 - 1)
            char rdx_6
            
            if (rax_9 == 1)
                rdx_6 = 0x20
            else
                rdx_6 = 0x1f - temp0_5
            
            int32_t rdx_7 = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - rdx_6))
            
            if (arg1[1] u>= rdx_7)
                rdx_7 = arg1[1]
            
            arg1[1] = rdx_7
            uint32_t rax_12 = zx.d(*(r13_1 + 0xc))
            int32_t rax_13 = rax_12 + rbp_1
            uint64_t rflags_5
            char temp0_6
            temp0_6, rflags_5 = _bit_scan_reverse(rax_13)
            int32_t rcx_12
            
            if (rax_12 == neg.d(rbp_1))
                rcx_12 = 0x20
            else
                rcx_12 = 0x1f - temp0_6
            
            uint64_t rflags_6
            char temp0_7
            temp0_7, rflags_6 = _bit_scan_reverse(rax_13 - 1)
            char r9_2
            
            if (rax_13 == 1)
                r9_2 = 0x20
            else
                r9_2 = 0x1f - temp0_7
            
            result = arg1[2]
            int32_t result_3 = 1 << ((not.d(rcx_12 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
            
            if (result u>= result_3)
                result_3 = result
            
            arg1[2] = result_3
        
        result.b = 1
    else
        result.b = 0

return result
