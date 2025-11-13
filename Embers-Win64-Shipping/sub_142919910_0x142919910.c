// 函数: sub_142919910
// 地址: 0x142919910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
int32_t r12 = 0

if (arg3 != 0)
    if (arg3 s>= 0 && (arg3 != 1 || arg4 s<= 0))
        int32_t temp1
        int32_t temp2
        temp1:temp2 = sx.q(arg3 + 7)
        int64_t r13 = sx.q((temp2 + (temp1 & 7)) s>> 3)
        int32_t rsi_1 = (arg3 - 1) & 0x80000007
        
        if (rsi_1 s< 0)
            rsi_1 = ((rsi_1 - 1) | 0xfffffff8) + 1
        
        char* rax_7 = sub_1428a6730(r13)
        
        if (rax_7 != 0)
            uint64_t rdx_4 = zx.q(r13.d)
            int32_t rax_8
            
            if (arg1 != 0)
                rax_8 = sub_142897c20(rax_7, rdx_4)
            else
                rax_8 = sub_142897af0(rax_7, rdx_4)
            
            if (rax_8 s> 0)
                if (arg1 == 1 && r13.d s> 0)
                    char* rbx_1 = nullptr
                    
                    do
                        char arg_18
                        
                        if (sub_142897af0(&arg_18, 1) s<= 0)
                            goto label_142919afa
                        
                        char rax_10 = arg_18
                        
                        if (rax_10 u>= 0x80 && rbx_1 s> 0)
                            *(rbx_1 + rax_7) = *(rbx_1 + rax_7 - 1)
                        else if (rax_10 u< 0x2a)
                            *(rbx_1 + rax_7) = 0
                        else if (rax_10 u< 0x54)
                            *(rbx_1 + rax_7) = 0xff
                        
                        rbx_1 = &rbx_1[1]
                    while (rbx_1 s< r13)
                
                if (arg4 s>= 0)
                    if (arg4 == 0)
                        *rax_7 |= (1 << (rsi_1 u% 0x20)).b
                    else if (rsi_1 != 0)
                        *rax_7 |= 3 << (rsi_1.b - 1)
                    else
                        rax_7[1] |= 0x80
                        *rax_7 = 1
                
                *rax_7 &= not.b((0xff << (rsi_1.b + 1)).b)
                
                if (arg5 != 0)
                    rax_7[r13 - 1] |= 1
                
                if (sub_14288fa60(rax_7, r13.d, arg2) != 0)
                    r12 = 1
        else
            sub_1428a5670((&rax_7[3]).d, (&rax_7[0x7f]).d, (&rax_7[0x41]).d, "crypto\bn\bn_rand.c", 
                0x29)
        
    label_142919afa:
        sub_1428a6890(rax_7, r13, "crypto\bn\bn_rand.c", 0x58)
        return zx.q(r12)
else if (arg4 == 0xffffffff && arg5 == 0)
    sub_142890900(arg2, 0)
    return zx.q(arg4 + 2)

sub_1428a5670(3, 0x7f, 0x76, "crypto\bn\bn_rand.c", 0x5d)
return 0
