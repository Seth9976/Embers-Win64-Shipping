// 函数: sub_1425c94b0
// 地址: 0x1425c94b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x20)
int32_t rcx = rax
int16_t arg_8

if (rax != 0 && rax != 2 && rax != 4 && rax != 0xc)
    int64_t* rcx_1 = *(arg1 + 8)
    arg_8 = 0x2c
    (*(*rcx_1 + 0x150))(rcx_1, &arg_8, 2)
    rcx = *(arg1 + 0x20)

if (rcx != 0)
    sub_1425c9240(*(arg1 + 8))
    int32_t i_2 = *(arg1 + 0x24)
    int64_t* rsi_1 = *(arg1 + 8)
    
    if (i_2 s> 0)
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            int64_t rax_2 = *rsi_1
            arg_8 = 9
            (*(rax_2 + 0x150))(rsi_1, &arg_8, 2)
            i = i_1
            i_1 -= 1
        while (i != 1)

int64_t* rcx_4 = *(arg1 + 8)
arg_8 = 0x7b
(*(*rcx_4 + 0x150))(rcx_4, &arg_8, 2)
*(arg1 + 0x24) += 1
int64_t rsi_2 = sx.q(*(arg1 + 0x18))
int32_t rax_4 = (rsi_2 + 1).d
*(arg1 + 0x18) = rax_4

if (rax_4 s> *(arg1 + 0x1c))
    sub_1406105e0(arg1 + 0x10)

int64_t result = *(arg1 + 0x10)
*(result + (rsi_2 << 2)) = 6
*(arg1 + 0x20) = 2
return result
