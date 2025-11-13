// 函数: sub_140f1e510
// 地址: 0x140f1e510
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
int64_t r8 = *sub_140b58170(&arg_8, "SpinBox", 1)
int64_t arg_10 = r8
int64_t arg_18 = r8
int64_t rax_3 = (*(*rbx + 0x88))(rbx, data_143e24458)

if (rax_3 == 0)
    rax_3 = sub_140e13700()

arg1[0x34] = rax_3
arg1[0x35].d = 0
*(arg1 + 0x1ac) = 1
arg1[0x36] = 0
arg1[0x37].d = 0
arg1[0x38].d = 0
*(arg1 + 0x1c4) = 1
arg1[0x39].b = 1
arg1[0x3a] = 0
arg1[0x3b].d = 0
arg1[0x3c].d = 0
*(arg1 + 0x1e4) = 1
arg1[0x3d].b = 1
arg1[0x3e] = 0
arg1[0x3f].d = 0
*(arg1 + 0x204) = 0
arg1[0x41].b = 0
arg1[0x42] = 0
arg1[0x43].d = 0
*(arg1 + 0x224) = 0
arg1[0x45].b = 0
arg1[0x46] = 0
arg1[0x47].d = 0
arg1[0x48].d = 1
*(arg1 + 0x244) = 1
arg1[0x49].b = 1
arg1[0x4a] = 0
arg1[0x4b].d = 0
arg1[0x4c].d = 6
*(arg1 + 0x264) = 1
arg1[0x4d].b = 1
arg1[0x4e] = 0
arg1[0x4f].d = 0
arg1[0x50].w = 0x100
arg1[0x51] = 0
arg1[0x52].d = 0
arg1[0x53].d = 0
*(arg1 + 0x29c) = 1
arg1[0x54] = 0
arg1[0x55].d = 0
arg1[0x56].d = 1
*(arg1 + 0x2b4) = 1
arg1[0x57] = 0
arg1[0x58].d = 0
arg1[0x59].d = 0
*(arg1 + 0x2cc) = 0
arg1[0x5a] = 0
arg1[0x5b].d = 0
arg1[0x5c].w = 0x100
arg1[0x5d] = 0
arg1[0x5e].d = 0
arg1[0x5f].w = 0x100
arg1[0x60] = 0
arg1[0x61].d = 0
arg1[0x62] = 0
arg1[0x63].d = 0
arg1[0x64] = 0
arg1[0x65].d = 0
arg1[0x66].d = 0x3f800000
*(arg1 + 0x334) = 1
arg1[0x67] = 0
arg1[0x68].d = 0
arg1[0x69].d = 0
*(arg1 + 0x34c) = 0
arg1[0x6a] = 0
arg1[0x6b].d = 0
int64_t* rbx_1 = data_143e243c8
void var_68
int64_t* rax_5 = (*(*rbx_1 + 0x80))(rbx_1, &var_68, *sub_140b58260(&arg_8, u"NormalFont", 1), 0)
arg1[0x6c] = *rax_5
arg1[0x6d] = rax_5[1]
*(arg1 + 0x370) = *(rax_5 + 0x10)
*(arg1 + 0x380) = *(rax_5 + 0x20)
arg1[0x72] = rax_5[6]
void* rax_6 = rax_5[7]
arg1[0x73] = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

arg1[0x74] = rax_5[8]
arg1[0x75].d = rax_5[9].d
*(arg1 + 0x3ac) = *(rax_5 + 0x4c)
arg1[0x76].b = 1
arg1[0x77] = 0
arg1[0x78].d = 0
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

__builtin_memcpy(&arg1[0x79], 
    "\x00\x00\x00\x40\x00\x00\x80\x3f\x00\x00\x00\x40\x00\x00\x80\x3f\x01", 0x11)
arg1[0x7c] = 0
arg1[0x7d].d = 0
arg1[0x7e] = 0
arg1[0x7f].d = 0
arg1[0x80] = 0
arg1[0x81].d = 0
arg1[0x82] = 0
arg1[0x83].d = 0
arg1[0x84] = 0
arg1[0x85].d = 0
arg1[0x86].w = 0x100
arg1[0x87] = 0
arg1[0x88].d = 0
arg1[0x89].w = 0x101
arg1[0x8a] = 0
arg1[0x8b].d = 0
arg1[0x8c].d = 0
*(arg1 + 0x464) = 1
arg1[0x8d] = 0
arg1[0x8e].d = 0
arg1[0x8f].d = 0
*(arg1 + 0x47c) = 0
arg1[0x90] = 0
arg1[0x91].d = 0
arg1[0x92] = 0
arg1[0x93] = 0
arg1[0x95] = 0
arg1[0x96].d = 0
return arg1
