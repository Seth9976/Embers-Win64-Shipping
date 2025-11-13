// 函数: sub_1420b6150
// 地址: 0x1420b6150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1423de540(data_143f5b298, arg1, 1)

if (arg2 != 0 && *(arg2 + 0x78) != 0 && result != 0)
    int64_t rax = sub_140cbe180(arg2)
    int128_t zmm0_1 = *arg3
    int64_t var_58 = rax
    
    if (sub_140a80f40() != 0)
        return sub_1420b0930(&var_58, &data_143f02b98)
    
    if (data_143f138f4 == 0)
        uint32_t rax_3
        
        if (data_143de5480 != 0)
            rax_3.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_3.b != 0)
            int128_t var_40 = var_58.o
            int64_t var_30 = zmm0_1:8.q
            return sub_1420b0930(&var_40, &data_143f02b98)
    
    void var_28
    int64_t* rax_5 = sub_1420ba340(&var_28, nullptr, 0xff)
    void* rcx_5 = *rax_5
    *(rcx_5 + 0x10) = var_58.o
    *(rcx_5 + 0x20) = zmm0_1:8.q
    void* rcx_6 = *rax_5
    int32_t r8 = rax_5[2].d
    int64_t* rdx_1 = rax_5[1]
    int64_t* rbx_1 = *(rcx_6 + 0x30)
    int64_t* arg_20 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_20
    
    result = sub_140778000(rcx_6, rdx_1, r8, 1)
    
    if (rbx_1 != 0)
        result = zx.q(*rdi_1)
        *rdi_1 -= 1
        
        if (result.d == 1)
            return sub_140a2f6e0(arg_20)

return result
