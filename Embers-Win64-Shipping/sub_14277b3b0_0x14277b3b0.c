// 函数: sub_14277b3b0
// 地址: 0x14277b3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s> *(arg1 + 0xc))
    return sub_1427799b0(arg1, arg2) __tailcall

int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = *arg1 + 0x50
    int32_t i
    
    do
        *(rbx_1 + 8) = 0
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        sub_1409aaf90(rbx_1 - 0x40)
        int64_t* rcx_2 = *(rbx_1 - 0x48)
        
        if (rcx_2 != 0)
            (**rcx_2)(rcx_2, 1)
        
        rbx_1 += 0x60
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0
