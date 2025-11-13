// 函数: sub_140a35530
// 地址: 0x140a35530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int32_t r10 = arg1[1].d
char* rsi = arg2
int32_t r9 = r10 - 1

if (r10 == 0)
    r9 = -1

int32_t rcx = r10 - 1

if (r10 == 0)
    rcx = -1

if (r10 == 0)
    rcx = 0

uint64_t rdx_3

if (arg3 u>= rcx s/ 3)
    if (r10 == 0)
        r9 = 0
    
    rdx_3 = zx.q(r9 s/ 3)

uint32_t result

if (arg3 u< rcx s/ 3 || r9 != (rdx_3 * 3).d)
    result.b = 0
else
    int16_t* rbx_1 = 4
    int32_t rdi_1 = 0
    int16_t var_22_1 = 0
    
    while (true)
        result = arg1[1].d
        int32_t rcx_3 = result - 1
        
        if (result == 0)
            rcx_3 = 0
        
        if (rdi_1 s>= rcx_3)
            break
        
        int64_t rcx_4 = *arg1
        wchar16 _String = *(rbx_1 + rcx_4 - 4)
        int16_t var_26_1 = *(rbx_1 + rcx_4 - 2)
        int16_t var_24_1 = *(rbx_1 + rcx_4)
        rdi_1 += 3
        rbx_1 = &rbx_1[3]
        *rsi = _wtoi(&_String)
        rsi = &rsi[1]
    
    result.b = 1

__security_check_cookie(rax_1 ^ &var_48)
return result
