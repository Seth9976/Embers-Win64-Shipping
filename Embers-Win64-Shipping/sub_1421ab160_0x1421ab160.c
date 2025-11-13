// 函数: sub_1421ab160
// 地址: 0x1421ab160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*arg1 = &data_1432ec2f8

if (arg1[0x39].d s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        int64_t* rcx = *(rbx_1 + arg1[0x38])
        (*(*rcx + 0x3a0))(rcx, 0)
        i += 1
        rbx_1 = &rbx_1[1]
    while (i s< arg1[0x39].d)

arg1[0x39].d = 0

if (*(arg1 + 0x1cc) s<= 0xffffffff)
    sub_1405c5570(&arg1[0x38], 0)

sub_140a74f90(arg1[0x1e])
sub_140a74f90(arg1[0x1f])
int64_t result = sub_140a74f90(arg1[0x20])
int32_t i_3 = arg1[0x2d].d
int64_t* rbx_2 = arg1[0x2c]

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_5 = *rbx_2
        
        if (rcx_5 != 0)
            result = sub_140a74f90(rcx_5)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

arg1[0x2d].d = 0

if (*(arg1 + 0x16c) != 0)
    result = sub_1405a5410(&arg1[0x2c], 0)

int64_t rcx_7 = arg1[0x38]

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0x30]

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int32_t i_4 = arg1[0x2d].d
int64_t* rbx_3 = arg1[0x2c]

if (i_4 != 0)
    int32_t i_2
    
    do
        int64_t rcx_9 = *rbx_3
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
        
        rbx_3 = &rbx_3[2]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
    rbx_3 = arg1[0x2c]

if (rbx_3 == 0)
    return result

return sub_140a74f90(rbx_3)
