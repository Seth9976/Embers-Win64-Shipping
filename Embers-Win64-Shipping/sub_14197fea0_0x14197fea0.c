// 函数: sub_14197fea0
// 地址: 0x14197fea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = nullptr

if (arg4 == 0)
label_14197fedf:
    int32_t rbp_1 = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rbp_1)
    
    if (*(arg2 + 0x14) u> 0)
        sub_14196ef60(&data_143f02b88, arg2, arg5, arg6)
    
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_2
    rdx_2.b = 1
    sub_14198b7d0()
    sub_140b38680("FlushRHIThreadTotal", rbp_1)
else
    if ((*(*arg4 + 0x18))(arg4) == 0)
        goto label_14197fedf
    
    bool z_1
    
    if (0 == arg4[3].d)
        arg4[3].d = 0
        z_1 = true
    else
        arg4[3].d
        z_1 = false
    
    if (not(z_1))
        goto label_14197fedf

if (data_143f0f1a4 != 0)
    int32_t rax_4 = *(arg2 + 0x8c)
    int32_t rax_5
    
    if (rax_4 != 0)
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_forward(rax_4)
        rax_5 = temp0_1
    else
        rax_5 = 0x20
    
    int64_t* rcx_4 = data_143f0f180
    return (*(*rcx_4 + 0x300))(rcx_4, arg3, arg4, arg7, arg8, arg9, rax_5)

if (data_143f01c92 != 0 && sub_141989210() != 0)
    rbx = arg2

int32_t rax_10 = *(arg2 + 0x8c)
int32_t rax_11

if (rax_10 != 0)
    uint64_t rflags_2
    int32_t temp0_2
    temp0_2, rflags_2 = _bit_scan_forward(rax_10)
    rax_11 = temp0_2
    int32_t arg_20 = rax_11
else
    rax_11 = 0x20

int64_t* rcx_6 = data_143f0f180
int64_t result = (*(*rcx_6 + 0x300))(rcx_6, arg3, arg4, arg7, arg8, arg9, rax_11)

if (rbx != 0)
    result = LeaveCriticalSection(&data_143f02f58)
    data_143f01c8c -= 1

return result
