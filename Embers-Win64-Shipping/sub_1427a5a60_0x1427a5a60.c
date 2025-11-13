// 函数: sub_1427a5a60
// 地址: 0x1427a5a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[6] == 0)
    return 

if (arg1[0x22].d == 3)
    void*** rax_1 = j_sub_140a82f30(0x28)
    void*** rdi_1 = rax_1
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        void var_48
        int64_t* rax_2 = sub_140596d10(&var_48, &arg1[0x23])
        rdi_1[1].d = arg2
        *rdi_1 = &data_1434b59e8
        sub_140596d10(&rdi_1[2], rax_2)
        rdi_1[4].b = 1
        *(rdi_1 + 0x24) = arg3
        int64_t rcx_2 = *rax_2
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
    
    int64_t* rax_3 = arg1[0xf]
    void*** arg_8 = rdi_1
    int64_t rbx_2 = *rax_3
    void var_38
    int64_t* rax_4 = _vfprintf_p_l(&var_38, u"Deactivate Tool", u"UInteractiveToolManager")
    (*(rbx_2 + 0x28))(arg1[0xf], arg1, &arg_8, rax_4)
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t rdi_2 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*var_30 + 8))(var_30, zx.q(rdi_2))

(*(*arg1 + 0x310))(arg1, zx.q(arg2), zx.q(arg3))
