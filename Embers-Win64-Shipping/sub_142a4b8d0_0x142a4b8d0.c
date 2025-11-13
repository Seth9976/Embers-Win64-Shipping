// 函数: sub_142a4b8d0
// 地址: 0x142a4b8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int16_t i = 0
char* rax

if (arg2 == 0)
label_142a4b95e:
    
    do
        rax = zx.q(i)
        i += 1
        *(rax + arg1) = 0
    while (i u< 4)
    
    return 

char* _EndPtr
*arg1 = strtoul(arg2, &_EndPtr, 0xa)
rax = _EndPtr

if (rax == arg2)
    goto label_142a4b95e

void* _String

do
    i += 1
    
    if (i == 4)
        return 
    
    if (*rax != 0x2e)
        break
    
    _String = &rax[1]
    *(zx.q(i) + arg1) = strtoul(_String, &_EndPtr, 0xa)
    rax = _EndPtr
while (rax != _String)

if (i u< 4)
    goto label_142a4b95e
