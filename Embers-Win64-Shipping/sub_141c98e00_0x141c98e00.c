// 函数: sub_141c98e00
// 地址: 0x141c98e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || (*(*arg2 + 0x188))(arg2).b == 0)
    return 

void* rax_2 = sub_140d21d80(arg2)
int64_t arg_10 = *(rax_2 + 0x18)
int64_t var_98
sub_140b63b70(&arg_10, &var_98)
int64_t var_88
sub_140baee70(&var_88, &var_98, &data_143e1a410)
sub_141caa2b0(arg1 + 0x2d8, *(rax_2 + 0x18))
int16_t* var_b8 = nullptr
int32_t var_b0_1 = 0
int64_t var_a8 = 0
int64_t var_a0_1 = 0
int64_t var_c8 = 0
int32_t var_c0_1 = 0
sub_1405947f0(&var_c8, 2)
int32_t rax_3 = var_c0_1 + 2
var_c0_1 = rax_3

if (rax_3 s> 0)
    sub_140594770(&var_c8)

int64_t rbx_2 = var_c8
UnDecorator::getReferenceType(rbx_2, &data_142d404c4, 4)
uint64_t r14_1 = zx.q(sub_14060a620(arg3, &var_c8, &var_b8, &var_a8, 1, 0))

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

int16_t* const rbx_3 = &data_142d40450

if (r14_1.b != 0)
    int16_t* const rdx_5 = &data_142d40450
    
    if (var_b0_1 != 0)
        rdx_5 = var_b8
    
    uint64_t rax_5 = sub_140d1fe00(nullptr, rdx_5)
    
    if (sub_140d09510(rax_5, 0) != 0)
        sub_141c984a0(arg1 - 0x28, *(rax_5 + 0x18))

int16_t** rax_7 = sub_140baa480(&var_c8, &var_98)

if (rax_7[1].d != 0)
    rbx_3 = *rax_7

sub_141c98100(arg1 - 0x28, *sub_140b58260(&arg_10, rbx_3, 1))
int64_t rcx_16 = var_c8

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

void var_78
int64_t* rax_9 = sub_141c91480(&var_78, arg2, 0)
r14_1.b = 0
*(arg1 + 0x5ac) += 1
int32_t rcx_18 = *(arg1 + 0x5a0)
int32_t rax_10 = *(arg1 + 0x5ac)
int64_t rdi_2 = sx.q(rcx_18 - 1)

if (rcx_18 - 1 s>= 0)
    int64_t rbx_5 = rdi_2 << 4
    int64_t temp2_1
    
    do
        int64_t rax_11 = *(arg1 + 0x598)
        
        if (*(rbx_5 + rax_11 + 8) == 0)
            r14_1.b = 1
        else
            int64_t* rcx_20 = *(rbx_5 + rax_11)
            
            if (rcx_20 == 0)
                r14_1.b = 1
            else if ((*(*rcx_20 + 0x50))(rcx_20, rax_9, arg3) == 0)
                r14_1.b = 1
        
        rbx_5 -= 0x10
        temp2_1 = rdi_2
        rdi_2 -= 1
    while (temp2_1 - 1 s>= 0)
    rax_10 = *(arg1 + 0x5ac)

*(arg1 + 0x5ac) = rax_10 - 1

if (r14_1.b != 0)
    sub_140599630(arg1 + 0x598, 0)

int64_t var_40

if (var_40 != 0)
    sub_140a74f90(var_40)

int64_t* var_48

if (var_48 != 0)
    var_48[1].d -= 1
    
    if (var_48[1].d == 1)
        (**var_48)(var_48)
        int32_t temp3_1 = *(var_48 + 0xc)
        *(var_48 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_48 + 8))(var_48, 1)

int64_t rcx_25 = var_a8

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

if (var_b8 != 0)
    sub_140a74f90(var_b8)

int64_t rcx_27 = var_88

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

int64_t rcx_28 = var_98

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)
