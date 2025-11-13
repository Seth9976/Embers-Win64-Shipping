// 函数: sub_1409ffb20
// 地址: 0x1409ffb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[0x8a].d
void* rbx = arg1[0x89]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *(rbx + 0x10)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0x8a].d = 0

if (*(arg1 + 0x454) != 0)
    sub_1405a52a0(&arg1[0x89], 0)

sub_140a092f0(arg1)
sub_140a09030(arg1)
return sub_141ee8490(arg1) __tailcall
