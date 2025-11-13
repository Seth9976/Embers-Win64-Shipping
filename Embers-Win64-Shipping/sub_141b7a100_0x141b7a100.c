// 函数: sub_141b7a100
// 地址: 0x141b7a100
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
int64_t* rbx = data_143e202c8
int64_t rsi = data_143e202b8
int64_t rbp = data_143e202c0

if (rbx != 0)
    rbx[1].d += 1
    
    if (rbx != 0)
        rbx[1].d += 1
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp3_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx + 8))(rbx, 1)

arg1[0x34] = rsi
arg1[0x35] = rbp
arg1[0x36] = rbx

if (rbx != 0)
    rbx[1].d += 1

arg1[0x37].d &= 0xfffffff0
arg1[0x38].b = 1
arg1[0x39] = 0
arg1[0x3a].d = 0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140d93b50(&arg1[0x3b])
arg1[0x45].b = 0
arg1[0x46] = 0
arg1[0x47].d = 0
__builtin_memset(&arg1[0x48], 0, 0x11)
arg1[0x4b] = 0
arg1[0x4c].d = 0
int64_t* rbx_1 = data_143e243c8
int64_t r8 = *sub_140b58170(&arg_8, "Button", 1)
int64_t arg_10 = r8
int64_t arg_18 = r8
int64_t rax_7 = (*(*rbx_1 + 0x88))(rbx_1, data_143e243e8)

if (rax_7 == 0)
    rax_7 = sub_140e13010()

arg1[0x4d] = rax_7
int64_t* rbx_2 = data_143e243c8
int64_t r8_1 = *sub_140b58170(&arg_8, "NormalText", 1)
arg_10 = r8_1
arg_18 = r8_1
int64_t rax_10 = (*(*rbx_2 + 0x88))(rbx_2, data_143e243e0)

if (rax_10 == 0)
    rax_10 = sub_140e13900()

arg1[0x4e] = rax_10
_vfprintf_p_l(&arg1[0x4f], &data_142e1f8a0, u"InputKeySelector")
_vfprintf_p_l(&arg1[0x52], u"Empty", u"InputKeySelector")
arg1[0x55].w = 1
*(arg1 + 0x2aa) = 1
__builtin_memset(&arg1[0x56], 0, 0x1c)
arg1[0x5a] = 0
arg1[0x5b].d = 0
arg1[0x5c].b = 1
return arg1
