// 函数: sub_141deed20
// 地址: 0x141deed20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141eaa3d0(arg1)
int32_t i_2 = arg1[0x6a].d
void*** result = arg1[0x69]

if (i_2 != 0)
    int32_t i
    
    do
        result[0xc] = &data_142e0b890
        *result = &data_142e0b890
        result = &result[0x17]
        i = i_2
        i_2 -= 1
    while (i != 1)

arg1[0x6a].d = 0

if (*(arg1 + 0x354) != 0)
    result = sub_14092fa50(&arg1[0x69], 0)

arg1[0x68] = 0
int32_t i_3 = arg1[0x67].d

if (i_3 != 0)
    int64_t* rbx_1 = arg1[0x66] + 0x10
    int32_t i_1
    
    do
        int64_t rcx_1 = rbx_1[2]
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        result = sub_141ddf650(rbx_1)
        rbx_1 = &rbx_1[6]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

arg1[0x67].d = 0

if (*(arg1 + 0x33c) == 0)
    return result

return sub_1405a5220(&arg1[0x66], 0)
