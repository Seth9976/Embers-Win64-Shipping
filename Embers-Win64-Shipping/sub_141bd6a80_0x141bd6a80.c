// 函数: sub_141bd6a80
// 地址: 0x141bd6a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6b8
int64_t rax_1 = __security_cookie ^ &var_6b8
char rbx = *(arg1 + 0x28e)
void var_480
void* rcx = &var_480
void var_688
void* var_680
void* var_650
int64_t* var_648
void* var_640

if (*(arg1 + 0x28c) == 0)
    int64_t* rax_24 = sub_14068d9d0(rcx)
    rax_24[0x86].b = rbx
    int64_t* rax_25 = j_sub_140a82f30(0x7a8)
    int64_t* r14_1 = rax_25
    
    if (rax_25 == 0)
        r14_1 = nullptr
    else
        rax_25[1].d = 1
        *(rax_25 + 0xc) = 1
        *r14_1 = &data_142d8b060
        
        if (r14_1 != -0x10)
            sub_140f66da0(&r14_1[2])
    
    var_680 = &r14_1[2]
    sub_14065fa30(&var_680, &r14_1[2])
    int64_t var_698_2 = 0x798
    void* var_670_1 = &var_688
    void** rax_26 =
        sub_140697520(&var_680, &var_650, rax_24, sub_140e23ed0(&r14_1[2], "STextBlock"))
    int64_t* rcx_33 = rax_26[1]
    
    if (rcx_33 != 0)
        rcx_33[1].d += 1
    
    if (arg1 + 0x290 == &var_640)
    label_141bd6f05:
        
        if (rcx_33 != 0)
            rcx_33[1].d -= 1
            
            if (rcx_33[1].d == 1)
                (**rcx_33)(rcx_33)
                int32_t temp2_1 = *(rcx_33 + 0xc)
                *(rcx_33 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx_33 + 8))(rcx_33, 1)
    else
        *(arg1 + 0x290) = *rax_26
        int64_t* rbx_6 = *(arg1 + 0x298)
        
        if (rcx_33 == rbx_6)
            goto label_141bd6f05
        
        *(arg1 + 0x298) = rcx_33
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t temp7_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
    
    if (var_648 != 0)
        var_648[1].d -= 1
        
        if (var_648[1].d == 1)
            (**var_648)(var_648)
            int32_t temp6_1 = *(var_648 + 0xc)
            *(var_648 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_648 + 8))(var_648, 1)
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t temp10_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*r14_1 + 8))(r14_1, 1)
    
    sub_1406913d0(&var_480)
    int64_t* rbx_9 = *(arg1 + 0x298)
    
    if (rbx_9 != 0)
        rbx_9[1].d += 1
    
    *arg2 = *(arg1 + 0x290)
    arg2[1] = rbx_9
    
    if (rbx_9 != 0)
        rbx_9[1].d += 1
        
        if (rbx_9 != 0)
            rbx_9[1].d -= 1
            
            if (rbx_9[1].d == 1)
                (**rbx_9)(rbx_9)
                int32_t temp13_1 = *(rbx_9 + 0xc)
                *(rbx_9 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*rbx_9 + 8))(rbx_9, 1)
else
    int64_t* rax_2 = sub_14068d9d0(rcx)
    rax_2[0x86].b = rbx
    void*** rax_3 = j_sub_140a82f30(0x7a8)
    void*** rbx_1 = rax_3
    
    if (rax_3 == 0)
        rbx_1 = nullptr
    else
        rax_3[1].d = 1
        *(rax_3 + 0xc) = 1
        *rbx_1 = &data_142d8b060
        
        if (rbx_1 != -0x10)
            sub_140f66da0(&rbx_1[2])
    
    var_680 = &rbx_1[2]
    sub_14065fa30(&var_680, &rbx_1[2])
    void var_687
    void* var_670 = &var_687
    int64_t var_698 = 0x798
    int128_t zmm1 = sub_140e23ed0(var_680, "STextBlock")
    void** rax_5 = sub_140697520(sub_140dd3250(&var_680, arg1 + 0x290), &var_650, rax_2, zmm1)
    int64_t* rbx_2 = rax_5[1]
    void* rsi_1 = *rax_5
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    void var_630
    int64_t* rax_6 = sub_140e4fff0(&var_630)
    void* var_668 = rsi_1
    int64_t* rsi_2 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    if (&var_668 != &rax_6[0x34])
        var_668.o = *(rax_6 + 0x1a0)
        rsi_2 = rbx_2
        *(rax_6 + 0x1a0) = var_668.o
    
    if (rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            (**rsi_2)(rsi_2)
            int32_t temp9_1 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rsi_2 + 8))(rsi_2, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp11_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    void*** rax_12 = j_sub_140a82f30(0x8e8)
    void*** rsi_3 = rax_12
    
    if (rax_12 == 0)
        rsi_3 = nullptr
    else
        rax_12[1].d = 1
        *(rax_12 + 0xc) = 1
        *rsi_3 = &data_143084980
        
        if (rsi_3 != -0x10)
            sub_140f66500(&rsi_3[2])
    
    var_668 = &rsi_3[2]
    sub_140918950(&var_668, &rsi_3[2])
    int64_t var_698_1 = 0x8d8
    void* var_658_1 = &var_688
    void** rax_13 =
        sub_140e57320(&var_668, &var_640, rax_6, sub_140e23ed0(&rsi_3[2], "SInvalidationPanel"))
    int64_t* rbx_4 = rax_13[1]
    void* r14 = *rax_13
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    int64_t* var_638
    
    if (var_638 != 0)
        var_638[1].d -= 1
        
        if (var_638[1].d == 1)
            (**var_638)(var_638)
            int32_t temp16_1 = *(var_638 + 0xc)
            *(var_638 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*var_638 + 8))(var_638, 1)
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            (**rsi_3)(rsi_3)
            int32_t temp18_1 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*rsi_3)[1](rsi_3, 1)
    
    int64_t* var_488
    
    if (var_488 != 0)
        var_488[1].d -= 1
        
        if (var_488[1].d == 1)
            (**var_488)(var_488)
            int32_t temp20_1 = *(var_488 + 0xc)
            *(var_488 + 0xc) -= 1
            
            if (temp20_1 == 1)
                (*(*var_488 + 8))(var_488, 1)
    
    sub_140ddea30(&var_630)
    
    if (var_648 != 0)
        var_648[1].d -= 1
        
        if (var_648[1].d == 1)
            (**var_648)(var_648)
            int32_t temp22_1 = *(var_648 + 0xc)
            *(var_648 + 0xc) -= 1
            
            if (temp22_1 == 1)
                (*(*var_648 + 8))(var_648, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp23_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp23_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
    
    sub_1406913d0(&var_480)
    *arg2 = r14
    arg2[1] = rbx_4
    
    if (rbx_4 != 0)
        int32_t r8_4 = rbx_4[1].d
        rbx_4[1].d = r8_4
        
        if (r8_4 == 0)
            (**rbx_4)(rbx_4)
            int32_t temp24_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp24_1 == 1)
                int64_t r8_6 = *rbx_4
                (*(r8_6 + 8))(rbx_4, 1, r8_6)
__security_check_cookie(rax_1 ^ &var_6b8)
return arg2
