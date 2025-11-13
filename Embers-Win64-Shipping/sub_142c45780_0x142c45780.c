// 函数: sub_142c45780
// 地址: 0x142c45780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
uint64_t rax = sub_142c45880(arg1)

if (rax.d == 0x44464c54)
    goto label_142c457b6

*arg3 = rax.d | 0x33
r9 = 1

if (*arg2 u> 1)
    arg3[1] = rax.d
    r9 = 2
label_142c457b6:
    
    if (*arg2 u> r9)
        if (arg1 u> 0x4e6b6f6f)
            int32_t rcx
            
            if (arg1 != 0x56616969)
                if (arg1 == 0x59696969)
                    uint64_t rax_4 = zx.q(r9)
                    arg3[rax_4] = 0x79692020
                    *arg2 = r9 + 1
                    return rax_4
                
            label_142c45836:
                rcx = arg1 | 0x20000000
                
                if (rcx != 0x44464c54)
                    goto label_142c45866
                
                *arg2 = r9
                return rax
            
            rcx = 0x76616920
        label_142c45866:
            rax = zx.q(r9)
            r9 += 1
            arg3[rax] = rcx
        else
            if (arg1 == 0x4e6b6f6f)
                uint64_t rax_3 = zx.q(r9)
                arg3[rax_3] = 0x6e6b6f20
                *arg2 = r9 + 1
                return rax_3
            
            if (arg1 != 0)
                if (arg1 == 0x48697261)
                    uint64_t rax_2 = zx.q(r9)
                    arg3[rax_2] = 0x6b616e61
                    *arg2 = r9 + 1
                    return rax_2
                
                if (arg1 != 0x4c616f6f)
                    goto label_142c45836
                
                uint64_t rax_1 = zx.q(r9)
                arg3[rax_1] = 0x6c616f20
                *arg2 = r9 + 1
                return rax_1

*arg2 = r9
return rax
