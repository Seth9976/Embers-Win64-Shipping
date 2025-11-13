// 函数: sub_141d91d20
// 地址: 0x141d91d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a464c0()
uint64_t var_18[0x2]
uint64_t* rax
int32_t rdx_1
int512_t zmm1
rax, rdx_1, zmm1 = Concurrency::details::ScheduleGroupBase::LocateSegment(&var_18, arg1)
uint64_t rcx_1 = *rax
int32_t r9 = rax[1].d
*rax = 0
int32_t r8 = rax[1].d
uint64_t var_38 = rcx_1
int32_t rcx_2 = *(rax + 0xc)
int32_t rdx_4 = sbb.d(rdx_1, rdx_1, r9 != 0) + 0xc + r8
int32_t var_2c = rcx_2
rax[1] = 0

if (rdx_4 s> rcx_2)
    sub_1405947f0(&var_38, rdx_4)

sub_140a20ba0(&var_38, u".replayinfo", 0xb)
uint64_t rcx_5 = var_18[0]
uint64_t rdi = var_38
var_38 = 0
int32_t var_30
var_30.q = 0

if (rcx_5 != 0)
    zmm1 = sub_140a74f90(rcx_5)

uint64_t rdx_5 = &data_142d40450

if (r8 != 0)
    rdx_5 = rdi

int64_t* result
int64_t r8_1
result, r8_1 = (*(data_14399ea08 + 0x20))(&data_14399ea08, rdx_5, 0)
int64_t* result_1 = result

if (rdi != 0)
    result, r8_1, zmm1 = sub_140a74f90(rdi)

if (result_1 == 0)
    return result

r8_1.b = 1
uint64_t var_28[0x2]
(*(*arg2 + 0x18))(arg2, &var_28, r8_1)
sub_140a1d9d0(result_1, &var_28, zmm1)
uint64_t rcx_9 = var_28[0]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return (**result_1)(result_1, 1)
