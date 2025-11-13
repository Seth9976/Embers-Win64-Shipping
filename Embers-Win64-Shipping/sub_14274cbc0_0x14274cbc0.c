// 函数: sub_14274cbc0
// 地址: 0x14274cbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x12]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0xe]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int32_t i_1 = arg1[0xd].d
int64_t* rbx = arg1[0xc]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_2 = *rbx
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx = &rbx[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0xc]

if (rbx != 0)
    sub_140a74f90(rbx)

*arg1 = &data_142d40478

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
