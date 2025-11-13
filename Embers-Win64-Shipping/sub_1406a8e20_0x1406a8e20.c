// 函数: sub_1406a8e20
// 地址: 0x1406a8e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_60
int64_t* rax_1 = sub_140ac6680(sub_140f03fb0(*(arg1 + 0x298), &var_60))
int32_t rcx_2 = rax_1[1].d
int64_t var_138
int64_t var_130
int16_t* rsi
int32_t rdi
int32_t r15

if (rcx_2 == 0)
    rsi = &data_142d40450
    var_138 = 0
    var_130 = 0
    rdi = 0
    r15 = 0
label_1406a8ea8:
    
    if (*rsi != 0 && rdi s> 0)
        sub_1405947f0(&var_138, rdi + 1)
        int32_t rax_3 = var_130.d + 1 + r15
        var_130.d = rax_3
        
        if (rax_3 s> var_130:4.d)
            sub_140594770(&var_138)
        
        UnDecorator::getReferenceType(var_138, rsi, rdi * 2)
        *(var_138 + (sx.q(var_130.d) << 1) - 2) = 0
else
    rsi = *rax_1
    rdi = rcx_2 - 1
    
    if (rcx_2 == 0)
        rdi = 0
    
    var_138 = 0
    var_130 = 0
    
    if (rdi s> 0xff)
        rdi = 0xff
    
    r15 = rdi
    
    if (rsi != 0)
        goto label_1406a8ea8
int64_t var_a8
sub_140a9fca0(&var_a8, &var_138)
int64_t var_e8 = var_a8
int64_t* var_a0

if (var_a0 != 0)
    var_a0[1].d += 1

int32_t var_98
int32_t var_d8 = var_98
char var_d0 = 1
int64_t* var_c8 = nullptr
int32_t var_c0 = 0
sub_140f17c00(*(arg1 + 0x298), &var_e8)
int64_t* rcx_9 = var_c8

if (var_c0 == 0)
label_1406a8f85:
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
else
    if (rcx_9 != 0)
    label_1406a8f65:
        (*(*rcx_9 + 0x38))(rcx_9, 0)
        rcx_9 = var_c8
        
        if (rcx_9 != 0)
            int64_t* rax_10 = sub_140a84c80(rcx_9, 0, 0)
            rcx_9 = rax_10
            int64_t* var_c8_1 = rax_10
        
        int32_t var_c0_1 = 0
        goto label_1406a8f85
    
    if (var_c0 == 0)
        goto label_1406a8f85
    
    if (rcx_9 != 0)
        goto label_1406a8f65

if (var_a0 != 0)
    var_a0[1].d -= 1
    
    if (var_a0[1].d == 1)
        (**var_a0)(var_a0)
        int32_t rax_13 = *(var_a0 + 0xc)
        *(var_a0 + 0xc) -= 1
        
        if (rax_13 == 1)
            (*(*var_a0 + 8))(var_a0, 1)

if (var_a0 != 0)
    var_a0[1].d -= 1
    
    if (var_a0[1].d == 1)
        (**var_a0)(var_a0)
        int32_t rax_17 = *(var_a0 + 0xc)
        *(var_a0 + 0xc) -= 1
        
        if (rax_17 == 1)
            (*(*var_a0 + 8))(var_a0, 1)

int64_t rcx_14 = var_138

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t* var_58

if (var_58 != 0)
    var_58[1].d -= 1
    
    if (var_58[1].d == 1)
        (**var_58)(var_58)
        int32_t rax_21 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (rax_21 == 1)
            (*(*var_58 + 8))(var_58, 1)

void var_48
int64_t* rax_24 = sub_140ac6680(sub_140f03fb0(*(arg1 + 0x298), &var_48))
int32_t rsi_4 = *(arg1 + 0x110)
int32_t rcx_19 = rax_24[1].d
int32_t r15_1 = rcx_19 - 1

if (rcx_19 == 0)
    r15_1 = 0

uint64_t var_128
int32_t var_120
int32_t var_11c
int32_t rax_26
int64_t r12

