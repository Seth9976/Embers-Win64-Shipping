// 函数: sub_141fa60c0
// 地址: 0x141fa60c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x61].d = 0
int64_t rcx = arg1[0x60]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[0x59].d = 0

if (*(arg1 + 0x2cc) != 0)
    sub_1405a5410(&arg1[0x58], 0)

arg1[0x5e].d = 0xffffffff
*(arg1 + 0x2f4) = 0
sub_14059a8e0(&arg1[0x5a], 0)
int64_t rcx_3 = arg1[0x5c]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x58]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x56]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x54]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int32_t i_1 = arg1[0x51].d
void* rcx_7 = arg1[0x50]

if (i_1 != 0)
    int64_t* rbx_1 = rcx_7 + 0x20
    int32_t i
    
    do
        int64_t rcx_8 = *rbx_1
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        rbx_1 = &rbx_1[0xc]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_7 = arg1[0x50]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_9 = arg1[0x4c]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x4a]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x47]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return sub_1405ae4b0(arg1) __tailcall
