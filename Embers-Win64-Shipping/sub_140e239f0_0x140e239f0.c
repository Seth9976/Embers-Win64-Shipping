// 函数: sub_140e239f0
// 地址: 0x140e239f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm1 = arg2
int64_t* rcx = *(arg1 + 0x910)
int64_t arg_8 = zmm1

if (rcx != 0)
    (*(*rcx + 0xf0))(rcx, &arg_8)
    zmm1 = arg_8

int32_t result = arg_8.d

if (result f!= *(arg1 + 0x7a0))
    *(arg1 + 0x7a0) = zmm1
    sub_140db2ea0(arg1 + 0x390)
else
    result = arg_8:4.d
    
    if (not(result f== *(arg1 + 0x7a4)))
        *(arg1 + 0x7a0) = zmm1
        sub_140db2ea0(arg1 + 0x390)

return result
