// 函数: sub_1428f56a0
// 地址: 0x1428f56a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 == arg2)
    if (sub_142890e60(arg1, arg2[1].d + 1) == 0)
        return 0
else
    arg1[2].d = arg2[2].d
    
    if (sub_142890e60(arg1, arg2[1].d + 1) == 0)
        return 0
    
    arg1[1].d = arg2[1].d

int64_t* r9 = *arg2
uint64_t rcx = 0
int32_t i = 0
int64_t* rdx_2 = *arg1

if (arg2[1].d s> 0)
    int64_t r8_1
    
    do
        r8_1 = *r9
        r9 = &r9[1]
        i += 1
        rdx_2 = &rdx_2[1]
        rdx_2[-1] = (r8_1 * 2) | rcx
        rcx = r8_1 u>> 0x3f
    while (i s< arg2[1].d)
    
    if (r8_1 s< 0)
        *rdx_2 = 1
        arg1[1].d += 1

return 1
