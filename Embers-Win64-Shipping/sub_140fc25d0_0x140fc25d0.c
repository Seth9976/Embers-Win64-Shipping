// 函数: sub_140fc25d0
// 地址: 0x140fc25d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 0
int32_t i = 0

if (*(arg1 + 0x420) s> 0)
    int64_t r11_1 = 0
    int64_t rbx_1 = 0
    
    do
        rbx_1 += 4
        r11_1 += 8
        i += 1
        **(r11_1 + *(arg1 + 0x418) - 8) = *(rbx_1 + *(arg1 + 0x448) - 4)
    while (i s< *(arg1 + 0x420))

int32_t i_1 = 0

if (*(arg1 + 0x430) s> 0)
    int64_t r11_2 = 0
    int64_t rbx_2 = 0
    
    do
        rbx_2 += 0x10
        r11_2 += 8
        i_1 += 1
        **(r11_2 + *(arg1 + 0x428) - 8) = *(*(arg1 + 0x458) + rbx_2 - 0x10)
    while (i_1 s< *(arg1 + 0x430))

if (*(arg1 + 0x440) s<= 0)
    return 

void* rdx_3 = nullptr
int32_t** rcx_2 = nullptr

do
    int64_t r10 = *(arg1 + 0x438)
    int64_t r11_3 = *(arg1 + 0x468)
    int32_t* rbx_3 = *(rcx_2 + r10)
    
    if (rbx_3 != 0)
        *rbx_3 = *(rdx_3 + r11_3)
    
    int32_t* rbx_4 = *(rcx_2 + r10 + 8)
    
    if (rbx_4 != 0)
        *rbx_4 = *(rdx_3 + r11_3 + 4)
    
    int32_t* rbx_5 = *(rcx_2 + r10 + 0x10)
    
    if (rbx_5 != 0)
        *rbx_5 = *(rdx_3 + r11_3 + 8)
    
    int32_t* r10_1 = *(rcx_2 + r10 + 0x18)
    
    if (r10_1 != 0)
        *r10_1 = *(rdx_3 + r11_3 + 0xc)
    
    i_2 += 1
    rcx_2 = &rcx_2[4]
    rdx_3 += 0x10
while (i_2 s< *(arg1 + 0x440))
