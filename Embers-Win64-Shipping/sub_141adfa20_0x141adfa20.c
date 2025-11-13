// 函数: sub_141adfa20
// 地址: 0x141adfa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x16]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x14]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x12]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0xc]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[8]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int32_t i_1 = arg1[7].d
int64_t* rbx = arg1[6]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_5 = *rbx
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[6]

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_7 = arg1[4]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

*arg1 = &data_14303f308

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
