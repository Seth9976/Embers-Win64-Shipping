// 函数: sub_140ed0430
// 地址: 0x140ed0430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98

if (arg1 + 0x88 != &var_98)
    *(arg1 + 0x88) = 0
    int64_t* rcx = *(arg1 + 0x90)
    *(arg1 + 0x90) = 0
    
    if (rcx != 0)
        int32_t temp0_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx + 8))(rcx, 1)

int512_t zmm0 = sub_140e21d50(*(arg1 + 0x20), *arg3, arg4, arg2)
sub_140e25670(*(arg1 + 0x20), zmm0)
float zmm2 = arg3[1].d
int32_t zmm1 = arg3[2].d
float zmm3 = zmm2 f* *(arg3 + 4)
int64_t var_7c = 0
zmm2 = zmm2 f* *arg3
float var_74 = zmm3
int32_t var_88 = *(arg3 + 0xc)
int32_t var_84 = zmm1
float var_80 = zmm2
sub_140dbe170(&var_88, &var_98)
sub_140e21b10(*(arg1 + 0x20), &var_98)
void var_68
sub_140d91ed0(&var_68)
sub_140d986d0(&var_68, &var_98, zx.o(0).q, 0x3d4ccccd, 2)
void* rdi = *(arg1 + 0x20)
int128_t* rax_2 = sub_140e151a0(rdi, &var_98)
sub_140e1c720(rdi, &var_68, sub_140e15660(rdi), rax_2)
float zmm3_2 = *(arg3 + 4)
float zmm2_2 = *arg3
float zmm1_1 = 0.100000001f
float zmm4 = 800f / _mm_max_ss(zmm3_2, zmm2_2)

if (not(zmm4 < 0.100000001f))
    zmm1_1 = __minss_xmmss_memss(zmm4, 0x3f800000)

*(arg1 + 0xb0) = zmm2_2 * zmm1_1
*(arg1 + 0xb4) = zmm3_2 * zmm1_1
var_98 = *(arg1 + 0x40)
int64_t* rax_4 = *(arg1 + 0x48)

if (rax_4 != 0)
    rax_4[1].d += 1

sub_140ed1540(*(arg1 + 0x68), &var_98, 0xffffffff)

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t temp3_1 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rax_4 + 8))(rax_4, 1)

var_98.o = zx.o(0)
sub_140f156a0(*(arg1 + 0x40), &var_98)

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t temp4_1 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rax_4 + 8))(rax_4, 1)

return sub_140d952d0(&var_68)
