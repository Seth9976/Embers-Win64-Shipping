// 函数: sub_1428f5900
// 地址: 0x1428f5900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (sub_142890300(arg2) != 0)
    sub_142890900(arg1, 0)
    return 1

int32_t rbp = arg2[1].d
int64_t r14 = *arg2
int64_t i = sx.q(rbp - 1)
int64_t rcx_2 = *(r14 + (i << 3))
int32_t rax_3
rax_3.b = rcx_2 == 1
int32_t rbp_1 = rbp - rax_3

if (arg2 != arg1)
    int64_t* result = sub_142890e60(arg1, rbp_1)
    
    if (result == 0)
        return result
    
    arg1[2].d = arg2[2].d
    rcx_2 = *(r14 + (i << 3))

int64_t rax_5 = *arg1
int64_t rdx_5 = neg.q((rcx_2 ^ 1) + 1) << 0x3f
uint64_t* r8_1 = rax_5 + (i << 3)
uint64_t rcx_4 = rcx_2 u>> 1

if (rcx_4 != 0)
    *r8_1 = rcx_4

while (i s> 0)
    int64_t rcx_5 = *(r14 - rax_5 + r8_1 - 8)
    r8_1 = &r8_1[-1]
    i -= 1
    *r8_1 = rcx_5 u>> 1 | rdx_5
    rdx_5 = neg.q((rcx_5 ^ 1) + 1) << 0x3f

arg1[1].d = rbp_1

if (rbp_1 == 0)
    arg1[2].d = rbp_1

return 1
