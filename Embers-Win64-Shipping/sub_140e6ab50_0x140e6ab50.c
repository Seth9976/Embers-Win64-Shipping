// 函数: sub_140e6ab50
// 地址: 0x140e6ab50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d += 1

void var_48

if (arg1 + 0x20 == &var_48)
label_140e6abc1:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)
else
    *(arg1 + 0x20) = *arg2
    int64_t* rdi_1 = *(arg1 + 0x28)
    
    if (rbx == rdi_1)
        goto label_140e6abc1
    
    *(arg1 + 0x28) = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rcx_3 = *(arg1 + 0x20)
char rax_5 = (*(*rcx_3 + 0x10))(rcx_3)

if (rax_5 == 0 && arg3 == 0)
    void var_20
    int64_t* rax_7 =
        sub_140ac6680(_vfprintf_p_l(&var_20, Unsupported Graphics Card", SlateD3DRenderer"))
    int16_t* const rbx_1 = &data_142d40450
    PWSTR rdi_2
    
    if (rax_7[1].d == 0)
        rdi_2 = &data_142d40450
    else
        rdi_2 = *rax_7
    
    void var_38
    int16_t** rax_9 = sub_140ac6680(
        _vfprintf_p_l(&var_38, 
            There is a problem with your graphics card. Please ensure your card meets the minimum system "
    "requirements and that you have the latest drivers installed.", 
        SlateD3DRenderer"))
    
    if (rax_9[1].d != 0)
        rbx_1 = *rax_9
    
    sub_140b709d0(0, rbx_1, rdi_2)
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t rax_13 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (rax_13 == 1)
                (*(*var_30 + 8))(var_30, 1)
    
    int64_t* var_18
    
    if (var_18 != 0)
        var_18[1].d -= 1
        
        if (var_18[1].d == 1)
            (**var_18)(var_18)
            int32_t rdi_3 = *(var_18 + 0xc)
            *(var_18 + 0xc) -= 1
            
            if (rdi_3 == 1)
                (*(*var_18 + 8))(var_18, zx.q(rdi_3))

int64_t* rbx_4 = arg2[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp6_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

return zx.q(rax_5)
