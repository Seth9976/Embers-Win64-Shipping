// 函数: sub_140899cb0
// 地址: 0x140899cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t arg_8 = 0
int32_t arg_10 = 0
int32_t arg_18 = 0
*(*(arg1 + 0xf8) + 0x20) = 0
int64_t* rcx = *(*(arg1 + 0xf8) + 8)
int32_t rax_3 = (*(*rcx + 0x20))(rcx, &arg_10, &arg_8)

if (rax_3 == 0x88780096)
    int64_t* rcx_1 = *(*(arg1 + 0xf8) + 8)
    (*(*rcx_1 + 0xa0))(rcx_1)
    int64_t* rcx_2 = *(*(arg1 + 0xf8) + 8)
    rax_3 = (*(*rcx_2 + 0x20))(rcx_2, &arg_10, &arg_8)

if (rax_3 != 0)
    sub_14089b0c0("DirectSound GetCurrentPosition", rax_3)
    return 0

void* rcx_3 = *(arg1 + 0xf8)
uint32_t temp0 = divu.dp.d(0:arg_8, *(rcx_3 + 0x14))
arg_8 = temp0
*(rcx_3 + 0x18) = temp0
void* r8_2 = *(arg1 + 0xf8)
uint32_t temp1 = modu.dp.d(0:(arg_8 + 1), *(r8_2 + 0x10))
arg_8 = temp1
arg_8 = temp1 * *(r8_2 + 0x14)
int64_t* rcx_4 = *(r8_2 + 8)
int32_t rax_14 =
    (*(*rcx_4 + 0x58))(rcx_4, arg2, zx.q(*(r8_2 + 0x14)), r8_2 + 0x20, &arg_18, 0, &arg_10, 0)

if (rax_14 == 0x88780096)
    int64_t* rcx_5 = *(*(arg1 + 0xf8) + 8)
    (*(*rcx_5 + 0xa0))(rcx_5)
    void* rax_17 = *(arg1 + 0xf8)
    int64_t* rcx_6 = *(rax_17 + 8)
    rax_14 = (*(*rcx_6 + 0x58))(rcx_6, zx.q(arg_8), zx.q(*(rax_17 + 0x14)), rax_17 + 0x20, &arg_18, 
        0, &arg_10, 0)

if (rax_14 == 0)
    return *(*(arg1 + 0xf8) + 0x20)

sub_14089b0c0("DirectSound Lock", rax_14)
return 0
