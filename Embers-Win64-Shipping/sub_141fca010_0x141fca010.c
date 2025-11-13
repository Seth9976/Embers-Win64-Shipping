// 函数: sub_141fca010
// 地址: 0x141fca010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = sub_140d3e110(arg1 + 0x18)

if (rax.b != 0)
    void* rax_1 = sub_140d3c6e0(arg1 + 0x18)
    int64_t rbp_1 = 0
    int64_t* rcx_3
    int64_t arg_8
    
    if (*(rax_1 + 0xb28) s<= 0)
        arg_8 = 0
        rcx_3 = &arg_8
    else
        int64_t* rcx_2 = **(rax_1 + 0xb20)
        rcx_3 = (*(*rcx_2 + 0x18))(rcx_2, &arg_8)
    int64_t rax_5 = data_143f3d668
    
    if (*rcx_3 == rax_5)
        *(arg1 + 0x24) = 1
        return rax_5
    
    int128_t zmm0
    zmm0.d = (*(sub_140d3c6e0(arg1 + 0x18) + 0xe20)).d f* 1000f
    *(arg1 + 0x20) = (int.q(zmm0.d)).d
    int32_t var_30_1 = 0
    bool rbx_1 = *(sub_140d3c6e0(arg1 + 0x18) + 0xe29)
    uint64_t var_38 = sub_141faa280
    int128_t var_28 = var_38.o
    int64_t* rdi_1 = *(sub_140d3c6e0(arg1 + 0x18) + 0x770)
    int64_t rsi_1 = *rdi_1
    int64_t* rax_10 = sub_140dd1ec0(&var_38, arg1, &var_28)
    rax = (*(rsi_1 + 0x40))(rdi_1, zx.q(*(arg1 + 0x20)), rax_10, zx.q(rbx_1 != 0), var_38, 
        var_30_1, var_28)
    
    if (var_30_1 == 0)
        rax = var_38
    label_141fca167:
        
        if (rax != 0)
            rax = sub_140a74f90(rax)
    else
        uint64_t rcx_9 = var_38
        
        if (rcx_9 != 0)
            (*(*rcx_9 + 0x38))(rcx_9, 0)
            rax = var_38
            
            if (rax != 0)
                rax = sub_140a84c80(rax, 0, 0)
                var_38 = rax
            
            int32_t var_30_2 = 0
            goto label_141fca167
    
    int64_t rbx_2 = data_143f3d650
    
    if (data_143de5480 != 0)
        rax = GetCurrentThreadId()
        rbp_1.b = rax.d != data_143de5470
    
    if (*(rbx_2 + (rbp_1 << 2)) != 0)
        return sub_141fbf040(sub_140d3c6e0(arg1 + 0x18), 1)

return rax
