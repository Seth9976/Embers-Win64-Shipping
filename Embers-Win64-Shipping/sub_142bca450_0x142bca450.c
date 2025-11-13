// 函数: sub_142bca450
// 地址: 0x142bca450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = *arg1
int32_t rax = arg2[4]
int32_t r9 = 0x17
void* rbx = *(r11 + 0xd8)
int32_t rdx_2

if (rax == 0)
    rdx_2 = arg2[2]
else
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = muls.dp.d(0x38e38e39, arg2[2] * rax + 0x24)
    int32_t rdx_1 = temp0_1 s>> 4
    rdx_2 = rdx_1 + (rdx_1 u>> 0x1f)

int32_t rcx = *arg2
int32_t rdx_4 = (rdx_2 + 0x20) s>> 6

if (rcx != 0)
    if (rcx == 1)
        int32_t rcx_1 = 0
        
        if (rdx_4 != zx.d(*(rbx + 0x60)))
            rcx_1 = 0x17
        
        if (rcx_1 != 0)
            return zx.q(rcx_1)
        
        goto label_142bca505
    
    r9 = 7
else if (rdx_4 == (*(*(r11 + 0x30) + 0xc) + 0x20) s>> 6)
label_142bca505:
    sub_142b961f0(r11, 0)
    *(arg1 + 0x24) = zx.d(*(rbx + 0x50)) << 6
    arg1[5].d = (zx.d(*(rbx + 0x50)) - zx.d(*(rbx + 0x60))) << 6
    arg1[6].d = zx.d(*(rbx + 0x66)) << 6
    return 0

return zx.q(r9)
