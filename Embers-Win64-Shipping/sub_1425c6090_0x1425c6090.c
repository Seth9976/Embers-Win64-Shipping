// 函数: sub_1425c6090
// 地址: 0x1425c6090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
int32_t rcx = *(rbx + 0x20)
*(rbx + 0x24) -= 1
int16_t arg_8

if (((rcx - 3) & 0xfffffff9) == 0 && rcx != 9)
    sub_1425c9240(*(rbx + 8))
    int32_t i_2 = *(rbx + 0x24)
    int64_t* rsi_1 = *(rbx + 8)
    
    if (i_2 s> 0)
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            int64_t rax_1 = *rsi_1
            arg_8 = 9
            (*(rax_1 + 0x150))(rsi_1, &arg_8, 2)
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (rcx != 4)
    sub_1425ca0d0(*(rbx + 8))

int64_t* rcx_4 = *(rbx + 8)
arg_8 = 0x5d
(*(*rcx_4 + 0x150))(rcx_4, &arg_8, 2)
*(rbx + 0x18) -= 1
int64_t result = sub_140679af0(rbx + 0x10)
*(rbx + 0x20) = 5
return result
