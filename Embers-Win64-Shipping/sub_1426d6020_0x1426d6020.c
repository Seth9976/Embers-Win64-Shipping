// 函数: sub_1426d6020
// 地址: 0x1426d6020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg2 + 0xa0)
void* rax_1
int64_t rax_2

if (rbx != 0)
    rax_1 = sub_142497110()
    arg2 = *(rbx + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

int64_t* rcx_1

if (rbx == 0 || rax_2.d s> *(arg2 + 0x38) || *(*(arg2 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rcx_1 = nullptr
else
    rcx_1 = *(rbx + 0x250)

if (rcx_1 == 0)
    return 1

int512_t zmm1
zmm1.o = *(arg1 + 0x70)
int32_t var_10 = data_143dbb200
int64_t var_18 = data_143dbb1f8.q
sub_141dcf4f0(rcx_1, arg2, rcx_1, &var_18, 0, 0)
return 0
