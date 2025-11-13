// 函数: sub_1417053d0
// 地址: 0x1417053d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fc4b40
int64_t result = sub_1417055c0(&arg1[0x16])
int64_t rcx_1 = arg1[0x14]

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x12]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0xd]

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0xb]

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[9]

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int32_t i_1 = arg1[8].d
int64_t* rbx = arg1[7]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_6 = *rbx
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        rbx = &rbx[5]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[7]

if (rbx != 0)
    result = sub_140a74f90(rbx)

int64_t rcx_8 = arg1[5]

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