if (rsi_4 != 0 || r15_1 == 0xffffffff)
    r12 = *(arg1 + 0x108)
    rax_26 = r15_1 + 1
    var_128 = 0
    var_120 = rsi_4
    
    if (rsi_4 != 0 || rax_26 != 0)
        sub_1405a4c70(&var_128, rsi_4 + rax_26, 0)
        memcpy(var_128, r12, rsi_4 * 2)
    else
        var_11c = 0
else
    r12 = *(arg1 + 0x108)
    rax_26 = r15_1 + 2
    var_128 = 0
    var_120 = rsi_4
    
    if (rax_26 != 0)
        sub_1405a4c70(&var_128, rsi_4 + rax_26, 0)
        memcpy(var_128, r12, rsi_4 * 2)
    else
        var_11c = 0
sub_140a2cf70(&var_128, *rax_24, r15_1)
int32_t rsi_5 = *(arg1 + 0x2d0)
uint64_t var_108
int32_t var_100

if (var_120 s> 1)
    int32_t r15_3 = rsi_5 - 1
    
    if (rsi_5 == 0)
        r15_3 = 0
    
    int32_t rdx_12
    
    if (var_120 == 0)
        rdx_12 = var_120 + 1
    
    if (var_120 != 0 || r15_3 == 0)
        rdx_12 = 0
    
    uint64_t var_f8 = var_128
    int32_t rdx_14 = rdx_12 + r15_3 + var_120
    var_128 = 0
    int32_t var_f0_1 = var_120
    int32_t var_ec_1 = var_11c
    var_120.q = 0
    
    if (rdx_14 s> var_11c)
        sub_1405947f0(&var_f8, rdx_14)
    
    sub_140a20ba0(&var_f8, *(arg1 + 0x2c8), r15_3)
    var_108 = var_f8
    var_100 = var_f0_1
else
    int64_t r15_2 = *(arg1 + 0x2c8)
    var_108 = 0
    var_100 = rsi_5
    
    if (rsi_5 != 0)
        sub_1405a4c70(&var_108, rsi_5, 0)
        memcpy(var_108, r15_2, rsi_5 * 2)

uint64_t rcx_28 = var_128

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t rax_33 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rax_33 == 1)
            (*(*var_40 + 8))(var_40, 1)

sub_140a464c0()
int16_t* const rdx_16 = &data_142d40450

if (var_100 != 0)
    rdx_16 = var_108

char const (* r8_9)[0x4] = data_14399ea08
uint32_t result
int64_t rcx_42

if ((*(r8_9 + 0x48))(&data_14399ea08, rdx_16, r8_9) == 0)
    int64_t var_b8 = 0
    int64_t var_b0_1 = 0
    void var_78
    sub_140a9fca0(&var_78, &var_b8)
    result = sub_140f8d4f0(*(arg1 + 0x288), &var_78)
    int64_t* var_70
    
    if (var_70 != 0)
        result = var_70[1].d
        var_70[1].d -= 1
        
        if (result == 1)
            result = (**var_70)(var_70)
            int32_t rdi_2 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (rdi_2 == 1)
                result = (*(*var_70 + 8))(var_70, zx.q(rdi_2))
    
    rcx_42 = var_b8
else
    int64_t var_118 = 0
    int32_t var_110_1 = 0
    sub_1405947f0(&var_118, 0x2d)
    int32_t rax_36 = var_110_1 + 0x2d
    var_110_1 = rax_36
    
    if (rax_36 s> 0)
        sub_140594770(&var_118)
    
    sub_1405a7220(var_118, 0x2d, "File already exists and will be overwritten!", 0x2d, 0x3f)
    void var_90
    sub_140a9fca0(&var_90, &var_118)
    result = sub_140f8d4f0(*(arg1 + 0x288), &var_90)
    int64_t* var_88
    
    if (var_88 != 0)
        result = var_88[1].d
        var_88[1].d -= 1
        
        if (result == 1)
            result = (**var_88)(var_88)
            int32_t rdi_1 = *(var_88 + 0xc)
            *(var_88 + 0xc) -= 1
            
            if (rdi_1 == 1)
                result = (*(*var_88 + 8))(var_88, zx.q(rdi_1))
    
    rcx_42 = var_118

if (rcx_42 != 0)
    result = sub_140a74f90(rcx_42)

uint64_t rcx_43 = var_108

if (rcx_43 == 0)
    return result

return sub_140a74f90(rcx_43)
