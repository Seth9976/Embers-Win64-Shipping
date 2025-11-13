// 函数: sub_140f449e0
// 地址: 0x140f449e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* rbx = arg1[0xa0]
int32_t rsi = *(arg1 + 0x51c)

if (rbx != 0)
    rbx[1].d += 1

int64_t var_78 = arg1[0x9f]
int64_t* var_70 = rbx

if (rbx != 0)
    rbx[1].d += 1

int32_t var_68
sub_140e10810(arg1, &var_68, arg2, &var_78)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t var_4c
int128_t zmm3 = var_4c
int32_t var_48
int128_t zmm6 = var_48
float var_40
int128_t zmm1
zmm1.d = zmm3.d f* var_40
float var_44
int128_t zmm0
zmm0.d = zmm6.d f* var_44
zmm1.d = zmm1.d f- zmm0.d
int32_t var_38
zmm0.d = (*(arg3 + 0x1c)).d f- var_38
int128_t zmm2
zmm2.d = 1f f/ zmm1.d
zmm6.d = zmm6.d f* zmm2.d
zmm3.d = zmm3.d f* zmm2.d
int32_t var_3c
zmm1.d = (*(arg3 + 0x18)).d f- var_3c

if (rsi != 0)
    zmm3.d = zmm3.d f* zmm0.d
    zmm0.d = zmm1.d f* zmm6.d
    zmm1.d = zmm3.d f- zmm0.d
else
    zmm1.d = zmm1.d f* var_40 f* zmm2.d
    zmm1.d = zmm1.d f- var_44 f* zmm2.d f* zmm0.d

zmm1.d = zmm1.d f- arg1[0xa3].d
int32_t var_64

zmm2 = rsi != 0 ? var_64 : var_68
zmm0 = zx.o(0)
zmm2.d = zmm2.d f- *(arg1[0x9f] + 0x2d8)

if (not(zmm1.d f< zmm0.d))
    zmm0 = _mm_min_ss(zmm2.d, zmm1.d)

zmm0.d = zmm0.d f/ zmm2.d
int64_t result = sub_140f44620(&arg1[0xa1], zmm0)
__security_check_cookie(rax_1 ^ &var_98)
return result
