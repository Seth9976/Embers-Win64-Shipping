// 函数: sub_141c6f100
// 地址: 0x141c6f100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg3[1]
int64_t r15 = *arg3

if (rdi != 0)
    *(rdi + 0xc) += 1

int128_t zmm6 = arg3[2].d
char r12 = *(arg3 + 0x14)
int64_t r13 = arg3[3]
void*** rax = sub_140a82f30(0x38, 8)
*rax = &data_14320b040
rax[1] = arg1
rax[2].d = arg2
rax[3] = r15
rax[4] = rdi

if (rdi != 0)
    *(rdi + 0xc) += 1

rax[5].d = zmm6.d
*(rax + 0x2c) = r12
rax[6] = r13
*rax = &data_14320b060
void*** var_68 = rax
uint64_t (* var_78)(int64_t* arg1)
uint64_t (* rax_1)(int64_t* arg1) = var_78

if (rax != -8)
    rax_1 = j_sub_141c540e0

var_78 = rax_1
int32_t result = sub_141c56770(arg1, &var_78)

if (rdi != 0)
    result = *(rdi + 0xc)
    *(rdi + 0xc) -= 1
    
    if (result == 1)
        return (*(*rdi + 8))(rdi, 1)

return result
