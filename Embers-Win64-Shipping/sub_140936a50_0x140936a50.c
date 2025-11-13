// 函数: sub_140936a50
// 地址: 0x140936a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg2
char result = sub_1409448d0(arg1)

if (result == 0)
    return result

void* rcx = *(arg1 + 0xe0)

if (rcx != 0)
    sub_14093f6b0(rcx)

void* rcx_1 = *(arg1 + 0x68)

if (rcx_1 != 0)
    zmm6 = sub_140944240(rcx_1 + 0x1f0, zmm6)

int64_t* rcx_3 = *(arg1 + 0x78)

if (rcx_3 != 0 && *(arg1 + 0x88) != 0)
    (*(*rcx_3 + 0xe0))(rcx_3, zmm6)

return 1
