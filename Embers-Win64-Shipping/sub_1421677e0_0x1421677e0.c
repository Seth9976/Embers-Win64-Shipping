// 函数: sub_1421677e0
// 地址: 0x1421677e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
int32_t arg_8
sub_1405ba450(arg1 + 0x3c8, &arg_8, arg3)
int64_t rax = sx.q(arg_8)
void* const rdx_1

if (rax.d == 0xffffffff)
    rdx_1 = nullptr
else
    rdx_1 = *(arg1 + 0x3c8) + rax * 0x28

int64_t* rdi = rdx_1 + 8

if (rdx_1 == 0)
    rdi = nullptr

if (rdi == 0)
    goto label_142167869

if (sub_140d3e110(&rdi[2]) == 0)
    sub_141f96210(arg1 + 0x3c8, arg_18)
label_142167869:
    void* rcx_4 = *(arg1 + 0x140)
    
    if (rcx_4 == 0 || *(rcx_4 + 0xf0) != arg1)
        rdi.b = 0
    else
        rdi.b = 1
    
    uint64_t r14
    
    if (rcx_4 == 0)
        r14.b = 0
    else
        r14 = zx.q(sub_14243aea0(rcx_4))
    
    void*** rax_4 = j_sub_140a82f30(0x38)
    void*** rdi_1
    
    if (rax_4 == 0)
        rdi_1 = nullptr
    else
        rdi_1 = sub_1422b4210(rax_4, rdi.b, r14.b)
    
    void** var_58
    sub_1422c9070(*sub_142168ae0(arg1, &var_58, *(arg_18 + 0x10)), rdi_1)
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp1_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_50 + 8))(var_50, 1)
    
    void*** rax_10 = j_sub_140a82f30(0x18)
    void*** rbx_2 = rax_10
    
    if (rax_10 == 0)
        rbx_2 = nullptr
    else
        rax_10[1].d = 1
        *(rax_10 + 0xc) = 1
        *rbx_2 = &data_142e21f50
        rbx_2[2] = rdi_1
    
    void* rdx_7 = arg_18
    void*** var_48 = rdi_1
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    void var_38
    sub_140d3a3a0(&var_38, rdx_7)
    var_58 = &arg_18
    void**** var_50_1 = &var_48
    sub_14215a460(arg1 + 0x3c8, &arg_8, &var_58, nullptr)
    rdi = *(arg1 + 0x3c8) + ((sx.q(arg_8) * 5 + 1) << 3)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rbx_2)[1](rbx_2, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*rbx_2)[1](rbx_2, 1)
else if (rdi == 0)
    goto label_142167869

*arg2 = *rdi
void* rax_19 = rdi[1]
arg2[1] = rax_19

if (rax_19 != 0)
    *(rax_19 + 8) += 1

return arg2
