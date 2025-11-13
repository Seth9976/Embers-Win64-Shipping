// 函数: sub_140623f60
// 地址: 0x140623f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140623e60(&arg1[0x2a])
sub_140623e60(&arg1[0x28])
int32_t i_1 = arg1[0x26].d
void* rcx_2 = arg1[0x25]

if (i_1 != 0)
    void* rbx_1 = rcx_2 + 0x28
    int32_t i
    
    do
        int64_t rcx_3 = *(rbx_1 + 0x70)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        sub_140623ed0(rbx_1)
        rbx_1 += 0xb0
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_2 = arg1[0x25]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_5 = arg1[0x22]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[0x1a].d = 0
int64_t rcx_6 = arg1[0x19]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

arg1[0x12].d = 0

if (*(arg1 + 0x94) != 0)
    sub_1405a5410(&arg1[0x11], 0)

arg1[0x17].d = 0xffffffff
*(arg1 + 0xbc) = 0
sub_14059a8e0(&arg1[0x13], 0)
int64_t rcx_9 = arg1[0x15]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x11]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

arg1[0x10].d = 0
int64_t rcx_11 = arg1[0xf]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

arg1[8].d = 0

if (*(arg1 + 0x44) != 0)
    sub_1405a5410(&arg1[7], 0)

arg1[0xd].d = 0xffffffff
*(arg1 + 0x6c) = 0
sub_14059a8e0(&arg1[9], 0)
int64_t rcx_14 = arg1[0xb]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = arg1[7]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

return sub_140d163b0(arg1) __tailcall
