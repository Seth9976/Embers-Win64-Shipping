// 函数: sub_14096f5f0
// 地址: 0x14096f5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
EnterCriticalSection(arg1 + 0xb0)
int64_t* rcx_1 = arg2[1]
int64_t var_38 = *arg2
int64_t* var_30 = rcx_1

if (rcx_1 != 0)
    rcx_1[1].d += 1
    rcx_1 = var_30

int32_t result = &var_38

if (&var_38 != arg1 + 0xa0)
    int128_t zmm1 = var_38.o
    int128_t var_28_1 = zmm1
    var_38.o = *(arg1 + 0xa0)
    rcx_1 = var_30
    *(arg1 + 0xa0) = zmm1

if (rcx_1 != 0)
    result = rcx_1[1].d
    rcx_1[1].d -= 1
    
    if (result == 1)
        result = (**var_30)(var_30)
        int32_t rsi_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rsi_1 == 1)
            result = (*(*var_30 + 8))(var_30, zx.q(rsi_1))

if (arg1 != -0xb0)
    result = LeaveCriticalSection(arg1 + 0xb0)

__security_check_cookie(rax_1 ^ &var_58)
return result
