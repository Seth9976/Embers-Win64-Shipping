// 函数: sub_140da3c10
// 地址: 0x140da3c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2

if (arg2 == 0)
    return 0

int32_t arg_18
sub_1405ba560(arg1 + 8, &arg_18, arg2)
int64_t rax_1 = sx.q(arg_18)
void* const rcx_3

if (rax_1.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = (rax_1 << 5) + *(arg1 + 8)

int64_t* rax_2 = rcx_3 + 8

if (rcx_3 == 0)
    rax_2 = nullptr

if (rax_2 != 0)
    return *rax_2

void*** rax_4 = j_sub_140a82f30(0x68)
void*** rbx = rax_4

if (rax_4 == 0)
    rbx = nullptr
else
    rax_4[1].d = 1
    *(rax_4 + 0xc) = 1
    *rbx = &data_142ec7aa8
    sub_140d915f0(&rbx[2], arg2)

uint128_t zmm0 = (&rbx[2]).o
uint128_t var_28 = zmm0
void* rax_5 = _mm_bsrli_si128(zmm0, 8).q

if (rax_5 != 0)
    *(rax_5 + 8) += 1

int64_t* var_38 = &arg_10
uint128_t* var_30 = &var_28
sub_140d8c560(arg1 + 8, &arg_18, &var_38, nullptr)
int64_t* rbx_1 = var_28:8.q
int64_t result = *((sx.q(arg_18) << 5) + *(arg1 + 8) + 8)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            void** r8_4 = *rbx
            r8_4[1](rbx, 1, r8_4)

return result
