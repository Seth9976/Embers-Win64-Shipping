// 函数: sub_1426e3040
// 地址: 0x1426e3040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || ((zx.q(*(arg2[1] + 0x10)) u>> 0x14).b & 1) == 0)
    void* result
    result.b = 0
    return result

int64_t var_18
int64_t* rax_1 = (*(*arg2 + 0x60))(arg2, &var_18, 0, 0)
int32_t rcx_1 = rax_1[1].d
int32_t r10_1 = rcx_1 - 1

if (rcx_1 == 0)
    r10_1 = -1

int32_t rdi = rcx_1 - 1

if (rcx_1 == 0)
    rdi = -1

if (rcx_1 == 0)
    r10_1 = 0

if (rcx_1 == 0)
    rdi = 0

int32_t rdi_1 = rdi - r10_1

if (rdi_1 s> 0)
    rdi_1 = 0

if (rdi_1 != 0)
    int32_t rax_3 = rcx_1 - rdi_1
    
    if (rax_3 != r10_1)
        int64_t r9_1 = *rax_1
        memmove(r9_1 + (sx.q(r10_1) << 1), r9_1 + (sx.q(rdi_1 + r10_1) << 1), (rax_3 - r10_1) * 2)
        rcx_1 = rax_1[1].d
    
    rcx_1 -= rdi_1
    rax_1[1].d = rcx_1

int32_t rdi_2 = rcx_1 - 1

if (rcx_1 == 0)
    rdi_2 = 0

if (rdi_2 s> 8)
    rdi_2 = 8

if (rdi_2 != 0)
    if (rcx_1 != rdi_2)
        int64_t rcx_4 = *rax_1
        memmove(rcx_4, rcx_4 + (sx.q(rdi_2) << 1), (rcx_1 - rdi_2) * 2)
        rcx_1 = rax_1[1].d
    
    rax_1[1].d = rcx_1 - rdi_2

int16_t* rdi_3 = *rax_1
*rax_1 = 0
int32_t rbp = rax_1[1].d
rax_1[1] = 0
int64_t rcx_6 = var_18

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int16_t* const rcx_7 = &data_142d40450
int16_t* rdx_3

if (*(arg1 + 0x28) == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = *(arg1 + 0x20)

if (rbp != 0)
    rcx_7 = rdi_3

int64_t* rbx
rbx.b = sub_140a54510(rcx_7, rdx_3) == 0

if (rdi_3 != 0)
    sub_140a74f90(rdi_3)

return zx.q(rbx.b)
