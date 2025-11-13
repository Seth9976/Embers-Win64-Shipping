// 函数: sub_14092a0e0
// 地址: 0x14092a0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x108)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    sub_14093c480(rax)
    rbx[0x20] = arg1
    *rbx = &data_142e1fd58
    rbx[1] = &data_142e1fd90

*(arg1 + 0x150) = rbx
data_143cecd7c
data_143cecd7c += 1
int64_t var_38
int64_t* rax_1 = sub_140b63b70(arg1 + 0x90, &var_38)
int16_t* const rsi = &data_142d40450
int16_t* const r8

if (rax_1[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax_1

int16_t* var_48
sub_140a2e390(&var_48, u"OnlineAsyncTaskThreadNull %s(%d)", r8)
int32_t var_40

if (var_40 != 0)
    rsi = var_48

void*** rax_2 = sub_140a6e140(*(arg1 + 0x150), rsi, 0x20000, 0, -1, 0)
int16_t* rcx_4 = var_48
*(arg1 + 0x158) = rax_2

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = var_38

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

void*** rax_3 = j_sub_140a82f30(0x338)
void*** rsi_1

if (rax_3 == 0)
    rsi_1 = nullptr
else
    rsi_1 = sub_140919690(rax_3, arg1)

void*** rax_5 = j_sub_140a82f30(0x18)
void*** rbx_2 = rax_5

if (rax_5 == 0)
    rbx_2 = nullptr
else
    rax_5[1].d = 1
    *(rax_5 + 0xc) = 1
    *rbx_2 = &data_142e1b260
    rbx_2[2] = rsi_1

void*** var_98 = rsi_1
void*** var_90 = rbx_2

if (arg1 + 0xd8 != &var_98)
    *(arg1 + 0xd8) = rsi_1
    var_98 = nullptr
    sub_1405aeff0(arg1 + 0xe0, &var_90)
    rbx_2 = var_90

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rax_8 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rax_8 == 1)
            (*rbx_2)[1](rbx_2, 1)

void*** rax_10 = j_sub_140a82f30(0x90)
void*** rbx_3 = rax_10

if (rax_10 == 0)
    rbx_3 = nullptr
else
    rax_10[1] = 0
    void* rcx_10 = &rbx_3[0xa]
    rax_10[2] = 0
    rax_10[3] = 2
    rax_10[4] = 0
    rax_10[5] = 0
    rax_10[6] = 2
    *rbx_3 = &data_142e20518
    rbx_3[7] = arg1
    rbx_3[8] = 0
    rbx_3[9] = 0
    *(rcx_10 + 0x1c) = 0x80
    void* rax_11 = *(rcx_10 + 0x10)
    
    if (rax_11 != 0)
        rcx_10 = rax_11
    
    __builtin_memset(rcx_10, 0, 0x1c)
    rbx_3[0xe].d = 0xffffffff
    *(rbx_3 + 0x74) = 0
    rbx_3[0x10] = 0
    rbx_3[0x11].d = 0

void*** rax_12 = j_sub_140a82f30(0x18)
void*** rsi_2 = rax_12

if (rax_12 == 0)
    rsi_2 = nullptr
else
    rax_12[1].d = 1
    *(rax_12 + 0xc) = 1
    *rsi_2 = &data_142d42ea8
    rsi_2[2] = rbx_3

void*** var_88 = rbx_3
void*** var_80 = rsi_2

if (arg1 + 0x100 != &var_88)
    *(arg1 + 0x100) = rbx_3
    var_88 = nullptr
    sub_1405aeff0(arg1 + 0x108, &var_80)
    rsi_2 = var_80

if (rsi_2 != 0)
    rsi_2[1].d -= 1
    
    if (rsi_2[1].d == 1)
        (**rsi_2)(rsi_2)
        int32_t rax_15 = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (rax_15 == 1)
            (*rsi_2)[1](rsi_2, 1)

void*** rax_17 = j_sub_140a82f30(0x218)
void*** rsi_3

if (rax_17 == 0)
    rsi_3 = nullptr
else
    rsi_3 = sub_140919260(rax_17, arg1)

void*** rax_19 = j_sub_140a82f30(0x18)
void*** rbx_4 = rax_19

if (rax_19 == 0)
    rbx_4 = nullptr
else
    rax_19[1].d = 1
    *(rax_19 + 0xc) = 1
    *rbx_4 = &data_142d42ea8
    rbx_4[2] = rsi_3

void*** var_78 = rsi_3
void*** var_70 = rbx_4

if (arg1 + 0x110 != &var_78)
    *(arg1 + 0x110) = rsi_3
    var_78 = nullptr
    sub_1405aeff0(arg1 + 0x118, &var_70)
    rbx_4 = var_70

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t rax_22 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rax_22 == 1)
            (*rbx_4)[1](rbx_4, 1)

