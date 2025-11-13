// 函数: sub_14213b740
// 地址: 0x14213b740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = arg1[3].b
int128_t* rbx = *(arg1 + 0x28)
*rbx = *arg1
rbx[1].q = arg1[2].q
int32_t result = *(arg1 + 0xc) | *(arg1 + 8) | *(arg1 + 4) | *arg1

if (result != 0)
    result = *(arg1 + 0x18)
    
    if (result s> 0)
        if (rcx == 0 && *(rbx + 0x18) != 0)
            arg1[1].q
            jump(*(*data_143f0f180 + 0x100))
        
        rbx[2].d = result << 4
        sub_1407e9120(&rbx[2])
        int64_t* rcx_3 = data_143f0f180
        void arg_8
        (*(*rcx_3 + 0xf8))(rcx_3, &arg_8, arg1[1].q, &rbx[2], 2, 1)
        sub_1405d1600(rbx + 0x18, &arg_8)
        return sub_1405d1550(&arg_8)

return result
