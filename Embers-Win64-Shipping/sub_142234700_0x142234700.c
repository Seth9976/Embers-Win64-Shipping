// 函数: sub_142234700
// 地址: 0x142234700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9538)
sub_1409ac860(arg2, arg1 + 0xc0, zmm1)

if ((arg2[5].b & 1) != 0
        && (*(arg1 + 0xcc) | *(arg1 + 0xc8) | *(arg1 + 0xc4) | *(arg1 + 0xc0)) == 0)
    zmm1 = sub_140d25500(arg1)
    void var_18
    *(arg1 + 0xc0) = *sub_140b214c0(&var_18)

int64_t* rcx_5 = arg2[1]
int64_t rdx_1 = *rcx_5
int32_t arg_8
uint64_t result
bool cond:1

if (rdx_1 + 4 u> rcx_5[1])
    int32_t rax_7
    rax_7.b = arg2[0xe] != 0
    arg_8 = rax_7
    result, rcx_5 = (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    cond:1 = arg_8 != 0
else
    cond:1 = *rdx_1 != 0
    result = rdx_1 + 4
    *rcx_5 = result

if (cond:1 == 0)
    return result

if (arg2[8].d s>= 0x11f)
    int64_t* r8_1 = arg2[1]
    int64_t rdx_3 = *r8_1
    bool cond:2_1
    
    if (rdx_3 + 4 u> r8_1[1])
        arg_8 = zx.d(*(arg1 + 0x8a)) u>> 2 & 1
        (*(*arg2 + 0x150))(arg2, &arg_8, 4)
        cond:2_1 = arg_8 != 0
    else
        cond:2_1 = *rdx_3 != 0
        *r8_1 = rdx_3 + 4
    
    rcx_5.b = cond:2_1
    *(arg1 + 0x8a) &= 0xfb
    rcx_5.b <<= 2
    *(arg1 + 0x8a) |= rcx_5.b

char var_20_1 = 0
return sub_140bd01d0(arg1 + 0xa8, arg2, arg1, nullptr, zmm1, 1, 0, 1)
