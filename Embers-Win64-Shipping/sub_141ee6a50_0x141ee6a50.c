// 函数: sub_141ee6a50
// 地址: 0x141ee6a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x29]

if (rcx != 0)
    (*(*rcx + 0x7f8))(rcx)

void* rdi = arg1[0x25]

if (rdi != 0)
    void* rax_3
    rax_3, arg3 = sub_140d21950(rdi, sub_14255c120())
    
    if (rax_3 != 0)
        int64_t r8_1 = *rax_3
        (*(r8_1 + 0x28))(rax_3, arg2, r8_1)

void* result = sub_140d3c6e0(arg2 + 0x68)
void* result_1 = result

if (result != 0)
    void* rax_4
    rax_4, arg3 = sub_14255d000()
    void* rcx_4 = *(result_1 + 0x10)
    result = rax_4 + 0x30
    int64_t rdx_2 = sx.q(*(result + 8))
    
    if (rdx_2.d s<= *(rcx_4 + 0x38) && *(*(rcx_4 + 0x30) + (rdx_2 << 3)) == result)
        result = (*(*arg1 + 0x580))(arg1, result_1)

if ((*(arg1 + 0x1f2) & 0x10) == 0)
    return result

uint128_t zmm1
uint128_t zmm6

if ((*(*arg1 + 0x548))(arg1) == 0)
    zmm6 = zx.o(data_143dbb1f8.q)
    arg3 = data_143dbb200
    zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
else
    zmm6 = zx.o(0)
    (*(*arg1 + 0x3e8))(arg1)
    zmm1 = zx.o(0)

zmm6.d = zmm6.d f+ *(arg1 + 0x22c)
zmm1.d = zmm1.d f+ arg1[0x46].d
arg3 = arg3 f+ *(arg1 + 0x234)
int64_t rax_10 = *arg1
int32_t var_38 = zmm6.d
int32_t var_34_1 = zmm1.d
return (*(rax_10 + 0x880))(arg1, arg2, &var_38, arg1 + 0xc4, var_38, arg3)