void*** rax_24 = j_sub_140a82f30(0xd8)
void*** rsi_4 = rax_24

if (rax_24 == 0)
    rsi_4 = nullptr
else
    rax_24[1] = 0
    void* rcx_18 = &rsi_4[7]
    rax_24[2] = 0
    rax_24[3] = 2
    *rsi_4 = &data_142e1f9c0
    rsi_4[4] = arg1
    rsi_4[5] = 0
    rsi_4[6] = 0
    *(rcx_18 + 0x1c) = 0x80
    void* rax_25 = *(rcx_18 + 0x10)
    
    if (rax_25 != 0)
        rcx_18 = rax_25
    
    __builtin_memset(rcx_18, 0, 0x1c)
    void* rcx_19 = &rsi_4[0x11]
    rsi_4[0xb].d = 0xffffffff
    *(rsi_4 + 0x5c) = 0
    rsi_4[0xd] = 0
    rsi_4[0xe].d = 0
    rsi_4[0xf] = 0
    rsi_4[0x10] = 0
    *(rcx_19 + 0x1c) = 0x80
    void* rax_26 = *(rcx_19 + 0x10)
    
    if (rax_26 != 0)
        rcx_19 = rax_26
    
    __builtin_memset(rcx_19, 0, 0x1c)
    rsi_4[0x15].d = 0xffffffff
    *(rsi_4 + 0xac) = 0
    rsi_4[0x17] = 0
    rsi_4[0x18].d = 0
    rsi_4[0x19] = 0
    rsi_4[0x1a] = 0

void*** rax_27 = j_sub_140a82f30(0x18)
void*** rbx_5 = rax_27

if (rax_27 == 0)
    rbx_5 = nullptr
else
    rax_27[1].d = 1
    *(rax_27 + 0xc) = 1
    *rbx_5 = &data_142d42ea8
    rbx_5[2] = rsi_4

void*** var_68 = rsi_4
void*** var_60 = rbx_5

if (arg1 + 0x120 != &var_68)
    *(arg1 + 0x120) = rsi_4
    var_68 = nullptr
    sub_1405aeff0(arg1 + 0x128, &var_60)
    rbx_5 = var_60

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t rax_30 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (rax_30 == 1)
            (*rbx_5)[1](rbx_5, 1)

void*** rax_32 = j_sub_140a82f30(0xe8)
void*** rsi_5

if (rax_32 == 0)
    rsi_5 = nullptr
else
    rsi_5 = sub_140948bd0(rax_32, arg1)

void*** rax_34 = j_sub_140a82f30(0x18)
void*** rbx_6 = rax_34

if (rax_34 == 0)
    rbx_6 = nullptr
else
    rax_34[1].d = 1
    *(rax_34 + 0xc) = 1
    *rbx_6 = &data_142e21f50
    rbx_6[2] = rsi_5

void*** var_58 = rsi_5
void*** var_50 = rbx_6

if (arg1 + 0xe8 != &var_58)
    *(arg1 + 0xe8) = rsi_5
    var_58 = nullptr
    sub_1405aeff0(arg1 + 0xf0, &var_50)
    rbx_6 = var_50

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t rax_37 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (rax_37 == 1)
            (*rbx_6)[1](rbx_6, 1)

void*** rax_39 = j_sub_140a82f30(0x88)
void*** r15_5

if (rax_39 == 0)
    r15_5 = nullptr
else
    r15_5 = sub_140919ac0(rax_39, arg1)

void*** rax_41 = j_sub_140a82f30(0x18)
void*** rbx_7 = rax_41

if (rax_41 == 0)
    rbx_7 = nullptr
else
    rax_41[1].d = 1
    *(rax_41 + 0xc) = 1
    *rbx_7 = &data_142d42ea8
    rbx_7[2] = r15_5

void*** var_b8 = r15_5
void**** rsi_6 = &r15_5[4]
void*** var_b0 = rbx_7

if (r15_5 == 0)
    rsi_6 = nullptr

if (rsi_6 != 0)
    if (*rsi_6 == 0)
    label_14092a773:
        
        if (rbx_7 != 0)
            rbx_7[1].d += 1
        
        *rsi_6 = r15_5
        int64_t* rcx_29 = rsi_6[1]
        
        if (rbx_7 != rcx_29)
            if (rbx_7 != 0)
                *(rbx_7 + 0xc) += 1
                rcx_29 = rsi_6[1]
            
            if (rcx_29 != 0)
                int32_t rax_43 = *(rcx_29 + 0xc)
                *(rcx_29 + 0xc) -= 1
                
                if (rax_43 == 1)
                    (*(*rcx_29 + 8))(rcx_29, 1)
            
            rsi_6[1] = rbx_7
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t rax_47 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (rax_47 == 1)
                    (*rbx_7)[1](rbx_7, 1)
    else
        void* rcx_28 = rsi_6[1]
        
        if (rcx_28 == 0)
            goto label_14092a773
        
        int32_t rax_42 = 0
        
        if (0 == *(rcx_28 + 8))
            *(rcx_28 + 8) = 0
        else
            rax_42 = *(rcx_28 + 8)
        
        if (rax_42 s<= 0)
            goto label_14092a773

