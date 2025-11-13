// 函数: sub_141b8ff20
// 地址: 0x141b8ff20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t result = __security_cookie ^ &var_358
int64_t result_1 = result
void* const rbx = arg2

if (arg2 != 0)
    void* var_310
    sub_140d3a3a0(&var_310, arg2)
    void* rax_1 = var_310
    void* var_320 = rax_1
    int32_t var_30c
    int32_t rax_3 = (rax_1.d - var_30c) ^ var_30c u>> 0xd
    int32_t r8_2 = (0x9e3779b9 - rax_3 - var_30c) ^ rax_3 << 8
    int32_t rdx_3 = (var_30c - r8_2 - rax_3) ^ r8_2 u>> 0xd
    int32_t rax_6 = (rax_3 - r8_2 - rdx_3) ^ rdx_3 u>> 0xc
    int32_t r8_5 = (r8_2 - rax_6 - rdx_3) ^ rax_6 << 0x10
    int32_t rdx_6 = (rdx_3 - r8_5 - rax_6) ^ r8_5 u>> 5
    int32_t rax_9 = (rax_6 - r8_5 - rdx_6) ^ rdx_6 u>> 3
    int32_t r8_8 = (r8_5 - rax_9 - rdx_6) ^ rax_9 << 0xa
    void* rax_10 = sub_141b71a80(arg1 + 0x3b0, (rdx_6 - r8_8 - rax_9) ^ r8_8 u>> 0xf, &var_320)
    sub_140d3a3a0(rax_10 + 4, rbx)
    void* rax_11 = sub_141c20480()
    void* rdx_11 = *(rbx + 0x10)
    int64_t rax_12 = sx.q(*(rax_11 + 0x38))
    
    if (rax_12.d s> *(rdx_11 + 0x38) || *(*(rdx_11 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
        rbx = nullptr
    
    *(rax_10 + 0x10) = rbx
    int64_t* rbx_1 = arg3[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void* var_2f0
    
    if (rax_10 + 0x28 == &var_2f0)
    label_141b9008c:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    else
        *(rax_10 + 0x28) = *arg3
        int64_t* rdi_1 = *(rax_10 + 0x30)
        
        if (rbx_1 == rdi_1)
            goto label_141b9008c
        
        *(rax_10 + 0x30) = rbx_1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp5_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    var_320 = *arg3
    void* rax_19 = arg3[1]
    void* var_318_1 = rax_19
    
    if (rax_19 != 0)
        *(rax_19 + 8) += 1
    
    void*** rax_20 = j_sub_140a82f30(0x3d8)
    void*** rbx_2 = rax_20
    
    if (rax_20 == 0)
        rbx_2 = nullptr
    else
        rax_20[1].d = 1
        *(rax_20 + 0xc) = 1
        *rbx_2 = &data_142d8c570
        
        if (rbx_2 != -0x10)
            sub_140f20750(&rbx_2[2])
    
    void* var_308 = &rbx_2[2]
    sub_14065fa30(&var_308, &rbx_2[2])
    int64_t var_338_1 = 0x3c8
    void var_328
    void* var_2f8_1 = &var_328
    sub_140e23ed0(&rbx_2[2], "SBox")
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    void var_2e0
    
    if (rax_10 + 0x18 == &var_2e0)
    label_141b90199:
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp7_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*rbx_2)[1](rbx_2, 1)
    else
        *(rax_10 + 0x18) = &rbx_2[2]
        void*** rdi_3 = *(rax_10 + 0x20)
        
        if (rbx_2 == rdi_3)
            goto label_141b90199
        
        *(rax_10 + 0x20) = rbx_2
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t temp10_1 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*rdi_3)[1](rdi_3, 1)
    
    void var_2d0
    int64_t* rax_25
    int128_t zmm1_1
    rax_25, zmm1_1 = sub_14068c940(&var_2d0)
    void* rax_26
    int128_t zmm1_2
    rax_26, zmm1_2 = sub_1406937a0(rax_25, &var_320, zmm1_1)
    void** rax_27 = sub_140695d20(&var_308, &var_2f0, rax_26, zmm1_2)
    int64_t* rbx_3 = rax_27[1]
    var_320 = *rax_27
    int64_t* var_318_2 = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    void*** rax_28 = sub_141b90c50(*(arg1 + 0x400))
    *(rax_10 + 0x38) = rax_28
    sub_140e99b50(rax_28, &var_320)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp12_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* var_2e8
    
    if (var_2e8 != 0)
        var_2e8[1].d -= 1
        
        if (var_2e8[1].d == 1)
            (**var_2e8)(var_2e8)
            int32_t temp14_1 = *(var_2e8 + 0xc)
            *(var_2e8 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*(*var_2e8 + 8))(var_2e8, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp15_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*rbx_2)[1](rbx_2, 1)
    
    result = sub_140690290(&var_2d0)

int64_t* rbx_6 = arg3[1]

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        result = (**rbx_6)(rbx_6)
        int32_t temp1_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx_6 + 8))(rbx_6, 1)

__security_check_cookie(result_1 ^ &var_358)
return result
