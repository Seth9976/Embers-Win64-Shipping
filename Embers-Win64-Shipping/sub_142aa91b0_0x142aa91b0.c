// 函数: sub_142aa91b0
// 地址: 0x142aa91b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_2 = sx.q(*(arg1 + 0xa8))
void* rbp = *(arg1 + 0xa0)

if (i_2 s> 0)
    int64_t* rbx_1 = rbp + 8
    int64_t i
    
    do
        if ((*(rbx_1 + 0xc) & 1) != 0)
            sub_142a7dcd0(*rbx_1)
        
        rbx_1 = &rbx_1[3]
        i = i_2
        i_2 -= 1
    while (i != 1)

sub_142a7dcd0(rbp)
int64_t i_3 = sx.q(*(arg1 + 0xb8))
void* rbp_1 = *(arg1 + 0xb0)

if (i_3 s> 0)
    int64_t* rbx_2 = rbp_1 + 8
    int64_t i_1
    
    do
        if ((*(rbx_2 + 0xc) & 1) != 0)
            sub_142a7dcd0(*rbx_2)
        
        rbx_2 = &rbx_2[3]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

sub_142a7dcd0(rbp_1)
return sub_142a7dcd0(arg1) __tailcall
