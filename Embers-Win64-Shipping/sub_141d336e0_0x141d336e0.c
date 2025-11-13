// 函数: sub_141d336e0
// 地址: 0x141d336e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = &arg1[7]

for (int64_t i = 3; i != 0; )
    void* rbx_1 = *(rsi - 0x10)
    rsi -= 0x10
    i -= 1
    
    if (rbx_1 != 0)
        int64_t rcx = *(rbx_1 + 8)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        j_sub_140a74f90(rbx_1)

*arg1 = &data_142e85a30

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
