// 函数: sub_1425c0260
// 地址: 0x1425c0260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    int64_t* rcx_30 = *(arg1 + 8)
    
    if ((*(*rcx_30 + 0xe8))(rcx_30) == 0)
        int64_t* rcx_31 = *(arg1 + 8)
        
        if ((*(*rcx_31 + 0xd8))(rcx_31, arg2) != 0)
            return 0
    
    return 1

char arg_18 = 1
int16_t* r15 = nullptr
int16_t* var_68 = nullptr
int32_t rsi = 0
int32_t var_60 = 0
int32_t r14 = 0
int32_t var_5c
int32_t rax_1

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_68, rbx_1.d + 1)
        r14 = var_5c
        rsi = var_60
        r15 = var_68
    
    rsi += rbx_1.d + 1
    
    if (rsi s> r14)
        sub_140594770(&var_68)
        r14 = var_5c
        r15 = var_68
    
    UnDecorator::getReferenceType(r15, arg2, (rbx_1.d + 1) * 2)
    rax_1 = 2

if (arg2 == 0 || *arg2 == 0 || rsi == 0)
    rax_1 = 3

int32_t rdx_3 = rsi + rax_1
int16_t* var_48 = r15
int32_t var_3c = r14

if (rdx_3 s> r14)
    sub_1405947f0(&var_48, rdx_3)

sub_140a2cf70(&var_48, &data_142d6bbe8, 1)
void* r14_1 = arg1
int16_t* const r8_2 = &data_142d40450
int16_t* r15_1 = nullptr
uint64_t var_78 = 0

if (rsi != 0)
    r8_2 = var_48

int64_t var_70 = 0
char var_88 = 0
sub_1425c0ba0(r14_1, &var_78, r8_2, 1)
int32_t i_3 = var_70.d
int32_t r12 = 0
int16_t* var_58
uint64_t arg_20

if (i_3 s> 0)
    int64_t r13_1 = 0
    
    do
        uint64_t rax_2 = var_78
        arg_20 = rax_2
        int32_t rsi_1 = 0
        var_68 = nullptr
        int32_t r14_2 = 0
        int32_t var_60_1 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rbx_3 = -1
            
            do
                rbx_3 += 1
            while (arg2[rbx_3] != 0)
            
            if (rbx_3.d + 1 s> 0)
                sub_1405947f0(&var_68, rbx_3.d + 1)
                r14_2 = var_5c
                rsi_1 = var_60_1
                r15_1 = var_68
            
            rsi_1 += rbx_3.d + 1
            
            if (rsi_1 s> r14_2)
                sub_140594770(&var_68)
                r14_2 = var_5c
                r15_1 = var_68
            
            UnDecorator::getReferenceType(r15_1, arg2, (rbx_3.d + 1) * 2)
            rax_2 = arg_20
        
        int32_t rax_3 = *(rax_2 + r13_1 + 8)
        int32_t rbx_5 = rax_3 - 1
        
        if (rax_3 == 0)
            rbx_5 = 0
        
        int32_t rax_5
        
        if (rsi_1 == 0)
            rax_5 = rsi_1 + 2
        
        if (rsi_1 != 0 || rbx_5 == 0xffffffff)
            rax_5 = 1
        
        var_58 = r15_1
        r15_1 = nullptr
        int32_t rdx_9 = rsi_1 + rbx_5 + rax_5
        var_68 = nullptr
        int32_t var_4c_1 = r14_2
        int64_t var_60_2 = 0
        
        if (rdx_9 s> r14_2)
            sub_1405947f0(&var_58, rdx_9)
        
        sub_140a2cf70(&var_58, *(arg_20 + r13_1), rbx_5)
        int16_t* rdx_12 = &data_142d40450
        r14_1 = arg1
        
        if (rsi_1 != 0)
            rdx_12 = var_58
        
        int64_t* rcx_11 = *(r14_1 + 8)
        char rax_7 = (*(*rcx_11 + 0x70))(rcx_11, rdx_12)
        char rax_10
        
        if (rax_7 != 0)
            int64_t* rcx_12 = *(r14_1 + 8)
            int16_t* rdx_13 = &data_142d40450
            
            if (rsi_1 != 0)
                rdx_13 = var_58
            
            (*(*rcx_12 + 0x98))(rcx_12, rdx_13, 0)
            int64_t* rcx_13 = *(r14_1 + 8)
            int16_t* rdx_14 = &data_142d40450
            
            if (rsi_1 != 0)
                rdx_14 = var_58
            
            rax_10 = (*(*rcx_13 + 0x80))(rcx_13, rdx_14)
        
        if (rax_7 == 0 || rax_10 == 0)
            arg_18 = 0
        
        int16_t* rcx_14 = var_58
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        i_3 = var_70.d
        r12 += 1
        r13_1 += 0x10
    while (r12 s< i_3)

