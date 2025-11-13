// 函数: sub_1422b9d20
// 地址: 0x1422b9d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
*(arg3 + 0x70) = 0

if (*(arg3 + 0x74) != 0)
    sub_1422cfab0(arg3 + 0x30, 0)

int32_t rbp = 4
*(arg3 + 0xbc) = *(arg1 + 0x78)
char r14 = 8
*(arg3 + 0xa8) = *(arg1 + 0x58)
char rdx = *(arg1 + 0x80)
uint64_t result = zx.q(*(arg1 + 0x78))

if (rdx == 0)
    r14 = 4

if (arg4 s<= 0xffffffff)
    rbp = result.d
else if (result.d u<= 4)
    rbp = result.d

if (rbp != 0)
    char var_1b_1 = r14 * result.b
    char rax_3 = 2
    int32_t var_20_1 = 0
    char var_19_1 = 4
    
    if (rdx == 0)
        rax_3 = 0xc
    
    char var_1a_1 = rax_3
    
    do
        int64_t rsi_1 = sx.q(*(arg3 + 0x70))
        int32_t rax_5 = (rsi_1 + 1).d
        *(arg3 + 0x70) = rax_5
        char var_1c_1 = r14 * rdi.b
        
        if (rax_5 s> *(arg3 + 0x74))
            sub_1410348f0(arg3 + 0x30)
        
        rdi += 1
        result = rsi_1 * 2
        *(arg3 + 0x30 + (result << 3)) = (arg1 + 0x28).o
    while (rdi u< rbp)

return result
