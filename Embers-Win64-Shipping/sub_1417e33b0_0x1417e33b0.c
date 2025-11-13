// 函数: sub_1417e33b0
// 地址: 0x1417e33b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void var_a8
sub_1417d67e0(&var_a8)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_a8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

void* rax_3 = *(arg2 + 0x38)
void* rdx_2 = &var_a8

if (rax_3 != 0)
    rdx_2 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
void var_48
int128_t* result = sub_1417db060(&var_48, rdx_2)
*arg3 = *result
arg3[1] = result[1]
arg3[2] = result[2]
int64_t* var_58

if (var_58 != 0)
    result = zx.q(var_58[1].d)
    var_58[1].d -= 1
    
    if (result.d == 1)
        result = (**var_58)(var_58)
        int32_t rdi_2 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (rdi_2 == 1)
            result = (*(*var_58 + 8))(var_58, zx.q(rdi_2))

__security_check_cookie(rax_1 ^ &var_c8)
return result
