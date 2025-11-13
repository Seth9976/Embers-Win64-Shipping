// 函数: sub_14101d400
// 地址: 0x14101d400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int64_t* rcx = *arg1
void* r13 = *rcx
int32_t rax_2
rax_2.b = arg1[6].d == 2
arg1[1]
bool cond:1 = arg1[6].d != 2
int64_t* var_200 = arg1[3]
int64_t var_1b8 = arg1[4]
int32_t rax_5 = arg1[2].d
int32_t var_130 = 0
int32_t var_12c = 3
int32_t var_150 = 0
int32_t var_14c = 3
int16_t* const var_1e0
__builtin_memset(&var_1e0, 0, 0x28)
int64_t var_218
int64_t var_168[0x3]
int32_t var_150_1
int64_t var_148[0x3]
int32_t var_130_1

if (cond:1)
    int16_t* const rax_29
    
    if (*(r13 + 0xe0) == 0)
        rax_29 = &data_142d40450
    else
        rax_29 = *(r13 + 0xd8)
    
    var_130_1 = 1
    var_148[0] = rax_29
    int16_t* const rax_30
    
    if (rcx[4].d == 0)
        rax_30 = &data_142d40450
    else
        rax_30 = rcx[3]
    
    var_150_1 = 1
    var_168[0] = rax_30
