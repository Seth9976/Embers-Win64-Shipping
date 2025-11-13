// 函数: sub_140f48120
// 地址: 0x140f48120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* rbx = arg1[0x74]

if (rbx != 0)
    rbx[1].d += 1

int64_t var_58 = arg1[0x73]
int64_t* var_50 = rbx

if (rbx != 0)
    rbx[1].d += 1

float var_48
sub_140e10810(arg1, &var_48, arg1 + 0x434, &var_58)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rax_5 = sub_140e13cf0(arg1[0x73], &var_58)
float result = *(rax_5 + 4)
float zmm1
float var_44

if (arg1[0x83].d != 1)
    result = *rax_5
    zmm1 = var_48
else
    zmm1 = var_44
result = _mm_max_ss(result - zmm1, 0)
__security_check_cookie(rax_1 ^ &var_78)
return result
