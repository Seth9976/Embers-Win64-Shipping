// 函数: sub_1428f6cb0
// 地址: 0x1428f6cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x78)
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char* rdi = arg1
int32_t result_1 = 0
int64_t r14 = sx.q(arg2)
char* rdx = arg1
int16_t var_74 = arg4
int32_t var_6c = arg3
void* rax_2 = &arg1[r14]
int32_t var_70 = r14.d
int32_t rcx_1 = arg3 & 7
int32_t var_68 = rcx_1
uint64_t result

if (rcx_1 != 2)
    if (rcx_1 != 4 || (r14.b & 3) == 0)
        goto label_1428f6d99
    
    sub_1428a5670(0xd, 0x8e, 0x85, "crypto\asn1\a_strex.c", 0x9b)
    result = 0xffffffff
else if ((r14.b & 1) == 0)
label_1428f6d99:
    
    if (rdx == rax_2)
    label_1428f6f21:
        result = zx.q(result_1)
    else
        while (true)
            int16_t rbx_1 = arg4 & 1
            int16_t rsi_1
            
            if (rdi != rdx || rbx_1 == 0)
                rsi_1 = 0
            else
                rsi_1 = 0x20
            
            uint32_t rcx_8
            uint32_t var_78
            
            if (rcx_1 == 0)
                int32_t rax_10 = sub_1429342f0(rdi, r14.d, &var_78)
                
                if (rax_10 s< 0)
                label_1428f6f1a:
                    result = 0xffffffff
                    break
                    break
                
                rcx_8 = var_78
                r14 = zx.q(r14.d - rax_10)
                arg4 = var_74
                arg3 = var_6c
                rdi = &rdi[sx.q(rax_10)]
                var_70 = r14.d
            else if (rcx_1 == 1)
                rcx_8 = zx.d(*rdi)
                rdi = &rdi[1]
                var_78 = rcx_8
            else if (rcx_1 == 2)
                uint32_t rax_9 = zx.d(*rdi) << 8
                var_78 = rax_9
                rcx_8 = zx.d(rdi[1]) | rax_9
                var_78 = rcx_8
                rdi = &rdi[2]
            else
                if (rcx_1 != 4)
                    goto label_1428f6f1a
                
                uint32_t rax_4 = zx.d(*rdi) << 0x18
                var_78 = rax_4
                uint32_t rcx_6 = zx.d(rdi[1]) << 0x10 | rax_4
                var_78 = rcx_6
                uint32_t rax_7 = zx.d(rdi[2]) << 8 | rcx_6
                var_78 = rax_7
                rcx_8 = zx.d(rdi[3]) | rax_7
                var_78 = rcx_8
                rdi = &rdi[4]
            
            if (rdi == rax_2 && rbx_1 != 0)
                rsi_1 = 0x40
            
            int32_t var_88
            
            if ((arg3.b & 8) == 0)
                var_88.q = arg7
                int32_t rax_14 = sub_1428f6f50(rcx_8, rsi_1 | arg4, arg5, arg6, var_88)
                
                if (rax_14 s< 0)
                    goto label_1428f6f1a
                
                result_1 += rax_14
            else
                int64_t i = 0
                char var_50[0x8]
                int32_t rax_12 = sub_142934620(&var_50, 6, rcx_8)
                
                if (rax_12 s> 0)
                    do
                        var_88.q = arg7
                        int32_t rax_13 =
                            sub_1428f6f50(zx.d(var_50[i]), rsi_1 | var_74, arg5, arg6, var_88)
                        
                        if (rax_13 s< 0)
                            goto label_1428f6f1a
                        
                        result_1 += rax_13
                        i += 1
                    while (i s< sx.q(rax_12))
                
                r14 = zx.q(var_70)
            
            if (rdi == rax_2)
                goto label_1428f6f21
            
            rcx_1 = var_68
            arg4 = var_74
            rdx = arg1
            arg3 = var_6c
else
    sub_1428a5670(0xd, 0x8e, 0x81, "crypto\asn1\a_strex.c", 0xa1)
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_a8)
return result
