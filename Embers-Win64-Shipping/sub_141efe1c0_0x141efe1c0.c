// 函数: sub_141efe1c0
// 地址: 0x141efe1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0xa8)
int64_t* result = arg2

if (rbx != 0)
    rbx = rbx[0x36]

int64_t* arg_20 = rbx

if (rbx != 0)
    void arg_8
    
    if (result != 0)
        return sub_140812a70(result, &arg_8, &arg_20, nullptr)
    char rax = sub_140a80f40()
    
    if (rax != 0)
        jump(*(*rbx + 0x18))
    
    if (data_143f138f4 == rax)
        if (data_143de5480 == rax)
            jump(*(*rbx + 0x18))
        
        uint32_t rax_1
        rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_1.b != 0)
            jump(*(*rbx + 0x18))
    
    void var_28
    void** rax_2 = sub_14059a020(&var_28, nullptr, 0xff)
    *(*rax_2 + 0x10) = rbx
    void* rcx_3 = *rax_2
    int32_t r8_2 = rax_2[2].d
    int64_t* rdx_1 = rax_2[1]
    int64_t* rbx_1 = *(rcx_3 + 0x20)
    int64_t* arg_18 = rbx_1
    void* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_18
    
    result = sub_1405a5630(rcx_3, rdx_1, r8_2, 1)
    
    if (rbx_1 != 0)
        result = zx.q(*rdi_1)
        *rdi_1 -= 1
        
        if (result.d == 1)
            return sub_140a2f6e0(arg_18)

return result
