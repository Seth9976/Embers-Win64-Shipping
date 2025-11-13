// 函数: sub_142932820
// 地址: 0x142932820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char* rbx = arg2
char* rsi = arg2

if (arg2 == 0)
    sub_1428a5670(0x25, 0x88, 0x6f, "crypto\dso\dso_win32.c", 0xd4)
    return 0

char** result = sub_1428a6a70(0x50)

if (result == 0)
    sub_1428a5670((result + 0x25).d, 0x88, (result + 0x41).d, "crypto\dso\dso_win32.c", 0xda)
    return nullptr

char rax_2 = *rbx
int32_t rcx_1 = 1

if ((rax_2 == 0x5c && rbx[1] == rax_2) || (rax_2 == 0x2f && rbx[1] == rax_2))
    rbx = &rbx[2]
    rcx_1 = 0
    *result = rbx
    goto label_1429328e6

while (true)
    char rax_3 = *rbx
    
    if (rax_3 == 0)
        break
    
    if (rax_3 == 0x2f)
    label_14293292a:
        
        if (rcx_1 != 0)
            rbx = &rbx[1]
            int32_t rax_9 = rbx.d - rsi.d
            
            if (rcx_1 != 1)
                result[7].d = &result[7].d[rax_9]
            else
                rcx_1 = 2
                result[6] = rsi
                result[7].d = rax_9
        else
            rcx_1 = 2
            int32_t rax_7 = rbx.d - rsi.d
            rbx = &rbx[1]
            result[1].d = rax_7
            result[6] = rbx
    else
        if (rax_3 != 0x3a)
            if (rax_3 == 0x5c)
                goto label_14293292a
            
            rbx = &rbx[1]
            continue
        
        if (rcx_1 != 1)
            sub_1428a5670(0x25, 0x88, 0x73, "crypto\dso\dso_win32.c", 0xed)
            sub_1428a6780(result)
            return nullptr
        
        result[2] = rsi
        int32_t rax_5 = rbx.d - rsi.d
        rcx_1 = 2
        rbx = &rbx[1]
        result[3].d = rax_5
        result[6] = rbx
    
label_1429328e6:
    rsi = rbx

if (rcx_1 == 0)
    result[1].d = rbx.d - rsi.d
else if (rbx - rsi s> 0)
    if (arg3 == 0)
        result[8] = rsi
        result[9].d = rbx.d - rsi.d
    else if (rcx_1 != 1)
        result[7].d = result[7].d - rsi.d + rbx.d
    else
        result[6] = rsi
        result[7].d = 0 - rsi.d + rbx.d

if (result[1].d == 0)
    *result = nullptr

if (result[3].d == 0)
    result[2] = 0

if (result[7].d == 0)
    result[6] = 0

if (result[9].d == 0)
    result[8] = 0

return result
