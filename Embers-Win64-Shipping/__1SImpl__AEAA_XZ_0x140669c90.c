// 函数: ??1SImpl@@AEAA@XZ
// 地址: 0x140669c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = &data_142d84e98
*arg1 = &data_142d84e98
int64_t rcx = arg1[9]

if (rcx != 0)
    result = sub_140a74f90(rcx)

int64_t rcx_1 = arg1[7]

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[5]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[1]

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
