// 函数: sub_140e79eb0
// 地址: 0x140e79eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140e1acc0(*arg1)
char rax_1
int128_t zmm0_1

if (rax != 0)
    rax_1, zmm0_1 = sub_140e1ad10(*arg1)

int64_t* result
void* r14
int64_t var_38
int64_t* var_30
int64_t rbp

if (rax == 0 || rax_1 != 0)
    r14 = &arg1[1]
    var_38 = *arg1
    rbp.b = 0
    int64_t* rax_3 = *r14
    var_30 = rax_3
    
    if (rax_3 != 0)
        rax_3[1].d += 1
    
    result, zmm0_1 = sub_140e5eeb0(&var_38)
    
    if (result.b != 0)
        goto label_140e79f1a
else
    rbp.b = 1
    r14 = &arg1[1]
label_140e79f1a:
    int64_t* rbx_1 = *r14
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp5_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rdi_1 = data_143e29f28
    int64_t* rax_6 = sub_140e152a0(*arg1, &var_38)
    int64_t* rbx_2 = *arg1
    int64_t* rcx_6 = *rax_6
    (*(*rcx_6 + 0xf8))(rcx_6)
    (*(*rdi_1 + 0x48))(rdi_1)
    int128_t zmm6
    zmm6.d = zmm0_1.d f* zmm0_1.d
    float zmm1_1 = sub_140e25880(rbx_2, zmm6, zmm0_1)
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp4_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_30 + 8))(var_30, 1)
    
    if (rbp.b != 0 && sub_140e1a3a0(*arg1) != 0)
        void* rbx_4 = *arg1
        void arg_10
        int64_t* rax_12
        uint128_t zmm0_2
        rax_12, zmm0_2 = sub_140e13cf0(rbx_4, &arg_10)
        sub_140e21d50(rbx_4, *rax_12, zmm0_2, zmm1_1)
    
    result = sub_140e12730(*arg1)
    int64_t* i = *result
    
    for (void* rdi_4 = &i[sx.q(result[1].d) * 2]; i != rdi_4; i = &i[2])
        var_38 = *i
        void* rax_14 = i[1]
        void* var_30_1 = rax_14
        
        if (rax_14 != 0)
            *(rax_14 + 8) += 1
        
        result = sub_140e79eb0(&var_38)
int64_t* rbx_5 = *r14

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        result = (**rbx_5)(rbx_5)
        int32_t temp1_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_5 + 8))

return result
