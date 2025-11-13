// 函数: sub_140e4f910
// 地址: 0x140e4f910
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
uint128_t zmm1 = zx.o(data_143dbb1f0)
arg1[0x19].d = data_143dbb1f0.d
arg1[0x1a].b = 1
*(arg1 + 0xcc) = _mm_shuffle_ps(zmm1, zmm1, 0x55).d
arg1[0x1b] = 0
arg1[0x1c].d = 0
arg1[0x1d] = 0
arg1[0x2b].b = 0
sub_140a96170(&arg1[0x2c])
arg1[0x2f].b = 0
arg1[0x30] = 0
arg1[0x31].d = 0
arg1[0x32] = 0
arg1[0x33] = 0
*(arg1 + 0x1a0) = data_14399f5c0
arg1[0x36].b = 0
arg1[0x37] = 0
arg1[0x38] = 0
arg1[0x39].b = 1
arg1[0x3a] = 0
arg1[0x3b].d = 0
void var_58
int64_t* rax_1 = _vfprintf_p_l(&var_58, u"System Menu", u"AppIconWidget")
int64_t rcx_2 = *rax_1
void* r8 = rax_1[1]

if (r8 != 0)
    *(r8 + 8) += 1

int32_t rdx = rax_1[2].d
int64_t rax_2 = arg1[0x2c]
arg1[0x2c] = rcx_2
int64_t var_40_1 = rax_2
int64_t* rax_3 = arg1[0x2d]
arg1[0x2d] = r8
arg1[0x2e].d = rdx
int32_t var_30 = rdx
char var_28 = 1
int64_t var_20 = 0
int32_t var_18 = 0
arg1[0x2f].b = 1
sub_1407473e0(&arg1[0x30], &var_20)
sub_140745b20(&var_20)

if (rax_3 != 0)
    rax_3[1].d -= 1
    
    if (rax_3[1].d == 1)
        (**rax_3)(rax_3)
        int32_t rax_6 = *(rax_3 + 0xc)
        *(rax_3 + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*rax_3 + 8))(rax_3, 1)

int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t rsi_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_50 + 8))(var_50, zx.q(rsi_1))

return arg1
