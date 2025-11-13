// 函数: sub_1423bcbf0
// 地址: 0x1423bcbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
int128_t zmm2 = sub_140cd7d40(arg1)

if ((*(*rbx + 0x2d8))(rbx, 0) == 0)
    int64_t* rcx_1 = rbx[0xf]
    char rax_2
    
    if (rcx_1 != 0)
        zmm2 = sub_141997f50(rcx_1)
        rax_2 = rbx[0x14].b
    label_1423bcc34:
        
        if (rax_2 != 0)
            zmm2 = sub_141998070(&rbx[0x10])
        
        int128_t entry_zmm3
        sub_141997ac0(&rbx[0x15], 0, zmm2, entry_zmm3)
        rbx[0xc].b |= 0x10
    else
        rax_2 = rbx[0x14].b
        
        if (rax_2 != 0)
            goto label_1423bcc34

int64_t* rcx_4 = rbx[0x1c]

if (rcx_4 != 0 && *(rcx_4 + 0x54) == 0)
    (*(*rcx_4 + 0x20))(rcx_4)

if (sub_140d23dc0(rbx, 0x30) == 0 && DBIQueryItsmForTi(sub_141f88540()) != 0)
    int64_t* rax_8 = sub_140963350(sub_141f88540())
    int64_t r8_1 = *rax_8
    (*(r8_1 + 0xd0))(rax_8, rbx, r8_1)

return sub_1405949a0() __tailcall
