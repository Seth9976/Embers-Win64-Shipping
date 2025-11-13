// 函数: sub_140b212b0
// 地址: 0x140b212b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = arg2
int32_t i_5 = ((&arg1[3]).d & 0xfffffffc) - arg1.d
char* r11 = arg1
int32_t r8_1 = not.d(_bswap(arg3))

if (arg2 s> i_5)
    int32_t rbx = i_3 - i_5
    
    if (i_5 != 0)
        int32_t i
        
        do
            uint64_t rax_1 = zx.q(*r11)
            r11 = &r11[1]
            r8_1 = *(&data_1439a2900 + ((zx.q(r8_1.b) ^ rax_1) << 2)) ^ r8_1 u>> 8
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx)
    int32_t rdx_1 = temp0_1 & 7
    int32_t rax_6 = temp1_1 + rdx_1
    int32_t i_4 = rax_6 s>> 3
    i_3 = (rax_6 & 7) - rdx_1
    
    if (i_4 != 0)
        int32_t i_1
        
        do
            int32_t r10_1 = *(r11 + 4)
            int32_t rcx_2 = *r11
            r11 = &r11[8]
            int32_t rcx_3 = rcx_2 ^ r8_1
            int32_t r8_5 = *((zx.q((zx.q(rcx_3) u>> 0x10).b) << 2) + 0x1439a3d00)
                ^ *((zx.q((zx.q(rcx_3) u>> 8).b) << 2) + 0x1439a4100)
                ^ *((zx.q((zx.q(r10_1) u>> 0x10).b) << 2) + 0x1439a2d00)
            int32_t r8_8 = r8_5 ^ *((zx.q((zx.q(r10_1) u>> 8).b) << 2) + 0x1439a3100)
                ^ *((zx.q(rcx_3) u>> 0x18 << 2) + 0x1439a3900)
                ^ *(&data_1439a2900 + (zx.q(r10_1) u>> 0x18 << 2))
            r8_1 =
                r8_8 ^ *((zx.q(rcx_3.b) << 2) + 0x1439a4500) ^ *((zx.q(r10_1.b) << 2) + 0x1439a3500)
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)

if (i_3 != 0)
    int32_t i_2
    
    do
        uint64_t rax_23 = zx.q(*r11)
        r11 = &r11[1]
        r8_1 = *(&data_1439a2900 + ((zx.q(r8_1.b) ^ rax_23) << 2)) ^ r8_1 u>> 8
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

return zx.q(_bswap(not.d(r8_1)))
