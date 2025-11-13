// 函数: sub_140f61f30
// 地址: 0x140f61f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int512_t zmm1

if (arg3 != 1)
    arg4, zmm1 = sub_140f44b60(arg1)

int64_t* r14 = *(arg1 + 0x408)

if (*(arg1 + 0x3a0) != 0)
    int64_t* rcx = *(arg1 + 0x398)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x3a0) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x398)
        
        (*(*rcx_1 + 0x48))(rcx_1)
        *(arg1 + 0x390) = arg4

int32_t var_38
int64_t result = (*(*r14 + 0x30))(r14, &var_38, sub_140ac6680(arg2), arg1 + 0x390)
char var_34

if (var_34 != 0)
    zmm1.o = var_38
    zmm1.o = _mm_cvtps_pd(zmm1.q)
    result = sub_140f2d8d0(arg1, zmm1, 1, arg3)

__security_check_cookie(rax_1 ^ &var_58)
return result
