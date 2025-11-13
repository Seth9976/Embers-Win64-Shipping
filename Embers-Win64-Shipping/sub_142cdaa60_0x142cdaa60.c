// 函数: sub_142cdaa60
// 地址: 0x142cdaa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_1439b6580 = &data_142f51810
sub_14198bce0(&data_1439b6580)
data_1439b6580 = &data_142f51e48
DeleteCriticalSection(&data_1439b65a8)
int32_t i_1 = data_1439b65a0
void* rcx = data_1439b6598

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 8
    int32_t i
    
    do
        sub_1405d1550(rbx_1)
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = data_1439b6598

if (rcx != 0)
    sub_140a74f90(rcx)

return sub_1419948a0(&data_1439b6580) __tailcall
