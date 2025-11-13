// 函数: sub_141db9490
// 地址: 0x141db9490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14323c0f0
int64_t rcx = arg1[0xd8]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0xd6]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_1405ae080(&arg1[0xcc])
sub_141c51350(&arg1[0x4f])
void* r14 = &arg1[0x26]
sub_1405ae080(r14)

for (int64_t i = 2; i != 0; )
    int32_t j_1 = *(r14 - 8)
    r14 -= 0x10
    void* rcx_5 = *r14
    i -= 1
    
    if (j_1 != 0)
        int64_t* rbx_1 = rcx_5 + 0x98
        int32_t j
        
        do
            int64_t rcx_6 = *rbx_1
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rbx_1[-0xe] = &data_142d6a040
            int64_t rcx_7 = rbx_1[-3]
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            sub_1405ae180(&rbx_1[-0xd])
            rbx_1 = &rbx_1[0x16]
            j = j_1
            j_1 -= 1
        while (j != 1)
        rcx_5 = *r14
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

sub_141c4f9c0(&arg1[0x20])
arg1[0x1e].d = 0
int64_t rcx_10 = arg1[0x1d]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

arg1[0x16].d = 0

if (*(arg1 + 0xb4) != 0)
    sub_1405a5410(&arg1[0x15], 0)

arg1[0x1b].d = 0xffffffff
*(arg1 + 0xdc) = 0
sub_14059a8e0(&arg1[0x17], 0)
int64_t rcx_13 = arg1[0x19]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = arg1[0x15]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

sub_1405ae100(&arg1[0xb])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
