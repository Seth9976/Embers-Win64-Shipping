// 函数: sub_140fb3e70
// 地址: 0x140fb3e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = nullptr
int64_t* var_60
int64_t* rcx_3
int64_t rdx_1
int32_t rsi_1
int64_t* rdi_1

if (*(arg1 + 0x390) == 0)
label_140fb3f14:
    sub_1405d9400()
    int64_t* rcx_4 = data_143cd6fe0
    rdx_1 = data_143cd6fd8
    int64_t var_68 = rdx_1
    var_60 = rcx_4
    
    if (rcx_4 != 0)
        rcx_4[1].d += 1
    
    rcx_3 = &var_68
    rdi_1 = 0.q
    rsi_1 = 8
    int32_t var_58_1 = data_143cd6fe8
else
    rdi_1 = *(arg1 + 0x398)
    
    if (rdi_1 == 0)
        goto label_140fb3f14
    
    int32_t rax_1 = rdi_1[1].d
    
    if (rax_1 s<= 0)
        goto label_140fb3f14
    
    if (rdi_1 == 0)
        goto label_140fb3ec2
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        rdi_1[1].d = rax_1 + 1
    label_140fb3ec2:
        
        if (rdi_1 != 0)
            rbx = *(arg1 + 0x390)
    
    void var_50
    void var_38
    int64_t* rax_4 = sub_140fab650(arg1, &var_50, 
        _vfprintf_p_l(&var_38, &(*42693578WOCbEVzoHuIMJxKLNP8Q2SgTUqaclefhjkmrvy469")[0x1d], 
        ThemeColorBlock"), *(rbx + 4))
    rcx_3 = rax_4
    rsi_1 = 7
    rdx_1 = *rax_4

*arg2 = rdx_1
void* rax_6 = rcx_3[1]
arg2[1] = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

arg2[2].d = rcx_3[2].d

if ((rsi_1.b & 8) != 0)
    rsi_1 &= 0xfffffff7
    
    if (var_60 != 0)
        var_60[1].d -= 1
        
        if (var_60[1].d == 1)
            (**var_60)(var_60)
            int32_t rax_10 = *(var_60 + 0xc)
            *(var_60 + 0xc) -= 1
            
            if (rax_10 == 1)
                (*(*var_60 + 8))(var_60, 1)

if ((rsi_1.b & 4) != 0)
    rsi_1 &= 0xfffffffb
    int64_t* var_48
    
    if (var_48 != 0)
        var_48[1].d -= 1
        
        if (var_48[1].d == 1)
            (**var_48)(var_48)
            int32_t rax_14 = *(var_48 + 0xc)
            *(var_48 + 0xc) -= 1
            
            if (rax_14 == 1)
                (*(*var_48 + 8))(var_48, 1)

if ((rsi_1.b & 2) != 0)
    rsi_1 &= 0xfffffffd
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t rbp_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*var_30 + 8))(var_30, zx.q(rbp_1))

if ((rsi_1.b & 1) != 0 && rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp2_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

return arg2
