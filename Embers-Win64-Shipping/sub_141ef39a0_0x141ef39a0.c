// 函数: sub_141ef39a0
// 地址: 0x141ef39a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9418)

if ((arg2[5].b & 1) != 0)
    int32_t rcx_1 = arg2[6].d
    
    if ((((rcx_1 u>> 0x16).b & 1) != 0 || ((rcx_1 u>> 0xc).b & 1) == 0)
            && sub_140d23dc0(arg1, 0x30) == 0)
        *(arg1 + 0x8a) |= 0x40

int32_t result = (*(*arg2 + 0x1d8))(arg2, &data_1439a9418)

if ((arg2[5].b & 1) != 0)
    result = sub_140b4e7c0(arg2, &data_1439a9418)
    
    if (result s< 0x16 && not(10000f f== *(arg1 + 0x240)))
        *(arg1 + 0x210) |= 0x20

return result
