// 函数: sub_140dddeb0
// 地址: 0x140dddeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140dde0c0(arg1)
*arg1 = &data_142ec8b20
arg1[0x55] = &data_142d82a88
arg1[0x56] = arg1
arg1[0x57] = &data_142ec8878
arg1[0x58] = 0
arg1[0x59] = data_143e244b0
void* rax_1 = data_143e244b8
arg1[0x5a] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[0x58] = arg1
__builtin_memset(&arg1[0x5b], 0, 0x19)
arg1[0x5f] = 0
arg1[0x60].d = 0
arg1[0x55] = &data_142ec8af0
arg1[0x57] = &data_142ec8b18
arg1[0x61].d = 0x3f800000
*(arg1 + 0x30c) = 0x3f800000
arg1[0x62].b = 1
arg1[0x63] = 0
arg1[0x64].d = 0
arg1[0x67].b = 1
*(arg1 + 0x328) = data_14399f5c0
arg1[0x68] = 0
int128_t var_38
__builtin_memcpy(&var_38, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 
    0x11)
arg1[0x69].d = 0
int128_t var_20 = zx.o(0)
sub_140dd9fa0(&arg1[0x6a], &var_38)
int64_t* rbx = var_20:8.q
arg1[0x6f].b = 1
arg1[0x70] = 0
arg1[0x71].d = 0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg1
