// 函数: sub_1413f13a0
// 地址: 0x1413f13a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg2 + 0x2b0)

if (result != 0)
    int64_t* rdi_1 = *(result + 0xc0)
    *(arg1 + 0x65c0) -= 1
    *(arg2 + 0x2b0) = 0
    int64_t* var_30_1 = rdi_1
    char rax = sub_140a80f40()
    
    if (rax != 0)
        return sub_1413f14b0(arg1, rdi_1)
    
    if (data_143f138f4 == rax)
        if (data_143de5480 == rax)
            return sub_1413f14b0(arg1, rdi_1)
        
        uint32_t rax_1
        rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_1.b != 0)
            return sub_1413f14b0(arg1, rdi_1)
    
    void var_28
    int64_t* rax_2 = sub_1413dbb10(&var_28, nullptr, 0xff)
    *(*rax_2 + 0x10) = arg1.o
    void* rcx_2 = *rax_2
    int32_t r8_1 = rax_2[2].d
    int64_t* rdx = rax_2[1]
    int64_t* rbx_1 = *(rcx_2 + 0x28)
    int64_t* arg_18 = rbx_1
    int32_t* rdi_2 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_2 += 1
        rbx_1 = arg_18
    
    result = sub_1405e48c0(rcx_2, rdx, r8_1, 1)
    
    if (rbx_1 != 0)
        result = zx.q(*rdi_2)
        *rdi_2 -= 1
        
        if (result.d == 1)
            return sub_140a2f6e0(arg_18)

return result
