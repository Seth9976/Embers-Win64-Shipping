// 函数: sub_141b7ce80
// 地址: 0x141b7ce80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
void* rdx = data_143f31680
void*** rbx = nullptr
*arg1 = &data_1430756e0
arg1[0x24] = &data_142d8ad18
arg1[0x25].d = 0x42000000
*(arg1 + 0x12c) = 0x42000000
*(arg1 + 0x134) = 0
*(arg1 + 0x13c) = 0
*(arg1 + 0x140) = data_14399f5c0
arg1[0x2a].b = 0
__builtin_memset(&arg1[0x2b], 0, 0x20)
int64_t zmm1 = data_143dbb1f0
arg1[0x30].d = zmm1.d
arg1[0x2f].d = zmm1.d
arg1[0x31].b = 0
int64_t arg_8 = zmm1
int128_t zmm0 = arg_8:4.d
*(arg1 + 0x184) = zmm0.d
*(arg1 + 0x17c) = zmm0.d
*(arg1 + 0x18c) = 3
arg1[0x32] = 0
arg1[0x33] = 0
arg1[0x34].b &= 0xfc
arg1[0x35].b = 1
arg1[0x36] = 0
arg1[0x37] = 0

if (rdx == 0)
    void*** rax_1 = j_sub_140a82f30(0x88)
    
    if (rax_1 != 0)
        int64_t* rbx_1 = data_143e243c8
        rbx = sub_14068e310(rax_1, 
            (*(*rbx_1 + 0x48))(rbx_1, *sub_140b58170(&arg_8, "Throbber.CircleChunk", 1), 0))
    
    data_143f31680 = rbx
    sub_141bf3c80(&rbx[4])
    rdx = data_143f31680

sub_140693270(&arg1[0x24], rdx)
arg1[0x21].d = 6
*(arg1 + 0x10c) = 0x3f400000
arg1[0x22].d = 0x41800000
return arg1
