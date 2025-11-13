// 函数: sub_141d90d30
// 地址: 0x141d90d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_18[0x2]
uint64_t* rax = Concurrency::details::ScheduleGroupBase::LocateSegment(&var_18, arg1 + 0x30)
int32_t r9 = rax[1].d
uint64_t var_28 = *rax
*rax = 0
int32_t r8 = rax[1].d
int32_t rcx_1 = *(rax + 0xc)
rax[1] = 0
int32_t rdx_4 = sbb.d(0, 0, r9 != 0) + 6 + r8
int32_t var_1c = rcx_1

if (rdx_4 s> rcx_1)
    sub_1405947f0(&var_28, rdx_4)

sub_140a20ba0(&var_28, u".demo", 5)
uint64_t rcx_4 = var_18[0]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140a464c0()
uint64_t rdx_5 = &data_142d40450

if (r8 != 0)
    rdx_5 = var_28

char const (* r9_2)[0x4] = data_14399ea08
int64_t* result = (*(r9_2 + 0x18))(&data_14399ea08, rdx_5, 4, r9_2)
int64_t* result_2 = *(arg1 + 0x18)
int64_t* result_1 = result_2

if (result_2 != result)
    *(arg1 + 0x18) = result
    result_1 = result
    
    if (result_2 != 0)
        result = (**result_2)(result_2, 1)
        result_1 = *(arg1 + 0x18)

if (result_1 != 0)
    result = (*(*result_1 + 0x28))(result_1)
    *(arg1 + 0x78) = result

if (var_28 == 0)
    return result

return sub_140a74f90(var_28) __tailcall
