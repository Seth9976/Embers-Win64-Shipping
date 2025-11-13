// 函数: sub_142bdd630
// 地址: 0x142bdd630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = *(arg1 + 0x20) - 0x34
*(arg1 + 0x78) = 0
*(arg1 + 0x28) = rax_1
void* rax_2 = *(arg1 + 0x30)
*(arg1 + 0x6a) = 0
int16_t r10 = 0
arg1[0xf] = 0
int32_t i = 0
*(arg1 + 0x70) = rax_2
*(rax_2 + 0x10) = rax_2
arg1[0x1a].w = 0

if (0 s< arg1[0x2e].w)
    int16_t* rdi_1 = nullptr
    
    do
        int64_t rax_3 = *(arg1 + 0xd0)
        arg1[0x22] = 0
        *(arg1 + 0x80) = 0
        
        if (sub_142bdda50(arg1, r10, *(rdi_1 + rax_3), arg2) != 0)
            return true
        
        int32_t r8_2 = arg1[1]
        int32_t rdx_1 = arg1[0x17]
        r10 = *(rdi_1 + *(arg1 + 0xd0)) + 1
        
        if ((rdx_1 & (r8_2 - 1)) == 0 && rdx_1 s>= arg1[0x18] && rdx_1 s<= arg1[0x19])
            int64_t r9_2 = *(arg1 + 0x80)
            
            if (r9_2 != 0 && ((*(*(arg1 + 0x70) + 0x18) ^ *(r9_2 + 0x18)) & 8) == 0)
                *(arg1 + 0x30) -= 4
        
        void* r9_3 = *(arg1 + 0x70)
        bool cond:0_1
        
        if (*(arg1 + 0x30) == *(r9_3 + 0x10) || (*(r9_3 + 0x18) & 8) == 0)
            cond:0_1 = ((r8_2 - 1 + rdx_1) & neg.d(r8_2)) - rdx_1 s>= arg1[2]
        else
            cond:0_1 = rdx_1 - (neg.d(r8_2) & rdx_1) s>= arg1[2]
        
        rdx_1.b = cond:0_1
        
        if (sub_142bde490(arg1, rdx_1.b) != 0)
            return true
        
        int64_t rax_13 = *(arg1 + 0x80)
        
        if (rax_13 != 0)
            *(r9_3 + 0x28) = rax_13
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< sx.d(arg1[0x2e].w))

if (sub_142bde530(arg1) == 0)
    return *(arg1 + 0x30) u>= *(arg1 + 0x28)

return true
