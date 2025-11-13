// 函数: sub_142914b80
// 地址: 0x142914b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rdi = arg1[5]
char* rsi = arg4
int64_t rbx = sx.q(arg3)

if (arg2 s> 0x1001)
    if (arg2 - 0x1002 u> 0xb)
        return 0xfffffffe
    
    int32_t var_18_1
    
    switch (arg2)
        case 0x1002, 0x1007
            if (rdi[7] == 6)
                if (arg2 == 0x1007)
                    *arg4 = rdi[0xc]
                    return 1
                
                if (rbx.d s< 0xfffffffd)
                    return 0xfffffffe
                
                int32_t rax_19 = rdi[0xd]
                
                if (rax_19 == 0xffffffff)
                    rdi[0xc] = rbx.d
                    return 1
                
                if (rbx.d != 0xfffffffe || arg1[4].d != 0x10)
                    if (rbx.d != 0xffffffff)
                        if (arg3 s< 0 || rbx.d s>= rax_19)
                            rdi[0xc] = rbx.d
                            return 1
                        
                        sub_1428a5670(4, 0x8f, 0xa4, "crypto\rsa\rsa_pmeth.c", 0x1c6)
                        return 0
                    
                    int32_t rax_20 = sub_1428916c0(*(rdi + 0x20))
                    
                    if (rdi[0xd] s> rax_20)
                        sub_1428a5670(4, 0x8f, 0xa4, "crypto\rsa\rsa_pmeth.c", 0x1c6)
                        return 0
                    
                    rdi[0xc] = rbx.d
                    return 1
                
                var_18_1 = 0x1c0
            else
                var_18_1 = 0x1b5
            
            sub_1428a5670(4, 0x8f, 0x92, "crypto\rsa\rsa_pmeth.c", var_18_1)
            return 0xfffffffe
        case 0x1003
            if (rbx.d s>= 0x200)
                *rdi = rbx.d
                return 1
            
            sub_1428a5670(4, 0x8f, 0x78, "crypto\rsa\rsa_pmeth.c", 0x1d0)
            return 0xfffffffe
        case 0x1004
            if (rsi != 0 && sub_142890290(rsi) != 0 && sub_1428902b0(rsi) == 0)
                sub_1428901a0(*(rdi + 8))
                *(rdi + 8) = rsi
                return 1
            
            sub_1428a5670(4, 0x8f, 0x65, "crypto\rsa\rsa_pmeth.c", 0x1d8)
            return 0xfffffffe
        case 0x1005, 0x1008
            if (((rdi[7] - 4) & 0xfffffffd) != 0)
                sub_1428a5670(4, 0x8f, 0x9c, "crypto\rsa\rsa_pmeth.c", 0x207)
                return 0xfffffffe
            
            if (arg2 != 0x1008)
                if (rdi[0xd] == 0xffffffff)
                    *(rdi + 0x28) = rsi
                else
                    int32_t rax_27 = sub_1406938b0(rsi)
                    
                    if (sub_1406938b0(*(rdi + 0x28)) != rax_27)
                        sub_1428a5670(4, 0x8f, 0x98, "crypto\rsa\rsa_pmeth.c", 0x213)
                        return 0
                
                return 1
            
            int64_t rax_26 = *(rdi + 0x28)
            
            if (rax_26 != 0)
                *arg4 = rax_26
                return 1
        case 0x1006
            *arg4 = rdi[7]
            return 1
        case 0x1009, 0x100b
            if (rdi[7] != 4)
                var_18_1 = 0x1ea
            label_142914ee9:
                sub_1428a5670(4, 0x8f, 0x8d, "crypto\rsa\rsa_pmeth.c", var_18_1)
                return 0xfffffffe
            
            if (arg2 != 0x100b)
                *(rdi + 0x20) = rsi
                return 1
        case 0x100a
            if (rdi[7] != 4)
                var_18_1 = 0x21c
                goto label_142914ee9
            
            sub_1428a6780(*(rdi + 0x40))
            
            if (rsi == 0 || rbx.d s<= 0)
                *(rdi + 0x40) = 0
                *(rdi + 0x48) = 0
                return 1
            
            *(rdi + 0x40) = rsi
            *(rdi + 0x48) = rbx
            return 1
        case 0x100c
            if (rdi[7] == 4)
                *arg4 = *(rdi + 0x40)
                return zx.q(rdi[0x12])
            
            var_18_1 = 0x22b
            goto label_142914ee9
        case 0x100d
            if ((rbx - 2).d u<= 3)
                rdi[4] = rbx.d
                return 1
            
            sub_1428a5670(4, 0x8f, 0xa5, "crypto\rsa\rsa_pmeth.c", 0x1e1)
            return 0xfffffffe
    
    *arg4 = *(rdi + 0x20)
    return 1

if (arg2 == 0x1001)
    if ((rbx - 1).d u<= 5)
        if (sub_142915850(*(rdi + 0x20), rbx.d) == 0)
            return 0
        
        bool cond:1_1
        
        if (rbx.d == 6)
            cond:1_1 = (arg1[4].b & 0x18) == 0
        label_142914cdc:
            
            if (not(cond:1_1))
                if (*(rdi + 0x20) == 0)
                    *(rdi + 0x20) = &data_1434e9110
                
                rdi[7] = rbx.d
                return 1
        else if (**arg1 != 0x390)
            if (rbx.d != 4)
                rdi[7] = rbx.d
                return 1
            
            cond:1_1 = (arg1[4].d & 0x300) == 0
            goto label_142914cdc
    
    sub_1428a5670(4, 0x8f, 0x90, "crypto\rsa\rsa_pmeth.c", 0x1ab)
    return 0xfffffffe

if (arg2 - 1 u> 0xc)
    return 0xfffffffe

switch (arg2)
    case 1
        if (sub_142915850(rsi, rdi[7]) == 0)
            return 0
        
        if (rdi[0xd] == 0xffffffff)
            *(rdi + 0x20) = rsi
            return 1
        
        if (sub_1406938b0(*(rdi + 0x20)) == sub_1406938b0(rsi))
            return 1
        
        sub_1428a5670(4, 0x8f, 0x91, "crypto\rsa\rsa_pmeth.c", 0x1f9)
        return 0
    case 2
    label_142914c65:
        sub_1428a5670(4, 0x8f, 0x94, "crypto\rsa\rsa_pmeth.c", 0x243)
        return 0xfffffffe
    case 3, 4, 9, 0xa
        if (**arg1 != 0x390)
            return 1
        
        goto label_142914c65
    case 5, 7, 0xb
        return 1
    case 6, 8, 0xc
        return 0xfffffffe
    case 0xd
        *arg4 = *(rdi + 0x20)
        return 1
