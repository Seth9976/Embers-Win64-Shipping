// 函数: sub_14244e170
// 地址: 0x14244e170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = *(arg1 + 0x20)
void* rax_1
int64_t rax_2
void* r9_1

if (rbx != 0)
    rax_1 = sub_1425be5e0()
    r9_1 = *(rbx + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rbx == 0 || rax_2.d s> *(r9_1 + 0x38) || *(*(r9_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx = nullptr

void* rax_4 = sub_140d21d80(arg3)
int64_t zmm0 = data_143dbb188.q
int32_t r8 = data_143dbb190
void* rdx = *(rax_4 + 0x90)
int32_t rcx_2

if (rdx == 0)
    rcx_2 = zmm0.d
else
    rcx_2 = *(rdx + 0xc)
    r8 = *(rdx + 0x14)
    int64_t var_18
    var_18.d = rcx_2
    var_18:4.d = *(rdx + 0x10)
    zmm0 = var_18

int64_t var_18_1
var_18_1:4.d = zmm0:4.d - *(rbx + 0x53c)
int32_t r8_1 = r8 - *(rbx + 0x540)
var_18_1.d = rcx_2 - *(rbx + 0x538)
*arg2 = var_18_1
arg2[1].d = r8_1
return arg2
