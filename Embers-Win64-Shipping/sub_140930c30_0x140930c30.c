// 函数: sub_140930c30
// 地址: 0x140930c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int64_t var_48 = 0
int32_t var_3c = 0
int32_t rdx = 0
int32_t var_40 = 0
int32_t r9 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_48, rbx_1.d + 1)
        r9 = var_3c
        rdx = var_40
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    int32_t var_40_1 = rax_1
    
    if (rax_1 s> r9)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, arg2, (rbx_1.d + 1) * 2)

int64_t* rbx_3 = *(arg1 + 8)
uint128_t zmm6 = zx.o(*arg3)
int32_t rcx_3 = rbx_3[4].d
int16_t arg_8

if (((rcx_3 - 2) & 0xfffffff5) != 0 || rcx_3 == 0xa)
    int64_t* rcx_4 = rbx_3[1]
    arg_8 = 0x2c
    (*(*rcx_4 + 0x150))(rcx_4, &arg_8, 2)

sub_14067f880(rbx_3[1])
int32_t i_2 = *(rbx_3 + 0x24)
int64_t* rsi_1 = rbx_3[1]

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int64_t rax_4 = *rsi_1
        arg_8 = 9
        (*(rax_4 + 0x150))(rsi_1, &arg_8, 2)
        i = i_1
        i_1 -= 1
    while (i != 1)

(*(*rbx_3 + 0x10))(rbx_3, &var_48)
int64_t* rcx_8 = rbx_3[1]
arg_8 = 0x3a
(*(*rcx_8 + 0x150))(rcx_8, &arg_8, 2)
int64_t* rcx_9 = rbx_3[1]
arg_8 = 0x20
(*(*rcx_9 + 0x150))(rcx_9, &arg_8, 2)
int16_t* var_38
sub_140a2e390(&var_38, u"%.17g", zmm6.q)
int64_t* rcx_11 = rbx_3[1]
int32_t var_30
int16_t* const rdx_8

if (var_30 == 0)
    rdx_8 = &data_142d40450
else
    rdx_8 = var_38
    rbp = var_30 - 1

int64_t result = (*(*rcx_11 + 0x150))(rcx_11, rdx_8, sx.q(rbp) * 2)
int16_t* rcx_12 = var_38

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

rbx_3[4].d = 8
int64_t rcx_13 = var_48

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
