// 函数: sub_140f9a1c0
// 地址: 0x140f9a1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int128_t* result = arg1
*arg1 = 0
arg1[1] = 0
sub_140a96170(&arg1[2])
int64_t* rbx = arg2[1]
int64_t var_58 = *arg2

if (rbx != 0)
    rbx[1].d += 1

if (&var_58 != result)
    int128_t zmm1_1 = var_58.o
    int128_t var_30_1 = zmm1_1
    var_58.o = *result
    *result = zmm1_1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

void var_48
int64_t* rax_5 = sub_140a96170(&var_48)
result[1].q = *rax_5
*rax_5 = result[1].q
int64_t rcx_5 = *(result + 0x18)
*(result + 0x18) = rax_5[1]
rax_5[1] = rcx_5
result[2].d = rax_5[2].d
int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t rsi_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_40 + 8))(var_40, zx.q(rsi_1))

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp4_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp4_1 == 1)
            int64_t r8_2 = *rbx_2
            (*(r8_2 + 8))(rbx_2, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_78)
return result
