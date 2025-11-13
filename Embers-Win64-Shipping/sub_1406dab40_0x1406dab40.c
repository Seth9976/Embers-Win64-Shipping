// 函数: sub_1406dab40
// 地址: 0x1406dab40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg2
int64_t* rsi = arg1
int64_t var_b0
int64_t var_a0
int64_t var_98
int64_t var_80
int64_t var_70
void var_60
int32_t arg_18

if (arg3 == 0)
    int32_t rcx_31 = arg2[1].d
    int16_t* r10_1 = &data_142d40450
    arg_18 = 0
    int64_t r15_3 = 0
    int16_t* arg_20 = &data_142d40450
    int32_t rsi_8 = 0
    int32_t rdi_2 = rcx_31 - 1
    int32_t rdx_17 = rdi_2
    
    if (rcx_31 == 0)
        rdx_17 = 0
    
    if (rdx_17 s>= 0)
        if (rcx_31 == 0)
            rdi_2 = 0
        
        int32_t r8_7 = rdi_2
        
        if (rdi_2 s> 1)
            r8_7 = 1
        
        int64_t r9_2 = sx.q(r8_7)
        
        if (sx.q(rdx_17) + 1 s< r9_2)
            rdi_2 = r8_7
        else if (sx.q(rdx_17) + 1 s< sx.q(rdi_2))
            rdi_2 = rdx_17 + 1
        
        int16_t* const rax_21
        
        if (rcx_31 == 0)
            rax_21 = &data_142d40450
        else
            rax_21 = *r14
        
        int16_t* r13_3 = &rax_21[r9_2]
        var_a0 = 0
        int32_t rdi_3 = rdi_2 - r8_7
        var_98 = 0
        arg_18 = 0
        
        if (r13_3 != 0 && *r13_3 != 0 && rdi_3 s> 0)
            sub_1405947f0(&var_a0, rdi_3 + 1)
            int32_t r12_5 = var_98:4.d
            arg_18 = r12_5
            rsi_8 = var_98.d + 1 + rdi_3
            var_98.d = rsi_8
            
            if (rsi_8 s> r12_5)
                sub_140594770(&var_a0)
                rsi_8 = var_98.d
                arg_18 = var_98:4.d
            
            r15_3 = var_a0
            UnDecorator::getReferenceType(r15_3, r13_3, rdi_3 * 2)
            r10_1 = &data_142d40450
            *(r15_3 + (sx.q(rsi_8) << 1) - 2) = 0
        
        rcx_31 = r14[1].d
    
    var_80 = 0
    int32_t rdi_4 = rcx_31 - 1
    
    if (rcx_31 == 0)
        rdi_4 = 0
    
    int32_t rax_24 = rdi_4
    
    if (rdi_4 s> 0)
        rax_24 = 0
    
    int64_t rdx_23 = sx.q(rax_24)
    
    if (rax_24 s> 1)
        rdi_4 = rax_24
    else if (rdi_4 s> 1)
        rdi_4 = 1
    
    if (rcx_31 != 0)
        r10_1 = *r14
        arg_20 = r10_1
    
    void* rcx_35 = &r10_1[rdx_23]
    var_b0 = 0
    int32_t rdi_5 = rdi_4 - rax_24
    int64_t var_a8_3 = 0
    int32_t r12_6 = 0
    int32_t r13_4 = 0
    int64_t rdi_6
    
    if (rcx_35 == 0 || *rcx_35 == 0 || rdi_5 s<= 0)
        rdi_6 = var_b0
    else
        sub_1405947f0(&var_b0, rdi_5 + 1)
        r13_4 = var_a8_3:4.d
        r12_6 = var_a8_3.d + 1 + rdi_5
        var_a8_3.d = r12_6
        
        if (r12_6 s> r13_4)
            sub_140594770(&var_b0)
            r13_4 = var_a8_3:4.d
            r12_6 = var_a8_3.d
        
        rdi_6 = var_b0
        UnDecorator::getReferenceType(rdi_6, &arg_20[rdx_23], rdi_5 * 2)
        *(rdi_6 + (sx.q(r12_6) << 1) - 2) = 0
        int64_t rcx_40 = var_80
        
        if (rcx_40 != 0)
            sub_140a74f90(rcx_40)
    
    var_80 = rdi_6
    int64_t var_78
    var_78.d = r12_6
    var_78:4.d = r13_4
    int64_t* rax_27 = sub_140a35990(&var_80, &var_70)
    int32_t rdx_28 = rax_27[1].d
    int64_t rdi_7
    int32_t r12_8
    
    if (rdx_28 s> 1)
        int32_t rsi_10
        
        if (rsi_8 == 0)
            rsi_10 = 0
        else
            rsi_10 = rsi_8 - 1
        
        int64_t rax_28 = *rax_27
        *rax_27 = 0
        var_98.d = rdx_28
        int32_t rdx_29 = rdx_28 + rsi_10
        var_a0 = rax_28
        int32_t rax_29 = *(rax_27 + 0xc)
        var_98:4.d = rax_29
        rax_27[1] = 0
        
        if (rdx_29 s> rax_29)
            sub_1405947f0(&var_a0, rdx_29)
        
        sub_140a20ba0(&var_a0, r15_3, rsi_10)
        rdi_7 = var_a0
        rsi_8 = var_98.d
        r12_8 = var_98:4.d
        var_a0 = 0
        int64_t var_98_2 = 0
    else
        r12_8 = arg_18
        rdi_7 = r15_3
        r15_3 = 0
    
    if (r14 != &var_60)
        int64_t rcx_45 = *r14
        
        if (rcx_45 != 0)
            sub_140a74f90(rcx_45)
        
        *r14 = rdi_7
        r14[1].d = rsi_8
        *(r14 + 0xc) = r12_8
    else if (rdi_7 != 0)
        sub_140a74f90(rdi_7)
    
    int64_t rcx_47 = var_70
    
    if (rcx_47 != 0)
        sub_140a74f90(rcx_47)
    
    int64_t rcx_48 = var_80
    
    if (rcx_48 != 0)
        sub_140a74f90(rcx_48)
    
    if (r15_3 != 0)
        sub_140a74f90(r15_3)
    
    *arg1 = 0
    *arg1 = *r14
    *r14 = 0
    arg1[1].d = r14[1].d
    *(arg1 + 0xc) = *(r14 + 0xc)
    r14[1] = 0
    int64_t rcx_50 = *r14
    
    if (rcx_50 != 0)
        sub_140a74f90(rcx_50)
    
    return arg1

