// 函数: sub_141d8dec0
// 地址: 0x141d8dec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** var_58

if (*(arg1 + 8) == 0)
    void*** rax_1 = j_sub_140a82f30(0x1a0)
    void*** rbx_2
    
    if (rax_1 == 0)
        rbx_2 = nullptr
    else
        void*** rax_2 = j_sub_140a82f30(0x10)
        void*** rbx_1 = rax_2
        
        if (rax_2 == 0)
            rbx_1 = nullptr
        else
            rbx_1[1].d = 0x800
            *rbx_1 = &data_143238518
        
        void*** rax_3 = j_sub_140a82f30(0x18)
        
        if (rax_3 == 0)
            rax_3 = nullptr
        else
            rax_3[1].d = 1
            *rax_3 = &data_142e4cf50
            *(rax_3 + 0xc) = 1
            rax_3[2] = rbx_1
        
        var_58 = rbx_1
        void*** var_50_1 = rax_3
        rbx_2 = sub_140d93160(rax_1, &var_58, 0)
    
    void*** rax_5 = j_sub_140a82f30(0x18)
    
    if (rax_5 == 0)
        rax_5 = nullptr
    else
        rax_5[1].d = 1
        *rax_5 = &data_142d42ea8
        *(rax_5 + 0xc) = 1
        rax_5[2] = rbx_2
    
    int64_t* rax_6 = j_sub_140a82f30(0x58)
    int64_t* rdi_2
    
    if (rax_6 == 0)
        rdi_2 = nullptr
    else
        uint128_t zmm1 = rbx_2.o
        uint128_t var_38 = zmm1
        void*** rcx_1 = _mm_bsrli_si128(zmm1, 8).q
        
        if (rcx_1 != 0)
            rcx_1[1].d += 1
            rcx_1 = rax_5
            zmm1 = rbx_2.o
        
        uint128_t var_28 = zmm1
        
        if (rcx_1 != 0)
            rcx_1[1].d += 1
        
        rdi_2 = sub_140dda6a0(rax_6, &var_28, &var_38)
    
    int64_t* rax_8 = j_sub_140a82f30(0x18)
    int64_t* rbx_3 = rax_8
    
    if (rax_8 == 0)
        rbx_3 = nullptr
    else
        rax_8[1].d = 1
        *(rax_8 + 0xc) = 1
        *rbx_3 = &data_14306a658
        rbx_3[2] = rdi_2
    
    var_58 = rdi_2
    int64_t* var_50_2 = rbx_3
    
    if (arg1 + 8 == &var_58)
    label_141d8e0c1:
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp6_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
    else
        *(arg1 + 8) = rdi_2
        int64_t* rdi_3 = *(arg1 + 0x10)
        var_58 = nullptr
        
        if (rbx_3 == rdi_3)
            goto label_141d8e0c1
        
        int64_t* var_50_3 = nullptr
        *(arg1 + 0x10) = rbx_3
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t temp9_1 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
            
            rbx_3 = var_50_3
            goto label_141d8e0c1
    
    int64_t* rbx_4 = rax_5
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp8_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)

if (*(arg1 + 0x18) != 0)
    return 

void*** rax_15 = j_sub_140a82f30(0x60)
void*** rdi_4 = rax_15

if (rax_15 == 0)
    rdi_4 = nullptr
else
    int64_t* rcx_9 = &rdi_4[4]
    *rdi_4 = &data_142dd6680
    rdi_4[1] = &data_14306c200
    rdi_4[2] = 0
    rdi_4[3] = 0
    rcx_9[2] = 0
    rcx_9[3].d = 0
    *(rcx_9 + 0x1c) = 0x80
    int64_t* rax_16 = rcx_9[2]
    
    if (rax_16 != 0)
        rcx_9 = rax_16
    
    *rcx_9 = 0
    rcx_9[1] = 0
    rdi_4[8].d = 0xffffffff
    *(rdi_4 + 0x44) = 0
    rdi_4[0xa] = 0
    rdi_4[0xb].d = 0
    *rdi_4 = &data_1432383e8
    rdi_4[1] = &data_143238408

void*** rax_17 = j_sub_140a82f30(0x18)
void*** rbx_5 = rax_17

if (rax_17 == 0)
    rbx_5 = nullptr
else
    rax_17[1].d = 1
    *(rax_17 + 0xc) = 1
    *rbx_5 = &data_142d42ea8
    rbx_5[2] = rdi_4

void* r14_1

if (rdi_4 == 0)
    r14_1 = nullptr
    var_58 = nullptr
else
    r14_1 = &rdi_4[1]
    var_58 = r14_1

void*** var_50_4 = rbx_5

if (arg1 + 0x18 == &var_58)
label_141d8e24a:
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp1_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx_5)[1](rbx_5, 1)
else
    *(arg1 + 0x18) = r14_1
    int64_t* rdi_5 = *(arg1 + 0x20)
    var_58 = nullptr
    
    if (rbx_5 == rdi_5)
        goto label_141d8e24a
    
    void*** var_50_5 = nullptr
    *(arg1 + 0x20) = rbx_5
    
    if (rdi_5 != 0)
        rdi_5[1].d -= 1
        
        if (rdi_5[1].d == 1)
            (**rdi_5)(rdi_5)
            int32_t temp4_1 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rdi_5 + 8))(rdi_5, 1)
        
        rbx_5 = var_50_5
        goto label_141d8e24a
