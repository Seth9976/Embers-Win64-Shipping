// 函数: sub_1406be1d0
// 地址: 0x1406be1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int32_t arg_20 = 0
sub_140b7c510()
int64_t rdi = *(data_143e19eb0 + 0x38)
int64_t* var_e8 = nullptr
sub_1405947f0(&var_e8, 0xc)
int32_t var_e0 = 0xc

if (0xc s> 0)
    sub_140594770(&var_e8)

sub_1405a7220(var_e8, 0xc, "FFMPEGMedia", 0xc, 0x3f)
int64_t var_88
int64_t* rcx_5 = *rdi(&data_143e19eb0, &var_88, &var_e8)
int64_t var_78
(*(*rcx_5 + 0x18))(rcx_5, &var_78)
int64_t* var_80

if (var_80 != 0)
    var_80[1].d -= 1
    
    if (var_80[1].d == 1)
        (**var_80)(var_80)
        int32_t temp1_1 = *(var_80 + 0xc)
        *(var_80 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_80 + 8))(var_80, 1)

int64_t* rcx_8 = var_e8

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t var_c8 = 0
int32_t var_c0 = 0
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x30)
sub_1405947f0(&var_c8, 5)
int32_t rax_4 = var_c0 + 5
var_c0 = rax_4

if (rax_4 s> 0)
    sub_140594770(&var_c8)

int64_t r14 = var_c8
__builtin_wcscpy(r14, u".dll")
var_b8 = 0
int64_t var_b0 = 0
var_e8 = nullptr
int64_t var_e0_1 = 0
sub_1405947f0(&var_e8, 2)
int32_t rbx_1 = var_e0_1.d + 2
var_e0_1.d = rbx_1
int32_t rdi_1 = 0

if (rbx_1 s> 0)
    sub_140594770(&var_e8)
    rdi_1 = var_e0_1:4.d
    rbx_1 = var_e0_1.d

int64_t* r15 = var_e8
int32_t rcx_14 = sub_1405a7220(r15, 2, U"-", 2, 0x3f)
int64_t* var_a8 = r15
int64_t var_a0
var_a0.d = rbx_1
var_a0:4.d = rdi_1
int16_t* var_d8
var_e8 = &var_d8
var_d8 = nullptr
int64_t rbx_2 = var_78
int32_t var_70
sub_1405a4c70(&var_d8, sbb.d(rcx_14, rcx_14, var_70 != 0) + 0x1a + var_70, 0)
memcpy(var_d8, rbx_2, var_70 * 2)
arg_20 = 1
sub_140a2cf70(&var_d8, u"ThirdParty/ffmpeg/bin/vs", 0x18)
int16_t* rdi_3 = var_d8
int16_t* var_98 = rdi_3
int64_t var_90
var_90.d = var_70
int32_t var_cc
var_90:4.d = var_cc
HMODULE result

if (var_70 s<= 1)
    result = nullptr
else
    sub_1406b37a0(&var_88, &var_b8, arg2)
    int64_t var_58
    sub_1406b3610(&var_58, &var_88, &var_a8)
    int64_t var_68
    sub_1406b3610(&var_68, &var_58, arg3)
    sub_1406b3610(&var_e8, &var_68, &var_c8)
    int16_t* const rbx_3 = &data_142d40450
    int16_t* const rax_8 = &data_142d40450
    
    if (var_70 != 0)
        rax_8 = rdi_3
    
    arg_20.q = rax_8
    sub_1406b3550(&var_d8, &arg_20, &var_e8)
    int64_t* rcx_24 = var_e8
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    int64_t rcx_25 = var_68
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
    
    int64_t rcx_26 = var_58
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    int64_t rcx_27 = var_88
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    if (var_70 != 0)
        rbx_3 = var_d8
    
    result = sub_140b67ab0(rbx_3)
    int16_t* rcx_29 = var_d8
    
    if (rcx_29 != 0)
        sub_140a74f90(rcx_29)
    
    r14 = var_c8
    rsi = var_b8
    r15 = var_a8

if (r15 != 0)
    sub_140a74f90(r15)

if (rsi != 0)
    sub_140a74f90(rsi)

if (r14 != 0)
    sub_140a74f90(r14)

if (rdi_3 != 0)
    sub_140a74f90(rdi_3)

int64_t rcx_34 = var_78

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

return result