else
    if (rcx[4].d == 0)
        var_1e0 = &data_142d40450
    else
        var_1e0 = rcx[3]
    
    int32_t rax_7
    rax_7.b = *(r13 + 0x100) s> 1
    int64_t var_1d8
    var_1d8.d = rax_7
    sub_140a2e390(&var_218, u"%s_%016llx", &data_142effc80)
    void* rdi_2 = *arg1 + 0x18
    int64_t rbx_1 = sx.q(*(rdi_2 + 0x40))
    int32_t rax_8 = (rbx_1 + 1).d
    *(rdi_2 + 0x40) = rax_8
    
    if (rax_8 s> *(rdi_2 + 0x44))
        sub_1410348f0(rdi_2)
    
    void* rbx_3 = (rbx_1 << 4) + rdi_2
    *rbx_3 = 0
    *rbx_3 = var_218
    var_218 = 0
    int32_t var_210
    *(rbx_3 + 8) = var_210
    int32_t var_20c
    *(rbx_3 + 0xc) = var_20c
    var_210.q = 0
    int64_t rcx_3 = var_218
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    if (*(rbx_3 + 8) == 0)
        int16_t* const var_1c8_2 = &data_142d40450
    else
        int64_t var_1c8_1 = *rbx_3
    
    int16_t* const rsi_1
    
    if (*(r13 + 0xe0) == 0)
        rsi_1 = &data_142d40450
    else
        rsi_1 = *(r13 + 0xd8)
    
    int64_t rdi_3 = sx.q(var_130)
    int32_t rax_13 = (rdi_3 + 1).d
    var_130_1 = rax_13
    
    if (rax_13 s> var_12c)
        sub_1410345e0(&var_148)
    
    var_148[rdi_3] = rsi_1
    int16_t* const rdi_4
    
    if (*(rbx_3 + 8) == 0)
        rdi_4 = &data_142d40450
    else
        rdi_4 = *rbx_3
    
    int64_t rbx_4 = sx.q(var_150)
    int32_t rax_14 = (rbx_4 + 1).d
    var_150_1 = rax_14
    
    if (rax_14 s> var_14c)
        sub_1410345e0(&var_168)
    
    var_168[rbx_4] = rdi_4
    
    if (*(r13 + 0xf0) s> 1)
        sub_140a2e390(&var_218, u"%s_%016llx", &data_142effc88)
        void* rdi_6 = *arg1 + 0x18
        int64_t rbx_5 = sx.q(*(rdi_6 + 0x40))
        int32_t rax_15 = (rbx_5 + 1).d
        *(rdi_6 + 0x40) = rax_15
        
        if (rax_15 s> *(rdi_6 + 0x44))
            sub_1410348f0(rdi_6)
        
        void* rbx_7 = (rbx_5 << 4) + rdi_6
        *rbx_7 = 0
        *rbx_7 = var_218
        var_218 = 0
        *(rbx_7 + 8) = var_210
        *(rbx_7 + 0xc) = var_20c
        var_210.q = 0
        int64_t rcx_8 = var_218
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        if (*(rbx_7 + 8) == 0)
            int16_t* const var_1d0_2 = &data_142d40450
        else
            int64_t var_1d0_1 = *rbx_7
        
        int16_t* const rsi_2
        
        if (*(r13 + 0xf0) == 0)
            rsi_2 = &data_142d40450
        else
            rsi_2 = *(r13 + 0xe8)
        
        int64_t rdi_7 = sx.q(var_130_1)
        int32_t rax_20 = (rdi_7 + 1).d
        var_130_1 = rax_20
        
        if (rax_20 s> var_12c)
            sub_1410345e0(&var_148)
        
        var_148[rdi_7] = rsi_2
        int16_t* const rdi_8
        
        if (*(rbx_7 + 8) == 0)
            rdi_8 = &data_142d40450
        else
            rdi_8 = *rbx_7
        
        int64_t rbx_8 = sx.q(var_150_1)
        int32_t rax_21 = (rbx_8 + 1).d
        var_150_1 = rax_21
        
        if (rax_21 s> var_14c)
            sub_1410345e0(&var_168)
        
        var_168[rbx_8] = rdi_8
    
    if (*(r13 + 0x100) s> 1)
        sub_140a2e390(&var_218, u"%s_%016llx", &data_142effc90)
        void* rdi_10 = *arg1 + 0x18
        int64_t rbx_9 = sx.q(*(rdi_10 + 0x40))
        int32_t rax_22 = (rbx_9 + 1).d
        *(rdi_10 + 0x40) = rax_22
        
        if (rax_22 s> *(rdi_10 + 0x44))
            sub_1410348f0(rdi_10)
        
        void* rbx_11 = (rbx_9 << 4) + rdi_10
        *rbx_11 = 0
        *rbx_11 = var_218
        var_218 = 0
        *(rbx_11 + 8) = var_210
        *(rbx_11 + 0xc) = var_20c
        var_210.q = 0
        int64_t rcx_13 = var_218
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        if (*(rbx_11 + 8) == 0)
            int16_t* const var_1c0_2 = &data_142d40450
        else
            int64_t var_1c0_1 = *rbx_11
        
        int16_t* const rsi_3
        
        if (*(r13 + 0x100) == 0)
            rsi_3 = &data_142d40450
        else
            rsi_3 = *(r13 + 0xf8)
        
        int64_t rdi_11 = sx.q(var_130_1)
        int32_t rax_27 = (rdi_11 + 1).d
        var_130_1 = rax_27
        
        if (rax_27 s> var_12c)
            sub_1410345e0(&var_148)
        
        var_148[rdi_11] = rsi_3
        int16_t* const rdi_12
        
        if (*(rbx_11 + 8) == 0)
            rdi_12 = &data_142d40450
        else
            rdi_12 = *rbx_11
        
        int64_t rbx_12 = sx.q(var_150_1)
        int32_t rax_28 = (rbx_12 + 1).d
        var_150_1 = rax_28
        
        if (rax_28 s> var_14c)
            sub_1410345e0(&var_168)
        
        var_168[rbx_12] = rdi_12

void* rdi_14 = *arg1 + 0x18
void* r15_3 = (sx.q(*(rdi_14 + 0x40)) << 4) + rdi_14
void** var_1f8

