// 函数: sub_140e81630
// 地址: 0x140e81630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x48)
void*** rsi = rax
void*** var_38

if (rax == 0)
    rsi = nullptr
else
    int64_t* rbx_1 = arg4[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    char r8 = *(arg4 + 0x3e)
    var_38 = *arg4
    int64_t* var_30_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    sub_140e50e40(rsi, &var_38, r8)
    *rsi = &data_142ed77b8
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

void*** rax_4 = j_sub_140a82f30(0x18)
void*** rdi = rax_4

if (rax_4 == 0)
    rdi = nullptr
else
    rax_4[1].d = 1
    *(rax_4 + 0xc) = 1
    *rdi = &data_142d42ea8
    rdi[2] = rsi

void* rbx_2 = &rsi[1]

if (rsi == 0)
    rbx_2 = nullptr

if (rbx_2 == 0)
label_140e8178f:
    
    if (rdi != 0)
        rdi[1].d += 1
else
    void* rax_5
    
    if (*rbx_2 != 0)
        rax_5 = *(rbx_2 + 8)
    
    if (*rbx_2 != 0 && rax_5 != 0 && *(rax_5 + 8) s> 0)
        goto label_140e8178f
    
    if (rdi != 0)
        rdi[1].d += 1
    
    *rbx_2 = rsi
    int64_t* rcx_3 = *(rbx_2 + 8)
    
    if (rdi != rcx_3)
        if (rdi != 0)
            *(rdi + 0xc) += 1
            rcx_3 = *(rbx_2 + 8)
        
        if (rcx_3 != 0)
            int32_t temp8_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
        
        *(rbx_2 + 8) = rdi
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp7_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*rdi)[1](rdi, 1)
        
        goto label_140e8178f

if (arg1 + 0xc8 == &var_38)
label_140e817d9:
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp3_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rdi)[1](rdi, 1)
else
    *(arg1 + 0xc8) = rsi
    void*** rbx_3 = *(arg1 + 0xd0)
    
    if (rdi == rbx_3)
        goto label_140e817d9
    
    *(arg1 + 0xd0) = rdi
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp6_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rbx_3)[1](rbx_3, 1)

void arg_8
sub_140e45130((*rsi)[5](rsi), &arg_8, arg1, sub_140e75b20)
var_38 = rsi
void*** var_30_2 = rdi

if (rdi != 0)
    rdi[1].d += 1

uint128_t zmm0 = sub_140e80b00(*(arg1 + 0x30), &var_38, &arg4[5])

if (*(arg4 + 0x3d) != 0 && arg4[2] != 0)
    int64_t* rbx_4 = data_143e29f28
    int64_t* rcx_12 = rbx_4[0xc0]
    sub_140e8ab30(rbx_4, (*(*rcx_12 + 8))(rcx_12), &arg4[2], 2, zmm0)

*arg2 = rsi
arg2[1] = rdi

if (rdi != 0)
    int32_t rax_17 = rdi[1].d
    rdi[1].d = rax_17
    
    if (rax_17 == 0)
        (**rdi)(rdi)
        int32_t temp10_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*rdi)[1](rdi, 1)

int64_t* rbx_5 = *(arg3 + 8)

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp11_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

return arg2
