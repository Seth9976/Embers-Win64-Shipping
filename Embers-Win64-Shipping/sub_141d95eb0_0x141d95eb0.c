// 函数: sub_141d95eb0
// 地址: 0x141d95eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
int64_t rbx = *rcx
int64_t var_38
int64_t* rax
int512_t zmm1
rax, zmm1 = sub_141d9ef80(rcx, &var_38, &rcx[0x74])
int64_t* var_d8
(*(rbx + 0x1e0))(*arg1, &var_d8, rax)
int64_t rcx_2 = var_38

if (rcx_2 != 0)
    zmm1 = sub_140a74f90(rcx_2)

int64_t* rcx_3 = var_d8
int64_t* var_d0
uint64_t result
int64_t* rcx_30

if (rcx_3 == 0)
    rcx_30 = *arg1
    result = sub_141da1e80(rcx_30, &rcx_30[0x74], arg2, 0)
else if (arg1[1].d != 0xffffffff)
    int64_t rax_4 = *rcx_3
    
    if (arg1[5].d s<= arg1[3].d)
        (*(rax_4 + 0x178))()
    else
        (*(rax_4 + 0x178))(rcx_3, arg1[2])
        int64_t* r9_1 = var_d8
        int32_t arg_8 = 0xffffffff
        int64_t* rcx_19 = r9_1[1]
        int32_t* rdx_5 = *rcx_19
        
        if (&rdx_5[1] u> rcx_19[1])
            int32_t* rdx_6 = &arg_8
            
            if ((*(r9_1 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_1, rdx_6, zmm1)
            else
                (*(*r9_1 + 0x150))(r9_1, rdx_6, 4)
        else
            arg_8 = *rdx_5
            int64_t* rax_7 = r9_1[1]
            *rax_7 += 4
        
        int64_t* rdi_2 = var_d8
        int64_t rbx_2 = *rdi_2
        (*(rbx_2 + 0x178))(rdi_2, (*(rbx_2 + 0x28))(rdi_2))
    
label_141d960d9:
    int64_t* r9_2 = var_d8
    int32_t arg_18 = 0
    int64_t* rcx_23 = r9_2[1]
    int32_t* rdx_8 = *rcx_23
    
    if (&rdx_8[1] u> rcx_23[1])
        int32_t* rdx_9 = &arg_18
        
        if ((*(r9_2 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_2, rdx_9, zmm1)
        else
            (*(*r9_2 + 0x150))(r9_2, rdx_9, 4)
    else
        arg_18 = *rdx_8
        int64_t* rax_12 = r9_2[1]
        *rax_12 += 4
    
    int64_t* r9_3 = var_d8
    int32_t arg_20 = arg1[5].d
    int64_t* rcx_25 = r9_3[1]
    int32_t* rdx_10 = *rcx_25
    
    if (&rdx_10[1] u> rcx_25[1])
        int32_t* rdx_11 = &arg_20
        
        if ((*(r9_3 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_3, rdx_11, zmm1)
        else
            (*(*r9_3 + 0x150))(r9_3, rdx_11, 4)
    else
        arg_20 = *rdx_10
        int64_t* rax_17 = r9_3[1]
        *rax_17 += 4
    
    int64_t* rcx_27 = var_d8
    (*(*rcx_27 + 0x150))(rcx_27, arg1[4], sx.q(arg1[5].d))
    int64_t* rbx_3 = var_d0
    var_d8 = nullptr
    
    if (rbx_3 != 0)
        var_d0 = nullptr
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    rcx_30 = *arg1
    result = sub_141da1e80(rcx_30, &rcx_30[0x74], arg2, 0)
else
    int64_t* rcx_4 = *arg1
    int64_t var_c8 = 0
    int32_t var_c0_1 = 0
    int64_t var_b8
    __builtin_memset(&var_b8, 0, 0x24)
    int64_t var_90_1 = 0
    int64_t var_88_1 = 0
    int32_t var_80_1 = 0xffffffff
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x40)
    int64_t var_68
    int64_t var_58
    int64_t var_48
    
    if (sub_141da1e80(rcx_4, &rcx_4[0x74], &var_c8, 0) == 0)
        int64_t* rdi_1 = var_d8
        int64_t rbx_1 = *rdi_1
        (*(rbx_1 + 0x178))(rdi_1, (*(rbx_1 + 0x28))(rdi_1))
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        sub_141d94e70(&var_58)
        zmm1 = sub_141d94e70(&var_68)
        int64_t rcx_16 = var_78
        
        if (rcx_16 != 0)
            zmm1 = sub_140a74f90(rcx_16)
        
        if (var_90_1 != 0)
            zmm1 = sub_140a74f90(var_90_1)
        
        int64_t rcx_18 = var_b8
        
        if (rcx_18 != 0)
            zmm1 = sub_140a74f90(rcx_18)
        
        goto label_141d960d9
    
    *(arg2 + 0x31) = 0
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    sub_141d94e70(&var_58)
    result = sub_141d94e70(&var_68)
    int64_t rcx_8 = var_78
    
    if (rcx_8 != 0)
        result = sub_140a74f90(rcx_8)
    
    if (var_90_1 != 0)
        result = sub_140a74f90(var_90_1)
    
    int64_t rcx_10 = var_b8
    
    if (rcx_10 != 0)
        result = sub_140a74f90(rcx_10)

if (var_d0 != 0)
    var_d0[1].d -= 1
    
    if (var_d0[1].d == 1)
        result = (**var_d0)(var_d0)
        int32_t temp1_1 = *(var_d0 + 0xc)
        *(var_d0 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_d0 + 8))(var_d0, 1)

return result
