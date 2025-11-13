// 函数: sub_142c51e30
// 地址: 0x142c51e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_2 = arg3
char* rbx = arg2

if (arg3 == 0)
    i_2 = -1
    
    do
        i_2 += 1
    while (arg2[i_2] != 0)

int64_t rax = data_143ccb898(i_2 + 1)
char* r14 = nullptr

if (rax == 0)
    return zx.q((rax + 0x1b).d)

int64_t i_1 = i_2

if (i_2 != 0)
    int64_t i
    
    do
        char rsi_1 = *rbx
        
        if (rsi_1 == 0x25 && i_1 u> 2 && isxdigit(zx.d(rbx[1])) != 0 && isxdigit(zx.d(rbx[2])) != 0)
            char _String = rbx[1]
            char arg_19 = rbx[2]
            char arg_1a = 0
            rbx = &rbx[2]
            char* _EndPtr
            rsi_1 = sub_142c56220(strtoul(&_String, &_EndPtr, 0x10))
            i_1 -= 2
        
        if (arg6 != 0 && rsi_1 u< 0x20)
            data_143ccb8a0(rax)
            return 3
        
        r14[rax] = rsi_1
        rbx = &rbx[1]
        r14 = &r14[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

r14[rax] = 0

if (arg5 != 0)
    *arg5 = r14

*arg4 = rax
return 0
