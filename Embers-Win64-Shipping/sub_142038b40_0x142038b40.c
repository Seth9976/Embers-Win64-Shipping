// 函数: sub_142038b40
// 地址: 0x142038b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x728))()
void* rax_2 = (*(*arg1 + 0x150))(arg1)
void* rax_3 = sub_1423de4f0(data_143f5b298, rax_2)
void* rax_4

if ((arg1[0x55].b & 1) != 0)
    int64_t rdx_1 = *arg1
    rax_4 = (*(rdx_1 + 0x150))(arg1, rdx_1)

int64_t r12

if ((arg1[0x55].b & 1) == 0 || 172800f f<= *(rax_4 + 0x520))
    r12.b = 0
else
    r12.b = 1

int16_t* r8

if (arg2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *arg2

int64_t var_98
sub_1423fb9e0(&var_98, rax_3 + 0xd0, r8, (zx.d(arg3) ^ 1) * 2)
int64_t rdi_1 = *arg1
int16_t* rdx_3 = &data_142d40450
int16_t* var_70
int32_t var_68

if (var_68 != 0)
    rdx_3 = var_70

int64_t arg_8
int64_t* rax_5 = sub_140b58260(&arg_8, rdx_3, 1)
char rax_7 = sub_14243ae30((*(rdi_1 + 0x150))(arg1))
int128_t var_a8
sub_1423dde70(&var_a8, *rax_5, rax_7)
int64_t var_b8
sub_142423a30(&var_98, &var_b8, 0)
int64_t rax_8 = *arg1
int128_t var_c8 = var_a8
(*(rax_8 + 0x7e8))(arg1, &var_b8, &var_c8, zx.q(r12.b), arg3)
int32_t rdi_2 = 0

if (rax_2 + 0x570 != &var_b8)
    int32_t r8_3 = *(rax_2 + 0x57c)
    arg_8 = var_b8
    int32_t var_b0
    *(rax_2 + 0x578) = var_b0
    
    if (var_b0 != 0 || r8_3 != 0)
        sub_1405a4c70(rax_2 + 0x570, var_b0, r8_3)
        memcpy(*(rax_2 + 0x570), arg_8, var_b0 * 2)
    else
        *(rax_2 + 0x57c) = 0

int32_t rax_10 = sub_141dcdc50(arg1)
int32_t result

if (r12.b == 0)
    result = rax_10 - 1
    
    if (result u> 1)
        *(rax_2 + 0x55c) = 0
else
    var_c8.q = 0
    var_c8:8.q = 0
    var_c8 = var_c8
    result = sub_142442a90(rax_2, rax_2 + 0x570, arg3, &var_c8)
    
    if (*(rax_2 + 0x570) != &data_142d40450)
        *(rax_2 + 0x578) = 0
        
        if (*(rax_2 + 0x57c) != 0)
            result = sub_1405947f0(rax_2 + 0x570, 0)
            rdi_2 = *(rax_2 + 0x578)
        
        *(rax_2 + 0x578) = rdi_2
        
        if (rdi_2 s> *(rax_2 + 0x57c))
            result = sub_140594770(rax_2 + 0x570)

int64_t rcx_16 = var_b8

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

int64_t var_40

if (var_40 != 0)
    result = sub_140a74f90(var_40)

int32_t i_2
int32_t i_1 = i_2
int64_t* var_50
int64_t* rbx_3 = var_50

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_18 = *rbx_3
        
        if (rcx_18 != 0)
            result = sub_140a74f90(rcx_18)
        
        rbx_3 = &rbx_3[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_3 = var_50

if (rbx_3 != 0)
    result = sub_140a74f90(rbx_3)

int64_t var_60

if (var_60 != 0)
    result = sub_140a74f90(var_60)

if (var_70 != 0)
    result = sub_140a74f90(var_70)

int64_t var_88

if (var_88 != 0)
    result = sub_140a74f90(var_88)

int64_t rcx_23 = var_98

if (rcx_23 == 0)
    return result

return sub_140a74f90(rcx_23)
