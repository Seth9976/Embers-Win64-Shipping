// 函数: sub_140a35650
// 地址: 0x140a35650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t r9 = arg1[1].d
char* rsi = arg2
char rcx = r9.b - 1

if (r9 == 0)
    rcx = -1

int32_t rax_2 = r9 - 1

if (r9 == 0)
    rax_2 = -1

if (r9 == 0)
    rax_2 = 0

int32_t temp1
int32_t temp2
temp1:temp2 = sx.q(rax_2)

if (arg3 u>= (temp2 - temp1) s>> 1 && r9 == 0)
    rcx = 0

int32_t result

if (arg3 u< (temp2 - temp1) s>> 1 || (rcx & 1) != 0)
    result.b = 0
else
    int16_t* rbx_1 = nullptr
    int32_t rdi_1 = 0
    int16_t var_2c_1 = 0
    wchar16* _EndPtr = nullptr
    
    while (true)
        result = arg1[1].d
        int32_t rcx_1 = result - 1
        
        if (result == 0)
            rcx_1 = 0
        
        if (rdi_1 s>= rcx_1)
            break
        
        int64_t rcx_2 = *arg1
        wchar16 _String = *(rbx_1 + rcx_2)
        int16_t var_2e_1 = *(rcx_2 + rbx_1 + 2)
        rdi_1 += 2
        rbx_1 = &rbx_1[2]
        *rsi = wcstoul(&_String, &_EndPtr, 0x10)
        rsi = &rsi[1]
    
    result.b = 1

__security_check_cookie(rax_1 ^ &var_58)
return result
