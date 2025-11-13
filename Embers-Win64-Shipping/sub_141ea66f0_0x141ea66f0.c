// 函数: sub_141ea66f0
// 地址: 0x141ea66f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5f8
int64_t rax_1 = __security_cookie ^ &var_5f8
(*(*arg1 + 0x2b0))()
int32_t var_5a0 = *(arg3 + 0x14)
int32_t rax_4 = arg3[1].d
int64_t var_5a8 = *(arg3 + 0xc)
int32_t var_590 = rax_4
int64_t rax_5 = *arg1
int64_t var_598 = *arg3
(*(rax_5 + 0x270))(arg1, arg2, &var_598, &var_5a8, arg3[3].d.d, arg3, arg3 + 0xc, &arg3[3])
int32_t rax_6 = *(arg3 + 0x14)
var_598 = *(arg3 + 0xc)
int64_t* var_5c0_1 = &arg3[3]
var_5a8 = *arg3
int32_t var_590_1 = rax_6
int32_t var_5a0_1 = arg3[1].d
char* result
int64_t rdx
int128_t zmm6_1
result, rdx, zmm6_1 =
    sub_142485b40(arg1, arg2.d, &var_5a8, &var_598, arg3[3].d.d, arg3, arg3 + 0xc, var_5c0_1)

if (arg1[6] != 0)
    int32_t var_5b8 = 0
    void var_588
    sub_1422d7fd0(&var_588)
    (*(*arg1 + 0x2b8))(arg1, zmm6_1, &var_5b8, &var_588)
    result, rdx = sub_142485c50(arg1, zmm6_1, &var_5b8, &var_588)
    int128_t zmm2_1 = var_5b8
    
    if (not(zmm2_1.d f<= 0f))
        result, rdx = sub_14225d750(arg1[6], &var_588, zmm2_1)
    
    int64_t var_58
    
    if (var_58 != 0)
        result, rdx = sub_140a74f90(var_58)

if ((arg1[5].b & 8) != 0 && not(0f f< arg1[8].d))
    rdx.b = 1
    (*(*arg1 + 0x290))(arg1, rdx)

result.b = 0
__security_check_cookie(rax_1 ^ &var_5f8)
return result
