// 函数: sub_142b97240
// 地址: 0x142b97240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

int64_t r8 = *arg1
int64_t arg_8 = r8
int32_t r9 = arg_8.d
uint32_t r8_1 = (r8 u>> 0x20).d

if (r9 == 0)
    int32_t temp0
    int32_t temp1
    temp0:temp1 = sx.q(r8_1)
    return zx.q((temp1 ^ temp0) - temp0)

if (r8_1 == 0)
    int32_t temp6
    int32_t temp7
    temp6:temp7 = sx.q(r9)
    return zx.q((temp7 ^ temp6) - temp6)

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r8_1)
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(r9)
uint64_t rflags
int32_t temp0_1
temp0_1, rflags = _bit_scan_reverse(((temp3 ^ temp2) - temp2) | ((temp5 ^ temp4) - temp4))
int32_t rbx
uint32_t r8_2
int32_t r9_1

if (temp0_1 s> 0x1d)
    char rcx_5 = (temp0_1 - 0x1d).b
    r9_1 = r9 s>> rcx_5
    r8_2 = r8_1 s>> rcx_5
    rbx = neg.d(temp0_1 - 0x1d)
else
    rbx = 0x1d - temp0_1
    char rcx_4 = rbx.b
    r9_1 = r9 << rcx_4
    r8_2 = r8_1 << rcx_4

arg_8:4.d = r8_2
arg_8.d = r9_1
sub_142b9a550(&arg_8)
int32_t rax_16 = arg_8.d
int32_t rcx_7 = 1

if (rax_16 s< 0)
    rax_16 = neg.d(rax_16)
    rcx_7 = -1

uint32_t rax_20 = ((sx.q(rax_16) * 0xdbd95b16 + 0x40000000) u>> 0x20).d

if (rcx_7 s< 0)
    rax_20 = neg.d(rax_20)

if (rbx s<= 0)
    return zx.q(rax_20 << (neg.d(rbx)).b)

return zx.q((rax_20 + (1 << (rbx.b - 1))) s>> rbx.b)
