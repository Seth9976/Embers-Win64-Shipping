// 函数: sub_14192d800
// 地址: 0x14192d800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[1].d

if (rdx == 0)
    return 

int32_t rax = arg1[2].d

if (rax u<= 0x8c1a)
    if (rax != 0x8c1a && rax != 0xde1 && rax != 0x806f && rax != 0x8513)
        return 
    
    goto label_14192d861

if (rax == 0x8d41)
    if ((*(arg1 + 0x14) & 0x20000) == 0)
        jump(data_143f000d0)
else if (rax == 0x9009 || rax == 0x9100)
label_14192d861:
    sub_14193f100(*arg1, rdx)
    int32_t rdx_1 = *(arg1 + 0xc)
    
    if (rdx_1 != 0)
        sub_14193f100(*arg1, rdx_1)
    
    if (arg1[4].b == 0)
        data_143eff9c8(1, &arg1[1])
        
        if (*(arg1 + 0xc) != 0)
            data_143eff9c8(1, arg1 + 0xc)
