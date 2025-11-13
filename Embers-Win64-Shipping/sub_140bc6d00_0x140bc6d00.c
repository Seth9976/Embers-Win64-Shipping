// 函数: sub_140bc6d00
// 地址: 0x140bc6d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
EnterCriticalSection(arg1 + 0xe0)
void*** result

if (*(arg1 + 0x110) == *(arg1 + 0x13c))
labelid_1e:
    result = nullptr
else
    void* rdx = *(arg1 + 0x148)
    void* r8 = arg1 + 0x140
    int64_t r9_1 = sx.q(arg2[1])
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_1 = *(r8 + (((sx.q(*(arg1 + 0x150)) - 1) & r9_1) << 2))
    
    if (rax_1 == 0xffffffff)
    label_140bc6d87:
        result = nullptr
    else
        int64_t r8_1 = *(arg1 + 0x108)
        int64_t rdx_1
        
        while (true)
            rdx_1 = sx.q(rax_1)
            int64_t rcx_4 = rdx_1 * 3
            
            if (*(r8_1 + (rcx_4 << 3)) == r9_1.d)
                break
            
            rax_1 = *(r8_1 + (rcx_4 << 3) + 0x10)
            
            if (rax_1 == 0xffffffff)
                goto label_140bc6d87_2
        
        if (rax_1 == 0xffffffff)
        label_140bc6d87_1:
            result = nullptr
        else
            void* rsi_1 = r8_1 + rdx_1 * 0x18
            
            if (rsi_1 == 0)
            label_140bc6d87_2:
                result = nullptr
            else
                result = *(rsi_1 + 8)

if (result != 0)
    int32_t rdx_4 = *arg2
    
    if (rdx_4 s> 0)
        sub_140bc2a50(result, rdx_4)
else
    void*** rax_3
    
    if (arg2[2] u< *(arg1 + 0x360))
        rax_3 = j_sub_140a82f30(0x1a8)
    
    void*** result_2
    
    if (arg2[2] u>= *(arg1 + 0x360) || rax_3 == 0)
        result_2 = nullptr
    else
        result_2 =
            sub_140bbf520(rax_3, arg2, arg1, *(arg1 + 0x158), arg1 + 0x3d0, *(arg1 + 0xc00440))
    
    void*** result_1 = result_2
    
    if (result_2 == 0)
        if (arg1 != -0xe0)
            LeaveCriticalSection(arg1 + 0xe0)
        
        return nullptr
    
    *(result_2 + 0xc) += 1
    *(arg1 + 0x1f4) += 1
    sub_140bbe3d0(arg1 + 0x108, &arg2[1], &result_1)
    result = result_1
    *arg3 = 1

if (*(arg2 + 0x20) != 0)
    int64_t rbp_1 = sx.q(result[0xb].d)
    void* rdi_1 = &result[8]
    int32_t rax_6 = (rbp_1 + 1).d
    *(rdi_1 + 0x18) = rax_6
    
    if (rax_6 s> *(rdi_1 + 0x1c))
        sub_140bcefd0(rdi_1, rbp_1.d)
    
    void* rcx_11 = *(rdi_1 + 0x10)
    
    if (rcx_11 != 0)
        rdi_1 = rcx_11
    
    *(rdi_1 + (rbp_1 << 3)) = *(arg2 + 0x20)
    *(arg2 + 0x20) = 0

if (arg1 != -0xe0)
    LeaveCriticalSection(arg1 + 0xe0)

return result
