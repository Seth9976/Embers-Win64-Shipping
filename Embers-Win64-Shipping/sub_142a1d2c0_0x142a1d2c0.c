// 函数: sub_142a1d2c0
// 地址: 0x142a1d2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SYSTEM_INFO systemInfo
GetNativeSystemInfo(&systemInfo)
uint32_t dwNumberOfProcessors = systemInfo.dwNumberOfProcessors
uint32_t dwNumberOfProcessors_1 = 1

if (dwNumberOfProcessors s> 0)
    dwNumberOfProcessors_1 = dwNumberOfProcessors

*(arg1 + 0x2228) = dwNumberOfProcessors_1
int32_t temp0
int32_t temp1
int32_t temp2
int32_t temp3
temp0, temp1, temp2, temp3 = __cpuid(0, 0)

if (temp0 u< 1)
    *(arg1 + 0x2250) = 0
    return temp0

int32_t temp0_1
int32_t temp1_1
int32_t temp2_1
int32_t temp3_1
temp0_1, temp1_1, temp2_1, temp3_1 = __cpuid(1, 0)
int32_t rbx_3 = temp3_1 u>> 0x17 & 1
int32_t rdx_3 = rbx_3 | 2

if ((temp3_1 & 0x2000000) == 0)
    rdx_3 = rbx_3

int32_t rcx_4 = rdx_3 | 4

if ((temp3_1 & 0x4000000) == 0)
    rcx_4 = rdx_3

int32_t rdx_5 = rcx_4 | 8

if ((temp2_1.b & 1) == 0)
    rdx_5 = rcx_4

int32_t rcx_6 = rdx_5 | 0x10

if ((temp2_1 & 0x200) == 0)
    rcx_6 = rdx_5

int32_t rbx_5 = rcx_6 | 0x20
int32_t rax_7 = temp2_1 & 0x80000

if (rax_7 == 0)
    rbx_5 = rcx_6

int32_t r8_2 = rbx_5

if ((temp2_1 & 0x18000000) == 0x18000000)
    int32_t temp0_2
    int32_t temp1_2
    temp0_2, temp1_2 = _xgetbv(0, arg2)
    rax_7 = temp1_2
    
    if ((((zx.q(temp0_2) << 0x20).b | rax_7.b) & 6) == 6)
        r8_2 |= 0x40
        
        if (temp0 u>= 7)
            int32_t temp0_3
            char temp1_3
            int32_t temp2_2
            int32_t temp3_2
            temp0_3, temp1_3, temp2_2, temp3_2 = __cpuid(7, 0)
            rax_7 = temp0_3
            
            if ((temp1_3 & 0x20) != 0)
                r8_2 |= 0x80

*(arg1 + 0x2250) = r8_2
return rax_7
