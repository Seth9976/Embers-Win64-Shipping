// 函数: sub_1422ae9a0
// 地址: 0x1422ae9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f52f10 == 0)
    return 

uint128_t zmm0 = data_143f52f10.o
uint128_t var_18 = zmm0
void* rax_1 = _mm_bsrli_si128(zmm0, 8).q

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_141ec9410(data_143f5b298, &var_18)
int64_t* rbx_1 = data_143f52f18
data_143f52f10 = 0

if (rbx_1 == 0)
    return 

data_143f52f18 = 0
rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp1_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)
