// 函数: sub_141893b00
// 地址: 0x141893b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t entry_zmm2
int128_t zmm2
int128_t entry_zmm3
int128_t zmm3
zmm2, zmm3 = sub_14185eb20(arg1 + 0x50, arg1 + 0x10, entry_zmm2, entry_zmm3)
void* rbx = *(arg1 + 0x68)

while (true)
    bool z_1
    
    if (0 == *(rbx + 0x78))
        *(rbx + 0x78) = 0
        z_1 = true
    else
        int64_t rax_1
        rax_1.b = *(rbx + 0x78)
        z_1 = false
    
    if (not(z_1))
        break
    
    int64_t* rcx_1 = *(rbx + 0x70)
    (*(*rcx_1 + 0x20))(rcx_1, 0xffffffff, 0)

int64_t var_58 = *(rbx + 0x80)
int64_t var_48[0x2]
var_48[0] = 0
int64_t var_38 = 0
void* var_50 = arg1
void* var_68
sub_140bbde30(&var_68, 0, &var_58, &var_48, zmm2, zmm3)
int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t rdi_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_60 + 8))(var_60, zx.q(rdi_1))

return 0