void* var_90 = nullptr
int32_t i_2 = 0
sub_140a2ccb0(r14, &var_90, &data_142d404d4, 0)
void* rdi = var_90
void* rax_3 = (sx.q(i_2) << 4) + rdi

if (rdi != rax_3)
    do
        int32_t rcx_4 = *(rdi + 8)
        int64_t r14_1 = 0
        arg_18 = 0
        int32_t r15_1 = 0
        int32_t rsi_1 = rcx_4 - 1
        int32_t rax_4 = rsi_1
        
        if (rcx_4 == 0)
            rax_4 = 0
        
        if (rax_4 s>= 0)
            if (rcx_4 == 0)
                rsi_1 = 0
            
            int32_t r8 = rsi_1
            
            if (rsi_1 s> 1)
                r8 = 1
            
            int64_t r9_1 = sx.q(r8)
            
            if (sx.q(rax_4) + 1 s< r9_1)
                rsi_1 = r8
            else if (sx.q(rax_4) + 1 s< sx.q(rsi_1))
                rsi_1 = rax_4 + 1
            
            int16_t* const rax_6
            
            if (rcx_4 == 0)
                rax_6 = &data_142d40450
            else
                rax_6 = *rdi
            
            int16_t* r13_1 = &rax_6[r9_1]
            var_b0 = 0
            int32_t rsi_2 = rsi_1 - r8
            int64_t var_a8_1 = 0
            arg_18 = 0
            
            if (r13_1 != 0 && *r13_1 != 0 && rsi_2 s> 0)
                sub_1405947f0(&var_b0, rsi_2 + 1)
                int32_t r12_1 = var_a8_1:4.d
                arg_18 = r12_1
                r15_1 = var_a8_1.d + 1 + rsi_2
                var_a8_1.d = r15_1
                
                if (r15_1 s> r12_1)
                    sub_140594770(&var_b0)
                    r15_1 = var_a8_1.d
                    arg_18 = var_a8_1:4.d
                
                r14_1 = var_b0
                UnDecorator::getReferenceType(r14_1, r13_1, rsi_2 * 2)
                *(r14_1 + (sx.q(r15_1) << 1) - 2) = 0
            
            rcx_4 = *(rdi + 8)
            var_b0 = 0
            int64_t var_a8_2 = 0
        
        var_80 = 0
        int32_t rsi_3 = rcx_4 - 1
        int64_t var_78_1 = 0
        
        if (rcx_4 == 0)
            rsi_3 = 0
        
        int32_t rax_8 = rsi_3
        
        if (rsi_3 s> 0)
            rax_8 = 0
        
        if (rax_8 s> 1)
            rsi_3 = rax_8
        else if (rsi_3 s> 1)
            rsi_3 = 1
        
        int16_t* const rcx_5
        
        if (rcx_4 == 0)
            rcx_5 = &data_142d40450
        else
            rcx_5 = *rdi
        
        int16_t* rcx_6 = &rcx_5[sx.q(rax_8)]
        int64_t var_c0 = 0
        int32_t rsi_4 = rsi_3 - rax_8
        int64_t var_b8_1 = 0
        int32_t r12_2 = 0
        int32_t r13_2 = 0
        int64_t rsi_5
        
        if (rcx_6 == 0 || *rcx_6 == 0 || rsi_4 s<= 0)
            rsi_5 = var_c0
        else
            sub_1405947f0(&var_c0, rsi_4 + 1)
            r13_2 = var_b8_1:4.d
            r12_2 = var_b8_1.d + 1 + rsi_4
            var_b8_1.d = r12_2
            
            if (r12_2 s> r13_2)
                sub_140594770(&var_c0)
                r13_2 = var_b8_1:4.d
                r12_2 = var_b8_1.d
            
            rsi_5 = var_c0
            UnDecorator::getReferenceType(rsi_5, rcx_6, rsi_4 * 2)
            *(rsi_5 + (sx.q(r12_2) << 1) - 2) = 0
            int64_t rcx_10 = var_80
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
        
        var_80 = rsi_5
        var_c0 = 0
        var_78_1.d = r12_2
        var_78_1:4.d = r13_2
        int64_t var_b8_2 = 0
        int64_t* rax_10 = sub_140a35990(&var_80, &var_70)
        int32_t rdx_12 = rax_10[1].d
        int64_t rsi_6
        int32_t r12_4
        
        if (rdx_12 s> 1)
            int64_t rax_11 = *rax_10
            int32_t rsi_7 = r15_1 - 1
            *rax_10 = 0
            var_98.d = rdx_12
            
            if (r15_1 == 0)
                rsi_7 = 0
            
            var_a0 = rax_11
            int32_t rax_12 = *(rax_10 + 0xc)
            int32_t rdx_13 = rdx_12 + rsi_7
            var_98:4.d = rax_12
            rax_10[1] = 0
            
            if (rdx_13 s> rax_12)
                sub_1405947f0(&var_a0, rdx_13)
            
            sub_140a20ba0(&var_a0, r14_1, rsi_7)
            rsi_6 = var_a0
            r15_1 = var_98.d
            r12_4 = var_98:4.d
            var_a0 = 0
            var_98 = 0
        else
            r12_4 = arg_18
            rsi_6 = r14_1
            r14_1 = 0
        
        if (rdi != &var_60)
            int64_t rcx_15 = *rdi
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            *rdi = rsi_6
            *(rdi + 8) = r15_1
            *(rdi + 0xc) = r12_4
        else if (rsi_6 != 0)
            sub_140a74f90(rsi_6)
        
        int64_t rcx_17 = var_70
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        int64_t rcx_18 = var_80
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        rdi += 0x10
    while (rdi != rax_3)
    
    r14 = arg2
    rsi = arg1

var_a0 = 0
int32_t var_98_1 = 0
sub_1405947f0(&var_a0, 2)
int32_t rax_13 = var_98_1 + 2
var_98_1 = rax_13

if (rax_13 s> 0)
    sub_140594770(&var_a0)

sub_1405a7220(var_a0, 2, &(*U""\tv 0")[3], 2, 0x3f)
int64_t* rax_14 = sub_1420c93e0(&var_70, &var_90, &var_a0)

if (r14 != rax_14)
    int64_t rcx_24 = *r14
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    *r14 = *rax_14
    *rax_14 = 0
    r14[1].d = rax_14[1].d
    *(r14 + 0xc) = *(rax_14 + 0xc)
    rax_14[1] = 0

int64_t rcx_26 = var_70

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t rcx_27 = var_a0

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

int32_t i_1 = i_2
*rsi = 0
*rsi = *r14
*r14 = 0
rsi[1].d = r14[1].d
*(rsi + 0xc) = *(r14 + 0xc)
r14[1] = 0
void* rbx_1 = var_90

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_28 = *rbx_1
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        rbx_1 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_90

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t rcx_30 = *r14

if (rcx_30 != 0)
    sub_140a74f90(rcx_30)

return rsi
