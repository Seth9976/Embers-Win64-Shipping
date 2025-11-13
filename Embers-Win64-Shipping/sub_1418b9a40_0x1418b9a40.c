// 函数: sub_1418b9a40
// 地址: 0x1418b9a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[4]

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t i_1 = arg1[3].d
void* rcx_1 = arg1[2]

if (i_1 != 0)
    int64_t* rbx_1 = rcx_1 + 8
    int32_t i
    
    do
        sub_1408464b0(rbx_1)
        rbx_1 = &rbx_1[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_1 = arg1[2]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_3 = *arg1

if (rcx_3 == 0)
    return 

return sub_140a74f90(rcx_3) __tailcall
