// 函数: sub_141f58940
// 地址: 0x141f58940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x30)
int32_t result = 0
*(arg1 + 0x30) = 0
*(arg1 + 0x28) = 0

if (*(arg1 + 0x2c) != 0)
    result = sub_1405a51b0(arg1 + 0x20, 0)

if (rbx != 0)
    if (sub_140a80f40() != 0)
        (*(*rbx + 0x30))(rbx)
        jump(**rbx)
    
    if (data_143f138f4 == 0)
        if (data_143de5480 == 0)
            (*(*rbx + 0x30))(rbx)
            jump(**rbx)
        
        uint32_t rax_3
        rax_3.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_3.b != 0)
            (*(*rbx + 0x30))(rbx)
            jump(**rbx)
    
    void var_28
    void** rax_4 = sub_141266e80(&var_28, nullptr, 0xff)
    *(*rax_4 + 0x10) = rbx
    void* rcx_5 = *rax_4
    int32_t r8_1 = rax_4[2].d
    int64_t* rdx_2 = rax_4[1]
    int64_t* rbx_1 = *(rcx_5 + 0x20)
    int64_t* arg_10 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_10
    
    result = sub_1405a5630(rcx_5, rdx_2, r8_1, 1)
    
    if (rbx_1 != 0)
        result = *rdi_1
        *rdi_1 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_10)

return result
