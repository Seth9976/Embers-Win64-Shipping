// 函数: sub_1411238d0
// 地址: 0x1411238d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax_1
int32_t rcx

if (arg5[1].d != 0xffffffff)
    rcx = *(arg5 + 0x14)
    rax_1 = zx.q(*(arg2 + 0x18b0))

if (arg5[1].d == 0xffffffff || rcx s< rax_1.d || rcx s> (rax_1 * 3).d)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(*(arg2 + 0x18b0) * 5)
    *(arg5 + 0x14) = (temp1_1 + (temp0_1 & 3)) s>> 2
    (*(*arg5 + 0x30))(arg5)
    (*(*arg5 + 0x28))(arg5)

sub_14111cff0(&arg5[2])
int64_t* rax_10 = arg5[4]
int64_t** rdi_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_4 = &rdi_2[1]

if (rcx_4 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rdi_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_4 = &rdi_2[1]

*(arg1 + 0x30) = rcx_4
*rdi_2 = rax_10
void*** rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_11 = &rcx_8[6]

if (rax_11 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_11 = &rcx_8[6]

*(arg1 + 0x30) = rax_11
*(arg1 + 0x14) += 1
int64_t* rax_12 = *(arg1 + 8)
void* var_38 = nullptr
void* const var_30 = nullptr
*rax_12 = rcx_8
*(arg1 + 8) = &rcx_8[1]
rcx_8[1] = 0
*rcx_8 = &data_142da7798
rcx_8[2].d = 1
rcx_8[3] = rdi_2
rcx_8[4] = 2
rcx_8[5] = 0
int64_t rdi_5 = arg5[4]
void*** rcx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_14 = &rcx_14[5]

if (rax_14 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_14 = &rcx_14[5]

*(arg1 + 0x30) = rax_14
int64_t* rax_15 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_15 = rcx_14
*(arg1 + 8) = &rcx_14[1]
rcx_14[1] = 0
*rcx_14 = &data_142f115d8
rcx_14[2] = rdi_5
*(rcx_14 + 0x18) = var_38.o
sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(arg2 + 8))]), &var_38, &data_143e57170, 0)
void* r15 = var_38
void* rdi_6 = nullptr

if (r15 != 0)
    int64_t rdx_3 = sx.q(*(r15 + 0x10c))
    int64_t* rdi_7 = *(var_30 + 0x10)
    int64_t* rax_20 = rdi_7[3]
    
    if (rax_20[rdx_3] == 0)
        sub_1419ccf30(rdi_7, rdx_3.d)
        rax_20 = rdi_7[3]
    
    rdi_6 = rax_20[rdx_3]

*(arg1 + 0x1b0) = rdi_6
sub_14198aa60(rdi_6)
void*** rcx_24 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_21 = &rcx_24[3]

if (rax_21 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_24 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_21 = &rcx_24[3]

*(arg1 + 0x30) = rax_21
void**** rax_22 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_22 = rcx_24
*(arg1 + 8) = &rcx_24[1]
rcx_24[1] = 0
*rcx_24 = &data_142dd5b40
rcx_24[2] = rdi_6
Concurrency::details::WorkSearchContext::SearchCacheLocal(r15, arg1, arg2, arg3, arg4)
int32_t* var_48
var_48.d = 1
sub_1419cd1c0(arg1, r15, (*(arg2 + 0x18b0) + 0x3f) u>> 6, 1, var_48.d)
sub_1411569a0(r15, arg1, arg2)
return &data_142da7798
