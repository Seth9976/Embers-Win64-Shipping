// 函数: sub_142856e10
// 地址: 0x142856e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int64_t rdi = *(arg1 + 0x568)

if (rdi == 0)
    rdi = *(*(arg1 + 0x598) + 0x108)

int32_t rax_2 = arg1[0xe]
int64_t (* r15)(void* arg1, int64_t arg2, int64_t (** arg3)(void* arg1, int64_t* arg2), 
    int32_t* arg4) = sub_142867c90
int64_t (* rbp)(int32_t* arg1) = sub_142868090

if (rax_2 == 0)
    r15 = sub_142878240

int64_t (* r14)(void* arg1, int64_t arg2) = sub_142868430

if (rax_2 == 0)
    rbp = sub_142878550

int64_t (* rsi)(int32_t* arg1) = sub_142868dc0

if (rax_2 == 0)
    r14 = sub_1428788e0

if (rax_2 == 0)
    rsi = sub_142879550

while (true)
    int32_t rcx = arg1[0x13]
    int32_t var_68_1
    
    if (rcx == 0)
        if (rdi != 0)
            int64_t rdx_9 = 0x2001
            
            if (arg1[0xe] == 0)
                rdx_9 = 0x1001
            
            rdi(arg1, rdx_9, 1)
        
        int32_t rax_20 = rsi(arg1)
        
        if (rax_20 == 0)
            if (arg1[0x19] != 0 && arg1[0x12] == 1)
                break
            
            var_68_1 = 0x321
        else if (rax_20 == 1)
            arg1[0x13] = 1
            arg1[0x14] = 3
            continue
        else
            if (rax_20 == 2)
                return zx.q(rax_20 - 1)
            
            continue
        
        goto label_142857196
    
    int32_t r8_1
    
    if (rcx == 1)
        int32_t rax_3 = r14(arg1, zx.q(arg1[0x14]))
        arg1[0x14] = rax_3
        
        if (rax_3 == 0)
            if (arg1[0x19] != 0 && arg1[0x12] == 1)
                break
            
            var_68_1 = 0x329
        label_142857196:
            r8_1 = 0x100
        else
            if (rax_3 == 1)
                return 2
            
            if (rax_3 == 2)
                arg1[0x13] = 2
            else if (rax_3 - 3 u<= 2)
                break
            
            void var_58
            int32_t arg_8
            int64_t arg_10
            
            if (r15(arg1, &var_58, &arg_10, &arg_8) == 0)
                break
            
            if (arg_8 != 0xffffffff)
                int32_t rax_6 = sub_142873870(&var_58, *(arg1 + 0x88))
                int32_t rax_8
                
                if (rax_6 != 0)
                    int64_t r9_2 = *(*(arg1 + 8) + 0xc0)
                    rax_8 = (*(r9_2 + 0x68))(arg1, &var_58, zx.q(arg_8), r9_2)
                
                if (rax_6 == 0 || rax_8 == 0)
                    sub_142873690(&var_58)
                    r8_1 = 0x44
                    var_68_1 = 0x345
                else
                    int64_t rax_9 = arg_10
                    int32_t rax_10
                    
                    if (rax_9 != 0)
                        rax_10 = rax_9(arg1, &var_58)
                    
                    if (rax_9 != 0 && rax_10 == 0)
                        sub_142873690(&var_58)
                        
                        if (arg1[0x19] != 0 && arg1[0x12] == 1)
                            break
                        
                        var_68_1 = 0x34a
                        goto label_142857196
                    
                    int64_t r9_3 = *(*(arg1 + 8) + 0xc0)
                    int32_t rax_12 = (*(r9_3 + 0x70))(arg1, &var_58, zx.q(arg_8), r9_3)
                    int32_t rax_13
                    
                    if (rax_12 != 0)
                        rax_13 = sub_142873790(&var_58)
                    
                    if (rax_12 != 0 && rax_13 != 0)
                        goto label_142856ff9
                    
                    sub_142873690(&var_58)
                    r8_1 = 0x44
                    var_68_1 = 0x351
            else
                arg1[0x13] = 3
                arg1[0x14] = 3
                continue
                continue
    else
        if (rcx == 2)
        label_142856ff9:
            
            if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0 && arg1[0x1e] != 0)
                sub_142870200(arg1)
            
            int32_t rax_15 = arg1[0x17]
            int32_t rax_17
            
            if (rax_15 != 0x10 && rax_15 != 0x23)
                int64_t rdx_7 = *(*(arg1 + 8) + 0xc0)
                rax_17 = (*(rdx_7 + 0x78))(arg1, rdx_7)
            else if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
                rax_17, arg2 = sub_14285e590(arg1, 0x14, arg2)
            else
                rax_17 = sub_142876640(arg1, 0x14)
            
            if (rax_17 s<= 0)
                break
            
            arg1[0x13] = 3
            arg1[0x14] = 3
            goto label_142857064
        
        if (rcx == 3)
        label_142857064:
            int32_t rax_19 = rbp(arg1, zx.q(arg1[0x14]))
            arg1[0x14] = rax_19
            
            if (rax_19 == 0)
                if (arg1[0x19] != 0 && arg1[0x12] == 1)
                    break
                
                var_68_1 = 0x366
                goto label_142857196
            
            if (rax_19 != 1)
                if (rax_19 == 2)
                    arg1[0x13] = 0
                    continue
                else if (rax_19 s<= 2)
                    continue
                else
                    if (rax_19 s<= 5)
                        break
                    
                    continue
            
            return 2
        
        var_68_1 = 0x378
        r8_1 = 0x44
    
    arg1[0x19] = 1
    arg1[0x12] = 1
    sub_1428a5670(0x14, 0x24a, r8_1, "ssl\statem\statem.c", var_68_1)
    
    if (arg1[0x1f] != 1)
        sub_1428732d0(arg1, 2, 0x50)
    
    break

return 0
