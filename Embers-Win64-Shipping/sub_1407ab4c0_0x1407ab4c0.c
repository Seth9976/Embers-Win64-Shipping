// 函数: sub_1407ab4c0
// 地址: 0x1407ab4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
void* const var_28 = nullptr
int32_t rdx = 0
void* const rdi = nullptr
int32_t rbx = rax - 1
int32_t var_20 = 0

if (rax == 0)
    rbx = 0

int32_t var_1c = 0
int32_t rbp = 0

if (rbx + 0x1e s> 0)
    sub_1405947f0(&var_28, rbx + 0x1e)
    rdx = var_20
    rbp = var_1c
    rdi = var_28

int32_t rsi_1 = rbx + 0x1e + rdx

if (rsi_1 s> rbp)
    sub_140594770(&var_28)
    rbp = var_1c
    rdi = var_28

int64_t rbx_1 = sx.q(rbx)
__builtin_memcpy(rdi, u"DISKELMESH_DECLARE_CONST", 0x30)
*(rdi + 0x30) = 0x530054004e0041
*(rdi + 0x38) = 0x28
memcpy(rdi + 0x3a, *arg2, rbx_1.d * 2)
*(rdi + (rbx_1 << 1) + 0x3a) = 0
var_28 = rdi
int32_t rax_2
rax_2.b = rsi_1 == 0
int32_t var_1c_1 = rbp
int32_t rdx_4 = rsi_1 + 2 + rax_2

if (rdx_4 s> rbp)
    sub_1405947f0(&var_28, rdx_4)

sub_140a20ba0(&var_28, &data_142dbf75c, 2)
void* const rbx_2 = var_28
var_28 = nullptr
int32_t var_20_2
var_20_2.q = 0
int32_t r8_1 = rsi_1 - 1

if (rsi_1 == 0)
    r8_1 = 0

int64_t result = sub_140a20ba0(arg3, rbx_2, r8_1)

if (rbx_2 == 0)
    return result

return sub_140a74f90(rbx_2)
