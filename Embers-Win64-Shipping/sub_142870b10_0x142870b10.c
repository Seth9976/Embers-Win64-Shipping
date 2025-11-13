// 函数: sub_142870b10
// 地址: 0x142870b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
uint64_t rbp = 0
int64_t r14 = sx.q(arg3)
int32_t rdi = 0
int32_t var_28_1

if (arg2 - 3 u<= 0x7c)
    switch (arg2)
        case 3
            if (arg4 == 0)
                var_28_1 = 0xd58
            label_142870bb9:
                sub_1428a5670(0x14, 0xd5, 0x43, "ssl\s3_lib.c", var_28_1)
                return 0
            
            int64_t* rax_7 = sub_142872980(arg4)
            
            if (rax_7 == 0)
                sub_1428a5670((rax_7 + 0x14).d, 0xd5, (rax_7 + 0x41).d, "ssl\s3_lib.c", 0xd5d)
                return 0
            
            int32_t var_28
            var_28.q = rax_7
            int32_t rax_10 = sub_1428546e0(arg1, 0x40007, sub_142896b50(rax_7), 0, var_28)
            
            if (rax_10 == 0)
                sub_1428a5670(rax_10 + 0x14, 0xd5, 0x18a, "ssl\s3_lib.c", 0xd62)
                sub_1428965a0(rax_7)
                return 0
            
            sub_1428965a0(*(*(arg1 + 0x488) + 8))
            *(*(arg1 + 0x488) + 8) = rax_7
            rdi = 1
        case 4
            if (arg4 == 0)
                var_28_1 = 0xd7b
                goto label_142870bb9
            
            void* rax_13 = sub_142891590(arg4)
            
            if (rax_13 == 0)
                sub_1428a5670(0x14, 0xd5, (rax_13 + 0x7c).d, "ssl\s3_lib.c", 0xd80)
                return 0
            
            int32_t rax_14 = sub_140611e80(rax_13)
            int32_t arg_10 = rax_14
            
            if (rax_14 != 0)
                return sub_142865900(arg1 + 0x690, arg1 + 0x688, &arg_10, 1)
            
            return 0
        case 6
            sub_1428a5670(0x14, 0xd5, 0x42, "ssl\s3_lib.c", 0xd6d)
            return 0
        case 0xa
            rdi = *(*(arg1 + 0xa8) + 0x10c)
        case 0xb
            void* rax_4 = *(arg1 + 0xa8)
            rdi = *(rax_4 + 0x10c)
            *(rax_4 + 0x10c) = 0
        case 0xc
            rdi = *(*(arg1 + 0xa8) + 0x108)
        case 0xd
            rdi = **(arg1 + 0xa8)
        case 0x37
            if (arg3 != 0)
                sub_1428a5670(0x14, 0xd5, 0x140, "ssl\s3_lib.c", 0xda9)
                return 0
            
            sub_1428a6780(*(arg1 + 0x630))
            *(arg1 + 0x630) = 0
            rdi = 1
            
            if (arg4 != 0)
                int64_t* rax_15 = arg4
                
                if (*arg4 != 0)
                    while (rbp.d u< 0x80000000)
                        rax_15 += 1
                        rbp = zx.q(rbp.d + 1)
                        
                        if (*rax_15 == 0)
                            break
                
                if ((zx.q(rbp.d) & 0x7fffffff) - 1 u> 0xfe)
                    sub_1428a5670(0x14, 0xd5, 0x13f, "ssl\s3_lib.c", 0xda1)
                    return 0
                
                int64_t rax_19 = sub_1428a6ba0(arg4)
                *(arg1 + 0x630) = rax_19
                
                if (rax_19 == 0)
                    sub_1428a5670(0x14, 0xd5, (rax_19 + 0x44).d, "ssl\s3_lib.c", 0xda5)
                    return 0
        case 0x39
            *(arg1 + 0x628) = arg4
            rdi = 1
        case 0x41
            *(arg1 + 0x638) = r14.d
            rdi = 1
        case 0x42
            *arg4 = *(arg1 + 0x658)
            rdi = 1
        case 0x43
            *(arg1 + 0x658) = arg4
            rdi = 1
        case 0x44
            *arg4 = *(arg1 + 0x650)
            rdi = 1
        case 0x45
            *(arg1 + 0x650) = arg4
            rdi = 1
        case 0x46
            *arg4 = *(arg1 + 0x660)
            int64_t rdx_6 = *(arg1 + 0x668)
            
            if (rdx_6 - 1 u<= 0x7ffffffe)
                return zx.q(rdx_6.d)
            
            return 0xffffffff
        case 0x47
            sub_1428a6780(*(arg1 + 0x660))
            *(arg1 + 0x660) = arg4
            *(arg1 + 0x668) = r14
            rdi = 1
        case 0x58
            if (arg3 == 0)
                return sub_142854410(arg1, nullptr, arg4)
            
            return sub_142854510(arg1, nullptr, arg4)
        case 0x59
            if (arg3 == 0)
                return sub_1428539a0(arg1, nullptr, arg4)
            
            return sub_142853a50(arg1, nullptr, arg4)
        case 0x5a
            void* rbx_1 = *(arg1 + 0x508)
            
            if (rbx_1 == 0)
                return 0
            
            int64_t rdi_2 = *(rbx_1 + 0x178)
            int64_t rbx_2 = *(rbx_1 + 0x170)
            
            if (arg4 != 0 && rbx_2 != 0)
                do
                    void* rax_26 = sub_1428654a0(*(rdi_2 + (rbp << 1)))
                    int32_t rax_27
                    
                    if (rax_26 == 0)
                        rax_27 = zx.d(*(rdi_2 + (rbp << 1))) | 0x1000000
                    else
                        rax_27 = *rax_26
                    
                    *(arg4 + (rbp << 2)) = rax_27
                    rbp += 1
                while (rbp u< rbx_2)
            
            return zx.q(rbx_2.d)
        case 0x5b
            return sub_142865900(arg1 + 0x690, arg1 + 0x688, arg4, r14)
        case 0x5c
            return sub_142865a40(arg1 + 0x690, arg1 + 0x688, arg4)
        case 0x5d
            int16_t rax_29 = sub_1428664a0(arg1, r14.d)
            
            if (r14.d == 0xffffffff)
                return zx.q(rax_29)
            
            void* rax_30 = sub_1428654a0(rax_29)
            
            if (rax_30 != 0)
                rbp = zx.q(*rax_30)
            
            return zx.q(rbp.d)
        case 0x61
            return sub_1428661c0(*(arg1 + 0x488), arg4, r14, 0)
        case 0x62
            return sub_142866330(*(arg1 + 0x488), arg4, 0)
        case 0x65
            return sub_1428661c0(*(arg1 + 0x488), arg4, r14, 1)
        case 0x66
            return sub_142866330(*(arg1 + 0x488), arg4, 1)
        case 0x67
            if (*(arg1 + 0x38) == 0)
                void* rax_31 = *(arg1 + 0xa8)
                
                if (*(rax_31 + 0x248) != 0)
                    if (arg4 != 0)
                        *arg4 = *(rax_31 + 0x250)
                        rax_31 = *(arg1 + 0xa8)
                    
                    return zx.q(*(rax_31 + 0x258))
            
            return 0
        case 0x68
            if (*(arg1 + 0x38) != 0)
                return sub_142872520(*(arg1 + 0x488), arg4, r14)
            
            return 0
        case 0x69
            return sub_142853660(arg1, nullptr, r14.b)
        case 0x6a
            return sub_1428545a0(*(arg1 + 0x488), arg4, 0, r14.d)
        case 0x6b
            return sub_1428545a0(*(arg1 + 0x488), arg4, 1, r14.d)
        case 0x6c
            void* rcx_35 = *(*(arg1 + 0xa8) + 0x308)
            
            if (rcx_35 == 0)
                return 0
            
            *arg4 = *(rcx_35 + 0xc)
            return 1
        case 0x6d
            if (*(arg1 + 0x38) != 0 || *(arg1 + 0x508) == 0)
                return 0
            
            void* rcx_36 = *(*(arg1 + 0xa8) + 0x408)
            
            if (rcx_36 == 0)
                return 0
            
            sub_142896e70(rcx_36)
            *arg4 = *(*(arg1 + 0xa8) + 0x408)
            return 1
        case 0x6f
            void* rax_37 = *(arg1 + 0x508)
            
            if (rax_37 != 0)
                int64_t rcx_38 = *(rax_37 + 0x168)
                
                if (rcx_38 != 0)
                    *arg4 = rcx_38
                    return zx.q(*(rax_37 + 0x160))
            
            return 0
        case 0x73
            *arg4 = *(**(arg1 + 0x488) + 0x10)
        case 0x74
            return sub_142854360(*(arg1 + 0x488), arg4)
        case 0x75
            if (r14.d != 3)
                return sub_142854610(*(arg1 + 0x488), r14.d)
            
            if (*(arg1 + 0x38) != 0)
                void* rax_24 = *(arg1 + 0xa8)
                void* rcx_19 = *(rax_24 + 0x238)
                
                if (rcx_19 != 0)
                    if ((*(rcx_19 + 0x20) & 0x44) != 0)
                        return zx.q((r14 - 1).d)
                    
                    int64_t rcx_20 = *(rax_24 + 0x2e0)
                    
                    if (rcx_20 != 0)
                        **(arg1 + 0x488) = rcx_20
                        return 1
            
            return 0
        case 0x76
            *(*(arg1 + 0x488) + 0x18) = r14.d
            return 1
        case 0x7f
            rdi = *(arg1 + 0x638)
return zx.q(rdi)
