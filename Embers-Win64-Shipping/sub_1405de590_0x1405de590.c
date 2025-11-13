// 函数: sub_1405de590
// 地址: 0x1405de590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d5a4e0
sub_140596d10(&arg1[1], arg2 + 8)
arg1[3] = 0
int32_t i_1 = *(arg2 + 0x20)
void* rdi = *(arg2 + 0x18)
arg1[4].d = i_1

if (i_1 != 0)
    sub_1405a4be0(&arg1[3], i_1, 0)
    int64_t* rbx_1 = arg1[3]
    int32_t i
    
    do
        *rbx_1 = 0
        int32_t rsi_1 = *(rdi + 8)
        int64_t r12_1 = *rdi
        rbx_1[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rbx_1, rsi_1, 0)
            memcpy(*rbx_1, r12_1, rsi_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rdi += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0x24) = 0

void* rax = *(arg2 + 0x28)
arg1[5] = rax

if (rax != 0)
    *(rax + 0x44) += 1

arg1[6] = *(arg2 + 0x30)
sub_140596d10(&arg1[7], arg2 + 0x38)
arg1[0xa] = 0
void* rbx_2 = &arg1[9]
int64_t rsi_2 = sx.q(*(arg2 + 0x58))
void* rdi_1 = arg2 + 0x48
void* rbp = *(rdi_1 + 8)
*(rbx_2 + 0x10) = rsi_2.d

if (rsi_2.d != 0)
    sub_1405e3d70(rbx_2, rsi_2.d, 0)
    void* rax_2 = *(rbx_2 + 8)
    
    if (rbp != 0)
        rdi_1 = rbp
    
    if (rax_2 != 0)
        rbx_2 = rax_2
    
    memcpy(rbx_2, rdi_1, (rsi_2 << 2).d)
else
    *(rbx_2 + 0x14) = 1

arg1[0xc].d = *(arg2 + 0x60)
*(arg1 + 0x64) ^= (*(arg1 + 0x64) ^ *(arg2 + 0x64)) & 1
*(arg1 + 0x64) ^= (*(arg2 + 0x64) ^ *(arg1 + 0x64)) & 2
sub_1405de490(&arg1[0xd], arg2 + 0x68)
sub_140596d10(&arg1[0x13], arg2 + 0x98)
return arg1