while (rdi_14 != r15_3)
    int32_t var_1f0
    var_1f0.q = 0
    int32_t var_1e4_1 = 0
    
    if (*(rdi_14 + 8) == 0)
        var_1f8 = &data_142d40450
    else
        var_1f8 = *rdi_14
    
    void* rbx_13 = *arg1
    int32_t var_1e8_1 = 0
    int64_t rsi_4 = sx.q(*(rbx_13 + 0xc0))
    int32_t rax_32 = (rsi_4 + 1).d
    *(rbx_13 + 0xc0) = rax_32
    
    if (rax_32 s> *(rbx_13 + 0xc4))
        sub_141034690(rbx_13 + 0x60)
    
    int64_t rcx_17 = rsi_4 * 3
    rdi_14 += 0x10
    *(rbx_13 + (rcx_17 << 3) + 0x60) = var_1f8.o
    *(rbx_13 + (rcx_17 << 3) + 0x70) = var_1e8_1.q

int64_t var_e0 = 0
int64_t var_50
__builtin_memset(&var_50, 0, 0x20)
int32_t var_d8 = 0
void* var_a0 = nullptr
int32_t i_4 = 0
void* var_60 = nullptr
int32_t i_5 = 0
int32_t var_d4 = 3
int32_t var_94 = 3
int32_t var_54 = 3
void var_128
sub_1410257d0(&var_128, *(r13 + 0x60), *(r13 + 0x68), &var_148, &var_168, var_130_1)
int64_t* rdx_12 = arg1[5]
void* var_1b0 = &var_128
int32_t var_190 = 1
int32_t var_228 = 0
int64_t* var_188 = &var_1e0
int32_t var_180 = rax_2
int64_t (* var_178)[0x3] = &var_168
int32_t var_170 = var_150_1
int64_t* var_198 = &var_1b8
var_1f8 = &var_1b0
int32_t var_230 = &var_218
int64_t var_1a8
int64_t* var_238 = &var_1a8
int64_t* var_240 = &var_198
int64_t* rax_36 = var_200
int32_t var_250
var_250.q = &var_188
int64_t* var_258
var_258.d = rax_5
var_218 = 0
int32_t var_210_1 = 0
var_1a8 = 0
int32_t var_1a0 = 0
int32_t var_1f0_1 = 1
int64_t* result = sub_14101a620(&var_200, rdx_12, &var_1f8, &var_178, var_258.d, var_250, rax_36, 
    var_240, var_238, var_230)
int64_t* r8_3 = *arg1 + 8

if (r8_3 != result)
    int64_t* rcx_20 = *r8_3
    *r8_3 = *result
    *result = 0
    
    if (rcx_20 != 0)
        result = (*(*rcx_20 + 0x10))(rcx_20)

int64_t* rcx_21 = var_200

if (rcx_21 != 0)
    result = (*(*rcx_21 + 0x10))(rcx_21)

void* rcx_23 = var_60
void var_90
void* rbx_14 = &var_90
int32_t i_2 = i_5

if (rcx_23 != 0)
    rbx_14 = rcx_23

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_22 = *rbx_14
        
        if (rcx_22 != 0)
            result = sub_140a74f90(rcx_22)
        
        rbx_14 += 0x10
        i = i_2
        i_2 -= 1
    while (i != 1)
    rcx_23 = var_60

if (rcx_23 != 0)
    result = sub_140a74f90(rcx_23)

void* rcx_25 = var_a0
void var_d0
void* rbx_15 = &var_d0
int32_t i_3 = i_4

if (rcx_25 != 0)
    rbx_15 = rcx_25

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_24 = *rbx_15
        
        if (rcx_24 != 0)
            result = sub_140a74f90(rcx_24)
        
        rbx_15 += 0x10
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rcx_25 = var_a0

if (rcx_25 != 0)
    result = sub_140a74f90(rcx_25)

if (var_e0 != 0)
    result = sub_140a74f90(var_e0)

__security_check_cookie(rax_1 ^ &var_278)
return result
