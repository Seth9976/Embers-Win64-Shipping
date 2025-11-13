// 函数: sub_1413f7cb0
// 地址: 0x1413f7cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x65c4) += 1
void* var_48 = arg1
int64_t var_40 = arg2
int32_t result

if (sub_140a80f40() == 0)
    if (data_143f138f4 == 0)
        uint32_t rax_4
        
        if (data_143de5480 != 0)
            rax_4.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            var_48.o = var_48.o
            return sub_1413c7680(&var_48)
    
    void var_38
    int64_t* rax_6 = sub_1413dbf00(&var_38, nullptr, 0xff)
    *(*rax_6 + 0x10) = var_48.o
    void* rcx_6 = *rax_6
    int32_t r8_1 = rax_6[2].d
    int64_t* rdx_2 = rax_6[1]
    int64_t* rbx_1 = *(rcx_6 + 0x28)
    int64_t* arg_10 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_10
    
    result = sub_1405e48c0(rcx_6, rdx_2, r8_1, 1)
    
    if (rbx_1 != 0)
        result = *rdi_1
        *rdi_1 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_10)
else
    int64_t rsi_1 = sx.q(*(arg1 + 0xf90))
    int32_t rax_1 = (rsi_1 + 1).d
    *(arg1 + 0xf90) = rax_1
    
    if (rax_1 s> *(arg1 + 0xf94))
        sub_1405a4d70(arg1 + 0xf88)
    
    *(*(arg1 + 0xf88) + (rsi_1 << 3)) = arg2
    char rax_3 = sub_1410c2460(arg1, 0)
    *(arg1 + 0xf80) = arg2
    result = sub_1410c2460(arg1, 0)
    
    if (rax_3 != result.b)
        *(arg1 + 0xf78) = 1

return result
