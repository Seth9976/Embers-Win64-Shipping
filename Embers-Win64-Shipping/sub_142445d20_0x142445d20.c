// 函数: sub_142445d20
// 地址: 0x142445d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg1[0x12].b != 0 && *(arg1 + 0x91) != 0)
    int64_t* rbx_1 = *(arg1[0x10] + 0x188)
    void var_a8
    (*(*rbx_1 + 0x328))(rbx_1, sub_1423cf790(&var_a8, arg1))
    int16_t* const r14_1 = &data_142d40450
    int16_t* rdx_3
    
    if (arg1[6].d == 0)
        rdx_3 = &data_142d40450
    else
        rdx_3 = arg1[5]
    
    void arg_10
    sub_140b58260(&arg_10, rdx_3, 1)
    int32_t rdi_2 = arg1[6].d
    int16_t* rbp_1 = nullptr
    int64_t rbx_2 = arg1[5]
    uint64_t var_c8 = 0
    int32_t var_c0_1 = rdi_2
    
    if (rdi_2 != 0)
        sub_1405a4c70(&var_c8, rdi_2, 0)
        memcpy(var_c8, rbx_2, rdi_2 * 2)
        rdi_2 = arg1[6].d
    else
        int32_t var_bc_1 = 0
    
    int64_t rbx_3 = arg1[5]
    int16_t* var_b8 = nullptr
    int32_t var_b0_1 = rdi_2
    
    if (rdi_2 != 0)
        sub_1405a4c70(&var_b8, rdi_2, 0)
        rbp_1 = var_b8
        memcpy(rbp_1, rbx_3, rdi_2 * 2)
        rdi_2 = var_b0_1
    
    int16_t* rdx_8 = &data_142d40450
    
    if (var_c0_1 != 0)
        rdx_8 = var_c8
    
    uint32_t r13_1 = zx.d(*(arg1[0x10] + 0x11a))
    void arg_18
    int64_t* rax_3 = sub_140b58260(&arg_18, rdx_8, 1)
    int64_t rbx_4 = *rax_3
    int32_t r15_1 = (rbx_4 u>> 0x20).d + sub_140b5ead0(rbx_4.d)
    void* rax_5 = sub_1424276c0(&data_143a305d0, r15_1, rax_3)
    
    if (rax_5 == 0)
        sub_140a9e570(&data_143a305d0, &var_b8)
        int64_t* r9_1 = var_b0_1.q
        *r9_1 = *rax_3
        int32_t rax_7 = var_b8.d
        r9_1[1].d = 0
        *(r9_1 + 0xc) = 0xffffffff
        int32_t arg_8
        sub_14093e9e0(&data_143a305d0, &arg_8, r15_1, r9_1, rax_7, nullptr)
        rax_5 = data_143a305d0 + sx.q(arg_8) * 0x14
    
    void* rbx_6 = &arg1[0xd]
    *(rax_5 + 8) = r13_1
    
    if ((*(rbx_6 + 0xc) | *(rbx_6 + 8) | *(rbx_6 + 4) | *rbx_6) == 0)
        rbx_6 = nullptr
    
    if (rdi_2 != 0)
        r14_1 = rbp_1
    
    result = sub_140bcb500(&var_c8, rbx_6, r14_1, sub_140f63d10(&var_b8, arg1, sub_1424432b0), 0, 
        0xffffffff, 0)
    
    if (rbp_1 != 0)
        result = sub_140a74f90(rbp_1)
    
    uint64_t rcx_13 = var_c8
    
    if (rcx_13 != 0)
        return sub_140a74f90(rcx_13)

return result
