// 函数: sub_14172d300
// 地址: 0x14172d300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

DeleteCriticalSection(arg1 + 0xb0)
int32_t i_1 = *(arg1 + 0xa8)
int64_t* rbx = *(arg1 + 0xa0)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg1 + 0xa0)

if (rbx != 0)
    sub_140a74f90(rbx)

sub_1408d45e0(arg1 + 0x90)
int64_t rcx_4 = *(arg1 + 0x78)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

*(arg1 + 0x70) = 0
int64_t rcx_5 = *(arg1 + 0x68)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_141735ff0(arg1 + 0x28, 0)
int64_t rcx_7 = *(arg1 + 0x48)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = *(arg1 + 0x28)

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = *(arg1 + 0x18)

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
