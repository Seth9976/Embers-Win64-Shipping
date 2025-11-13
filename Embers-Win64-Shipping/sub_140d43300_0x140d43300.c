// 函数: sub_140d43300
// 地址: 0x140d43300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
void arg_10
sub_14093f560(&data_1439ae250, &arg_10, arg1)
void var_38
sub_140a96170(&var_38)
int64_t var_20 = 0
sub_14065da90(&var_38, arg2)
int64_t rax = arg_8
int32_t r10_1 = sub_140b5ead0(rax.d) + rax:4.d
int128_t* rbx_1

if (data_1439ae258 == data_1439ae284)
labelid_f:
    rbx_1 = sub_140d427b0(&data_1439ae250, r10_1, &arg_8)
else
    void* rcx_3 = data_1439ae290
    void* rax_4 = &data_1439ae288
    
    if (rcx_3 != 0)
        rax_4 = rcx_3
    
    int32_t rax_5 = *(rax_4 + (((sx.q(data_1439ae298) - 1) & sx.q(r10_1)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_140d433e4:
        rbx_1 = sub_140d427b0(&data_1439ae250, r10_1, &arg_8)
    else
        int64_t r9_1 = data_1439ae250
        int64_t r8_2
        
        while (true)
            r8_2 = sx.q(rax_5) * 6
            
            if (*(r9_1 + (r8_2 << 3)) == arg_8)
                break
            
            rax_5 = *(r9_1 + (r8_2 << 3) + 0x28)
            
            if (rax_5 == 0xffffffff)
                goto label_140d433e4_2
        
        if (rax_5 == 0xffffffff)
        label_140d433e4_1:
            rbx_1 = sub_140d427b0(&data_1439ae250, r10_1, &arg_8)
        else
            void* rbx_4 = r9_1 + (r8_2 << 3)
            
            if (rbx_4 == 0)
            label_140d433e4_2:
                rbx_1 = sub_140d427b0(&data_1439ae250, r10_1, &arg_8)
            else
                rbx_1 = rbx_4 + 8

int32_t result = sub_14065da90(rbx_1, &var_38)
*(rbx_1 + 0x18) = arg3
int64_t* var_30

if (var_30 != 0)
    result = var_30[1].d
    var_30[1].d -= 1
    
    if (result == 1)
        (**var_30)(var_30)
        result = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_30 + 8))(var_30, 1)

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    result = rbx_3[1].d
    rbx_3[1].d -= 1
    
    if (result == 1)
        result = (**rbx_3)(rbx_3)
        int32_t rdi_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, zx.q(rdi_1))

return result
