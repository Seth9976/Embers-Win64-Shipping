// 函数: sub_1406330a0
// 地址: 0x1406330a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdi = nullptr
int32_t arg_20 = 0
int64_t* rbx = arg2
int32_t rax = arg2[1].d
int32_t r9 = rax - 1

if (rax == 0)
    r9 = 0

if (r9 s< 1)
    int64_t rcx = *arg2
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    int64_t rcx_1 = *arg3
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    rax.b = 0
    return rax

sub_140b214e0(arg2)
sub_140a464c0()
int16_t* var_70
int64_t var_68
int16_t* var_60
int16_t* var_50

if (sub_140a23cf0(arg3, &data_142d6bbe8, 1, 0, 0xffffffff) == 0xffffffff)
    int16_t* rcx_4
    
    if (arg3[1].d == 0)
        rcx_4 = &data_142d40450
    else
        rcx_4 = *arg3
    
    int32_t rax_2 = sub_140a54570(rcx_4, &data_1437020ab)
    var_70 = nullptr
    var_68 = 0
    
    if (rax_2 != 0)
        int32_t rax_3 = arg3[1].d
        int16_t* const rcx_13
        int32_t rbx_2
        int32_t r14_2
        int16_t* r15_2
        
        if (rax_3 == 0)
            r15_2 = &data_142d40450
            rbx_2 = 0
            r14_2 = 0
            
            if (*r15_2 == 0 || rbx_2 s<= 0)
                rcx_13 = &data_142d40450
            else
            label_140633254:
                sub_1405947f0(&var_70, rbx_2 + 1)
                int32_t r14_4 = r14_2 + 1 + var_68.d
                var_68.d = r14_4
                
                if (r14_4 s> 0)
                    sub_140594770(&var_70)
                    r14_4 = var_68.d
                
                int16_t* r12_1 = var_70
                UnDecorator::getReferenceType(r12_1, r15_2, rbx_2 * 2)
                rcx_13 = r12_1
                r12_1[sx.q(r14_4) - 1] = 0
                
                if (r14_4 == 0)
                    rcx_13 = &data_142d40450
        else
            r15_2 = *arg3
            rbx_2 = rax_3 - 1
            
            if (rax_3 == 0)
                rbx_2 = 0
            
            if (rbx_2 s> 1)
                rbx_2 = 1
            
            r14_2 = rbx_2
            
            if (r15_2 != 0 && *r15_2 != 0 && rbx_2 s> 0)
                goto label_140633254
            
            rcx_13 = &data_142d40450
        int32_t rax_5 = sub_140a54570(rcx_13, U".")
        var_60 = nullptr
        int16_t** rcx_14 = &var_60
        int32_t var_58
        var_58.q = 0
        int32_t rbx_5
        int16_t** r12_3
        int16_t* r13_2
        int16_t* r14_6
        int16_t* r15_3
        int32_t var_54
        int64_t var_48
        
        if (rax_5 != 0)
            sub_1405947f0(rcx_14, 3)
            int32_t r12_4 = var_54
            int32_t r14_7 = var_58 + 3
            
            if (r14_7 s> r12_4)
                sub_140594770(&var_60)
                r12_4 = var_54
            
            r13_2 = var_60
            sub_1405a7220(r13_2, 3, "*.", 3, 0x3f)
            int32_t rbx_6 = arg3[1].d
            
            if (r14_7 s> 1)
                int32_t r15_6 = rbx_6 - 1
                
                if (rbx_6 == 0)
                    r15_6 = 0
                
                int32_t rcx_26
                
                if (r14_7 == 0)
                    rcx_26 = r14_7 + 1
                
                if (r14_7 != 0 || r15_6 == 0)
                    rcx_26 = 0
                
                var_60 = r13_2
                int32_t rdx_16 = rcx_26 + r14_7 + r15_6
                r13_2 = nullptr
                
                if (rdx_16 s> r12_4)
                    sub_1405947f0(&var_60, rdx_16)
                
                sub_140a20ba0(&var_60, *arg3, r15_6)
                r14_6 = var_60
                var_48.d = r14_7
                var_48:4.d = r12_4
                var_50 = r14_6
            else
                int64_t r15_5 = *arg3
                r14_6 = nullptr
                var_50 = nullptr
                var_48.d = rbx_6
                
                if (rbx_6 != 0)
                    sub_1405a4c70(&var_50, rbx_6, 0)
                    r14_6 = var_50
                    memcpy(r14_6, r15_5, rbx_6 * 2)
                else
                    var_48:4.d = 0
            
            r12_3 = &var_50
            r15_3 = var_60
            rbx_5 = 0xc
            arg_20.q = var_60
        else
            sub_1405947f0(rcx_14, rax_5 + 2)
            int32_t r12_2 = var_54
            int32_t rbx_3 = var_58 + 2
            
            if (rbx_3 s> r12_2)
                sub_140594770(&var_60)
                r12_2 = var_54
            
            int16_t* r13_1 = var_60
            arg_20.q = r13_1
            sub_1405a7220(r13_1, 2, U"*", 2, 0x3f)
            int32_t r14_5 = arg3[1].d
            
            if (rbx_3 s> 1)
                int32_t r15_4 = r14_5 - 1
                
                if (r14_5 == 0)
                    r15_4 = 0
                
                int32_t rcx_19
                
                if (rbx_3 == 0)
                    rcx_19 = rbx_3 + 1
                
                if (rbx_3 != 0 || r15_4 == 0)
                    rcx_19 = 0
                
                var_50 = r13_1
                int32_t rdx_10 = rbx_3 + r15_4 + rcx_19
                arg_20.q = 0
                var_48.d = rbx_3
                var_48:4.d = r12_2
                
                if (rdx_10 s> r12_2)
                    sub_1405947f0(&var_50, rdx_10)
                
                sub_140a20ba0(&var_50, *arg3, r15_4)
                r15_3 = var_50
                int32_t var_58_3 = var_48.d
                int32_t var_54_2 = var_48:4.d
                var_60 = r15_3
            else
                int64_t rbx_4 = *arg3
                r15_3 = nullptr
                var_60 = nullptr
                int32_t var_58_2 = r14_5
                
                if (r14_5 != 0)
                    sub_1405a4c70(&var_60, r14_5, 0)
                    r15_3 = var_60
                    memcpy(r15_3, rbx_4, r14_5 * 2)
                else
                    int32_t var_54_1 = 0
            
            r13_2 = var_60
            r12_3 = &var_60
            r14_6 = var_50
            rbx_5 = 3
        
        if (arg3 != r12_3)
            int64_t rcx_29 = *arg3
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
            
            int16_t* rax_11 = *r12_3
            *r12_3 = nullptr
            *arg3 = rax_11
            arg3[1].d = r12_3[1].d
            int32_t rax_13 = *(r12_3 + 0xc)
            r12_3[1] = 0
            r15_3 = var_60
            r14_6 = var_50
            *(arg3 + 0xc) = rax_13
        
        if ((rbx_5.b & 8) != 0)
            rbx_5 &= 0xfffffff7
            
            if (r14_6 != 0)
                sub_140a74f90(r14_6)
        
        if ((rbx_5.b & 4) != 0)
            rbx_5 &= 0xfffffffb
            
            if (r13_2 != 0)
                sub_140a74f90(r13_2)
        
        if ((rbx_5.b & 2) != 0)
            rbx_5 &= 0xfffffffd
            
            if (r15_3 != 0)
                sub_140a74f90(r15_3)
        
        if ((rbx_5.b & 1) != 0)
            int64_t rax_14 = arg_20.q
            
            if (rax_14 != 0)
                sub_140a74f90(rax_14)
        
        int16_t* rcx_34 = var_70
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
    else
        sub_1405947f0(&var_70, rax_2 + 4)
        int32_t r15_1 = var_68:4.d
        int32_t r14_1 = var_68.d + 4
        var_68.d = r14_1
        
        if (r14_1 s> r15_1)
            sub_140594770(&var_70)
            r15_1 = var_68:4.d
            r14_1 = var_68.d
        
        int16_t* rbx_1 = var_70
        sub_1405a7220(rbx_1, 4, "*.*", 4, 0x3f)
        
        if (arg3 != &var_70)
            int64_t rcx_8 = *arg3
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            *arg3 = rbx_1
            arg3[1].d = r14_1
            *(arg3 + 0xc) = r15_1
        else if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
    
    rbx = arg2

