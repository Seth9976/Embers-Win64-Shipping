// 函数: sub_14117b3e0
// 地址: 0x14117b3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 0x88
    int32_t i
    
    do
        sub_14117b690(&rbx_1[0xf])
        sub_14117b500(rbx_1)
        sub_14117b500(&rbx_1[-2])
        int64_t rcx_4 = rbx_1[-8]
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = rbx_1[-0xa]
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = rbx_1[-0xc]
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = rbx_1[-0xe]
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        rbx_1 = &rbx_1[0x2c]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
