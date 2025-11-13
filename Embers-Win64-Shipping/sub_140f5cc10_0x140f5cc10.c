// 函数: sub_140f5cc10
// 地址: 0x140f5cc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t* rbx = arg2[1]
int64_t rsi = *arg2

if (rbx != 0)
    rbx[1].d += 1

void*** rax_2 = sub_140a82f30(0x28, 8)
*rax_2 = &data_142ee7430
rax_2[1] = arg1
rax_2[2] = rsi
rax_2[3] = rbx

if (rbx != 0)
    rbx[1].d += 1

*(rax_2 + 0x24) = arg7.d
rax_2[4].b = arg3
*(rax_2 + 0x21) = arg4
*rax_2 = &data_142ee7450
uint64_t (* var_68)(int64_t* arg1, int128_t* arg2)
uint64_t (* rdx)(int64_t* arg1, int128_t* arg2) = var_68

if (rax_2 != -8)
    rdx = sub_140f2d3a0

var_68 = rdx
int128_t var_48

if (&arg1[0x8e] != &var_68)
    arg5 = *(arg1 + 0x470)
    arg6 = *(arg1 + 0x480)
    int128_t zmm4_1 = *(arg1 + 0x490)
    int128_t zmm5_1 = *(arg1 + 0x4a0)
    *(arg1 + 0x470) = var_68.o
    int128_t zmm0 = var_48
    *(arg1 + 0x480) = rax_2.o
    *(arg1 + 0x490) = zmm0
    var_68.o = arg5
    rdx = var_68
    void*** var_58
    var_58.o = arg6
    rax_2 = var_58
    int128_t var_38
    *(arg1 + 0x4a0) = var_38
    var_48 = zmm4_1
    int128_t var_38_1 = zmm5_1

if (rdx != 0)
    void*** rcx_2 = &var_48
    
    if (rax_2 != 0)
        rcx_2 = rax_2
    
    (*rcx_2)[2](rcx_2, rdx, arg5, arg6)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t result = sub_140f2cf90(arg1)
__security_check_cookie(rax_1 ^ &var_88)
return result
