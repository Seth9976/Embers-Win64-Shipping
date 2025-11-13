// 函数: sub_140f7a840
// 地址: 0x140f7a840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1

if ((**rcx)(rcx) != 0)
    return 0

int64_t* rcx_1 = arg1[3]
int64_t r8 = arg1[9]
int64_t var_38 = 0
int64_t var_30 = 0
(*(*rcx_1 + 0x10))(rcx_1, &var_38, r8)
void var_28
sub_140aae2f0(&var_28, &var_38)
int64_t rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rax_3 = sub_140ac6680(&arg1[0x101])
int16_t** rax_4 = sub_140ac6680(&var_28)
int16_t* const rcx_6 = &data_142d40450
int16_t* const r8_1

if (rax_3[1].d == 0)
    r8_1 = &data_142d40450
else
    r8_1 = *rax_3

if (rax_4[1].d != 0)
    rcx_6 = *rax_4

void* r8_2 = r8_1 - rcx_6
uint32_t i
uint32_t rdx_2

do
    rdx_2 = zx.d(*rcx_6)
    i = zx.d(*(rcx_6 + r8_2))
    
    if (rdx_2 != i)
        break
    
    rcx_6 = &rcx_6[1]
while (i != 0)

int64_t rdi
rdi.b = rdx_2 - i != 0
int64_t* var_20

if (var_20 == 0)
    return zx.q(rdi.b)

var_20[1].d -= 1

if (var_20[1].d == 1)
    int64_t rdx_4 = *var_20
    (*rdx_4)(var_20, rdx_4)
    int32_t rsi_1 = *(var_20 + 0xc)
    *(var_20 + 0xc) -= 1
    
    if (rsi_1 == 1)
        int64_t r8_3 = *var_20
        (*(r8_3 + 8))(var_20, zx.q(rsi_1), r8_3)

return zx.q(rdi.b)
