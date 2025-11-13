// 函数: sub_140612870
// 地址: 0x140612870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[4]

if (rcx != 0)
    (**rcx)(rcx, 1)

int32_t rdi = 0
*arg1 = arg2
arg1[4] = 0
arg1[1].b = 0
arg1[0xb] = 0
arg1[2] = 0
arg1[3].d = 0x7a120
*(arg1 + 0x1c) = *(arg2 + 8)
void*** rax_3 = j_sub_140a82f30(0x40)
void*** rax_4

if (rax_3 == 0)
    rax_4 = nullptr
else
    rax_4 = sub_14060c9e0(rax_3, &arg1[5], *(arg1 + 0x1c))

void* r14 = *arg1
arg1[4] = rax_4
arg1[0x10] = arg1[0xf]
arg1[0x13] = arg1[0x12]
int64_t rcx_2 = *(r14 + 0x10)
int32_t result = ((*(r14 + 0x18) - rcx_2) s>> 3).d

if (result s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rdx_1 = arg1[0x10]
        int64_t rax_10 = *(*(rsi_1 + rcx_2) + 8)
        int64_t arg_8 = rax_10
        
        if (rdx_1 == arg1[0x11])
            sub_14060b9d0(&arg1[0xf], rdx_1, &arg_8)
        else
            *rdx_1 = rax_10
            arg1[0x10] += 8
        
        int64_t* rdx_2 = arg1[0x13]
        int64_t rax_13 = *(*(*(r14 + 0x10) + rsi_1) + 0x10)
        arg_8 = rax_13
        
        if (rdx_2 == arg1[0x14])
            sub_14060b9d0(&arg1[0x12], rdx_2, &arg_8)
        else
            *rdx_2 = rax_13
            arg1[0x13] += 8
        
        rcx_2 = *(r14 + 0x10)
        rdi += 1
        rsi_1 = &rsi_1[1]
        result = ((*(r14 + 0x18) - rcx_2) s>> 3).d
    while (rdi s< result)

return result
