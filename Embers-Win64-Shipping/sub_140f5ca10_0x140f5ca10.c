// 函数: sub_140f5ca10
// 地址: 0x140f5ca10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* rsi = arg2
arg2.b = 5
sub_140e19ef0(arg1, arg2.b)
*(arg1 + 0x4cc) &= 0xef
void* rcx = arg1[0x73]
*(arg1 + 0x4cc) |= arg5 << 4
int64_t var_a8
int64_t* rax_3 = sub_140e13cf0(rcx, &var_a8)
int128_t zmm7 = *(rax_3 + 4)

if (arg1[0x83].d != 1)
    zmm7 = *rax_3

int64_t* rbx = arg1[0x74]

if (rbx != 0)
    rbx[1].d += 1

var_a8 = arg1[0x73]
int64_t* var_a0 = rbx

if (rbx != 0)
    rbx[1].d += 1

int32_t var_98
sub_140e10810(arg1, &var_98, rsi, &var_a8)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int128_t zmm8 = arg1[0x72].d
float zmm1 = zmm8.d

if (not(arg3.d f== 0f))
    int32_t zmm0_1
    int32_t var_94
    
    if (arg1[0x83].d != 1)
        zmm0_1 = var_98
    else
        zmm0_1 = var_94
    bool cond:2_1 = *(arg1 + 0x3f4) != 0
    zmm7.d = zmm7.d f- zmm0_1
    zmm7 = _mm_max_ss(zmm7.d, 0)
    char rax_7
    
    if (not(cond:2_1) && arg4 == 0)
        char r8_1
        
        if (zmm8.d f!= zmm7.d)
            r8_1 = 0
        else
            r8_1 = 1
        
        char rdx_2
        
        rdx_2 = zmm8.d f!= 0f ? 0 : 1
        
        rax_7 = sub_140edb000(&arg1[0x7e], rdx_2, r8_1, arg3.d)
    
    if (cond:2_1 || arg4 != 0 || rax_7 == 0)
        zmm1 = arg3.d f+ arg1[0x72].d
        
        if (zmm1 >= 0f)
            zmm1 = _mm_min_ss(zmm1, zmm7.d)
        else
            zmm1 = (zx.o(0)).d
        
        arg1[0x72].d = zmm1
    else
        sub_140ed8eb0(&arg1[0x7e], rsi, arg3.d)
        zmm1 = arg1[0x72].d

sub_140f44620(&arg1[0x81], zmm1)
int64_t result

if (arg1[0x86].b == 1 || zmm8.d f!= arg1[0x72].d)
    result.b = 1
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_c8)
return result
