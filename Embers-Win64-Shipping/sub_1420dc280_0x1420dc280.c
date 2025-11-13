// 函数: sub_1420dc280
// 地址: 0x1420dc280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
int32_t arg_18 = arg3
int64_t var_48
sub_140d3a3a0(&var_48, arg2)
int64_t rax = var_48
int64_t* rax_1 = sub_1420d7960(arg1, (rax u>> 0x20).d ^ rax.d, &var_48)
int32_t* var_40

if (*rax_1 == 0)
    int32_t* rax_2 = j_sub_140a82f30(0x58)
    int32_t* rdi_1 = rax_2
    
    if (rax_2 == 0)
        rdi_1 = nullptr
    else
        int64_t* rcx_2 = &rdi_1[4]
        *(rdi_1 + 0x20) = 0
        *(rdi_1 + 0x28) = 0
        __builtin_memset(&rdi_1[0xc], 0, 0x28)
        __builtin_memset(rdi_1, 0, 0x2c)
        *(rcx_2 + 0x1c) = 0x80
        int64_t* rax_3 = rcx_2[2]
        
        if (rax_3 != 0)
            rcx_2 = rax_3
        
        *rcx_2 = 0
        rcx_2[1] = 0
        rdi_1[0xc] = 0xffffffff
        rdi_1[0xd] = 0
        *(rdi_1 + 0x40) = 0
        rdi_1[0x12] = 0
        rdi_1[0x14].b = 0
    
    void*** rax_4 = j_sub_140a82f30(0x18)
    void*** rbx_1 = rax_4
    
    if (rax_4 == 0)
        rbx_1 = nullptr
    else
        rax_4[1].d = 1
        *(rax_4 + 0xc) = 1
        *rbx_1 = &data_1432c4db0
        rbx_1[2] = rdi_1
    
    var_40 = rdi_1
    void*** var_38_1 = rbx_1
    
    if (rax_1 == &var_40)
    label_1420dc3f0:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)
    else
        *rax_1 = rdi_1
        int64_t* rdi_2 = rax_1[1]
        var_40 = nullptr
        
        if (rbx_1 == rdi_2)
            goto label_1420dc3f0
        
        void*** var_38_2 = nullptr
        rax_1[1] = rbx_1
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp3_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
            
            rbx_1 = var_38_2
            goto label_1420dc3f0

int64_t* rcx_7 = *rax_1
var_40 = &arg_18
int64_t* var_38_3 = &arg_20
int32_t arg_8[0x4]
sub_1420d7230(rcx_7, &arg_8, &var_40, nullptr)
return sub_141b938e0(&data_143a2e4a8, arg2, 1)