uint64_t rsi_2 = var_78

if (i_3 != 0)
    int32_t i
    
    do
        int64_t rcx_15 = *rsi_2
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        rsi_2 += 0x10
        i = i_3
        i_3 -= 1
    while (i != 1)

bool cond:1 = var_70:4.d == 0
var_70.d = 0

if (not(cond:1))
    sub_14061cd70(&var_78, 0)

int16_t* r8_6 = &data_142d40450
char var_88_1 = 1

if (rsi != 0)
    r8_6 = var_48

sub_1425c0ba0(r14_1, &var_78, r8_6, 0)
int32_t i_1 = 0
char rbx_9

if (var_70.d s<= 0)
    rbx_9 = arg_18
else
    int64_t r13_2 = 0
    
    do
        uint64_t rax_11 = var_78
        arg_20 = rax_11
        rsi_2 = 0
        var_68 = nullptr
        int32_t r14_3 = 0
        int32_t var_60_3 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rbx_6 = -1
            
            do
                rbx_6 += 1
            while (arg2[rbx_6] != 0)
            
            if (rbx_6.d + 1 s> 0)
                sub_1405947f0(&var_68, rbx_6.d + 1)
                r14_3 = var_5c
                rsi_2 = zx.q(var_60_3)
                r15_1 = var_68
            
            rsi_2 = zx.q(rsi_2.d + rbx_6.d + 1)
            var_60_3 = rsi_2.d
            
            if (rsi_2.d s> r14_3)
                sub_140594770(&var_68)
                r14_3 = var_5c
                rsi_2 = zx.q(var_60_3)
                r15_1 = var_68
            
            UnDecorator::getReferenceType(r15_1, arg2, (rbx_6.d + 1) * 2)
            rax_11 = arg_20
        
        int32_t rax_12 = *(rax_11 + r13_2 + 8)
        int32_t rbx_8 = rax_12 - 1
        
        if (rax_12 == 0)
            rbx_8 = 0
        
        int32_t rax_14
        
        if (rsi_2.d == 0)
            rax_14 = (rsi_2 + 2).d
        
        if (rsi_2.d != 0 || rbx_8 == 0xffffffff)
            rax_14 = 1
        
        var_58 = r15_1
        r15_1 = nullptr
        int32_t var_50_2 = rsi_2.d
        int32_t rdx_20 = rbx_8 + rax_14 + rsi_2.d
        var_68 = nullptr
        int32_t var_4c_2 = r14_3
        int64_t var_60_4 = 0
        
        if (rdx_20 s> r14_3)
            sub_1405947f0(&var_58, rdx_20)
        
        sub_140a2cf70(&var_58, *(arg_20 + r13_2), rbx_8)
        int16_t* rdx_23 = &data_142d40450
        r14_1 = arg1
        int64_t r8_10
        r8_10.b = 1
        
        if (var_50_2 != 0)
            rdx_23 = var_58
        
        char rax_15 = sub_1425c0260(r14_1, rdx_23, r8_10)
        int16_t* rcx_24 = var_58
        rbx_8.b = rax_15 == 0
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        char rcx_25 = 0
        
        if (rbx_8.b == 0)
            rcx_25 = arg_18
        
        i_1 += 1
        r13_2 += 0x10
        arg_18 = rcx_25
        rbx_9 = rcx_25
    while (i_1 s< var_70.d)

if (sub_1425c0260(r14_1, arg2, 0) == 0 || rbx_9 == 0)
    rsi_2.b = 0
else
    rsi_2.b = 1

int32_t i_4 = var_70.d
uint64_t rbx_10 = var_78

if (i_4 != 0)
    int32_t i_2
    
    do
        int64_t rcx_27 = *rbx_10
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        rbx_10 += 0x10
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
    rbx_10 = var_78

if (rbx_10 != 0)
    sub_140a74f90(rbx_10)

int16_t* rcx_29 = var_48

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

return zx.q(rsi_2.b)
