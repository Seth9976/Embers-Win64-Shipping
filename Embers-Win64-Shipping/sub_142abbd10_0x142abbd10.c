// 函数: sub_142abbd10
// 地址: 0x142abbd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *arg2
int32_t rsi = arg2[2]

if (rdi s< sub_142a4a1f0(arg3))
    int32_t rax_2
    
    do
        int32_t rax_1 = sub_142a486d0(arg3, rdi)
        int32_t r8
        r8.b = rax_1 u> 0xffff
        
        if (rsi u> 9)
            abort()
            noreturn
        
        switch (rsi)
            case 0
                if (rax_1 s> 0x2d)
                    if (rax_1 != 0xa4)
                        if (rax_1 == 0x2030)
                            *(arg1 + 4) = 0
                            *arg1 = r8 + 1 + rdi
                            arg1[3] = 0xfffffffc
                            return arg1
                        
                    label_142abbed6:
                        arg1[1] = rax_1
                        *arg1 = r8 + 1 + rdi
                        *(arg1 + 8) = 0
                        return arg1
                    
                    rsi = 4
                else
                    if (rax_1 == 0x2d)
                        *(arg1 + 4) = 0
                        *arg1 = r8 + 1 + rdi
                        arg1[3] = 0xffffffff
                        return arg1
                    
                    if (rax_1 == 0x25)
                        *(arg1 + 4) = 0
                        *arg1 = r8 + 1 + rdi
                        arg1[3] = 0xfffffffd
                        return arg1
                    
                    if (rax_1 != 0x27)
                        if (rax_1 != 0x2b)
                            goto label_142abbed6
                        
                        *(arg1 + 4) = 0
                        *arg1 = r8 + 1 + rdi
                        arg1[3] = 0xfffffffe
                        return arg1
                    
                    rsi = rax_1 - 0x26
                
                rdi += r8 + 1
            case 1
                *arg1 = r8 + 1 + rdi
                
                if (rax_1 != 0x27)
                    arg1[1] = rax_1
                    *(arg1 + 8) = 2
                else
                    *(arg1 + 4) = 0x27
                    arg1[3] = 0
                
                return arg1
            case 2
                if (rax_1 != 0x27)
                    arg1[1] = rax_1
                    *arg1 = r8 + 1 + rdi
                    *(arg1 + 8) = 2
                    return arg1
                
                rsi = rax_1 - 0x24
                rdi += r8 + 1
            case 3
                if (rax_1 == 0x27)
                    arg1[1] = 0x27
                    *arg1 = r8 + 1 + rdi
                    *(arg1 + 8) = 2
                    return arg1
                
                rsi = 0
            case 4
                if (rax_1 != 0xa4)
                    goto label_142abbf38
                
                rsi = 5
                rdi += r8 + 1
            case 5
                if (rax_1 != 0xa4)
                    goto label_142abbf47
                
                rsi = 6
                rdi += r8 + 1
            case 6
                if (rax_1 != 0xa4)
                    goto label_142abbf56
                
                rsi = 7
                rdi += r8 + 1
            case 7
                if (rax_1 != 0xa4)
                    goto label_142abbf65
                
                rsi = 8
                rdi += r8 + 1
            case 8
                if (rax_1 != 0xa4)
                    goto label_142abbf74
                
                rsi = 9
                rdi += r8 + 1
            case 9
                if (rax_1 != 0xa4)
                    goto label_142abbf83
                
                rdi += r8 + 1
        
        rax_2 = sub_142a4a1f0(arg3)
    while (rdi s< rax_2)

if (rsi u> 9)
    abort()
    noreturn

switch (rsi)
    case 0, 3
        *arg1 = 0xffffffff
    case 1, 2
        *arg4 = 1
        *arg1 = 0xffffffff
    case 4
    label_142abbf38:
        *arg1 = rdi
        *(arg1 + 4) = 0
        arg1[3] = 0xfffffffb
    case 5
    label_142abbf47:
        *arg1 = rdi
        *(arg1 + 4) = 0
        arg1[3] = 0xfffffffa
    case 6
    label_142abbf56:
        *arg1 = rdi
        *(arg1 + 4) = 0
        arg1[3] = 0xfffffff9
    case 7
    label_142abbf65:
        *arg1 = rdi
        *(arg1 + 4) = 0
        arg1[3] = 0xfffffff8
    case 8
    label_142abbf74:
        *arg1 = rdi
        *(arg1 + 4) = 0
        arg1[3] = 0xfffffff7
    case 9
    label_142abbf83:
        *arg1 = rdi
        *(arg1 + 4) = 0
        arg1[3] = 0xfffffff1

return arg1
