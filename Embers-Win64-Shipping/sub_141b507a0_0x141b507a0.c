// 函数: sub_141b507a0
// 地址: 0x141b507a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** var_68

if (*(arg1 + 8) == 0)
    void*** rax_1 = j_sub_140a82f30(0x260)
    void*** rdi_1
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        rdi_1 = sub_141b4a240(rax_1)
    
    void*** rax_3 = j_sub_140a82f30(0x18)
    void*** rbx_1 = rax_3
    
    if (rax_3 == 0)
        rbx_1 = nullptr
    else
        rax_3[1].d = 1
        *(rax_3 + 0xc) = 1
        *rbx_1 = &data_142d42ea8
        rbx_1[2] = rdi_1
    
    var_68 = rdi_1
    void*** var_60_1 = rbx_1
    
    if (arg1 + 8 == &var_68)
    label_141b50883:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)
    else
        *(arg1 + 8) = rdi_1
        int64_t* rdi_2 = *(arg1 + 0x10)
        var_68 = nullptr
        
        if (rbx_1 == rdi_2)
            goto label_141b50883
        
        void*** var_60_2 = nullptr
        *(arg1 + 0x10) = rbx_1
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp3_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
            
            rbx_1 = var_60_2
            goto label_141b50883

if (*(arg1 + 0x18) != 0)
    return 

void*** rax_8 = j_sub_140a82f30(0x1a0)
void*** rbx_3

if (rax_8 == 0)
    rbx_3 = nullptr
else
    void*** rax_9 = j_sub_140a82f30(0x10)
    void*** rbx_2
    
    if (rax_9 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = sub_141b49a40(rax_9)
    
    void*** rax_11 = j_sub_140a82f30(0x18)
    
    if (rax_11 == 0)
        rax_11 = nullptr
    else
        rax_11[1].d = 1
        *(rax_11 + 0xc) = 1
        *rax_11 = &data_142e4cf50
        rax_11[2] = rbx_2
    
    var_68 = rbx_2
    void*** var_60_3 = rax_11
    rbx_3 = sub_140d93160(rax_8, &var_68, 0)

void*** rax_13 = j_sub_140a82f30(0x18)

if (rax_13 == 0)
    rax_13 = nullptr
else
    rax_13[1].d = 1
    *(rax_13 + 0xc) = 1
    *rax_13 = &data_142d42ea8
    rax_13[2] = rbx_3

void*** rax_14 = j_sub_140a82f30(0x1a0)
void*** rbx_5

if (rax_14 == 0)
    rbx_5 = nullptr
else
    void*** rax_15 = j_sub_140a82f30(0x10)
    void*** rbx_4
    
    if (rax_15 == 0)
        rbx_4 = nullptr
    else
        rbx_4 = sub_141b49a40(rax_15)
    
    void*** rax_17 = j_sub_140a82f30(0x18)
    
    if (rax_17 == 0)
        rax_17 = nullptr
    else
        rax_17[1].d = 1
        *(rax_17 + 0xc) = 1
        *rax_17 = &data_142e4cf50
        rax_17[2] = rbx_4
    
    var_68 = rbx_4
    void*** var_60_4 = rax_17
    rbx_5 = sub_140d93160(rax_14, &var_68, 1)

void*** rax_19 = j_sub_140a82f30(0x18)

if (rax_19 == 0)
    rax_19 = nullptr
else
    rax_19[1].d = 1
    *(rax_19 + 0xc) = 1
    *rax_19 = &data_142d42ea8
    rax_19[2] = rbx_5

int64_t* rax_20 = j_sub_140a82f30(0x58)
int64_t* rdi_5

if (rax_20 == 0)
    rdi_5 = nullptr
else
    uint128_t zmm0_1 = rbx_5.o
    uint128_t var_38 = zmm0_1
    void* rcx_9 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rcx_9 != 0)
        *(rcx_9 + 8) += 1
    
    zmm0_1 = rbx_3.o
    uint128_t var_28 = zmm0_1
    void* rax_21 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_21 != 0)
        *(rax_21 + 8) += 1
    
    rdi_5 = sub_140dda6a0(rax_20, &var_28, &var_38)

void*** rax_23 = j_sub_140a82f30(0x18)
void*** rbx_6 = rax_23

if (rax_23 == 0)
    rbx_6 = nullptr
else
    rax_23[1].d = 1
    *(rax_23 + 0xc) = 1
    *rbx_6 = &data_14306a658
    rbx_6[2] = rdi_5

var_68 = rdi_5
void*** var_60_5 = rbx_6

if (arg1 + 0x18 == &var_68)
label_141b50b5f:
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp6_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rbx_6)[1](rbx_6, 1)
else
    *(arg1 + 0x18) = rdi_5
    int64_t* rdi_6 = *(arg1 + 0x20)
    var_68 = nullptr
    
    if (rbx_6 == rdi_6)
        goto label_141b50b5f
    
    void*** var_60_6 = nullptr
    *(arg1 + 0x20) = rbx_6
    
    if (rdi_6 != 0)
        rdi_6[1].d -= 1
        
        if (rdi_6[1].d == 1)
            (**rdi_6)(rdi_6)
            int32_t temp10_1 = *(rdi_6 + 0xc)
            *(rdi_6 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rdi_6 + 8))(rdi_6, 1)
        
        rbx_6 = var_60_6
        goto label_141b50b5f

int64_t* rbx_7 = rax_19

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        (**rbx_7)(rbx_7)
        int32_t temp9_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rbx_7 + 8))(rbx_7, 1)

int64_t* rbx_8 = rax_13

if (rbx_8 == 0)
    return 

rbx_8[1].d -= 1

if (rbx_8[1].d != 1)
    return 

(**rbx_8)(rbx_8)
int32_t temp11_1 = *(rbx_8 + 0xc)
*(rbx_8 + 0xc) -= 1

if (temp11_1 == 1)
    (*(*rbx_8 + 8))(rbx_8, 1)
