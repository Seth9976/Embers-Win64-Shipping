// 函数: sub_142002340
// 地址: 0x142002340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
void* rbx = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *(rbx + 0x48)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *(rbx + 0x28)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t rcx_2 = *(rbx + 0x18)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *rbx
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx += 0x60
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_14090a730(arg1, arg2)
