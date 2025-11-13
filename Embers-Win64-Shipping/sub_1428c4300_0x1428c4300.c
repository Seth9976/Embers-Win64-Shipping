// 函数: sub_1428c4300
// 地址: 0x1428c4300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x88)
char* r10 = *arg2
arg4 &= 1
int64_t rdi = sx.q(arg3)
char* var_50 = r10

if (arg1 == 0 && arg4 == 0)
    *arg2 = &r10[rdi]
    return zx.q((arg1 + 1).d)

if (arg3 s> 0)
    do
        int32_t rsi_1 = r10.d
        
        if (rdi.d s>= 2 && *r10 == 0 && r10[1] == 0)
            r10 = &r10[2]
            var_50 = r10
            
            if (arg4 != 0)
                goto label_1428c45db
            
            sub_1428a5670(0xd, 0x6a, 0x9f, "crypto\asn1\tasn_dec.c", 0x3f0)
            return 0
        
        char* var_48 = r10
        int32_t rbx_1 = r10.d
        int32_t var_58
        int32_t var_54
        uint32_t count_1
        char rax_3 = sub_1428f2ef0(&var_48, &count_1, &var_58, &var_54, rdi.d)
        int32_t rax_10
        int32_t r8_3
        
        if (rax_3 s< 0)
            rax_10 = 0x45e
            r8_3 = 0x66
        label_1428c45aa:
            sub_1428a5670(0xd, 0x68, r8_3, "crypto\asn1\tasn_dec.c", rax_10)
            sub_1428a5670(0xd, 0x6a, 0x3a, "crypto\asn1\tasn_dec.c", 0x3f9)
            return 0
        
        if (arg5 s>= 0 && (arg5 != var_58 || arg6 != var_54))
            rax_10 = 0x46a
            r8_3 = 0xa8
            goto label_1428c45aa
        
        r10 = var_48
        uint32_t count
        
        if ((rax_3 & 1) == 0)
            count = count_1
        else
            count = rbx_1 - r10.d + rdi.d
            count_1 = count
        
        var_50 = r10
        
        if ((rax_3 & 0x20) != 0)
            if (arg7 s>= 5)
                sub_1428a5670(0xd, 0x6a, 0xc5, "crypto\asn1\tasn_dec.c", 0x400)
                return 0
            
            int32_t var_68_1 = arg7 + 1
            int32_t var_70_1 = arg6
            int32_t var_78_2 = arg5
            
            if (sub_1428c4300(arg1, &var_50, zx.q(count)) == 0)
                return 0
            
            r10 = var_50
        else if (count != 0)
            if (arg1 != 0)
                int64_t rbp_1 = sx.q(*arg1)
                
                if (sub_1428a73a0(arg1, sx.q(count + rbp_1.d)) == 0)
                    sub_1428a5670(0xd, 0x8c, 0x41, "crypto\asn1\tasn_dec.c", 0x417)
                    return 0
                
                memcpy(rbp_1 + *(arg1 + 8), var_50, count)
                r10 = var_50
            
            r10 = &r10[sx.q(count)]
            var_50 = r10
        
        rdi = zx.q(rdi.d + rsi_1 - r10.d)
    while (rdi.d s> 0)

if (arg4 != 0)
    sub_1428a5670(0xd, 0x6a, 0x89, "crypto\asn1\tasn_dec.c", 0x40a)
    return 0

label_1428c45db:
*arg2 = r10
return 1
