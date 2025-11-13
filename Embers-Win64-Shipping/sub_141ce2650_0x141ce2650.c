// 函数: sub_141ce2650
// 地址: 0x141ce2650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t r10_1 = sx.q(arg2)

if (r10_1.d s>= *(arg1 + 0x110))
    return 

void* r11_1 = arg1 + 0x118
void* rax_1 = *(r11_1 + 0x10)

if (rax_1 != 0)
    r11_1 = rax_1

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(r10_1.d)

if (not(test_bit(*(r11_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), r10_1.d & 0x1f))
        || arg3 s>= *(*(arg1 + 0x108) + r10_1 * 0x28 + 8) || arg4 s< 0 || arg4 s>= *(arg1 + 0x68))
    return 

void* r8 = arg1 + 0x70
void* rax_6 = *(r8 + 0x10)

if (rax_6 != 0)
    r8 = rax_6

int32_t temp2_1
int32_t temp3_1
temp2_1:temp3_1 = sx.q(arg4)

if (test_bit(*(r8 + (sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5) << 2)), arg4 & 0x1f))
    sub_141ce24e0(arg1 + 0x28, r10_1.d, arg3, arg4)
