// 函数: sub_142c08c80
// 地址: 0x142c08c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg1 + 0x60)
int64_t r11 = *(arg1 + 0x70)

if (i_2 == 0)
    return 

uint64_t i_1 = zx.q(i_2)
int64_t* rax = nullptr
uint64_t i

do
    if ((*(r11 + rax + 0xc) u>> 3 & 1) != 0)
        if (arg2 != 0)
            int32_t* rdx_2 = *(arg1 + 0x80) + rax
            rdx_2[2] -= *rdx_2
            rdx_2[3] -= rdx_2[1]
        
        *(rax + *(arg1 + 0x80)) = 0
    
    rax += 0x14
    i = i_1
    i_1 -= 1
while (i != 1)
