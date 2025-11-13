// 函数: sub_1428bfee0
// 地址: 0x1428bfee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t* rbx = nullptr

if (arg3 == 0 && arg4 == 0)
    void* rax_1 = *arg1
    int64_t r8 = *(rax_1 + 0x70)
    
    if (r8 == 0)
        sub_1428a5670((arg4 + 0x10).d, (arg4 + 0x7f).d, (arg4 + 0x42).d, "crypto\ec\ec_lib.c", 
            0x292)
        return 0
    
    if (rax_1 == *arg2)
        return r8()
    
    sub_1428a5670(0x10, 0x7f, 0x65, "crypto\ec\ec_lib.c", 0x296)
    return 0

int64_t r8_2 = *arg1

if (r8_2 == *arg2)
    int32_t rdx_1 = arg1[4].d
    int32_t rax_3
    
    if (rdx_1 != 0)
        rax_3 = arg2[1].d
    
    if (rdx_1 == 0 || rax_3 == 0 || rdx_1 == rax_3)
        int64_t rax_4 = 0
        int32_t var_38_1
        int32_t rcx_4
        int32_t r8_3
        
        if (arg4 == 0)
        label_1428bffd1:
            int64_t* rcx_3 = arg7
            
            if (rcx_3 != 0)
            label_1428c005b:
                int64_t r10_1 = *(*arg1 + 0xf0)
                int32_t var_38
                var_38.q = arg5
                
                if (r10_1 == 0)
                    int32_t rax_9 = sub_1429188c0(arg1, arg2, arg3, arg4, var_38, arg6, rcx_3)
                    sub_1428d8ae0(rbx)
                    return rax_9
                
                int32_t rax_8 = r10_1(arg1, arg2, arg3, arg4, var_38, arg6, rcx_3)
                sub_1428d8ae0(rbx)
                return rax_8
            
            int64_t* rax_5 = sub_1428d8dd0()
            rbx = rax_5
            rcx_3 = rax_5
            
            if (rax_5 != 0)
                goto label_1428c005b
            
            var_38_1 = 0x3a9
            rcx_4 = (&rax_5[2]).d
            r8_3 = (rax_5 + 0x44).d
        else
            while (true)
                int64_t* rcx_1 = *(arg5 + (rax_4 << 3))
                
                if (r8_2 == *rcx_1)
                    int32_t rcx_2
                    
                    if (rdx_1 != 0)
                        rcx_2 = rcx_1[1].d
                    
                    if (rdx_1 == 0 || rcx_2 == 0 || rdx_1 == rcx_2)
                        rax_4 += 1
                        
                        if (rax_4 u>= arg4)
                            goto label_1428bffd1
                        
                        continue
                
                rcx_4 = 0x10
                var_38_1 = 0x3a3
                r8_3 = 0x65
                break
        
        sub_1428a5670(rcx_4, 0x122, r8_3, "crypto\ec\ec_lib.c", var_38_1)
        return 0

sub_1428a5670(0x10, 0x122, 0x65, "crypto\ec\ec_lib.c", 0x39e)
return 0
