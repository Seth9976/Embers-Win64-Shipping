// 函数: sub_1419bf8e0
// 地址: 0x1419bf8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = data_1439c7a78
int64_t var_50 = 0
int64_t var_48 = 0
int128_t var_38 = zx.o(0)
uint32_t var_60 = arg6 u>> 4
uint32_t var_5c = arg5 u>> 4
uint32_t rbx_1 = arg4 u>> 4
uint32_t var_64 = rbx_1
int64_t var_28 = *(arg3 + 0x10)
int64_t var_40 = *(arg2 + 8)

if (rcx s>= 0xffff)
    rcx = 0xffff

int32_t var_58 = zx.d((rcx s/ 0x23).w) * 0x23
int128_t var_88
sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(data_1439c7a08)]), &var_88, 
    &data_143f20720, 1)
int128_t zmm1 = var_88
void* rcx_4 = zmm1.q
void* rsi = nullptr
int32_t var_94 = 1
uint32_t var_98
var_98.q = ((rbx_1 + 0x3f) u>> 6).q
int128_t var_78 = zmm1

if (rcx_4 != 0)
    rsi = sub_1410970c0(*(var_88:8.q + 0x10), *(rcx_4 + 0x10c))

*(arg1 + 0x1b0) = rsi
sub_14198aa60(rsi)
void*** rcx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_15 = &rcx_9[3]

if (rax_15 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_15 = &rcx_9[3]

*(arg1 + 0x30) = rax_15
void**** rax_16 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_16 = rcx_9
*(arg1 + 8) = &rcx_9[1]
rcx_9[1] = 0
*rcx_9 = &data_142dd5b40
rcx_9[2] = rsi
void var_68
sub_1419c06f0(arg1, &var_78, rsi, &var_68)
void*** rcx_16 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_18 = &rcx_16[4]

if (rax_18 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_16 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_18 = &rcx_16[4]

*(arg1 + 0x30) = rax_18
void** rax_19 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_19 = rcx_16
*(arg1 + 8) = &rcx_16[1]
rcx_16[1] = 0
*rcx_16 = &data_142ef57a8
rcx_16[2].d = var_98
*(rcx_16 + 0x14) = 1
rcx_16[3].d = 1
return sub_14116d320(arg1, &var_78, rsi)
