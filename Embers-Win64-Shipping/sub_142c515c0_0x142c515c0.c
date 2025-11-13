// 函数: sub_142c515c0
// 地址: 0x142c515c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_438
int64_t result = __security_cookie ^ &var_438
int64_t result_1 = result
int64_t rdi = *(arg1 + 0xb0)
char _Source[0x200]

if (rdi == 0)
    int64_t rdi_1 = *(arg1 + 0xa8)
    
    if (rdi_1 != 0)
        memset(&_Source, 0, 0x300)
        result = rdi_1(*(arg1 + 8), &_Source)
        
        if (result.d u<= 1)
            result = strcpy_s(arg1 + 0x1f0, 0x100, &_Source)
else
    memset(&_Source, 0, 0x400)
    result = rdi(*(arg1 + 8), &_Source)
    
    if (result.d u<= 1)
        strcpy_s(arg1 + 0x1f0, 0x100, &_Source)
        void _Source_1
        result = strcpy_s(arg1 + 0x2f0, 0x100, &_Source_1)
__security_check_cookie(result_1 ^ &var_438)
return result
