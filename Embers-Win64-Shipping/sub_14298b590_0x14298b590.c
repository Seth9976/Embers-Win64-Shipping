// 函数: sub_14298b590
// 地址: 0x14298b590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* arg_8 = arg1
int64_t var_20 = -2
int32_t var_28 = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 7
*arg1 = 0
int32_t var_28_1 = 1
int64_t rbx = -1

do
    rbx += 1
while (arg2[rbx] != 0)

int32_t rax = MultiByteToWideChar(0xfde9, 0, arg2, rbx.d, nullptr, 0)
int64_t rbp = sx.q(rax)

if (rax s> 0)
    int64_t rcx = *(arg1 + 0x10)
    
    if (rbp u> rcx)
        sub_14298b680(arg1, rbp - rcx, 0)
    else
        *(arg1 + 0x10) = rbp
        int16_t* rcx_1 = arg1
        
        if (*(arg1 + 0x18) u>= 8)
            rcx_1 = *arg1
        
        rcx_1[rbp] = 0
    
    int16_t* lpWideCharStr = arg1
    
    if (*(arg1 + 0x18) u>= 8)
        lpWideCharStr = *arg1
    
    MultiByteToWideChar(0xfde9, 0, arg2, rbx.d, lpWideCharStr, rbp.d)

return arg1
