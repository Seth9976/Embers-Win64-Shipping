// 函数: sub_140b20770
// 地址: 0x140b20770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
sub_140b11c80(&var_38, arg1)
int64_t var_58 = 0
int32_t rdx_1 = 0
int32_t var_50 = 0
int32_t r8 = 0
int32_t var_4c = 0
int64_t rbx = -1

if (arg2 != 0 && *arg2 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_58, rdi_1.d + 1)
        r8 = var_4c
        rdx_1 = var_50
    
    int32_t rax_1 = rdx_1 + rdi_1.d + 1
    int32_t var_50_1 = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, arg2, (rdi_1.d + 1) * 2)

sub_140b65060()
int64_t var_68 = 0
int32_t rdx_4 = 0
int32_t var_60 = 0
int32_t rcx_4 = 0
int32_t var_5c = 0

if (data_143e189c0 != 0)
    do
        rbx += 1
    while ((&data_143e189c0)[rbx] != 0)
    
    if (rbx.d + 1 s> 0)
        sub_1405947f0(&var_68, rbx.d + 1)
        rcx_4 = var_5c
        rdx_4 = var_60
    
    int32_t rax_2 = rdx_4 + rbx.d + 1
    int32_t var_60_1 = rax_2
    
    if (rax_2 s> rcx_4)
        sub_140594770(&var_68)
    
    UnDecorator::getReferenceType(var_68, &data_143e189c0, (rbx.d + 1) * 2)

int64_t var_28
sub_140b11da0(&var_28, &var_68, &var_58)
int64_t rcx_9 = var_68

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t var_48
sub_140b1a660(&var_48, &var_28)
int64_t rcx_11 = var_28

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = var_58

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

sub_140a306e0(&var_48, &(*U"{}[\nt")[3], &data_142d5a024, 0)
sub_140a306e0(&var_38, &(*U"{}[\nt")[3], &data_142d5a024, 0)
int64_t* var_98 = nullptr
int32_t i_6 = 0
sub_140a2ccb0(&var_38, &var_98, &data_142d5a024, 1)
int64_t* var_88 = nullptr
int32_t i = 0
sub_140a2ccb0(&var_48, &var_88, &data_142d5a024, 1)
int16_t* rsi

if (i_6 == 0 || i == 0)
label_140b20a67:
    int64_t rcx_29 = 0
    int64_t var_70_1 = 0
    int32_t rbx_2 = 0
    int64_t var_78 = 0
    
    if (i s> 0)
        do
            sub_140a20ba0(&var_78, &data_142e76618, 3)
            rbx_2 += 1
        while (rbx_2 s< i)
        
        rcx_29 = var_78
    
    int32_t rdi_3 = 0
    
    if (i_6 s> 0)
        int64_t rbx_3 = 0
        
        do
            int64_t* rdx_16 = var_98
            int32_t rax_12 = *(rdx_16 + rbx_3 + 8)
            int32_t r8_11 = rax_12 - 1
            
            if (rax_12 == 0)
                r8_11 = 0
            
            sub_140a20ba0(&var_78, *(rdx_16 + rbx_3), r8_11)
            rdi_3 += 1
            
            if (rdi_3 s< i_6)
                sub_140a20ba0(&var_78, &data_142d5a024, 1)
            
            rbx_3 += 0x10
        while (rdi_3 s< i_6)
        
        rcx_29 = var_78
    
    if (arg1 != &var_78)
        int64_t rax_13 = *arg1
        
        if (rax_13 != 0)
            sub_140a74f90(rax_13)
            rcx_29 = var_78
        
        *arg1 = rcx_29
        rcx_29 = 0
        arg1[1].d = var_70_1.d
        var_78 = 0
        *(arg1 + 0xc) = var_70_1:4.d
        int64_t var_70_2 = 0
    
    rsi.b = 1
    
    if (rcx_29 != 0)
        sub_140a74f90(rcx_29)
else
    int16_t* rcx_17 = *var_98
    
    if (rcx_17[1] != 0x3a)
    label_140b20998:
        
        while (i != 0)
            int64_t* rcx_19 = var_88
            int16_t* rdx_11
            
            if (rcx_19[1].d == 0)
                rdx_11 = &data_142d40450
            else
                rdx_11 = *rcx_19
            
            int64_t* rcx_20 = var_98
            int16_t* const rcx_21
            
            if (rcx_20[1].d == 0)
                rcx_21 = &data_142d40450
            else
                rcx_21 = *rcx_20
            
            if (sub_140a54510(rcx_21, rdx_11) != 0)
                break
            
            int64_t* rcx_22 = var_98
            int64_t rax_8 = *rcx_22
            
            if (rax_8 != 0)
                sub_140a74f90(rax_8)
                rcx_22 = var_98
            
            int32_t i_7 = i_6
            
            if (i_7 != 1)
                memmove(rcx_22, &rcx_22[2], (i_7 - 1) << 4)
                i_7 = i_6
            
            i_6 = i_7 - 1
            sub_140638bc0(&var_98)
            int64_t* rcx_25 = var_88
            int64_t rax_10 = *rcx_25
            
            if (rax_10 != 0)
                sub_140a74f90(rax_10)
                rcx_25 = var_88
            
            int32_t i_3 = i
            
            if (i_3 != 1)
                memmove(rcx_25, &rcx_25[2], (i_3 - 1) << 4)
                i_3 = i
            
            i = i_3 - 1
            sub_140638bc0(&var_88)
            
            if (i_6 == 0)
                break
        
        goto label_140b20a67
    
    int16_t* r8_6 = *var_88
    
    if (r8_6[1] != 0x3a)
        goto label_140b20998
    
    uint32_t rdx_10 = zx.d(*rcx_17)
    uint32_t rcx_18 = zx.d(*r8_6)
    int32_t rax_5
    rax_5.w = sbb.w((rcx_18 - 0x61).w, (rcx_18 - 0x61).w, rcx_18 - 0x61 u< 0x1a)
    rax_5.w &= 0x20
    rcx_18.w -= rax_5.w
    int32_t rax_6
    rax_6.w = sbb.w((rdx_10 - 0x61).w, (rdx_10 - 0x61).w, rdx_10 - 0x61 u< 0x1a)
    rax_6.w &= 0x20
    rdx_10.w -= rax_6.w
    
    if (rdx_10.w == rcx_18.w)
        goto label_140b20998
    
    rsi.b = 0

int32_t i_4 = i
int64_t* rbx_4 = var_88

if (i_4 != 0)
    int32_t i_1
    
    do
        int64_t rcx_33 = *rbx_4
        
        if (rcx_33 != 0)
            sub_140a74f90(rcx_33)
        
        rbx_4 = &rbx_4[2]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

int64_t* rcx_34 = var_88

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

int32_t i_5 = i_6
int64_t* rbx_5 = var_98

if (i_5 != 0)
    int32_t i_2
    
    do
        int64_t rcx_35 = *rbx_5
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)
        
        rbx_5 = &rbx_5[2]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

int64_t* rcx_36 = var_98

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

int64_t rcx_37 = var_48

if (rcx_37 != 0)
    sub_140a74f90(rcx_37)

int64_t rcx_38 = var_38

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

return zx.q(rsi.b)
