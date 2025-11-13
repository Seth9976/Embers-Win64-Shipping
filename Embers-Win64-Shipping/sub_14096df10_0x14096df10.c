// 函数: sub_14096df10
// 地址: 0x14096df10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
int64_t var_e8 = 0
int64_t var_e0 = 0
int32_t result = (*(*rcx + 0x28))(rcx, &var_e8)

if (result.b == 0)
label_14096dfe8:
    
    if (*(arg1 + 0x18) != 0)
        int64_t* rcx_9 = *arg2
        void var_c8
        int64_t* rax_8 = (*(*rcx_9 + 0x38))(rcx_9, &var_c8)
        result = sub_140954fe0(*(arg1 + 0x18) + 0x30, rax_8)
else if (*(arg1 + 0x18) != 0)
    int64_t* rcx_1 = *(arg1 + 0x20)
    void var_b8
    sub_140b4c3a0(&var_b8, var_e8, sx.q((*(*rcx_1 + 0x58))(rcx_1)))
    void* rbx_2 = *(*(arg1 + 0x18) + 0x60)
    void*** var_d8
    void**** rax_4
    int512_t zmm0_1
    int512_t zmm1_1
    rax_4, zmm0_1, zmm1_1 = sub_1422c0730(&var_d8, *(rbx_2 + 0x10), 0, 0)
    sub_1422d1620(*rax_4, rbx_2, &var_b8, zmm0_1, zmm1_1)
    int64_t* var_d0
    
    if (var_d0 != 0)
        var_d0[1].d -= 1
        
        if (var_d0[1].d == 1)
            (**var_d0)(var_d0)
            int32_t temp2_1 = *(var_d0 + 0xc)
            *(var_d0 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_d0 + 8))(var_d0, 1)
    
    int64_t var_28
    
    if (var_28 != 0)
        sub_140a74f90(var_28)
    
    result = sub_140b4cb40(&var_b8)
    goto label_14096dfe8

int64_t rcx_12 = var_e8

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

int64_t* rbx_4 = arg2[1]

if (rbx_4 != 0)
    result = rbx_4[1].d
    rbx_4[1].d -= 1
    
    if (result == 1)
        result = (**rbx_4)(rbx_4)
        int32_t rdi_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, zx.q(rdi_1))

return result
