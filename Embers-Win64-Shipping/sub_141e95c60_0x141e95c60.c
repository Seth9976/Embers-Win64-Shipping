// 函数: sub_141e95c60
// 地址: 0x141e95c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*arg4)
void*** rsi = arg3

while (result.d s< arg1[1].d)
    int64_t rdx = sx.q(result.d) * 3
    int64_t rax_1 = *arg1
    int32_t rcx
    rcx.b = *(rax_1 + (rdx << 3) + 4) == 0
    
    if ((rcx.b & sub_140b5b8a0(*(rax_1 + (rdx << 3)), 0)) == 0)
        if (arg2 == 0)
            result = 0
        else
            result = *(arg2 + 0x28)
            uint64_t result_1 = result
        
        if (*(*arg1 + sx.q(*arg4) * 0x18) != result)
            break
    
    int64_t rcx_3 = sx.q(*arg4)
    *arg4 = (rcx_3 + 1).d
    int64_t rcx_4 = rcx_3 * 3
    int64_t rax_4 = *arg1
    void* r14_1 = rax_4 + (rcx_4 << 3)
    int32_t rcx_5
    rcx_5.b = sub_140b5b8a0(*(rax_4 + (rcx_4 << 3)), 0) == 0
    void* const rdi_1
    
    if ((*(r14_1 + 4) != 0 | rcx_5.b) == 0)
        rdi_1 = nullptr
    else
        rdi_1 = *(arg2 + 0x78)
    
    void** rax_6 = j_sub_140a82f30(0x20)
    void** rbx_2 = rax_6
    
    if (rax_6 == 0)
        rbx_2 = nullptr
    else
        int32_t rax_7 = *(r14_1 + 8)
        *rbx_2 = rdi_1
        rbx_2[1].d = rax_7
        rbx_2[2] = 0
        rbx_2[3] = 0
    
    *rsi = rbx_2
    int64_t r13_1 = sx.q(arg1[6].d)
    int32_t rax_8 = (r13_1 + 1).d
    arg1[6].d = rax_8
    
    if (rax_8 s> *(arg1 + 0x34))
        sub_140638870(&arg1[5])
    
    *(arg1[5] + (r13_1 << 3)) = rbx_2
    
    if (rdi_1 != 0)
        int64_t rcx_7 = *(*(rdi_1 + 8) + 0x10)
        
        if (((rcx_7 u>> 0x14).b & 1) != 0)
            sub_141e95e10(arg1, &(*rsi)[2], *(rdi_1 + 0x78), arg4)
        else if (((rcx_7 u>> 0x15).b & 1) != 0)
            sub_141e95c60(arg1, rdi_1, &(*rsi)[2], arg4)
    
    result = zx.q(*arg4)
    rsi = &(*rsi)[3]

return result
