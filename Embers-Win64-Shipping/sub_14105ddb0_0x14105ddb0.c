// 函数: sub_14105ddb0
// 地址: 0x14105ddb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_348
int64_t rax_1 = __security_cookie ^ &var_348
void var_328
void* rax_2 = &var_328
int64_t i_1 = 6
int64_t i

do
    rax_2 += 0x80
    int128_t zmm0 = *arg3
    int128_t zmm1 = arg3[1]
    arg3 = &arg3[8]
    *(rax_2 - 0x80) = zmm0
    zmm0 = arg3[-6]
    *(rax_2 - 0x70) = zmm1
    zmm1 = arg3[-5]
    *(rax_2 - 0x60) = zmm0
    zmm0 = arg3[-4]
    *(rax_2 - 0x50) = zmm1
    zmm1 = arg3[-3]
    *(rax_2 - 0x40) = zmm0
    zmm0 = arg3[-2]
    *(rax_2 - 0x30) = zmm1
    zmm1 = arg3[-1]
    *(rax_2 - 0x20) = zmm0
    *(rax_2 - 0x10) = zmm1
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t* rbx = *arg2
void* rsi = *rbx
int64_t var_28 = *(*arg1 + 0x1e8)
int64_t* rcx_1 = rbx[2]
rbx[2] = i_1

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)

int64_t result = sub_14105f040(&rbx[2], rsi, &var_328)
rbx[5].b = 1
__security_check_cookie(rax_1 ^ &var_348)
return result
