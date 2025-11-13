// 函数: sub_142147aa0
// 地址: 0x142147aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (sub_140a80f40() == 0)
    if (data_143f138f4 == 0)
        if (data_143de5480 == 0)
            goto label_142147ab6
        
        uint32_t rax_2
        rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_2.b != 0)
            goto label_142147ab6
    
    void var_28
    void** rax_3 = sub_142140230(&var_28, nullptr, 0xff)
    *(*rax_3 + 0x10) = arg1
    void* rcx_8 = *rax_3
    int32_t r8_2 = rax_3[2].d
    int64_t* rdx_3 = rax_3[1]
    int64_t* rbx_1 = *(rcx_8 + 0x20)
    int64_t* arg_10 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_10
    
    result = sub_1405a5630(rcx_8, rdx_3, r8_2, 1)
    
    if (rbx_1 != 0)
        result = *rdi_1
        *rdi_1 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_10)
else
label_142147ab6:
    result = sub_1419a2d00()
    
    if (arg1 != 0)
        sub_1405d16e0(arg1 + 0x18, nullptr)
        sub_140a1d5c0(arg1 + 0x40)
        sub_140a1d5c0(arg1 + 0x28)
        sub_1405d1550(arg1 + 0x18)
        return j_sub_140a74f90(arg1) __tailcall

return result
