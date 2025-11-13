// 函数: sub_140e936b0
// 地址: 0x140e936b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a96170(arg1)
arg1[3].b = 0
arg1[4] = 0
arg1[5].d = 0
arg1[6] = 0
arg1[7] = 0
*(arg1 + 0x44) = 0
arg1[9].b = 1
arg1[0xa] = 0
arg1[0xb].d = 0
arg1[0xc].w = 0x101
arg1[0xd] = 0
arg1[0xe].d = 0
arg1[0xf].b = data_1439ae51c
*(arg1 + 0x79) = 1
arg1[0x10] = 0
arg1[0x11].d = 0
arg1[0x12].d = 0x3f800000
*(arg1 + 0x94) = 0
*(arg1 + 0x96) = 0
arg1[0x16].b = 0
*(arg1 + 0xb4) = 0
arg1[0x17] = 0
arg1[0x18].d = 0
uint128_t zmm2 = zx.o(data_143dbb1f0)
arg1[0x19].d = data_143dbb1f0.d
arg1[0x1a].b = 1
*(arg1 + 0xcc) = _mm_shuffle_ps(zmm2, zmm2, 0x55).d
arg1[0x1b] = 0
arg1[0x1c].d = 0
arg1[0x1d] = 0
arg1[0x2b].b = 0
uint64_t arg_8 = zmm2.q
sub_140a96170(&arg1[0x2c])
arg1[0x2f].b = 0
arg1[0x30] = 0
arg1[0x31].d = 0
arg1[0x32] = 0
arg1[0x33] = 0
int64_t* rbx = data_143e243c8
int64_t r8 = *sub_140b58170(&arg_8, "ComboButton", 1)
int64_t arg_10 = r8
int64_t arg_18 = r8
int64_t rax_3 = (*(*rbx + 0x88))(rbx, data_143e243f0)

if (rax_3 == 0)
    rax_3 = sub_140e131e0()

arg1[0x34] = rax_3
arg1[0x35] = 0
arg1[0x36] = data_143e244b0
void* rax_5 = data_143e244b8
arg1[0x37] = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

arg1[0x38] = data_143e244b0
void* rax_7 = data_143e244b8
arg1[0x39] = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

arg1[0x3a] = 0
arg1[0x3b].d = 0
arg1[0x3c] = 0
arg1[0x3d].d = 0
arg1[0x3e] = 0
arg1[0x3f].d = 0
arg1[0x40].w = 0x101
int64_t* rbx_1 = data_143e243c8
void var_48
int128_t* rax_9 = (*(*rbx_1 + 0x38))(rbx_1, &var_48, 
    *sub_140b58170(&arg_8, "InvertedForeground", 1), 0, &data_1439ae6e0)
*(arg1 + 0x208) = *rax_9
arg1[0x43].b = rax_9[1].b
arg1[0x44] = *(rax_9 + 0x18)
void* rcx_7 = rax_9[2].q
arg1[0x45] = rcx_7

if (rcx_7 != 0)
    *(rcx_7 + 8) += 1

arg1[0x46].b = 1
arg1[0x47] = 0
arg1[0x48].d = 0
int64_t* var_28

if (var_28 != 0)
    var_28[1].d -= 1
    
    if (var_28[1].d == 1)
        (**var_28)(var_28)
        int32_t temp1_1 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_28 + 8))(var_28, 1)

*(arg1 + 0x248) = data_14399f5c0
arg1[0x4b].b = 0
arg1[0x4c] = 0
arg1[0x4d] = 0
arg1[0x4e].b = 1
arg1[0x4f] = 0
arg1[0x50].d = 0
__builtin_memcpy(&arg1[0x51], 
    "\x00\x00\xa0\x40\x00\x00\xa0\x40\x00\x00\xa0\x40\x00\x00\xa0\x40\x01", 0x11)
arg1[0x54] = 0
arg1[0x55].d = 0
arg1[0x56].d = 3
*(arg1 + 0x2b4) = 1
arg1[0x57] = 0
arg1[0x58].d = 0
arg1[0x59].d = 0
*(arg1 + 0x2cc) = 2
*(arg1 + 0x2d1) = 0
return arg1
