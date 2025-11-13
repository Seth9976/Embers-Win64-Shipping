// 函数: sub_140f1dd60
// 地址: 0x140f1dd60
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
arg1[0x34] = data_143e244b0
void* rax_2 = data_143e244b8
arg1[0x35] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

int64_t* rbx = data_143e243c8
int64_t r8 = *sub_140b58170(&arg_8, "ComboBox", 1)
int64_t arg_10 = r8
int64_t arg_18 = r8
int64_t rax_5 = (*(*rbx + 0x88))(rbx, data_143e243f8)

if (rax_5 == 0)
    rax_5 = sub_140e13110()

arg1[0x36] = rax_5
arg1[0x37] = 0
int64_t* rbx_1 = data_143e243c8
int64_t r8_1 = *sub_140b58170(&arg_8, "TableView.Row", 1)
arg_10 = r8_1
arg_18 = r8_1
int64_t rax_8 = (*(*rbx_1 + 0x88))(rbx_1, data_143e24468)

if (rax_8 == 0)
    rax_8 = sub_140e13880()

arg1[0x38] = rax_8
__builtin_memcpy(&arg1[0x39], 
    "\x00\x00\x80\x40\x00\x00\x00\x40\x00\x00\x80\x40\x00\x00\x00\x40\x01", 0x11)
arg1[0x3c] = 0
arg1[0x3d].d = 0
int64_t* rbx_2 = data_143e243c8
void var_48
int128_t* rax_10 = (*(*rbx_2 + 0x38))(rbx_2, &var_48, 
    *sub_140b58170(&arg_8, "InvertedForeground", 1), 0, &data_1439ae6e0)
*(arg1 + 0x1f0) = *rax_10
arg1[0x40].b = rax_10[1].b
arg1[0x41] = *(rax_10 + 0x18)
void* rcx_9 = rax_10[2].q
arg1[0x42] = rcx_9

if (rcx_9 != 0)
    *(rcx_9 + 8) += 1

arg1[0x43].b = 1
arg1[0x44] = 0
arg1[0x45].d = 0
int64_t* var_28

if (var_28 != 0)
    var_28[1].d -= 1
    
    if (var_28[1].d == 1)
        (**var_28)(var_28)
        int32_t temp1_1 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_28 + 8))(var_28, 1)

__builtin_memset(&arg1[0x46], 0, 0x14)
arg1[0x49] = 0
arg1[0x4a].d = 0
arg1[0x4b] = 0
arg1[0x4c].d = 0
__builtin_memset(&arg1[0x4d], 0, 0x20)
*(arg1 + 0x289) = 0
*(arg1 + 0x28c) = 0x43e10000
arg1[0x55].b = 0
arg1[0x59].b = 0
arg1[0x5a].w = 1
*(arg1 + 0x2d2) = 1
return arg1
