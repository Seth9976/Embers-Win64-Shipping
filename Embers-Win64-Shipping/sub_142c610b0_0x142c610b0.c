// 函数: sub_142c610b0
// 地址: 0x142c610b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = -1
*arg3 = 0
*arg4 = 0xffffffff

if (arg2 == 0 || *arg2 == 0)
    return 0

char* rax
int64_t r8
rax, r8 = data_143ccb8b0(arg2)

if (rax == 0)
    return 0x1b

char* rbx = rax
char* rbp = rax

if (*rax == 0x5b)
    rbp = &rax[1]
    rbx = rbp
    
    if (rax[1] != 0)
        do
            int32_t rax_2
            rax_2, r8 = isxdigit(zx.d(*rbx))
            
            if (rax_2 == 0)
                char rax_3 = *rbx
                
                if (rax_3 != 0x3a && rax_3 != 0x2e)
                    break
            
            rbx = &rbx[1]
        while (*rbx != 0)
    
    if (*rbx == 0x25)
        int32_t rax_4
        rax_4, r8 = strncmp("%25", rbx, 3)
        
        if (rax_4 != 0)
            r8, arg5 =
                sub_142c64850(arg1, "Please URL encode %% as %%25, see RFC 6874.\n", r8, arg5)
        
        char i = rbx[1]
        rbx = &rbx[1]
        
        while (i != 0)
            int32_t rax_5
            rax_5, r8 = isalpha(zx.d(i))
            
            if (rax_5 == 0)
                int32_t rax_6
                rax_6, r8 = isxdigit(zx.d(*rbx))
                
                if (rax_6 == 0)
                    char rcx_5 = *rbx
                    
                    if (rcx_5 - 0x2d u> 1 && rcx_5 != 0x5f && rcx_5 != 0x7e)
                        break
            
            i = rbx[1]
            rbx = &rbx[1]
    
    if (*rbx != 0x5d)
        arg5 = sub_142c64850(arg1, "Invalid IPv6 address format\n", r8, arg5)
    else
        *rbx = 0
        rbx = &rbx[1]

char* rax_8 = strchr(rbx, 0x3a)

if (rax_8 == 0)
    goto label_142c6123d

*rax_8 = 0
bool cond:2_1 = rax_8[1] == 0
char* _EndPtr = nullptr

if (cond:2_1)
    goto label_142c6123d

int32_t rax_9 = strtol(&rax_8[1], &_EndPtr, 0xa)
char* _EndPtr_1 = _EndPtr

if (_EndPtr_1 == 0)
    if (rax_9 u<= 0xffff)
        goto label_142c61238
    
    sub_142c64850(arg1, "No valid port number in connect to host string (%s)\n", &rax_8[1], arg5)
else if (*_EndPtr_1 != 0 || rax_9 u> 0xffff)
    sub_142c64850(arg1, "No valid port number in connect to host string (%s)\n", &rax_8[1], arg5)
else
label_142c61238:
    rsi = rax_9
label_142c6123d:
    int64_t rax_10 = data_143ccb8b0(rbp)
    *arg3 = rax_10
    
    if (rax_10 == 0)
        data_143ccb8a0(rax)
        return 0x1b

*arg4 = rsi
data_143ccb8a0(rax)
return 0