var_50 = nullptr
int64_t var_48_1 = 0
sub_1405947f0(&var_50, 2)
int32_t r13_3 = var_48_1:4.d
int32_t r14_8 = var_48_1.d + 2
var_48_1.d = r14_8

if (r14_8 s> r13_3)
    sub_140594770(&var_50)
    r13_3 = var_48_1:4.d
    r14_8 = var_48_1.d

int16_t* r15_7 = var_50
sub_1405a7220(r15_7, 2, &data_142d63b88, 2, 0x3f)
int32_t r12_5 = rbx[1].d
int16_t* r12_6

if (r12_5 s> 1)
    int32_t rax_15
    int32_t r14_9
    
    if (r14_8 == 0)
        r14_9 = 0
        rax_15 = 0
    else
        r14_9 = r14_8 - 1
        rax_15 = r14_9
    
    int64_t rbx_7 = *rbx
    var_50 = nullptr
    var_48_1.d = r12_5
    sub_1405a4c70(&var_50, rax_15 + r12_5, 0)
    memcpy(var_50, rbx_7, r12_5 * 2)
    sub_140a20ba0(&var_50, r15_7, r14_9)
    r12_6 = var_50
    r14_8 = var_48_1.d
    r13_3 = var_48_1:4.d
    var_50 = nullptr
    int64_t var_48_2 = 0
