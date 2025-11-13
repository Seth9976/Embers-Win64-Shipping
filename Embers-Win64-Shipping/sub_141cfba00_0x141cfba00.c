// 函数: sub_141cfba00
// 地址: 0x141cfba00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_98 = arg1
int32_t r9 = arg1[0x1f].d
int32_t r8 = r9 - 1

if (r9 == 0)
    r8 = -1

int32_t rax = r9 - 1

if (r9 == 0)
    rax = -1

if (r9 == 0)
    rax = 0

if (rax s> 0)
    if (r9 == 0)
        r8 = 0
    
    if (*(arg1[0x1e] + (sx.q(r8) << 1) - 2) != 0x2f)
        sub_140a20ba0(&arg1[0x1e], &data_142d5a024, 1)

void* rcx_2 = *arg1
int32_t var_90 = *(rcx_2 + 0x18)
int64_t rdi = sx.q(*(rcx_2 + 0x18))
int32_t rax_3 = (rdi + 1).d
*(rcx_2 + 0x18) = rax_3

if (rax_3 s> *(rcx_2 + 0x1c))
    sub_14119a680(rcx_2 + 0x10, rdi.d)

void* rdx_2 = *(rcx_2 + 0x10)

if ((rdx_2.b & 1) != 0)
    rdx_2 = (rdx_2 s>> 1) + rcx_2 + 0x10

sub_141cf7990(rdi * 0x50 + rdx_2, arg2)
arg1[0x26].d += 1
int32_t rax_4 = arg1[0x1f].d
int32_t r9_1 = arg3[1].d
void* var_88 = nullptr
int32_t rdx_4 = rax_4 - 1

if (rax_4 == 0)
    rdx_4 = 0

int32_t rbx_1 = r9_1 - 1

if (r9_1 == 0)
    rbx_1 = 0

int32_t rcx_7

if (rdx_4 s>= 0)
    rcx_7 = rbx_1
    
    if (rdx_4 s< rbx_1)
        rcx_7 = rdx_4
else
    rcx_7 = 0

int64_t r8_1 = sx.q(rcx_7)

if (sx.q(rdx_4) + 0x7fffffff s< r8_1)
    rbx_1 = rcx_7
else if (sx.q(rdx_4) + 0x7fffffff s< sx.q(rbx_1))
    rbx_1 = rdx_4 + 0x7fffffff

int16_t* const rax_6

if (r9_1 == 0)
    rax_6 = &data_142d40450
else
    rax_6 = *arg3

void* rsi_1 = nullptr
int16_t* r15 = &rax_6[r8_1]
int32_t rdi_1 = 0
void* var_c8 = nullptr
int32_t rbx_2 = rbx_1 - rcx_7
int64_t var_c0 = 0
int32_t r14_1 = 0

if (r15 != 0 && *r15 != 0 && rbx_2 s> 0)
    if (rbx_2 + 1 s> 0)
        sub_1405947f0(&var_c8, rbx_2 + 1)
        r14_1 = var_c0:4.d
        rdi_1 = var_c0.d
        rsi_1 = var_c8
    
    rdi_1 += rbx_2 + 1
    var_c0.d = rdi_1
    
    if (rdi_1 s> r14_1)
        sub_140594770(&var_c8)
        r14_1 = var_c0:4.d
        rdi_1 = var_c0.d
        rsi_1 = var_c8
    
    UnDecorator::getReferenceType(rsi_1, r15, rbx_2 * 2)
    *(rsi_1 + (sx.q(rdi_1) << 1) - 2) = 0
    void* rcx_11 = var_88
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

var_88 = rsi_1
int32_t var_80 = rdi_1
int32_t var_7c = r14_1
int16_t* var_b8
sub_140b1a780(&var_b8, &var_88)
int64_t var_50
sub_140b1a780(&var_50, arg3)
int32_t var_b0
int32_t rbx_3 = var_b0

if (rbx_3 != 0 && rbx_3 - 1 s> 0 && var_b8[sx.q(rbx_3 - 1) - 1] != 0x2f)
    sub_140a20ba0(&var_b8, &data_142d5a024, 1)
    rbx_3 = var_b0

int16_t* rdi_3 = var_b8
var_c8 = nullptr
var_c0.d = rbx_3

if (rbx_3 != 0)
    sub_1405e3e80(&var_c8, rbx_3, 0)
    void* rcx_17
    
    if ((var_c8.b & 1) == 0)
        rcx_17 = var_c8
    else
        rcx_17 = &var_c8 + (var_c8 s>> 1)
    
    memcpy(rcx_17, rdi_3, rbx_3 * 2)
else
    var_c0:4.d = 0

void** r14_2 = var_98
void* rbx_5 = *r14_2 + 0x20
sub_141d02cc0(rbx_5, &var_98, &var_c8)
int64_t rax_12 = sx.q(var_98.d)
void* rax_15

