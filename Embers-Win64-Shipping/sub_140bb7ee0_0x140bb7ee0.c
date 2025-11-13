// 函数: sub_140bb7ee0
// 地址: 0x140bb7ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x10) s<= 0)
    return 

do
    if (sub_140bac7d0(arg1).b == 0)
        break
    
    void* rax_1 = sub_140cb5e90(arg1, i)
    EnterCriticalSection(&data_143e1a3e0)
    void arg_8
    int32_t rdi_1 = *sub_1408296b0(&data_1439a9730, &arg_8, rax_1)
    LeaveCriticalSection(&data_143e1a3e0)
    
    if (rdi_1 != 0xffffffff)
        int64_t rax = sub_140cba000(arg1, i)
        
        if (rax != 0)
            sub_140bb81a0(rax, rax_1)
    
    i += 1
while (i s< *(arg1 + 0x10))
