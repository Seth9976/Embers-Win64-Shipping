// 函数: sub_141d91ab0
// 地址: 0x141d91ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x28) == 1)
    sub_141d91d20(arg1 + 0x30, arg1 + 0x48)

sub_140a464c0()
uint64_t var_28[0x2]
uint64_t* rax = Concurrency::details::ScheduleGroupBase::LocateSegment(&var_28, arg1 + 0x30)
uint64_t rcx_2 = *rax
int32_t rdx_3 = rax[1].d
int32_t rdx_4 = neg.d(rdx_3)
*rax = 0
int32_t r8 = rax[1].d
uint64_t var_38 = rcx_2
int32_t rcx_3 = *(rax + 0xc)
int32_t rdx_7 = sbb.d(rdx_4, rdx_4, rdx_3 != 0) + 7 + r8
int32_t var_2c = rcx_3
rax[1] = 0

if (rdx_7 s> rcx_3)
    sub_1405947f0(&var_38, rdx_7)

sub_140a20ba0(&var_38, u".final", 6)
uint64_t rcx_6 = var_28[0]
uint64_t rbp = var_38
var_38 = 0
int32_t var_30
var_30.q = 0

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

uint64_t rdx_8 = &data_142d40450

if (r8 != 0)
    rdx_8 = rbp

int64_t* result = (*(data_14399ea08 + 0x20))(&data_14399ea08, rdx_8, 0)
int64_t* result_1 = result

if (rbp != 0)
    result = sub_140a74f90(rbp)

int64_t* rcx_8 = *(arg1 + 0x10)

if (rcx_8 != 0)
    *(arg1 + 0x10) = 0
    result = (**rcx_8)(rcx_8, 1)

int64_t* rcx_9 = *(arg1 + 0x18)

if (rcx_9 != 0)
    *(arg1 + 0x18) = 0
    result = (**rcx_9)(rcx_9, 1)

*(arg1 + 0x38) = 0

if (*(arg1 + 0x3c) != 0)
    result = sub_1405947f0(arg1 + 0x30, 0)

*(arg1 + 0x28) = 0

if (result_1 == 0)
    return result

return (**result_1)(result_1, 1)
