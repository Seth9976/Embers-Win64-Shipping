// 函数: sub_14266df60
// 地址: 0x14266df60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
*arg2 = **arg1
arg2[1] = 0
int32_t i_1 = r8[1].d
void* rbp = *r8
arg2[2].d = i_1

if (i_1 != 0)
    sub_140874c00(&arg2[1], i_1, 0)
    int32_t* r8_1 = arg2[1]
    void* rax_1 = rbp + 4
    int128_t* rdx_1 = &r8_1[1]
    int32_t i
    
    do
        *r8_1 = *(rax_1 - 4)
        *rdx_1 = *rax_1
        rdx_1[1].q = *(rax_1 + 0x10)
        *(rdx_1 + 0x18) = *(rax_1 + 0x18)
        *(rdx_1 + 0x1c) = *(rax_1 + 0x1c)
        *(rdx_1 + 0x24) = *(rax_1 + 0x24)
        void* rcx_6 = *(rax_1 + 0x2c)
        *(rdx_1 + 0x2c) = rcx_6
        
        if (rcx_6 != 0)
            *(rcx_6 + 8) += 1
        
        r8_1 = &r8_1[0xe]
        rdx_1 += 0x38
        rax_1 += 0x38
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg2 + 0x14) = 0

return arg2
