// 函数: sub_141478bd0
// 地址: 0x141478bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg4
int32_t rdi_1

if (arg4 != 0)
    rdi_1 = arg5

uint32_t result

if (arg4 == 0 || rdi_1 == 0)
    *arg2 = 0
    *arg3 = 0
    result.b = 1
else
    if (*(arg1 + 0xd) != 0)
        rsi = (rsi + 3) & 0xfffffffc
        rdi_1 = (rdi_1 + 3) & 0xfffffffc
    
    uint32_t result_4 = sub_141479db0(arg1, 0, rsi, rdi_1, 0)
    uint32_t result_1 = result_4
    
    if (result_4 == 0xffffffff)
        result = sub_141479db0(arg1, 0, rsi, rdi_1, 1)
        result_1 = result
    
    if (result_4 != 0xffffffff || result != 0xffffffff)
        void* rax = *(arg1 + 0x78)
        void* rdx = &arg1[4]
        
        if (rax != 0)
            rdx = rax
        
        int64_t rcx_1 = sx.q(result_1) * 5
        uint32_t rax_2 = zx.d(*(rdx + (rcx_1 << 2) + 8))
        void* r11_1 = rdx + (rcx_1 << 2)
        *(r11_1 + 0x10) = 1
        *arg2 = rax_2
        *arg3 = zx.d(*(r11_1 + 0xa))
        int32_t rdx_2 = zx.d(*(r11_1 + 8)) + rsi
        char temp0_1 = arg1[3].b
        
        if (temp0_1 == 0)
            result = arg1[1]
            
            if (*arg1 u>= rdx_2)
                rdx_2 = *arg1
            
            *arg1 = rdx_2
            uint32_t result_2 = zx.d(*(r11_1 + 0xa)) + rdi_1
            
            if (result u>= result_2)
                result_2 = result
            
            arg1[1] = result_2
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
            
            int32_t result_5 = 1 << ((not.d(rcx_4)).b & (0x20 - rdx_3))
            
            if (*arg1 u>= result_5)
                result_5 = *arg1
            
            *arg1 = result_5
            uint32_t rax_7 = zx.d(*(r11_1 + 0xa))
            int32_t rax_8 = rax_7 + rdi_1
            uint64_t rflags_3
            char temp0_4
            temp0_4, rflags_3 = _bit_scan_reverse(rax_8)
            int32_t rcx_7
            
            if (rax_7 == neg.d(rdi_1))
                rcx_7 = 0x20
            else
                rcx_7 = 0x1f - temp0_4
            
            uint64_t rflags_4
            char temp0_5
            temp0_5, rflags_4 = _bit_scan_reverse(rax_8 - 1)
            char r9_2
            
            if (rax_8 == 1)
                r9_2 = 0x20
            else
                r9_2 = 0x1f - temp0_5
            
            result = arg1[1]
            int32_t result_3 = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
            int32_t rcx_12 = arg1[2]
            
            if (result u>= result_3)
                result_3 = result
            
            arg1[1] = result_3
            
            if (rcx_12 == 1)
                int32_t result_6 = result_3 * 2
                
                if (result_5 u>= result_6)
                    result_6 = result_5
                
                *arg1 = result_6
                result = result_6 u>> 1
                
                if (result_3 u>= result)
                    result = result_3
                
                arg1[1] = result
            else if (rcx_12 == 2)
                if (result_5 u>= result_3)
                    result_3 = result_5
                
                *arg1 = result_3
                arg1[1] = result_3
        
        result.b = 1
    else
        result.b = 0

return result
