// 函数: sub_140f991b0
// 地址: 0x140f991b0
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
int64_t r8 = *sub_140b58170(&arg_8, "ExpandableArea", 1)
int64_t arg_10 = r8
int64_t arg_18 = r8
int64_t rax_3 = (*(*rbx + 0x88))(rbx, data_143e24430)

if (rax_3 == 0)
    rax_3 = sub_140e133e0()

arg1[0x34] = rax_3
*(arg1 + 0x1a8) = data_14399f5c0
arg1[0x37].b = 0
arg1[0x38] = 0
arg1[0x39] = 0
arg1[0x3a].b = 1
arg1[0x3b] = 0
arg1[0x3c].d = 0
int64_t* rdi = data_143e243c8
arg1[0x3d] = (*(*rdi + 0x48))(rdi, *sub_140b58170(&arg_8, "ExpandableArea.Border", 1), 0)
arg1[0x3e].b = 1
arg1[0x3f] = 0
arg1[0x40].d = 0
__builtin_memcpy(&arg1[0x41], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
__builtin_memset(&arg1[0x44], 0, 0x11)
arg1[0x47] = 0
arg1[0x48].d = 0
arg1[0x49] = 0
arg1[0x4a] = data_143e244b0
void* rax_7 = data_143e244b8
arg1[0x4b] = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

arg1[0x4c] = data_143e244b0
void* rax_9 = data_143e244b8
arg1[0x4d] = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

sub_140a96170(&arg1[0x4e])
arg1[0x51].b = 0
arg1[0x52] = 0
arg1[0x53].d = 0
arg1[0x54].b = 0
*(arg1 + 0x2a4) = 0
__builtin_memcpy(&arg1[0x56], 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x40\x40\x00\x00\x00\x00\x01", 0x11)
arg1[0x59] = 0
arg1[0x5a].d = 0
__builtin_memcpy(&arg1[0x5b], 
    "\x00\x00\x80\x40\x00\x00\x00\x40\x00\x00\x80\x40\x00\x00\x00\x40\x01", 0x11)
arg1[0x5e] = 0
arg1[0x5f].d = 0
__builtin_memcpy(&arg1[0x60], 
    "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x01", 0x11)
arg1[0x63] = 0
arg1[0x64].d = 0
arg1[0x65] = 0
arg1[0x66].d = 0
int64_t* rbx_2 = data_143e243c8
void var_68
int64_t* rax_11 =
    (*(*rbx_2 + 0x80))(rbx_2, &var_68, *sub_140b58170(&arg_8, "ExpandableArea.TitleFont", 1), 0)
arg1[0x67] = *rax_11
arg1[0x68] = rax_11[1]
*(arg1 + 0x348) = *(rax_11 + 0x10)
*(arg1 + 0x358) = *(rax_11 + 0x20)
arg1[0x6d] = rax_11[6]
void* rax_12 = rax_11[7]
arg1[0x6e] = rax_12

if (rax_12 != 0)
    *(rax_12 + 8) += 1

arg1[0x6f] = rax_11[8]
arg1[0x70].d = rax_11[9].d
*(arg1 + 0x384) = *(rax_11 + 0x4c)
arg1[0x71].b = 1
arg1[0x72] = 0
arg1[0x73].d = 0
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

*(arg1 + 0x3a4) = 0
arg1[0x75].b = 0
arg1[0x76] = 0
arg1[0x77].d = 0
return arg1
