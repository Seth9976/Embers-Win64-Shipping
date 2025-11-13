// 函数: sub_140ebb6d0
// 地址: 0x140ebb6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
uint64_t var_20 = rdi
int64_t* r12 = *(arg1 + 0x3d0)
int32_t i = 0
char arg_18 = 0
int64_t* var_a8 = r12
void*** var_a0
int64_t* var_98
float var_88
float var_80
int64_t* arg_20
int64_t* rsi
void*** r14
void*** var_78
int64_t* var_70

if (r12 == 0)
label_140ebbbb6:
    void**** rax_43 = sub_140ec55c0(&var_78)
    int64_t* rcx_33 = rax_43[1]
    r14 = *rax_43
    var_a0 = r14
    
    if (rcx_33 != 0)
        rcx_33[1].d += 1
    
    rsi = nullptr
    
    if (rcx_33 != 0)
        rsi = rcx_33
    
    var_98 = rsi
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t temp1_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_70 + 8))(var_70, 1)
    
    rdi.b = 1
    arg_18 = 1
else
    int32_t rax_1 = r12[1].d
    
    if (rax_1 == 0)
        r12 = nullptr
    else
        r12[1].d = rax_1 + 1
    
    var_a8 = r12
    
    if (r12 == 0)
        goto label_140ebbbb6
    
    rdi = *(arg1 + 0x3c8)
    
    if (rdi == 0 || *(arg1 + 0x3e0) == 0)
        goto label_140ebbbb6
    
    float var_58_1 = arg3.d
    int128_t zmm7
    int128_t var_68_1 = zmm7
    uint128_t zmm0_1 = sub_140e154c0(rdi, &var_88)
    float var_7c
    
    if ((*(rdi + 0x779) & 1) == 0)
        arg3 = sub_140e18fa0(rdi, &var_98, 0, zmm0_1)
        int32_t var_90
        zmm0_1.d = var_90.d f+ var_98.d
        float zmm1_1 = var_80 f- zmm0_1.d
        int32_t var_8c
        zmm0_1.d = var_8c.d f+ var_98:4.d
        var_80 = zmm1_1
        var_7c = var_7c f- zmm0_1.d
    
    float var_84
    zmm7.d = 1f / sub_140d7ade0(var_88.d, var_84, arg3)
    arg_20.d = (var_80 - var_88) f* zmm7.d
    arg_20:4.d = (var_7c - var_84) f* zmm7.d
    void**** rax_3 = sub_140ec5200(&var_78, &arg_20)
    int64_t* rcx_3 = rax_3[1]
    r14 = *rax_3
    var_a0 = r14
    
    if (rcx_3 != 0)
        rcx_3[1].d += 1
    
    rsi = nullptr
    
    if (rcx_3 != 0)
        rsi = rcx_3
    
    var_98 = rsi
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t temp13_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*var_70 + 8))(var_70, 1)
    
    float zmm6 = zmm7.d * var_88
    zmm7.d = zmm7.d f* var_84
    char rax_6 = sub_140e1acf0(rdi)
    *(r14 + 0x3c) = zmm6
    r14[8].d = zmm7.d
    *(r14 + 0x4c) = rax_6
    r14[7].d = 2
    int64_t* rbx_1 = r14[2]
    
    if (rbx_1 != 0)
        int32_t rax_7 = rbx_1[1].d
        
        if (rax_7 != 0)
            rbx_1[1].d = rax_7 + 1
            rax_7.b = 1
        
        if (rax_7.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            int32_t rax_8 = rbx_1[1].d
            rbx_1[1].d = rax_8
            
            if (rax_8 == 0)
                (**rbx_1)(rbx_1)
                int32_t temp19_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp19_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
            
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp22_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp22_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    rdi.b = 0
r14[4].d = sub_140f47e50(*(arg1 + 0x3a8))
int64_t* rbx_2 = r14[2]

if (rbx_2 != 0)
    int32_t rax_14 = rbx_2[1].d
    
    if (rax_14 != 0)
        rbx_2[1].d = rax_14 + 1
        rax_14.b = 1
    
    if (rax_14.b == 0)
        rbx_2 = nullptr
    
    if (rbx_2 != 0)
        int32_t rax_15 = rbx_2[1].d
        rbx_2[1].d = rax_15
        
        if (rax_15 == 0)
            (**rbx_2)(rbx_2)
            int32_t temp7_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
        
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp12_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

if (*(arg1 + 0x3c0) s> 0)
    int64_t* rdi_1 = nullptr
    arg_20 = nullptr
    
    do
        int64_t* rcx_16 = *(rdi_1 + *(arg1 + 0x3b8))
        (*(*rcx_16 + 0x278))(rcx_16, &var_88)
        int64_t r15_1 = var_88.q
        
        if (r15_1 != 0)
            int64_t* rdi_2 = var_80.q
            arg_18 = 1
            
            if (rdi_2 != 0)
                rdi_2[1].d += 1
            
            int64_t r14_1 = sx.q(var_a0[6].d)
            int32_t rax_22 = (r14_1 + 1).d
            var_a0[6].d = rax_22
            
            if (rax_22 s> *(var_a0 + 0x34))
                sub_1405a4f90(&var_a0[5])
            
            int64_t* rax_25 = &var_a0[5][r14_1 * 2]
            *rax_25 = r15_1
            rax_25[1] = rdi_2
            
            if (rdi_2 != 0)
                rdi_2[1].d += 1
            
            int64_t* rbx_3 = var_a0[2]
            
            if (rbx_3 != 0)
                int32_t rax_26 = rbx_3[1].d
                
                if (rax_26 == 0)
                    rbx_3 = nullptr
                else
                    rbx_3[1].d = rax_26 + 1
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d = rax_26 + 1
                        
                        if (rax_26 == 0xffffffff)
                            (**rbx_3)(rbx_3)
                            int32_t temp21_1 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (temp21_1 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp17_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp17_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp20_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp20_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            rdi_1 = arg_20
        
        int64_t* rbx_4 = var_80.q
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp11_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        rdi_1 = &rdi_1[2]
        i += 1
        arg_20 = rdi_1
    while (i s< *(arg1 + 0x3c0))
    
    rsi = var_98
    r12 = var_a8
    r14 = var_a0
    rdi = zx.q(arg_18)

if (rdi.b == 0)
    r14 = nullptr
    int64_t* rbx_5 = rsi
    
    if (rsi != 0)
        rsi = nullptr
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp4_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)

*arg2 = r14
arg2[1] = rsi

if (rsi != 0)
    rsi[1].d += 1

if (r12 != 0)
    r12[1].d -= 1
    
    if (r12[1].d == 1)
        (**r12)(r12)
        int32_t temp10_1 = *(r12 + 0xc)
        *(r12 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*r12 + 8))(r12, 1)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t temp14_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*rsi + 8))(rsi, 1)

return arg2
