// 函数: sub_1415282a0
// 地址: 0x1415282a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x18) s<= 0)
    return 

int64_t rcx = *(arg1 + 0x28)
int32_t* r10_1 = nullptr
int64_t* r11_1 = nullptr

do
    int32_t j = 0
    
    if (*(r10_1 + rcx) s> 0)
        int64_t rax = 0
        
        do
            rax += 4
            j += 1
            int64_t rdx_1 = *(r11_1 + *(arg1 + 0x20))
            *(rdx_1 + rax - 4) = not.d(*(rdx_1 + rax - 4))
            rcx = *(arg1 + 0x28)
        while (j s< *(r10_1 + rcx))
    
    i += 1
    r11_1 = &r11_1[1]
    r10_1 = &r10_1[1]
while (i s< *(arg1 + 0x18))