if (arg1 + 0x130 != &var_b8)
    *(arg1 + 0x130) = r15_5
    var_b8 = nullptr
    sub_1405aeff0(arg1 + 0x138, &var_b0)

void*** rcx_33 = var_b0

if (rcx_33 != 0)
    rcx_33[1].d -= 1
    
    if (rcx_33[1].d == 1)
        void*** rbx_8 = var_b0
        (**rbx_8)(rbx_8)
        int32_t rax_51 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (rax_51 == 1)
            void*** rcx_35 = var_b0
            (*rcx_35)[1](rcx_35, 1)

void*** rax_53 = j_sub_140a82f30(0xb0)
void*** rsi_7 = rax_53

if (rax_53 == 0)
    rsi_7 = nullptr
else
    rax_53[1] = 0
    void* rcx_36 = &rsi_7[9]
    rax_53[2] = 0
    rax_53[3] = 2
    rax_53[4] = 0
    rax_53[5] = 0
    *rsi_7 = &data_142e20800
    rsi_7[6] = arg1
    rsi_7[7] = 0
    rsi_7[8] = 0
    *(rcx_36 + 0x1c) = 0x80
    void* rax_54 = *(rcx_36 + 0x10)
    
    if (rax_54 != 0)
        rcx_36 = rax_54
    
    __builtin_memset(rcx_36, 0, 0x1c)
    rsi_7[0xd].d = 0xffffffff
    *(rsi_7 + 0x6c) = 0
    rsi_7[0xf] = 0
    rsi_7[0x10].d = 0
    rsi_7[0x13].b = 0
    rsi_7[0x15].b = 0

int64_t* rax_55 = j_sub_140a82f30(0x18)
int64_t* rbx_9 = rax_55

if (rax_55 == 0)
    rbx_9 = nullptr
else
    rax_55[1].d = 1
    *(rax_55 + 0xc) = 1
    *rbx_9 = &data_142d42ea8
    rbx_9[2] = rsi_7

void*** var_a8 = rsi_7
int64_t* var_a0 = rbx_9
void** r14_1 = &rsi_7[4]

if (rsi_7 == 0)
    r14_1 = nullptr

if (r14_1 != 0)
    if (*r14_1 == 0)
    label_14092a93d:
        
        if (rbx_9 != 0)
            rbx_9[1].d += 1
        
        *r14_1 = rsi_7
        int64_t* rcx_38 = r14_1[1]
        
        if (rbx_9 != rcx_38)
            if (rbx_9 != 0)
                *(rbx_9 + 0xc) += 1
                rcx_38 = r14_1[1]
            
            if (rcx_38 != 0)
                int32_t rax_57 = *(rcx_38 + 0xc)
                *(rcx_38 + 0xc) -= 1
                
                if (rax_57 == 1)
                    (*(*rcx_38 + 8))(rcx_38, 1)
            
            r14_1[1] = rbx_9
        
        if (rbx_9 != 0)
            rbx_9[1].d -= 1
            
            if (rbx_9[1].d == 1)
                (**rbx_9)(rbx_9)
                int32_t rax_61 = *(rbx_9 + 0xc)
                *(rbx_9 + 0xc) -= 1
                
                if (rax_61 == 1)
                    (*(*rbx_9 + 8))(rbx_9, 1)
    else
        void* rcx_37 = r14_1[1]
        
        if (rcx_37 == 0)
            goto label_14092a93d
        
        int32_t rax_56 = 0
        
        if (0 == *(rcx_37 + 8))
            *(rcx_37 + 8) = 0
        else
            rax_56 = *(rcx_37 + 8)
        
        if (rax_56 s<= 0)
            goto label_14092a93d

if (arg1 + 0x140 != &var_a8)
    *(arg1 + 0x140) = rsi_7
    var_a8 = nullptr
    sub_1405aeff0(arg1 + 0x148, &var_a0)

int64_t* rcx_42 = var_a0

if (rcx_42 != 0)
    rcx_42[1].d -= 1
    
    if (rcx_42[1].d == 1)
        int64_t* rbx_10 = var_a0
        (**rbx_10)(rbx_10)
        int32_t rdi_1 = *(rbx_10 + 0xc)
        *(rbx_10 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t* rcx_44 = var_a0
            (*(*rcx_44 + 8))(rcx_44, zx.q(rdi_1))

int64_t* result
result.b = 1
return result
