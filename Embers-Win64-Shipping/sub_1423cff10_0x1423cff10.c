// 函数: sub_1423cff10
// 地址: 0x1423cff10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0x14] == 0
*arg1 = &data_14333f888

if (not(cond:0))
    sub_140b17ea0()
    sub_140b25ff0(&data_1439a8bd0, arg1)
    sub_140a2fe90(sub_140b18f30(), arg1[0x14])

sub_1405ae180(&arg1[0xa])
int64_t result = DeleteCriticalSection(&arg1[5])
int32_t i_1 = arg1[3].d
int64_t* rbx = arg1[2]

if (i_1 != 0)
    int32_t i
    
    do
        result = sub_140b0bbd0(rbx)
        rbx = &rbx[5]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[2]

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
