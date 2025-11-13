// 函数: sub_1423c9d40
// 地址: 0x1423c9d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140a47d40()

if (rax == 3)
    int32_t rax_3 = *(arg1 + 0x10)
    
    if (rax_3 s> 0)
        *(arg1 + 0xc) = rax_3
    
    goto label_1423c9d80

bool cond:0_1 = rax == 4

if (rax == 4)
    int32_t rax_2 = *(arg1 + 0x14)
    
    if (rax_2 s> 0)
        *(arg1 + 0xc) = rax_2
    else
        rax_2 = *(arg1 + 0x10)
        
        if (rax_2 s> 0)
            *(arg1 + 0xc) = rax_2
    
    int32_t rax_4 = *(arg1 + 0x30)
    cond:0_1 = rax_4 == 0
    
    if (rax_4 s> 0)
        *(arg1 + 0x28) = rax_4
    else
    label_1423c9d80:
        rax_4 = *(arg1 + 0x2c)
        cond:0_1 = rax_4 == 0
        
        if (rax_4 s> 0)
            *(arg1 + 0x28) = rax_4

int32_t rax_5 = *(arg1 + 0x24)
uint64_t rflags
int32_t temp0_1
temp0_1, rflags = _bit_scan_reverse(rax_5)
int32_t rdx

rdx = cond:0_1 ? 0x20 : 0x1f - temp0_1

uint64_t rflags_1
int32_t temp0_2
temp0_2, rflags_1 = _bit_scan_reverse(rax_5 - 1)
int32_t r9_1

if (rax_5 == 1)
    r9_1 = 0x20
else
    r9_1 = 0x1f - temp0_2

int32_t rax_8 = (0x20 - r9_1) & not.d(rdx << 0x1a s>> 0x1f)
*(arg1 + 4) = rax_8
int32_t rax_9 = *(arg1 + 0x28)
uint64_t rflags_2
int32_t temp0_3
temp0_3, rflags_2 = _bit_scan_reverse(rax_9)
int32_t rdx_4

if (rax_8 == 0)
    rdx_4 = 0x20
else
    rdx_4 = 0x1f - temp0_3

uint64_t rflags_3
int32_t temp0_4
temp0_4, rflags_3 = _bit_scan_reverse(rax_9 - 1)
int32_t r9_3

if (rax_9 == 1)
    r9_3 = 0x20
else
    r9_3 = 0x1f - temp0_4

int32_t rax_12 = (0x20 - r9_3) & not.d(rdx_4 << 0x1a s>> 0x1f)
*(arg1 + 8) = rax_12
int32_t rax_13 = *(arg1 + 0x38)
uint64_t rflags_4
int32_t temp0_5
temp0_5, rflags_4 = _bit_scan_reverse(rax_13)
int32_t rdx_8

if (rax_12 == 0)
    rdx_8 = 0x20
else
    rdx_8 = 0x1f - temp0_5

uint64_t rflags_5
int32_t temp0_6
temp0_6, rflags_5 = _bit_scan_reverse(rax_13 - 1)
int32_t r8

if (rax_13 == 1)
    r8 = 0x20
else
    r8 = 0x1f - temp0_6

*(arg1 + 0x3c) = (0x20 - r8) & not.d(rdx_8 << 0x1a s>> 0x1f)
int32_t rcx_2
rcx_2.b = *(arg1 + 0x44) == 0

if ((rcx_2.b & sub_140b5b8a0(*(arg1 + 0x40), 0x12c)) != 0)
    int32_t rcx_3
    rcx_3.b = *(arg1 + 0x4c) == 0
    char rax_16 = ((sub_140b5b8a0(*(arg1 + 0x48), 0x12d) & rcx_3.b) ^ 1) + 1
    *(arg1 + 0x18) = rax_16
    return rax_16

int32_t rbx_2 = *(arg1 + 0x44)
char rax_17 = sub_140b5b8a0(*(arg1 + 0x40), 0x12d)
int32_t rcx_4
rcx_4.b = rbx_2 == 0

if ((rcx_4.b & rax_17) != 0)
    *(arg1 + 0x18) = 0
    return rax_17

int32_t rcx_5
rcx_5.b = *(arg1 + 0x4c) == 0
bool rax_18 = ((rcx_5.b & sub_140b5b8a0(*(arg1 + 0x48), 0x12d)) == 0) + 3
*(arg1 + 0x18) = rax_18
return rax_18
