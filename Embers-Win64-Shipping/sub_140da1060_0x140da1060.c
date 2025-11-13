// 函数: sub_140da1060
// 地址: 0x140da1060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
sub_140d93c00(&var_98, arg2, &data_143e20dd8, arg3)
sub_140da4990(arg2)
int32_t arg_8
sub_140da07e0(arg1 + 8, &arg_8, &var_98)
int64_t rax = sx.q(arg_8)
int64_t rbx_2
void* rbx_3

if (rax.d != 0xffffffff)
    rbx_2 = rax * 0x90
    rbx_3 = rbx_2 + *(arg1 + 8)

int64_t* rbx_4
int64_t* result
int64_t* result_1
int64_t* var_b0

if (rax.d == 0xffffffff || rbx_2 == neg.q(*(arg1 + 8)))
    rbx_4 = nullptr
    var_b0 = nullptr
label_140da1106:
    int64_t* result_3 = j_sub_140a82f30(0x68)
    int64_t* result_2 = result_3
    
    if (result_3 == 0)
        result_2 = nullptr
    else
        *result_3 = 0
        void* rcx_3 = &result_3[2]
        result_3[1] = 0
        *(rcx_3 + 0x10) = 0
        *(rcx_3 + 0x18) = 0
        *(rcx_3 + 0x1c) = 0x80
        void* rax_1 = *(rcx_3 + 0x10)
        
        if (rax_1 != 0)
            rcx_3 = rax_1
        
        *rcx_3 = 0
        *(rcx_3 + 8) = 0
        result_2[6].d = 0xffffffff
        *(result_2 + 0x34) = 0
        result_2[8] = 0
        result_2[9].d = 0
        result_2[0xa] = 0
        result_2[0xb] = 0
        result_2[0xc].d = 0x1f4
    
    int64_t* rax_2 = j_sub_140a82f30(0x18)
    int64_t* rdi_1 = rax_2
    
    if (rax_2 == 0)
        rdi_1 = nullptr
    else
        rax_2[1].d = 1
        *(rax_2 + 0xc) = 1
        *rdi_1 = &data_142ec7b08
        rdi_1[2] = result_2
    
    int64_t* var_a0_1 = rdi_1
    result_1 = result_2
    int64_t var_a8_1 = 0
    
    if (rdi_1 == rbx_4)
    label_140da11fb:
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp8_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    else
        int64_t* var_a0_2 = nullptr
        var_b0 = rdi_1
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp9_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
            
            rdi_1 = var_a0_2
            goto label_140da11fb
    
    sub_140d8c300(arg1 + 8, &var_98, &result_1)
    result = result_1
    rbx_4 = var_b0
else
    result = *(rbx_3 + 0x78)
    rbx_4 = *(rbx_3 + 0x80)
    result_1 = result
    var_b0 = rbx_4
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    if (result == 0)
        goto label_140da1106

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp4_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t temp7_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (temp7_1 == 1)
            int64_t r8_3 = *var_60
            (*(r8_3 + 8))(var_60, 1, r8_3)

return result
