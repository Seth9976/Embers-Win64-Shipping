// 函数: sub_140cf8eb0
// 地址: 0x140cf8eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3
arg3.b = *(arg2 + 0xc) == 0

if ((arg3.b & sub_140b5b8a0(*(arg2 + 8), 0xd)) == 0)
    int32_t rcx_9
    rcx_9.b = *(arg2 + 0xc) == 0
    
    if ((rcx_9.b & sub_140b5b8a0(*(arg2 + 8), 0xe)) == 0)
        return 0
    
    void var_30
    sub_140a96170(&var_30)
    int64_t* rcx_11 = *(*rbx + 8)
    (*(*rcx_11 + 0x138))(rcx_11, &var_30)
    int64_t* rax_7 = sub_140ac6680(&var_30)
    int16_t* rdx_3
    
    if (rax_7[1].d == 0)
        rdx_3 = &data_142d40450
    else
        rdx_3 = *rax_7
    
    int64_t arg_10
    sub_140b58260(&arg_10, rdx_3, 1)
    *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = arg_10
    int64_t* var_28
    
    if (var_28 != 0)
        var_28[1].d -= 1
        
        if (var_28[1].d == 1)
            (**var_28)(var_28)
            int32_t rdi_2 = *(var_28 + 0xc)
            *(var_28 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*var_28 + 8))(var_28, zx.q(rdi_2))
else
    void* rcx_1 = *rbx
    uint64_t var_40 = 0
    int32_t var_38_1 = 0
    sub_140a1d9d0(*(rcx_1 + 8), &var_40, arg5)
    int16_t* const rdx_1 = &data_142d40450
    
    if (var_38_1 != 0)
        rdx_1 = var_40
    
    void var_48
    *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg1 + 0x3c) * *(arg2 + 0x40)) + arg4) =
        *sub_140b58260(&var_48, rdx_1, 1)
    uint64_t rcx_8 = var_40
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

return 2
