// 函数: sub_14187ced0
// 地址: 0x14187ced0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x48)
uint32_t count_7 = (arg1 + 0x48)->__offset(0x38).d
uint32_t count_5 = count_7
int32_t rsi = (arg1 + 0x48)->__offset(0x28).d

if (arg3 u<= count_7)
    count_5 = arg3

uint64_t rdx = zx.q(modu.dp.d(0:((arg1 + 0x48)->__offset(0x3c).d - count_7 + rsi), rsi))
uint32_t count = count_5
uint32_t count_3 = rsi - rdx.d

if (count_3 u<= count_5)
    count = count_3

memcpy(arg2, rdx + (arg1 + 0x48)->__offset(0x30).q, count)

if (count_3 u< count_5)
    memcpy(zx.q(count_3) + arg2, (arg1 + 0x48)->__offset(0x30).q, count_5 - count_3)

(arg1 + 0x48)->__offset(0x38).d -= count_5

if (arg4 != 0 && count_5 u< arg3)
    int128_t zmm6 = 0x3c23d70a
    
    do
        bool z_1
        
        if (0 == (arg1 + 0x48)->__offset(0x48).d)
            (arg1 + 0x48)->__offset(0x48).d = 0
            z_1 = true
        else
            (arg1 + 0x48)->__offset(0x48).d
            z_1 = false
        
        if (not(z_1))
            break
        
        LeaveCriticalSection(arg1 + 0x48)
        zmm6 = sub_140b73230(zmm6)
        EnterCriticalSection(arg1 + 0x48)
        uint32_t count_8 = (arg1 + 0x48)->__offset(0x38).d
        int32_t rbp_1 = (arg1 + 0x48)->__offset(0x28).d
        uint32_t count_6 = arg3 - count_5
        uint32_t count_4 = count_8
        int64_t r15_2 = zx.q(count_5) + arg2
        
        if (count_6 u<= count_8)
            count_4 = count_6
        
        uint32_t count_1 = count_4
        uint64_t rdx_3 =
            zx.q(modu.dp.d(0:((arg1 + 0x48)->__offset(0x3c).d - count_8 + rbp_1), rbp_1))
        uint32_t count_2 = rbp_1 - rdx_3.d
        
        if (count_2 u<= count_4)
            count_1 = count_2
        
        memcpy(r15_2, rdx_3 + (arg1 + 0x48)->__offset(0x30).q, count_1)
        
        if (count_2 u< count_4)
            memcpy(zx.q(count_2) + r15_2, (arg1 + 0x48)->__offset(0x30).q, count_4 - count_2)
        
        (arg1 + 0x48)->__offset(0x38).d -= count_4
        count_5 += count_4
    while (count_5 u< arg3)

LeaveCriticalSection(arg1 + 0x48)
return zx.q(count_5)
