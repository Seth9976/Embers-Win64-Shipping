// 函数: sub_1427f6210
// 地址: 0x1427f6210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = 0
arg1[1] = 0
*arg1 = &data_1434d07b0
char _FileName[0x130]
void* r9 = &_FileName - arg2

do
    char rcx = *arg2
    
    if (rcx == 0)
        break
    
    char rax_1 = rcx
    
    if (rcx == 0x2f)
        rax_1 = 0x5c
    
    r8 = zx.q(r8.d + 1)
    *(r9 + arg2) = rax_1
    arg2 = &arg2[1]
while (r8.d u< 0x12c)

_FileName[r8] = 0

if (r8.d != 0x12c)
    fopen_s(&arg1[1], &_FileName, "rb")

FILE* _Stream = arg1[1]

if (_Stream == 0)
    arg1[2].d = 0
else
    fseek(_Stream, 0, 2)
    arg1[2].d = ftell(arg1[1])
    fseek(arg1[1], 0, 0)

return arg1
