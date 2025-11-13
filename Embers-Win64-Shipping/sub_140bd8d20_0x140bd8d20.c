// 函数: sub_140bd8d20
// 地址: 0x140bd8d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const i = nullptr
void* i_2 = arg1

if (arg1 != 0)
    while (i == 0)
        void* rax_1
        int64_t rax_2
        void* rdx
        
        if (i_2 != 0)
            rax_1 = sub_140bdf2e0()
            rdx = *(i_2 + 0x10)
            rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (i_2 == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            i = nullptr
        else
            i = i_2
        
        i_2 = *(i_2 + 0x20)
        
        if (i_2 == 0)
            break

if ((*(arg1 + 0xb0) & 0x400) == 0)
    *(arg1 + 0xd8) = sub_140d275a0
    return sub_140d275a0

int64_t* rcx_1 = *(i + 0x220)
int64_t i_1 = *(arg1 + 0x18)
void* r8_4 = &rcx_1[sx.q(*(i + 0x228)) * 2]

if (rcx_1 != r8_4)
    while (i_1 != *rcx_1)
        rcx_1 = &rcx_1[2]
        
        if (rcx_1 == r8_4)
            return i_1
    
    i_1 = rcx_1[1]
    *(arg1 + 0xd8) = i_1

return i_1
