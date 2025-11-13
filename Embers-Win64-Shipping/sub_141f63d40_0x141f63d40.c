// 函数: sub_141f63d40
// 地址: 0x141f63d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 - 0x58)

if (rcx != 0)
    (*(*(rcx + 0x40) + 0x28))(rcx + 0x40)

void* rdx = *(arg1 + 0x80)

if (rdx == 0)
    return 

int32_t rcx_6 = (*(rdx + 0xcc) ^ *(arg1 + 0x7c)) | (*(rdx + 0xc8) ^ *(arg1 + 0x78))
    | (*(rdx + 0xc4) ^ *(arg1 + 0x74)) | (*(rdx + 0xc0) ^ *(arg1 + 0x70))

if (rcx_6 != 0)
    return 

char* var_e8 = nullptr
int32_t var_e0_1 = 0
sub_1405c5510(&var_e8, 0x100)
int64_t arg_8 = 0
void** const var_d8
memset(&var_d8, 0, 0x90)
sub_140b4c2a0(&var_d8)
int64_t var_48_1 = 0
var_d8 = &data_142d6ad48
int64_t* var_40_1 = &var_e8
int64_t var_38_1 = 0
sub_140b552b0(&var_d8, 1)
var_d8[0x1b](&var_d8, 0)
sub_1408d9160(&var_d8, arg1 + 8, arg3)
sub_1408d9160(&var_d8, arg1 + 0x14, arg3)
sub_1409ac7a0(&var_d8, arg1 + 0x20, arg3)
int64_t* var_d0
int32_t* r8_1 = *var_d0
char var_af

if (&r8_1[1] u> var_d0[1])
    int64_t* rcx_16 = &var_d8
    
    if ((var_af & 0x20) != 0)
        sub_140b54070(rcx_16, arg1 + 0x28, arg3)
    else
        var_d8[0x2a](rcx_16, arg1 + 0x28, 4)
else
    *(arg1 + 0x28) = *r8_1
    *var_d0 += 4

sub_1409ac7a0(&var_d8, arg1 + 0x2c, arg3)
sub_1408d9160(&var_d8, arg1 + 0x34, arg3)
sub_1408d9160(&var_d8, arg1 + 0x48, arg3)
sub_1409ac7a0(&var_d8, arg1 + 0x40, arg3)
int32_t* r8_2 = *var_d0

if (&r8_2[1] u> var_d0[1])
    int64_t* rcx_22 = &var_d8
    
    if ((var_af & 0x20) != 0)
        sub_140b54070(rcx_22, arg1 + 0x54, arg3)
    else
        var_d8[0x2a](rcx_22, arg1 + 0x54, 4)
else
    *(arg1 + 0x54) = *r8_2
    *var_d0 += 4

sub_1409ac7a0(&var_d8, arg1 + 0x58, arg3)
sub_1408d9160(&var_d8, arg1 + 0x60, arg3)
int64_t rax_15 = *var_d0 + 4

if (rax_15 u> var_d0[1])
    arg_8.d = zx.d(*(arg1 + 0x8c)) u>> 1 & 1
    var_d8[0x2a](&var_d8, &arg_8, 4)
else
    *var_d0 = rax_15

char* rdx_14 = *var_d0

if (&rdx_14[1] u> var_d0[1])
    var_d8[0x2a](&var_d8, arg1 + 0x8d, 1)
else
    *(arg1 + 0x8d) = *rdx_14
    *var_d0 += 1

int32_t* r8_3 = *var_d0

if (&r8_3[1] u> var_d0[1])
    int64_t* rcx_30 = &var_d8
    
    if ((var_af & 0x20) != 0)
        sub_140b54070(rcx_30, arg1 + 0x6c, arg3)
    else
        var_d8[0x2a](rcx_30, arg1 + 0x6c, 4)
else
    *(arg1 + 0x6c) = *r8_3
    *var_d0 += 4

int32_t* r8_4 = *var_d0

if (&r8_4[1] u> var_d0[1])
    int64_t* rcx_32 = &var_d8
    
    if ((var_af & 0x20) != 0)
        sub_140b54070(rcx_32, arg1 + 0x88, arg3)
    else
        var_d8[0x2a](rcx_32, arg1 + 0x88, 4)
else
    *(arg1 + 0x88) = *r8_4
    *var_d0 += 4

int32_t rax_29 = arg2[1].d
char* r12_1 = var_e8
int32_t rcx_33 = rax_29 - 1

if (rax_29 == 0)
    rcx_33 = 0

int32_t rdx_20 = var_e0_1 + 2 + rcx_33

if (rdx_20 s> *(arg2 + 0xc))
    sub_1405947f0(arg2, rdx_20)

int32_t r14_1 = 0

if (var_e0_1 s> 0)
    do
        uint8_t rsi_1 = *r12_1
        int16_t rdi_1 = 0x37
        uint16_t rcx_35 = zx.w(rsi_1 u>> 4)
        
        if (rcx_35.b u<= 9)
            rdi_1 = 0x30
        
        if (rdi_1 != neg.w(rcx_35))
            int32_t rdx_21 = arg2[1].d
            int32_t rax_31
            rax_31.b = rdx_21 s<= 0
            int32_t r15_1 = rdx_21 - 1
            
            if (rdx_21 s<= 0)
                r15_1 = 0
            
            int32_t rax_33 = rax_31 + 1 + rdx_21
            arg2[1].d = rax_33
            
            if (rax_33 s> *(arg2 + 0xc))
                sub_140594770(arg2)
            
            int64_t rcx_37 = sx.q(r15_1)
            *(*arg2 + (rcx_37 << 1)) = rdi_1 + rcx_35
            *(*arg2 + (rcx_37 << 1) + 2) = 0
        
        int16_t rdi_2 = 0x37
        uint16_t rax_36 = zx.w(rsi_1) & 0xf
        
        if (rax_36.b u<= 9)
            rdi_2 = 0x30
        
        if (rdi_2 != neg.w(rax_36))
            int32_t rdx_22 = arg2[1].d
            int32_t rax_37
            rax_37.b = rdx_22 s<= 0
            int32_t rsi_2 = rdx_22 - 1
            
            if (rdx_22 s<= 0)
                rsi_2 = 0
            
            int32_t rax_39 = rax_37 + 1 + rdx_22
            arg2[1].d = rax_39
            
            if (rax_39 s> *(arg2 + 0xc))
                sub_140594770(arg2)
            
            int64_t rcx_39 = sx.q(rsi_2)
            *(*arg2 + (rcx_39 << 1)) = rdi_2 + rax_36
            *(*arg2 + (rcx_39 << 1) + 2) = 0
        
        r14_1 += 1
        r12_1 = &r12_1[1]
    while (r14_1 s< var_e0_1)

sub_140b4cb40(&var_d8)
char* rcx_41 = var_e8

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)
