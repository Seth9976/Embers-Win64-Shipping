// 函数: sub_140f81830
// 地址: 0x140f81830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = nullptr
int128_t var_78
int64_t* rax_3
int64_t* rbx_1
int32_t rsi

if (*(arg1 + 0x390) == 0)
label_140f818ae:
    rbx_1 = 0.q
    rax_3 = &var_78
    __builtin_memset(&var_78, 0, 0x2c)
    char var_48_1 = 3
    rsi = 4
else
    rbx_1 = *(arg1 + 0x398)
    
    if (rbx_1 == 0)
        goto label_140f818ae
    
    int32_t rdx = rbx_1[1].d
    
    if (rdx s<= 0)
        goto label_140f818ae
    
    int64_t* rax = rbx_1
    
    if (rbx_1 != 0)
        if (rdx == 0)
            rbx_1 = nullptr
            rax = nullptr
        else
            rbx_1[1].d = rdx + 1
            rax = rbx_1
    
    if (rax != 0)
        rcx = *(arg1 + 0x390)
    
    void var_40
    rax_3 = (*(*rcx + 0x110))(rcx, &var_40)
    rsi = 3

sub_140f64970(arg2, rax_3)

if ((rsi.b & 4) != 0)
    rsi &= 0xfffffffb
    int64_t var_58
    sub_140745b20(&var_58)
    int128_t var_68
    int64_t* rdi_1 = var_68:8.q
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* rdi_2 = var_78:8.q
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp7_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    void var_20
    sub_140745b20(&var_20)
    int64_t* var_28
    
    if (var_28 != 0)
        var_28[1].d -= 1
        
        if (var_28[1].d == 1)
            (**var_28)(var_28)
            int32_t temp6_1 = *(var_28 + 0xc)
            *(var_28 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_28 + 8))(var_28, 1)
    
    int64_t* var_38
    
    if (var_38 != 0)
        var_38[1].d -= 1
        
        if (var_38[1].d == 1)
            (**var_38)(var_38)
            int32_t temp9_1 = *(var_38 + 0xc)
            *(var_38 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_38 + 8))(var_38, 1)

if ((rsi.b & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp8_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
