// 函数: sub_140f489f0
// 地址: 0x140f489f0
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

float result_1
sub_140e10810(arg1, &result_1, arg1 + 0x434, &var_58)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rax_5 = sub_140e13cf0(arg1[0x73], &var_58)
int32_t rcx_3 = arg1[0x83].d
float zmm3 = *(rax_5 + 4)

if (rcx_3 != 1)
    zmm3 = *rax_5

float result = arg1[0x87].d

if (rcx_3 != 1)
    result = *(arg1 + 0x434)

if (result <= 0f)
    result = _mm_min_ss(1f, 0x3f800000)
else
    float result_2
    
    result = rcx_3 != 1 ? result_1 : result_2
    result = result / zmm3
    
    if (result >= 0f)
        result = _mm_min_ss(result, 0x3f800000)
    else
        result = (zx.o(0)).d

__security_check_cookie(rax_1 ^ &var_78)
return result
