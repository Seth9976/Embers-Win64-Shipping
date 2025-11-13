// 函数: sub_140d94b90
// 地址: 0x140d94b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x640)
void* rbx = arg1

if (rcx != 0)
    rbx = rcx

int32_t i_1 = *(arg1 + 0x648)

if (i_1 != 0)
    void* rbx_1 = rbx + 8
    int32_t i
    
    do
        int64_t* rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            int32_t temp1_1 = *(rcx_1 + 0xc)
            *(rcx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rcx_1 + 8))(rcx_1, 1)
        
        rbx_1 += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 0x640)

if (rcx != 0)
    sub_140a74f90(rcx)
