// 函数: sub_140a85670
// 地址: 0x140a85670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rbx = &data_142d40450

if (*(arg2 + 0x30) != 0)
    *(arg2 + 0x28)

int16_t* const r8

if (*(arg2 + 0x20) == 0)
    r8 = &data_142d40450
else
    r8 = *(arg2 + 0x18)

int16_t* var_58
sub_140a2e390(&var_58, u"%s::%s", r8)
int16_t* r8_1 = var_58
int32_t var_50

if (var_50 != 0)
    rbx = r8_1

int32_t var_40 = var_50
int16_t* var_48 = r8_1
var_58 = nullptr
int32_t var_4c
int32_t var_3c = var_4c
var_50.q = 0
int32_t var_38 = sub_140a5ff80(rbx, 0)
int32_t arg_8
sub_140a738a0(arg1 + 0x58, &arg_8, &var_48)
int64_t rax_2 = sx.q(arg_8)
void* const rax_4

if (rax_2.d == 0xffffffff)
    rax_4 = nullptr
else
    rax_4 = rax_2 * 0xd8 + *(arg1 + 0x58)

char* rbx_1 = rax_4 + 0x18

if (rax_4 == 0)
    rbx_1 = nullptr

if (rbx_1 == 0)
    sub_140a5bf90(arg1 + 0x58, &var_48)
    rbx_1 = arg2
else
    sub_140a8f350(arg1, rbx_1)
    *rbx_1 = *arg2
    sub_140597df0(&rbx_1[8], &arg2[8])
    sub_140597df0(&rbx_1[0x18], &arg2[0x18])
    sub_140597df0(&rbx_1[0x28], &arg2[0x28])
    sub_140597df0(&rbx_1[0x38], &arg2[0x38])
    sub_14094d9d0(&rbx_1[0x48], &arg2[0x48])
    rbx_1[0x98] = arg2[0x98]
    sub_14065da90(&rbx_1[0xa0], &arg2[0xa0])

uint64_t result = sub_140a85480(arg1, rbx_1)
int16_t* rbx_2 = var_48

if (rbx_2 == 0)
    return result

int64_t* rcx_12 = data_143ddb3f0

if (rcx_12 == 0)
    sub_140a750a0()
    rcx_12 = data_143ddb3f0

return (*(*rcx_12 + 0x30))(rcx_12, rbx_2)
