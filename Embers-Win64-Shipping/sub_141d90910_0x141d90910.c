// 函数: sub_141d90910
// 地址: 0x141d90910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a464c0()
uint64_t var_18[0x2]
uint64_t* rax = Concurrency::details::ScheduleGroupBase::LocateSegment(&var_18, arg2)
uint64_t rcx_1 = *rax
int32_t rdx_1 = rax[1].d
int32_t rdx_2 = neg.d(rdx_1)
*rax = 0
int32_t r8 = rax[1].d
uint64_t var_28 = rcx_1
int32_t rcx_2 = *(rax + 0xc)
int32_t rdx_5 = sbb.d(rdx_2, rdx_2, rdx_1 != 0) + 7 + r8
int32_t var_1c = rcx_2
rax[1] = 0

if (rdx_5 s> rcx_2)
    sub_1405947f0(&var_28, rdx_5)

sub_140a20ba0(&var_28, u".final", 6)
uint64_t rcx_5 = var_18[0]
uint64_t rbx_1 = var_28
var_28 = 0
int32_t var_20
var_20.q = 0

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

uint64_t rdx_6 = &data_142d40450

if (r8 != 0)
    rdx_6 = rbx_1

int32_t rdi
rdi.b = (*(data_14399ea08 + 0x48))(&data_14399ea08, rdx_6) == 0

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

return zx.q(rdi.b)
