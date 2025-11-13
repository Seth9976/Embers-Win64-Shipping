// 函数: sub_14244f1e0
// 地址: 0x14244f1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
void* const rbx = arg1[4]
void* rax_1
int64_t rax_2
void* rdx_1

if (rbx != 0)
    rax_1 = sub_1425be5e0()
    rdx_1 = *(rbx + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rbx == 0 || rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx = nullptr

char result = sub_14243ade0(rbx)

if (result == 0)
    return result

int64_t var_18 = arg1[9]
int32_t var_10_1 = arg1[0xa].d
var_18.o = var_18.o
return sub_142445510(rbx, &var_18)
