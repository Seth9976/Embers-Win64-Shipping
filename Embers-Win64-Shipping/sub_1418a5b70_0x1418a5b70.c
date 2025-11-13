// 函数: sub_1418a5b70
// 地址: 0x1418a5b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x20)
*(arg1 + 0x20) += 1
*(arg1 + 0x18)
*(arg1 + 0x18) += sx.q(rcx + 1)
*(arg1 + 0x10) += 1
bool z_1

do
    int32_t rax_2 = *(arg1 + 0x24)
    
    if (rax_2 s>= rcx + 1)
        break
    
    if (rax_2 == *(arg1 + 0x24))
        *(arg1 + 0x24) = rcx + 1
        z_1 = true
    else
        *(arg1 + 0x24)
        z_1 = false
while (not(z_1))
int64_t* rcx_2 = *(arg1 + 8)
(*(*rcx_2 + 0x28))(rcx_2, arg2, 9)
EnterCriticalSection(arg1 + 0x48)
void arg_8
int32_t rbp_1 = *sub_140b162a0(arg1 + 0x70, &arg_8, arg2)

if (arg1 != -0x48)
    LeaveCriticalSection(arg1 + 0x48)

int32_t result

if (rbp_1 == 0xffffffff)
    result = 0
    
    if (0 == *(arg1 + 0x38))
        *(arg1 + 0x38) = 0
    else
        result = *(arg1 + 0x38)
    
    *(arg1 + 0x30)
    *(arg1 + 0x30) += sx.q(result)
    *(arg1 + 0x28) += 1
else
    int32_t rsi_1 = *(arg1 + 0x38)
    *(arg1 + 0x38) += 1
    *(arg1 + 0x30)
    *(arg1 + 0x30) += sx.q(rsi_1 + 1)
    *(arg1 + 0x28) += 1
    bool z_2
    
    do
        result = *(arg1 + 0x3c)
        
        if (result s>= rsi_1 + 1)
            break
        
        if (result == *(arg1 + 0x3c))
            *(arg1 + 0x3c) = rsi_1 + 1
            z_2 = true
        else
            result = *(arg1 + 0x3c)
            z_2 = false
    while (not(z_2))

return result