if (rax_12.d == 0xffffffff)
    rax_15 = nullptr
else
    void* rdx_15 = *rbx_5
    
    if ((rdx_15.b & 1) != 0)
        rdx_15 = (rdx_15 s>> 1) + rbx_5
    
    rax_15 = rax_12 * 0x50 + rdx_15

void* rdi_4 = rax_15 + 0x10

if (rax_15 == 0)
    rdi_4 = nullptr

sub_140a1d5c0(&var_c8)
void* var_a8
void** var_78
int64_t var_60

if (rdi_4 != 0)
    int64_t* rax_16 = sub_140b18970(&var_60, &var_88)
    var_a8 = nullptr
    int32_t rbx_6 = rax_16[1].d
    int64_t rsi_2 = *rax_16
    int32_t var_a0 = rbx_6
    
    if (rbx_6 != 0)
        sub_1405e3e80(&var_a8, rbx_6, 0)
        void* rcx_22
        
        if ((var_a8.b & 1) == 0)
            rcx_22 = var_a8
        else
            rcx_22 = &var_a8 + (var_a8 s>> 1)
        
        memcpy(rcx_22, rsi_2, rbx_6 * 2)
    else
        int32_t var_9c_1 = 0
    
    var_78 = &var_a8
    int32_t* var_70 = &var_90
    sub_141cf1800(rdi_4, &var_98, &var_78, nullptr)
    sub_140a1d5c0(&var_a8)
    int64_t rcx_25 = var_60
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
    
label_141cfbd62:
    int64_t rcx_26 = var_50
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    int16_t* rcx_27 = var_b8
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    void* rcx_28 = var_88
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)
    
    return sub_140a1d5c0(&arg2[6])

int16_t* rdi_5 = var_b8
var_a8 = nullptr
int32_t var_a0_1 = var_b0

if (var_b0 != 0)
    sub_1405e3e80(&var_a8, var_b0, 0)
    void* rcx_32
    
    if ((var_a8.b & 1) == 0)
        rcx_32 = var_a8
    else
        rcx_32 = &var_a8 + (var_a8 s>> 1)
    
    memcpy(rcx_32, rdi_5, var_b0 * 2)
else
    int32_t var_9c_2 = 0

int64_t* rax_22 = sub_141cf1db0(*r14_2 + 0x20, &var_a8)
sub_140a1d5c0(&var_a8)
int64_t* rax_23 = sub_140b18970(&var_60, &var_88)
var_c8 = nullptr
int32_t rbx_8 = rax_23[1].d
int64_t rdi_6 = *rax_23
var_c0.d = rbx_8

if (rbx_8 != 0)
    sub_1405e3e80(&var_c8, rbx_8, 0)
    void* rcx_38
    
    if ((var_c8.b & 1) == 0)
        rcx_38 = var_c8
    else
        rcx_38 = &var_c8 + (var_c8 s>> 1)
    
    memcpy(rcx_38, rdi_6, rbx_8 * 2)
else
    var_c0:4.d = 0

var_78 = &var_c8
int32_t* var_70_1 = &var_90
sub_141cf1800(rax_22, &var_98, &var_78, nullptr)
sub_140a1d5c0(&var_c8)
int64_t rcx_41 = var_60

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

while (true)
label_141cfbeb4:
    int16_t* rdi_7 = var_b8
