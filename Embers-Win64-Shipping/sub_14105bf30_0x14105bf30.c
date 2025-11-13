// 函数: sub_14105bf30
// 地址: 0x14105bf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rbp = -1
void* r14 = **(*(arg2 + 0x10) + 0x6d8)
int32_t var_28

if (*(arg2 + 0xfc) != 0)
    sub_141037220(r14 + 0x1c0, arg2, 0x400, 0)
else
    rbp = *(arg2 + 0xf0)
    
    if (rbp != 0x400)
        var_28 = 0
        r15.b = 1
        sub_1410129f0(r14 + 0x1c0, arg2, rbp, 0x400, 0)

*(r14 + 0x3b90) += 1
void* r14_1 = *(r14 + 0x1c8)
int32_t rdx = *(r14_1 + 0x128)
int64_t* rcx_3 = *(r14_1 + 0x30)

if (rdx != 0)
    (*(*rcx_3 + 0xd0))(rcx_3, rdx, *(r14_1 + 0x120))
    *(r14_1 + 0x128) = 0
    r14_1 = *(r14 + 0x1c8)

int64_t* r10 = *(r14_1 + 0x30)
var_28.q = zx.q(arg5)
(*(*r10 + 0x78))(r10, *(arg2 + 0x20), zx.q(arg3), *(arg4 + 0x20), var_28, zx.q(arg6))
void* rdx_2 = *(arg2 + 0x28)
char result = data_1439b4ad4

if (rdx_2 == 0)
    if (result != 0 && *(arg2 + 0x38) != 0)
        sub_141026da0(*(*(r14 + 0x1c8) + 0x118), arg2 + 0x30)
        result = data_1439b4ad4
else if (result != 0 && *(rdx_2 + 0x30) != 0)
    sub_141026da0(*(*(r14 + 0x1c8) + 0x118), rdx_2 + 0x28)
    result = data_1439b4ad4

void* rdx_4 = *(arg4 + 0x28)

if (rdx_4 == 0)
    if (result != 0 && *(arg4 + 0x38) != 0)
        result = sub_141026da0(*(*(r14 + 0x1c8) + 0x118), arg4 + 0x30)
else if (result != 0 && *(rdx_4 + 0x30) != 0)
    result = sub_141026da0(*(*(r14 + 0x1c8) + 0x118), rdx_4 + 0x28)

if (r15.b == 0)
    return result

return sub_1410129f0(r14 + 0x1c0, arg2, 0x400, rbp, 0)
