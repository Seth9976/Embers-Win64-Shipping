// 函数: sub_1413de9b0
// 地址: 0x1413de9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (sub_140a80f40() == 0)
    if (data_143f138f4 == 0)
        if (data_143de5480 == 0)
            goto label_1413de9c2
        
        uint32_t rax_2
        rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_2.b != 0)
            goto label_1413de9c2
    
    void var_28
    void** rax_3 = sub_1413da360(&var_28, nullptr, 0xff)
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
label_1413de9c2:
    result = sub_1419a2d00()
    
    if (arg1 != 0)
        sub_1408081b0(arg1)
        sub_1405ec8a0(&arg1[2])
        sub_1405d1550(&arg1[1])
        sub_1405d1550(arg1)
        return j_sub_140a74f90(arg1) __tailcall

return result
