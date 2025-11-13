// 函数: sub_14218bf00
// 地址: 0x14218bf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
sub_142188fc0(*arg1)
void* rax_2 = arg1[1]
void** var_48 = nullptr
int32_t i_2 = 0
int32_t var_3c = 4
void* var_68

if (rax_2 != 0)
    i_2 = 1
    var_68 = rax_2
    *(rax_2 + 0x48) += 1

void var_80
int64_t* rax_3 = sub_14218b190(&var_80, &var_68, arg2)
*(*rax_3 + 0x10) = *arg1
void* rcx_3 = *rax_3
int32_t r8_1 = rax_3[2].d
int64_t* rdx_2 = rax_3[1]
int64_t* rbx_1 = *(rcx_3 + 0x20)
int64_t* var_a8 = rbx_1
int32_t* rdi = &rbx_1[9]

if (rbx_1 != 0)
    *rdi += 1
    rbx_1 = var_a8

sub_141f4a6e0(rcx_3, rdx_2, r8_1, 1)
void* rax_4 = *arg3
int64_t* var_88 = rbx_1
*(rax_4 + 0x4c) = 2

if (rbx_1 != 0)
    *rdi += 1
    rbx_1 = var_a8

int32_t result = sub_14084e1b0(*arg3, &var_88)
int32_t* rcx_5 = arg1[2]

if (rcx_5 != 0)
    result = *rcx_5
    *rcx_5 -= 1
    
    if (result == 1)
        int64_t* rcx_6 = arg1[1]
        int64_t var_98 = 0
        int64_t var_90_1 = 0
        sub_140a22e70(rcx_6, &var_98, 0xff)
        int64_t rcx_7 = var_98
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        result = j_sub_140a74f90(arg1[2])
    
    rbx_1 = var_a8

if (rbx_1 != 0)
    result = *rdi
    *rdi -= 1
    
    if (result == 1)
        result = sub_140a2f6e0(var_a8)

void** rcx_11 = var_48
void** rbx_2 = &var_68
int32_t i_1 = i_2

if (rcx_11 != 0)
    rbx_2 = rcx_11

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_10 = *rbx_2
        
        if (rcx_10 != 0)
            result = rcx_10[9].d
            rcx_10[9].d -= 1
            
            if (result == 1)
                result = sub_140a2f6e0(rcx_10)
        
        rbx_2 = &rbx_2[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_11 = var_48

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

__security_check_cookie(rax_1 ^ &var_c8)
return result
