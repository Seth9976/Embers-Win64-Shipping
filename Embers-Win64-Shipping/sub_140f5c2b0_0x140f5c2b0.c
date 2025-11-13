// 函数: sub_140f5c2b0
// 地址: 0x140f5c2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t var_78
int64_t* rax_2 = sub_140e13cf0(arg1[0x73], &var_78)
int128_t zmm6 = *(rax_2 + 4)

if (arg1[0x83].d != 1)
    zmm6 = *rax_2

int64_t* rbx = arg1[0x74]

if (rbx != 0)
    rbx[1].d += 1

var_78 = arg1[0x73]
int64_t* var_70 = rbx

if (rbx != 0)
    rbx[1].d += 1

float var_68
sub_140e10810(arg1, &var_68, arg1 + 0x434, &var_78)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

float zmm0
float var_64

if (arg1[0x83].d != 1)
    zmm0 = var_68
else
    zmm0 = var_64
float zmm1 = zmm6.d - zmm0
zmm6.d = zmm6.d f* arg2.d
zmm1 = _mm_min_ss(zmm1, zmm6.d)
arg1[0x72].d = zmm1
sub_140f44620(&arg1[0x81], zmm1)
int64_t result = sub_140e19ef0(arg1, 1)
__security_check_cookie(rax_1 ^ &var_98)
return result
