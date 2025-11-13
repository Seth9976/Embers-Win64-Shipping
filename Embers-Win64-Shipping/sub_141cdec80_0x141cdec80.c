// 函数: sub_141cdec80
// 地址: 0x141cdec80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t rbx_1 = sx.q(arg2)

if (rbx_1.d s>= *(arg1 + 0xd8))
    return 

void* r9_1 = arg1 + 0xe0
void* rax_1 = *(r9_1 + 0x10)

if (rax_1 != 0)
    r9_1 = rax_1

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(rbx_1.d)

if (not(test_bit(*(r9_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), rbx_1.d & 0x1f)))
    return 

int32_t rax_6 = arg3[1].d

if (rax_6 s< 3)
    arg3[1].d = 3
    
    if (*(arg3 + 0xc) s< 3)
        sub_1405a4cf0(arg3)
else if (rax_6 s> 3 && rax_6 != 3)
    arg3[1].d = 0 + 3
    sub_1405dac90(arg3)

int64_t r8 = rbx_1 << 2
int32_t* r9_2 = *arg3
*r9_2 = *(*(arg1 + 0x60) + sx.q(*(*(arg1 + 0xd0) + (r8 << 2))) * 0x18)
r9_2[1] = *(*(arg1 + 0x60) + sx.q(*(*(arg1 + 0xd0) + (r8 << 2) + 4)) * 0x18)
r9_2[2] = *(*(arg1 + 0x60) + sx.q(*(*(arg1 + 0xd0) + (r8 << 2) + 8)) * 0x18)
