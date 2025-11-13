// 函数: sub_140ee0e40
// 地址: 0x140ee0e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x4e8)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ee2170

if (result != -0x10)
    memset(&result[2], 0, 0x4d8)
    sub_140dddeb0(&result[2])
    result[2] = &data_142ee0858
    result[0x74] = &data_142ee0a98
    result[0x76].w = 0x100
    result[0x77] = 0
    result[0x78].d = 0
    result[0x79].b = 0
    result[0x7a].w = 0x100
    result[0x7b] = 0
    result[0x7c].d = 0
    result[0x7d].b = 0
    result[0x7e].w = 0x100
    result[0x7f] = 0
    result[0x80].d = 0
    result[0x81].b = 0
    sub_140a96170(&result[0x82])
    sub_140a96170(&result[0x85])
    sub_140a96170(&result[0x88])
    result[0x8b] = 0
    result[0x8c].d = 0
    sub_140a96170(&result[0x8d])
    *(result + 0x481) = 0
    result[0x91] = 0
    result[0x92] = 0
    InitializeCriticalSection(&result[0x93])
    SetCriticalSectionSpinCount(&result[0x93], 0xfa0)
    InitializeCriticalSection(&result[0x98])
    SetCriticalSectionSpinCount(&result[0x98], 0xfa0)

return result
