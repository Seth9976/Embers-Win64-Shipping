// 函数: sub_142b97520
// 地址: 0x142b97520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

int64_t r8_1 = *arg1
int64_t arg_8 = r8_1
int32_t r9_1 = arg_8.d

if (r9_1 == 0 && (r8_1 u>> 0x20).d == 0)
    return 

uint32_t r8_2 = (r8_1 u>> 0x20).d
int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(r8_2)
int32_t temp2_1
int32_t temp3_1
temp2_1:temp3_1 = sx.q(r9_1)
uint64_t rflags_1
int32_t temp0_2
temp0_2, rflags_1 =
    _bit_scan_reverse(((temp1_1 ^ temp0_1) - temp0_1) | ((temp3_1 ^ temp2_1) - temp2_1))
int32_t rbx_1
uint32_t r8_3
int32_t r9_2

if (temp0_2 s> 0x1d)
    char rcx_5 = (temp0_2 - 0x1d).b
    r9_2 = r9_1 s>> rcx_5
    r8_3 = r8_2 s>> rcx_5
    rbx_1 = neg.d(temp0_2 - 0x1d)
else
    rbx_1 = 0x1d - temp0_2
    char rcx_4 = rbx_1.b
    r9_2 = r9_1 << rcx_4
    r8_3 = r8_2 << rcx_4

arg_8:4.d = r8_3
arg_8.d = r9_2
sub_142b9a640(&arg_8, arg2)
int32_t rax_9 = arg_8.d
int32_t rcx_7 = 1

if (rax_9 s< 0)
    rax_9 = neg.d(rax_9)
    rcx_7 = -1

uint32_t r10_5 = ((sx.q(rax_9) * 0xdbd95b16 + 0x40000000) u>> 0x20).d

if (rcx_7 s< 0)
    r10_5 = neg.d(r10_5)

uint32_t rax = arg_8:4.d
int32_t rcx_8 = 1

if (rax s< 0)
    rax = neg.d(rax)
    rcx_8 = -1

uint32_t r9_6 = ((sx.q(rax) * 0xdbd95b16 + 0x40000000) u>> 0x20).d

if (rcx_8 s< 0)
    r9_6 = neg.d(r9_6)

if (rbx_1 s> 0)
    int32_t r11 = 1 << (rbx_1.b - 1)
    char rcx_10 = rbx_1.b
    int32_t rax_10
    rax_10.b = r10_5 s< 0
    *arg1 = (r11 - rax_10 + r10_5) s>> rcx_10
    int32_t r8_4
    r8_4.b = r9_6 s< 0
    *(arg1 + 4) = (r11 - r8_4 + r9_6) s>> rcx_10
    return 

char rbx_3 = (neg.d(rbx_1)).b
*(arg1 + 4) = r9_6 << rbx_3
*arg1 = r10_5 << rbx_3
