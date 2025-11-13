// 函数: sub_142897b60
// 地址: 0x142897b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t rcx = 0

if (sub_1428a5c60(&data_143feb018, sub_142897da0) != 0)
    rcx = data_143feb02c

if (rcx == 0)
    return 0

sub_1428a5c40(data_143feb008)
void** result = data_143feb010

if (result == 0)
    void* rax_2 = sub_1428dd240()
    void** result_1
    
    if (rax_2 != 0)
        result_1 = sub_1428a38f0(rax_2)
        result = result_1
    
    if (rax_2 == 0 || result_1 == 0)
        sub_1428af710(rax_2)
        result = &data_143b85a60
        data_143feb010 = &data_143b85a60
    else
        data_143feaff8 = rax_2
        data_143feb010 = result_1

sub_1428a5d00(data_143feb008)
return result
