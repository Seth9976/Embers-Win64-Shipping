// 函数: sub_1426abf30
// 地址: 0x1426abf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = *(arg1 + 0x38)
int64_t rdi = *(arg1 + 0x30)
uint64_t var_18 = 0
int16_t* rdi_1

if (r14 != 0)
    sub_1405a4c70(&var_18, r14, 0)
    rdi_1 = var_18
    memcpy(rdi_1, rdi, r14 * 2)
else
    rdi_1 = nullptr

int32_t rsi = *(arg4 + 0x38)
int64_t rbp_1 = *(arg4 + 0x30)
var_18 = 0
int16_t* rbp_2

if (rsi != 0)
    sub_1405a4c70(&var_18, rsi, 0)
    rbp_2 = var_18
    memcpy(rbp_2, rbp_1, rsi * 2)
else
    rbp_2 = nullptr

int16_t* const rax = &data_142d40450
int16_t* const r9 = &data_142d40450

if (rsi != 0)
    r9 = rbp_2

if (r14 != 0)
    rax = rdi_1

int64_t r9_1 = r9 - rax
uint32_t i
uint32_t r8_4

do
    r8_4 = zx.d(*rax)
    i = zx.d(*(rax + r9_1))
    
    if (r8_4 != i)
        break
    
    rax = &rax[1]
while (i != 0)

int32_t rbx
rbx.b = r8_4 - i != 0

if (rbp_2 != 0)
    sub_140a74f90(rbp_2)

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

return zx.q(rbx)
