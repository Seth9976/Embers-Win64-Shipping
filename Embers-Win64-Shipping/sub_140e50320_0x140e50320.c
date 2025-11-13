// 函数: sub_140e50320
// 地址: 0x140e50320
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
sub_140a96170(&arg1[0x34])
arg1[0x37].b = 0
arg1[0x38] = 0
arg1[0x39].d = 0
arg1[0x3a] = data_143e244b0
void* rax_2 = data_143e244b8
arg1[0x3b] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

int64_t* rbx = data_143e243c8
void var_58
int64_t* rax_4 = (*(*rbx + 0x80))(rbx, &var_58, *sub_140b58170(&arg_8, "ToolTip.Font", 1), 0)
arg1[0x3c] = *rax_4
arg1[0x3d] = rax_4[1]
*(arg1 + 0x1f0) = *(rax_4 + 0x10)
*(arg1 + 0x200) = *(rax_4 + 0x20)
arg1[0x42] = rax_4[6]
void* rax_5 = rax_4[7]
arg1[0x43] = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

arg1[0x44] = rax_4[8]
arg1[0x45].d = rax_4[9].d
*(arg1 + 0x22c) = *(rax_4 + 0x4c)
arg1[0x46].b = 1
arg1[0x47] = 0
arg1[0x48].d = 0
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

__builtin_memcpy(&arg1[0x49], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 0x11)
arg1[0x4c] = 0
arg1[0x4d] = 0
arg1[0x4e].b = 1
arg1[0x4f] = 0
arg1[0x50].d = 0
__builtin_memcpy(&arg1[0x51], 
    "\x00\x00\x00\x41\x00\x00\x00\x41\x00\x00\x00\x41\x00\x00\x00\x41\x01", 0x11)
arg1[0x54] = 0
arg1[0x55].d = 0
int64_t* rdi_1 = data_143e243c8
int64_t rax_12 = (*(*rdi_1 + 0x48))(rdi_1, *sub_140b58170(&arg_8, "ToolTip.Background", 1), 0)
arg1[0x57].b = 1
arg1[0x56] = rax_12
arg1[0x58] = 0
arg1[0x59].d = 0
arg1[0x5a].w = 0x100
arg1[0x5b] = 0
arg1[0x5c].d = 0
return arg1
