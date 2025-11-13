// 函数: sub_14279e870
// 地址: 0x14279e870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 0

if (arg1[0x22].d == 3)
    void var_78
    (*(arg1[5] + 0x10))(&arg1[5], _vfprintf_p_l(&var_78, Change Tool", UInteractiveToolManager"))
    int64_t* var_70
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t rax_3 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (rax_3 == 1)
                (*(*var_70 + 8))(var_70, 1)
    
    r14.b = 1

if (arg1[6] != 0)
    (*(*arg1 + 0x2c8))(arg1, 1, 1)

int32_t result

if (arg1[0x1e] != 0)
    result = (*(*arg1 + 0x308))(arg1, zx.q(arg2))

if (arg1[0x1e] == 0 || result.b == 0)
    if (r14.b != 0)
        (*(arg1[5] + 0x18))(&arg1[5])
    
    result.b = 0
else
    result = arg1[0x22].d
    int64_t* rbx_4
    
    if (result == 3)
        void*** rax_7 = j_sub_140a82f30(zx.q(result + 0x25))
        void*** rdi_2 = rax_7
        
        if (rax_7 == 0)
            rdi_2 = nullptr
        else
            void var_88
            int64_t* rax_8 = sub_140596d10(&var_88, &arg1[0x23])
            rdi_2[1].d = arg2
            *rdi_2 = &data_1434b59e8
            sub_140596d10(&rdi_2[2], rax_8)
            rdi_2[4].b = 0
            int64_t rcx_9 = *rax_8
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
        
        int64_t* rax_9 = arg1[0xf]
        void*** arg_8 = rdi_2
        int64_t rbx_3 = *rax_9
        void var_60
        int64_t* rax_10 = _vfprintf_p_l(&var_60, u"Activate Tool", u"UInteractiveToolManager")
        (*(rbx_3 + 0x28))(arg1[0xf], arg1, &arg_8, rax_10)
        int64_t* var_58
        rbx_4 = var_58
    label_14279ea58:
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t rbp_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rbp_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, zx.q(rbp_1))
    else if (result == 2)
        void*** rax_11 = j_sub_140a82f30(zx.q(result + 6))
        void*** rdi_3 = rax_11
        
        if (rax_11 == 0)
            rdi_3 = nullptr
        else
            *rdi_3 = &data_1434b59a8
        
        void*** arg_18 = rdi_3
        void var_48
        (*(arg1[5] + 0x20))(&arg1[5], arg1, &arg_18, _vfprintf_p_l(&var_48, Activate Tool", 
            UInteractiveToolManager"))
        int64_t* var_40
        rbx_4 = var_40
        goto label_14279ea58
    
    if (r14.b != 0)
        (*(arg1[5] + 0x18))(&arg1[5])
    
    result.b = 1

return result
