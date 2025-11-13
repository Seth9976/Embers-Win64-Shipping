// 函数: sub_14068cc20
// 地址: 0x14068cc20
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
arg1[0x10] = 0
arg1[0x11].d = 0
*(arg1 + 0x79) = 1
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
int64_t* rax_3 = sub_140b58170(&arg_8, "Button", 1)
int64_t rax_5 = (*(*rbx + 0x88))(rbx, data_143e243e8, *rax_3)

if (rax_5 == 0)
    rax_5 = sub_140e13010()

arg1[0x36] = rax_5
int64_t* rbx_1 = data_143e243c8
int64_t* rax_6 = sub_140b58170(&arg_8, "NormalText", 1)
int64_t rax_8 = (*(*rbx_1 + 0x88))(rbx_1, data_143e243e0, *rax_6)

if (rax_8 == 0)
    rax_8 = sub_140e13900()

arg1[0x37] = rax_8
arg1[0x38] = 0
__builtin_memcpy(&arg1[0x39], 
    "\x00\x00\x80\x40\x00\x00\x00\x40\x00\x00\x80\x40\x00\x00\x00\x40\x01", 0x11)
arg1[0x3c] = 0
arg1[0x3d].d = 0
sub_140a96170(&arg1[0x3e])
arg1[0x41].b = 0
arg1[0x42] = 0
arg1[0x43].d = 0
arg1[0x44] = 0
arg1[0x45].d = 0
arg1[0x46] = 0
arg1[0x47].d = 0
arg1[0x48] = 0
arg1[0x49].d = 0
arg1[0x4a] = 0
arg1[0x4b].d = 0
arg1[0x4c] = 0
arg1[0x4d].d = 0
arg1[0x4e] = 0
arg1[0x4f].d = 0
arg1[0x50].d = 0x3f800000
*(arg1 + 0x284) = 0x3f800000
arg1[0x52] = 0
arg1[0x53].d = 0
arg1[0x51].b = 1
arg1[0x54].d = 0x3f800000
*(arg1 + 0x2a4) = 0x3f800000
arg1[0x56] = 0
arg1[0x57].d = 0
arg1[0x55].b = 1
*(arg1 + 0x2c0) = data_14399f5c0
arg1[0x5a].b = 0
arg1[0x5b] = 0
arg1[0x5c] = 0
arg1[0x5d].b = 1
arg1[0x5e] = 0
arg1[0x5f].d = 0
int64_t* rbx_2 = data_143e243c8
void var_48
int128_t* rax_10 = (*(*rbx_2 + 0x38))(rbx_2, &var_48, 
    *sub_140b58170(&arg_8, "InvertedForeground", 1), 0, &data_1439ae6e0)
*(arg1 + 0x300) = *rax_10
arg1[0x62].b = rax_10[1].b
arg1[0x63] = *(rax_10 + 0x18)
void* rcx_10 = rax_10[2].q
arg1[0x64] = rcx_10

if (rcx_10 != 0)
    *(rcx_10 + 8) += 1

arg1[0x65].b = 1
arg1[0x66] = 0
arg1[0x67].d = 0
int64_t* var_28

if (var_28 != 0)
    var_28[1].d -= 1
    
    if (var_28[1].d == 1)
        (**var_28)(var_28)
        int32_t temp1_1 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_28 + 8))(var_28, 1)

arg1[0x68].b = 1
arg1[0x6c].b = 0
arg1[0x70].b = 0
*(arg1 + 0x389) = 0
*(arg1 + 0x38b) = 0
return arg1
