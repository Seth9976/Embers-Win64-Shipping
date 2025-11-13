// 函数: sub_142351ee0
// 地址: 0x142351ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c4f800(&arg1[0x2e])
int64_t rcx_1 = arg1[0x2b]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[0x1d] = &data_142d6a040
int64_t rcx_2 = arg1[0x28]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_1405ae180(&arg1[0x1e])
int64_t i = 2
void* rsi = &arg1[0x1a]

do
    int32_t j_1 = *(rsi - 8)
    rsi -= 0x10
    void* rcx_4 = *rsi
    i -= 1
    
    if (j_1 != 0)
        int64_t* rbx_1 = rcx_4 + 0x98
        int32_t j
        
        do
            int64_t rcx_5 = *rbx_1
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rbx_1[-0xe] = &data_142d6a040
            int64_t rcx_6 = rbx_1[-3]
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            sub_1405ae180(&rbx_1[-0xd])
            rbx_1 = &rbx_1[0x16]
            j = j_1
            j_1 -= 1
        while (j != 1)
        rcx_4 = *rsi
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
while (i != 0)

int64_t result = sub_141c4f9c0(&arg1[0x14])
int64_t rcx_9 = *arg1

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
