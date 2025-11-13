// 函数: sub_141bbd8b0
// 地址: 0x141bbd8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg4 + 0x70)
char rax_1

if (r14 != 0)
    int64_t rbx_1 = *r14
    sub_141bb1400()
    rax_1 = (*(rbx_1 + 0x58))(r14, &data_143f31920)

int64_t* rbx_2

if (r14 == 0 || rax_1 == 0)
    rbx_2 = nullptr
label_141bbd9c9:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    rbx_2 = *(arg4 + 0x78)
    void* rbp_1 = *(arg4 + 0x70)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    if (rbp_1 == 0)
        goto label_141bbd9c9
    
    void* rax_2 = *(arg1 + 0x3a0)
    
    if (rax_2 == 0)
        goto label_141bbd9c9
    
    int32_t rax_3 = *(rax_2 + 0xc)
    void* const rax_10
    
    if (rax_3 s>= data_143e1d9b4)
        rax_10 = nullptr
    else
        int16_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rax_3)
        uint32_t rdx_1 = zx.d(temp2_1)
        int32_t rax_5 = temp3_1 + rdx_1
        rax_10 =
            *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_1) * 0x18
    
    if (((*(rax_10 + 8) u>> 0x1c).b & 1) != 0)
        goto label_141bbd9c9
    
    char arg_20 = 0
    char* var_30_1 = &arg_20
    void*** (* var_38)() = sub_140884c50
    
    if (*(sub_140a756e0(&var_38, &data_14397f5f0) + 0x20) != 0)
        goto label_141bbd9c9
    
    int64_t* rcx_6 = *(arg1 + 0x3a0)
    
    if ((*(*rcx_6 + 0x410))(rcx_6, arg3, arg4, *(rbp_1 + 0x58)) == 0)
        goto label_141bbd9c9
    
    sub_140e194c0(arg2)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg2
