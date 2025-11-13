// 函数: sub_1427e6ee0
// 地址: 0x1427e6ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char i = *arg1
char* rdi = arg1

while (i != 0)
    if (isspace(zx.d(i)) == 0)
        break
    
    i = rdi[1]
    rdi = &rdi[1]

char _String[0xff]
int64_t result = memset(&_String, 0, 0x100)
bool cond:0 = *rdi == 0
void var_9
char* _EndPtr = &var_9
char (* rbx)[0xff] = &_String

if (not(cond:0))
    char* rsi_2 = rdi - &_String
    
    do
        if (isspace(zx.d(*(rsi_2 + rbx))) != 0)
            break
        
        if (rbx u>= _EndPtr)
            break
        
        *rbx = *(rsi_2 + rbx)
        rbx = &(*rbx)[1]
    while (*(rsi_2 + rbx) != 0)

*rbx = 0
strtod(&_String, &_EndPtr)
result.d = fconvert.s(result)

if (arg2 != 0)
    *arg2 = _EndPtr - &_String + rdi

return result
