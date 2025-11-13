// 函数: sub_140f48b10
// 地址: 0x140f48b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t* rbx = arg1[0x74]

if (rbx != 0)
    rbx[1].d += 1

int64_t var_68 = arg1[0x73]
int64_t* var_60 = rbx

if (rbx != 0)
    rbx[1].d += 1

void var_58
sub_140e10810(arg1, &var_58, arg1 + 0x434, &var_68)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rax_5 = sub_140e13cf0(arg1[0x73], &var_68)
int128_t zmm6 = *(rax_5 + 4)

if (arg1[0x83].d != 1)
    zmm6 = *rax_5

float zmm1 = 1f - sub_140f489f0(arg1)
float result = arg1[0x72].d f/ zmm6.d

if (result >= 0f)
    result = _mm_min_ss(result, zmm1)
else
    result = (zx.o(0)).d

__security_check_cookie(rax_1 ^ &var_88)
return result
