// 函数: sub_140fbf530
// 地址: 0x140fbf530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* rdi = *(arg4 + 0x28)
int64_t rax_2 = *(arg4 + 0x18)

if (rdi != 0)
    rdi[1].d += 1

char rax_3

if (rax_2 == data_143e1e0f8)
    rax_3 = sub_140e19840(arg1, arg5)

int64_t r14

if (rax_2 != data_143e1e0f8 || rax_3 == 0 || *(arg1 + 0x60d) == 0)
    r14.b = 0
else
    r14.b = 1

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (r14.b == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    *(arg1 + 0x60d) = 0
    *(arg1 + 0x60f) = 0
    sub_140e81900(data_143e29f28)
    char var_1a8 = 1
    int64_t var_1a0_1 = 0
    int64_t var_198_1 = 0
    char var_188_1 = 0
    int32_t var_f4
    int32_t var_f4_1 = (var_f4 & 0xffffff01) | 1
    int64_t var_180
    __builtin_memset(&var_180, 0, 0x88)
    int32_t var_f8_1 = 0x20702
    void var_e8
    sub_140596b00(&var_e8, &var_1a8)
    sub_140597700(&var_1a8)
    int64_t rdx_1
    rdx_1.b = 1
    sub_14095ec70(arg1 + 0x5d8, rdx_1)
    sub_140e51550(arg2, &var_e8)
    sub_140597700(&var_e8)

__security_check_cookie(rax_1 ^ &var_1c8)
return arg2
