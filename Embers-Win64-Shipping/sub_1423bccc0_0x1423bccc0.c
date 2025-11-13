// 函数: sub_1423bccc0
// 地址: 0x1423bccc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
int128_t zmm2 = sub_140cd7d40(arg1)
char result = (*(*rbx + 0x2d8))(rbx, 0)

if (result == 0)
    int64_t* rcx_1 = rbx[0xf]
    
    if (rcx_1 != 0)
        zmm2 = sub_141997f50(rcx_1)
        result = rbx[0x14].b
    label_1423bcd04:
        
        if (result != 0)
            zmm2 = sub_141998070(&rbx[0x10])
        
        int128_t entry_zmm3
        result = sub_141997ac0(&rbx[0x15], 0, zmm2, entry_zmm3)
        rbx[0xc].b |= 0x10
    else
        result = rbx[0x14].b
        
        if (result != 0)
            goto label_1423bcd04

return result
