// 函数: sub_1419cdb90
// 地址: 0x1419cdb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
void* rbx = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        *(rbx + 0x48) = 0
        int64_t rcx = *(rbx + 0x40)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        *(rbx + 8) = 0
        
        if (*(rbx + 0xc) != 0)
            sub_1406106e0(rbx, 0)
        
        *(rbx + 0x30) = 0xffffffff
        *(rbx + 0x34) = 0
        sub_14059a8e0(rbx + 0x10, 0)
        int64_t rcx_3 = *(rbx + 0x20)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *rbx
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx += 0x58
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_140775cf0(arg1, arg2)
