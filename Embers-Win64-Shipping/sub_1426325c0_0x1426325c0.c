// 函数: sub_1426325c0
// 地址: 0x1426325c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int32_t i = 0

if (arg1[1].d s> 0)
    int64_t rdi_1 = 0
    
    do
        int64_t rax_1 = *arg1
        int64_t rcx = *(rdi_1 + rax_1 + 0x40)
        
        if (rcx != 0)
            data_143b502b0(rcx)
            rax_1 = *arg1
        
        int64_t rcx_1 = *(rdi_1 + rax_1 + 0x48)
        
        if (rcx_1 != 0)
            data_143b502b0(rcx_1)
            rax_1 = *arg1
        
        int64_t rcx_2 = *(rdi_1 + rax_1 + 0x50)
        
        if (rcx_2 != 0)
            data_143b502b0(rcx_2)
        
        i += 1
        rdi_1 += 0x58
    while (i s< arg1[1].d)

int64_t rcx_3 = *arg1

if (rcx_3 != 0)
    data_143b502b0(rcx_3)

data_143b502b0(arg1)