else
    r12_6 = r15_7
    r15_7 = nullptr

int32_t rbx_8 = arg3[1].d
arg_20.q = r12_6

if (r14_8 s> 1)
    int32_t r12_7 = rbx_8 - 1
    var_60 = arg_20.q
    
    if (rbx_8 == 0)
        r12_7 = 0
    
    int32_t var_54_4 = r13_3
    int32_t rdx_24 = r14_8 + r12_7
    
    if (rdx_24 s> r13_3)
        sub_1405947f0(&var_60, rdx_24)
    
    sub_140a20ba0(&var_60, *arg3, r12_7)
    rbx_8 = r14_8
    rdi = var_60
else
    int64_t r14_10 = *arg3
    var_70 = nullptr
    var_68.d = rbx_8
    
    if (rbx_8 != 0)
        sub_1405a4c70(&var_70, rbx_8, 0)
        rdi = var_70
        memcpy(rdi, r14_10, rbx_8 * 2)
        rbx_8 = var_68.d
    
    if (r12_6 != 0)
        sub_140a74f90(r12_6)

if (r15_7 != 0)
    sub_140a74f90(r15_7)

int16_t* const r8_14 = &data_142d40450
int64_t r9_1
r9_1.b = 1

if (rbx_8 != 0)
    r8_14 = rdi

(*(data_14399ea08 + 0x78))(&data_14399ea08, arg1, r8_14, r9_1, 0)

if (rdi != 0)
    sub_140a74f90(rdi)

int64_t rcx_49 = *arg2

if (rcx_49 != 0)
    sub_140a74f90(rcx_49)

int64_t rcx_50 = *arg3

if (rcx_50 != 0)
    sub_140a74f90(rcx_50)

int64_t rax_18
rax_18.b = 1
return rax_18