label_141cfbeb8:
    int32_t rbx_9 = var_b0
    
    while (true)
        int16_t* const rdx_28 = &data_142d40450
        
        if (rbx_9 != 0)
            rdx_28 = rdi_7
        
        int16_t* const rcx_42
        
        if (arg1[0x1f].d == 0)
            rcx_42 = &data_142d40450
        else
            rcx_42 = arg1[0x1e]
        
        if (sub_140a54510(rcx_42, rdx_28) == 0)
            goto label_141cfbd62
        
        rbx_9 = var_b0
        int32_t rcx_43 = rbx_9 - 1
        
        if (rbx_9 == 0)
            rcx_43 = 0
        
        int32_t rax_27 = rbx_9 - 1
        
        if (rbx_9 == 0)
            rax_27 = 0
        
        int32_t r10_1
        
        if (rcx_43 - 1 s>= 0)
            r10_1 = rax_27
            
            if (rcx_43 s<= rax_27)
                r10_1 = rcx_43 - 1
        else
            r10_1 = 0
        
        int32_t rax_28 = rax_27 - r10_1
        int32_t rdi_8 = rbx_9 - 1
        
        if (rbx_9 == 0)
            rdi_8 = 0
        
        int32_t rdi_9 = rdi_8 - r10_1
        
        if (rax_28 s>= 0)
            if (rax_28 s< rdi_9)
                rdi_9 = rax_28
            
            if (rdi_9 != 0)
                int32_t rax_30 = rbx_9 - r10_1
                
                if (rax_30 != rdi_9)
                    int16_t* r9_2 = var_b8
                    memmove(&r9_2[sx.q(r10_1)], &r9_2[sx.q(r10_1 + rdi_9)], (rax_30 - rdi_9) * 2)
                    rbx_9 = var_b0
                
                rbx_9 -= rdi_9
                var_b0 = rbx_9
        
        rdi_7 = var_b8
        void* rcx_46 = &rdi_7[sx.q(rbx_9)]
        
        while (rcx_46 != rdi_7)
            rcx_46 -= 2
            
            if (*rcx_46 == 0x2f)
                int32_t rcx_48 = ((rcx_46 - rdi_7) s>> 1).d
                
                if (rcx_48 == 0xffffffff)
                    goto label_141cfbf93
                
                int32_t rax_35 = rbx_9 - 1
                
                if (rbx_9 == 0)
                    rax_35 = 0
                
                int32_t r9_3
                
                if (rcx_48 s>= 0)
                    r9_3 = rax_35
                    
                    if (rcx_48 s< rax_35)
                        r9_3 = rcx_48
                else
                    r9_3 = 0
                
                int32_t rax_36 = rax_35 - r9_3
                int32_t rsi_5 = rbx_9 - 1
                
                if (rbx_9 == 0)
                    rsi_5 = 0
                
                int32_t rsi_6 = rsi_5 - r9_3
                
                if (rax_36 s>= 0)
                    if (rax_36 s< rsi_6)
                        rsi_6 = rax_36
                    
                    if (rsi_6 != 0)
                        int32_t rax_38 = rbx_9 - r9_3
                        
                        if (rax_38 != rsi_6)
                            memmove(&rdi_7[sx.q(r9_3)], &rdi_7[sx.q(r9_3 + rsi_6)], 
                                (rax_38 - rsi_6) * 2)
                            rbx_9 = var_b0
                            rdi_7 = var_b8
                        
                        rbx_9 -= rsi_6
                        var_b0 = rbx_9
                
                if (rbx_9 != 0 && rbx_9 - 1 s> 0 && rdi_7[sx.q(rbx_9 - 1) - 1] != 0x2f)
                    sub_140a20ba0(&var_b8, &data_142d5a024, 1)
                    rbx_9 = var_b0
                    rdi_7 = var_b8
                
                var_a8 = nullptr
                int32_t var_a0_2 = rbx_9
                
                if (rbx_9 != 0)
                    sub_1405e3e80(&var_a8, rbx_9, 0)
                    void* rcx_53
                    
                    if ((var_a8.b & 1) == 0)
                        rcx_53 = var_a8
                    else
                        rcx_53 = &var_a8 + (var_a8 s>> 1)
                    
                    memcpy(rcx_53, rdi_7, rbx_9 * 2)
                else
                    int32_t var_9c_3 = 0
                
                void* rbx_11 = *r14_2 + 0x20
                sub_141d02cc0(rbx_11, &var_98, &var_a8)
                int64_t rax_46 = sx.q(var_98.d)
                void* rbx_14
                
                if (rax_46.d == 0xffffffff)
                    rbx_14 = nullptr
                else
                    void* rdx_35 = *rbx_11
                    
                    if ((rdx_35.b & 1) != 0)
                        rdx_35 = (rdx_35 s>> 1) + rbx_11
                    
                    rbx_14 = rax_46 * 0x50 + rdx_35
                
                sub_140a1d5c0(&var_a8)
                rdi_7 = var_b8
                void* rax_47 = rbx_14 + 0x10
                
                if (rbx_14 == 0)
                    rax_47 = nullptr
                
                if (rax_47 != 0)
                    goto label_141cfbeb8
                
                var_c8 = nullptr
                var_c0.d = var_b0
                
                if (var_b0 != 0)
                    sub_1405e3e80(&var_c8, var_b0, 0)
                    void* rcx_57
                    
                    if ((var_c8.b & 1) == 0)
                        rcx_57 = var_c8
                    else
                        rcx_57 = &var_c8 + (var_c8 s>> 1)
                    
                    memcpy(rcx_57, rdi_7, var_b0 * 2)
                else
                    var_c0:4.d = 0
                
                sub_141cf1db0(*r14_2 + 0x20, &var_c8)
                sub_140a1d5c0(&var_c8)
                goto label_141cfbeb4
        
    label_141cfbf93:
        
        if (&var_b8 != &arg1[0x1e])
            rbx_9 = arg1[0x1f].d
            int64_t rsi_4 = arg1[0x1e]
            var_b0 = rbx_9
            int32_t var_ac
            
            if (rbx_9 == 0 && var_ac == 0)
                var_ac = 0
                continue
            
            sub_1405a4c70(&var_b8, rbx_9, var_ac)
            memcpy(var_b8, rsi_4, rbx_9 * 2)
            break
