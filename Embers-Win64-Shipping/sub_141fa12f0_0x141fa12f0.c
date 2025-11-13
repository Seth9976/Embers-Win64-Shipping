// 函数: sub_141fa12f0
// 地址: 0x141fa12f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9 = zx.d(arg1[6].b)
int64_t* rbx_2

if (r9 == 1)
    rbx_2 = *arg1
label_141fa134e:
    
    if (rbx_2[1].d != 0)
        int64_t* rcx_1 = *rbx_2
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x38))(rcx_1, 0)
            int64_t rcx_2 = *rbx_2
            
            if (rcx_2 != 0)
                *rbx_2 = sub_140a84c80(rcx_2, 0, 0)
            
            rbx_2[1].d = 0
else
    if (r9 == 2)
        rbx_2 = arg1[2]
        goto label_141fa134e
    
    if (r9 == 3)
        int32_t* rbx_1 = arg1[4]
        sub_140d3a3a0(rbx_1, nullptr)
        int64_t arg_8 = 0
        *(rbx_1 + 8) = 0
arg1[6].b = 1
int128_t var_28 = *arg3
void*** rax_3 = sub_140a84c80(0, 0x30, 0)

if (rax_3 != 0)
    *rax_3 = &data_142e33ea8
    sub_140d3a3a0(&rax_3[1], arg2)
    *(rax_3 + 0x10) = var_28
    rax_3[5] = sub_140a387b0()
    *rax_3 = &data_142e33f00

void*** rax_5 = j_sub_140a82f30(0x20)
void*** rbx_3 = rax_5

if (rax_5 == 0)
    rbx_3 = nullptr
else
    rax_5[1].d = 1
    *(rax_5 + 0xc) = 1
    *rbx_3 = &data_14306d990
    rbx_3[2] = 0
    rbx_3[3].d = 0
    
    if (&var_28 != &rbx_3[2] && rax_3 != 0)
        (*rax_3)[8](rax_3)

void*** rbx_4 = rbx_3
void* result = &rbx_3[2]
void*** rdi_1 = rbx_4

if (rbx_4 != 0)
    rbx_4[1].d += 1
    rbx_4 = rbx_3

if (arg1 == &var_28)
label_141fa1492:
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d != 1)
            rbx_4 = rbx_3
        else
            result = (**rdi_1)(rdi_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 != 1)
                rbx_4 = rbx_3
            else
                result = (*rdi_1)[1](rdi_1, 1)
                rbx_4 = rbx_3
else
    *arg1 = result
    void*** rsi_1 = arg1[1]
    
    if (rdi_1 == rsi_1)
        goto label_141fa1492
    
    arg1[1] = rdi_1
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d != 1)
            rbx_4 = rbx_3
        else
            result = (**rsi_1)(rsi_1)
            int32_t temp7_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp7_1 != 1)
                rbx_4 = rbx_3
            else
                result = (*rsi_1)[1](rsi_1, 1)
                rbx_4 = rbx_3

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp6_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp6_1 == 1)
            result = (*rbx_4)[1](rbx_4, 1)

if (rax_3 != 0)
    (*rax_3)[7](rax_3, 0)
    result = sub_140a84c80(rax_3, 0, 0)
    
    if (result != 0)
        return sub_140a74f90(result)

return result
