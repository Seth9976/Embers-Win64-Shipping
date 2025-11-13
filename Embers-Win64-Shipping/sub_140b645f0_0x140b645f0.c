// 函数: sub_140b645f0
// 地址: 0x140b645f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg1[1]
int64_t rbx = -1
uint8_t rbp_1 = (*arg2 u>> 4).b & 1

do
    rbx += 1
while (*(&arg2[0xb] + (rbx << 1)) != 0)

int32_t rax_2

if (rdx[1].d == 0)
    rax_2 = 2

if (rdx[1].d != 0 || (rbx + 1).d == 0)
    rax_2 = 1

int32_t rcx = rax_2 + rbx.d
int16_t* var_28 = nullptr
int32_t rsi = rdx[1].d
int64_t r14 = *rdx

if (rsi != 0 || rcx != 0)
    sub_1405a4c70(&var_28, rsi + rcx, 0)
    memcpy(var_28, r14, rsi * 2)
else
    int32_t var_1c_1 = 0

sub_140a2cf70(&var_28, &arg2[0xb], rbx.d)
int64_t* rcx_4 = *arg1
int16_t* const rdx_4 = &data_142d40450

if (rsi != 0)
    rdx_4 = var_28

char rax_4 = (*(*rcx_4 + 8))(rcx_4, rdx_4, zx.q(rbp_1))
int16_t* rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return zx.q(rax_4)
