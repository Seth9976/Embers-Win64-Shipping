// 函数: sub_140a65980
// 地址: 0x140a65980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
int32_t* result = sub_14062d5f0(*arg1 + 0x38, &arg_8, arg2)

if (*result != 0xffffffff)
    return result

void* rax = *arg1
int32_t r15_1 = *(rax + 0x30)
int32_t var_38
sub_140a696e0(rax + 0x38, &var_38)
int64_t* var_30
sub_140596d10(var_30, arg2)
var_30[2].d = r15_1
int16_t* const rdi_1 = &data_142d40450
var_30[3].d = 0xffffffff
int32_t rax_1 = var_30[1].d
int16_t* rdx_3

if (rax_1 == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = *var_30

int32_t rcx_4 = rax_1 - 1

if (rax_1 == 0)
    rcx_4 = 0

sub_14062c400(rax + 0x38, &arg_8, sub_1405969c0(rcx_4, rdx_3), var_30, var_38, nullptr)
int32_t rax_3 = arg3[1].d

if (rax_3 != 0)
    rdi_1 = *arg3

int32_t rcx_6 = rax_3 - 1

if (rax_3 == 0)
    rcx_6 = 0

int64_t* rax_5 = sub_140a5d870(*arg1 + 0x88, sub_1405969c0(rcx_6, rdi_1), arg3)
int64_t rdi_2 = sx.q(rax_5[1].d)
int32_t rcx_8 = (rdi_2 + 1).d
rax_5[1].d = rcx_8

if (rcx_8 s> *(rax_5 + 0xc))
    sub_1405a4cf0(rax_5)

*(*rax_5 + (rdi_2 << 2)) = r15_1
void* rbx_4 = *arg1
int64_t rdi_3 = sx.q(*(rbx_4 + 0x30))
int32_t rax_7 = (rdi_3 + 1).d
*(rbx_4 + 0x30) = rax_7

if (rax_7 s> *(rbx_4 + 0x34))
    sub_140a88e70(rbx_4 + 0x28)

uint64_t* rcx_13 = (rdi_3 << 6) + *(rbx_4 + 0x28)
__builtin_memset(rcx_13, 0, 0x40)
sub_140597df0(rcx_13, arg2)
sub_140597df0(&rcx_13[2], arg3)
sub_140597df0(&rcx_13[4], arg4)
return sub_140597df0(&rcx_13[6], arg5)
