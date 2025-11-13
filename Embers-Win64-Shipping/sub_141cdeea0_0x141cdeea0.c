// 函数: sub_141cdeea0
// 地址: 0x141cdeea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t r9_1 = sx.q(arg2)

if (r9_1.d s>= *(arg1 + 0x30))
    return 

void* rax_1 = *(arg1 + 0x48)
void* r10_1 = arg1 + 0x38

if (rax_1 != 0)
    r10_1 = rax_1

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(r9_1.d)

if (not(test_bit(*(r10_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), r9_1.d & 0x1f)))
    return 

int64_t* rdx_5 = *(arg1 + 0x28) + 0x10 + (r9_1 << 5)

if (arg3 == rdx_5)
    return 

int32_t r8_1 = *(arg3 + 0xc)
int64_t rsi_1 = *rdx_5
int64_t rdi_1 = sx.q(rdx_5[1].d)
arg3[1].d = rdi_1.d

if (rdi_1.d == 0 && r8_1 == 0)
    *(arg3 + 0xc) = rdi_1.d
    return 

sub_1405c4a90(arg3, rdi_1.d, r8_1)
memcpy(*arg3, rsi_1, (rdi_1 << 2).d)
