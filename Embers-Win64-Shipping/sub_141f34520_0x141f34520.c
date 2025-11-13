// 函数: sub_141f34520
// 地址: 0x141f34520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x6a]
arg1[0x6a] = 0

if (sub_140a80f40() == 0)
    if (data_143f138f4 == 0)
        if (data_143de5480 == 0)
            goto label_141f3454d
        
        uint32_t rax_2
        rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_2.b != 0)
            goto label_141f3454d
        
        goto label_141f345b4
    
label_141f345b4:
    void var_28
    void** rax_3 = sub_141f38690(&var_28, nullptr, 0xff)
    *(*rax_3 + 0x10) = rbx
    void* rcx_6 = *rax_3
    int32_t r8_2 = rax_3[2].d
    int64_t* rdx_3 = rax_3[1]
    int64_t* rbx_1 = *(rcx_6 + 0x20)
    int64_t* arg_10 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_10
    
    sub_1405a5630(rcx_6, rdx_3, r8_2, 1)
    
    if (rbx_1 != 0)
        int32_t rax_4 = *rdi_1
        *rdi_1 -= 1
        
        if (rax_4 == 1)
            sub_140a2f6e0(arg_10)
else
label_141f3454d:
    
    if (rbx != 0)
        sub_1407806d0(rbx)
        j_sub_140a74f90(rbx)
        return sub_141f08a00(arg1) __tailcall

return sub_141f08a00(arg1) __tailcall
