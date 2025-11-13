// 函数: sub_142cf0a00
// 地址: 0x142cf0a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_1439c82f0
void* rbx = &data_1439c82d0
int32_t i_1 = data_1439c82f8

if (rcx != 0)
    rbx = rcx

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_1 = *rbx
        
        if (rcx_1 != 0)
            rcx_1[9].d -= 1
            
            if (rcx_1[9].d == 1)
                sub_140a2f6e0(rcx_1)
        
        rbx += 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = data_1439c82f0

if (rcx != 0)
    sub_140a74f90(rcx)
