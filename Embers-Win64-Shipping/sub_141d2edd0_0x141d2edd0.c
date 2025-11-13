// 函数: sub_141d2edd0
// 地址: 0x141d2edd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 3
void* rsi = arg1 + 0x30

do
    int64_t* rbx_1 = *(rsi - 0x10)
    rsi -= 0x10
    i -= 1
    
    if (rbx_1 != 0)
        int64_t rcx = rbx_1[4]
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = rbx_1[2]
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        j_sub_140a74f90(rbx_1)
while (i != 0)
