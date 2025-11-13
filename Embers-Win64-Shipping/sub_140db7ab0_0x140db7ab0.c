// 函数: sub_140db7ab0
// 地址: 0x140db7ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg4

if (arg6 != 0)
    int64_t var_28 = *arg2
    void* rax_2 = arg2[1]
    void* var_20_1 = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    arg5, zmm6 = sub_140db9070(arg1, &var_28)

*(arg1 + 0x5c) &= 0xfd
*(arg1 + 0x5c) = (((arg3 * 2) | *(arg1 + 0x5c)) & 0xfb) | 1
int64_t* rcx = data_143e20d08
int64_t result = (*(*rcx + 0x50))(rcx)
*(arg1 + 0x48) = arg5 f- fconvert.d(zmm6.d)
return result
