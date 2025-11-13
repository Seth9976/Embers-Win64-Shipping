// 函数: sub_142c80010
// 地址: 0x142c80010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1
void* r10 = *(r8 + 0x250)
int64_t* rax

if (arg3 s< 0xd)
    rax = *(r8 + 0x3e0)
else if (arg3 s<= 0xe)
    rax = *(r8 + 0x3f0)
else if (arg3 != 0xf)
    rax = *(r8 + 0x3e0)
else
    rax = *(r8 + 0x3e8)

if (arg2 == 0)
    *(arg1 + 0x744) += 1
else
    *(arg1 + 0x744) = 0

int32_t result

if (rax == 0)
label_142c800e9:
    
    if (arg3 != 0xd)
        if (arg3 == 0xe)
            return sub_142c80860(arg1, 0, r8, arg4)
        
        if (arg3 != 0xf)
            return sub_142c7f0d0(arg1)
        
        return 0
    
    if (*(r10 + 0x18) != 0)
        arg1[0xea].d = 0
        return 0
    
    int64_t rdx_1 = arg1[0xed]
    
    if (rdx_1 != -1)
        sub_142c6f180(r8, rdx_1)
        return sub_142c80360(arg1, arg1[0xed], r8, arg4)
    
    int64_t r8_2 = arg1[0xe4]
    
    if (*(r8 + 0x607) == 0)
        result = gzprintf(&arg1[0xd3], "SIZE %s", r8_2, arg4)
        
        if (result == 0)
            arg1[0xea].d = 0x18
    else
        result = gzprintf(&arg1[0xd3], "RETR %s", r8_2, arg4)
        
        if (result == 0)
            arg1[0xea].d = 0x20
else
    int32_t rdx = *(arg1 + 0x744)
    int32_t rcx = 0
    
    if (rdx s> 0)
        do
            if (rax == 0)
                goto label_142c800e9
            
            rax = rax[1]
            rcx += 1
        while (rcx s< rdx)
    
    if (rax == 0)
        goto label_142c800e9
    
    char* r8_1 = *rax
    
    if (*r8_1 != 0x2a)
        arg1[0xe9].d = 0
    else
        r8_1 = &r8_1[1]
        arg1[0xe9].d = 1
    
    result = gzprintf(&arg1[0xd3], &data_1434ccff0, r8_1, arg4)
    
    if (result == 0)
        arg1[0xea].d = arg3

return result
