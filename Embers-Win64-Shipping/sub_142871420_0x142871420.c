// 函数: sub_142871420
// 地址: 0x142871420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg2 - 3 u<= 0x7e)
    switch (arg2)
        case 3
            if (arg4 != 0)
                int64_t* rax_4 = sub_142872980(arg4)
                
                if (rax_4 == 0)
                    sub_1428a5670(0x14, 0x85, 0x41, "ssl\s3_lib.c", 0xead)
                    return 0
                
                int32_t var_18
                var_18.q = rax_4
                int32_t rax_6 = sub_142854690(arg1, 0x40007, sub_142896b50(rax_4), 0, var_18)
                
                if (rax_6 != 0)
                    sub_1428965a0(*(*(arg1 + 0x130) + 8))
                    *(*(arg1 + 0x130) + 8) = rax_4
                    return 1
                
                sub_1428a5670(rax_6 + 0x14, 0x85, 0x18a, "ssl\s3_lib.c", 0xeb2)
                sub_1428965a0(rax_4)
                return 1
            
            sub_1428a5670(0x14, 0x85, 0x43, "ssl\s3_lib.c", 0xea8)
        case 4
            if (arg4 != 0)
                void* rax_13 = sub_142891590(arg4)
                
                if (rax_13 == 0)
                    sub_1428a5670((rax_13 + 0x14).d, 0x85, (rax_13 + 0x7c).d, "ssl\s3_lib.c", 0xecf)
                    return 0
                
                int32_t rax_15 = sub_140611e80(rax_13)
                int32_t arg_10 = rax_15
                
                if (rax_15 != 0)
                    return sub_142865900(arg1 + 0x250, arg1 + 0x248, &arg_10, 1)
            else
                sub_1428a5670(0x14, 0x85, 0x43, "ssl\s3_lib.c", 0xeca)
        case 6
            sub_1428a5670(0x14, 0x85, 0x42, "ssl\s3_lib.c", 0xebc)
        case 0xe
            int32_t* rax_50 = *(arg1 + 0xf8)
            
            if (rax_50 == 0)
                rax_50 = sub_142898ba0()
                *(arg1 + 0xf8) = rax_50
                
                if (rax_50 == 0)
                    sub_1428a5670(0x14, 0x85, 0x41, "ssl\s3_lib.c", 0xf60)
                    return 0
            
            if (sub_142898d50(rax_50, arg4) != 0)
                return 1
            
            sub_1428a5670(0x14, 0x85, 0x41, "ssl\s3_lib.c", 0xf65)
        case 0x36
            *(arg1 + 0x1f8) = arg4
            return 1
        case 0x3a, 0x3b
            if (arg4 == 0)
                return zx.q((&arg4[0xa]).d)
            
            if (arg3 != 0x50)
                sub_1428a5670(0x14, 0x85, 0x145, "ssl\s3_lib.c", 0xee7)
                return 0
            
            if (arg2 != 0x3b)
                *arg4 = *(arg1 + 0x200)
                int128_t* rax_23 = *(arg1 + 0x210)
                *(arg4 + 0x10) = *rax_23
                *(arg4 + 0x20) = rax_23[1]
                void* rax_24 = *(arg1 + 0x210)
                *(arg4 + 0x30) = *(rax_24 + 0x20)
                *(arg4 + 0x40) = *(rax_24 + 0x30)
                return 1
            
            int128_t* rax_20 = *(arg1 + 0x210)
            *(arg1 + 0x200) = *arg4
            *rax_20 = *(arg4 + 0x10)
            rax_20[1] = *(arg4 + 0x20)
            void* rax_21 = *(arg1 + 0x210)
            *(rax_21 + 0x20) = *(arg4 + 0x30)
            *(rax_21 + 0x30) = *(arg4 + 0x40)
            return zx.q(arg2 - 0x3a)
        case 0x40
            *(arg1 + 0x228) = arg4
            return 1
        case 0x41
            *(arg1 + 0x230) = arg3
            return 1
        case 0x4e
            *(arg1 + 0x34c) |= 0x20
            *(arg1 + 0x2d8) = arg4
            return 1
        case 0x4f
            int64_t rcx_11 = *(arg1 + 0x2f8)
            *(arg1 + 0x34c) |= 0x20
            sub_1428a6780(rcx_11)
            int32_t i_1 = 0
            *(arg1 + 0x2f8) = 0
            
            if (arg4 == 0)
                return 1
            
            char r8_4 = *arg4
            int64_t* rdx_2 = arg4
            int32_t i = 0
            
            if (r8_4 != 0)
                while (i u< 0x80000000)
                    rdx_2 += 1
                    i += 1
                    
                    if (*rdx_2 == 0)
                        break
            
            if ((i & 0x7fffffff) u<= 0xff)
                int64_t* rcx_13 = arg4
                
                if (r8_4 != 0)
                    while (i_1 u< 0x80000000)
                        rcx_13 += 1
                        i_1 += 1
                        
                        if (*rcx_13 == 0)
                            break
            
            if ((i & 0x7fffffff) u> 0xff || (i_1 & 0x7fffffff) u< 1)
                sub_1428a5670(0x14, 0x85, 0x165, "ssl\s3_lib.c", 0xf1d)
                return 0
            
            int64_t rax_34 = sub_1428a6ba0(arg4)
            *(arg1 + 0x2f8) = rax_34
            
            if (rax_34 != 0)
                return 1
            
            sub_1428a5670(0x14, 0x85, 0x44, "ssl\s3_lib.c", 0xf21)
        case 0x50
            *(arg1 + 0x348) = arg3
            return 1
        case 0x51
            int64_t rcx_15 = *(arg1 + 0x340)
            *(arg1 + 0x2f0) = sub_1428704f0
            
            if (rcx_15 != 0)
                sub_1428a6780(rcx_15)
            
            int64_t rax_37 = sub_1428a6ba0(arg4)
            *(arg1 + 0x340) = rax_37
            
            if (rax_37 != 0)
                return 1
            
            sub_1428a5670(0x14, 0x85, 0x44, "ssl\s3_lib.c", 0xf2b)
        case 0x52
            int64_t rax_53 = *(arg1 + 0xf8)
            
            if (rax_53 == 0 && arg3 == 0)
                goto label_142871abc
            
            *arg4 = rax_53
            return 1
        case 0x53
            sub_142898cb0(*(arg1 + 0xf8), sub_1428a2c50)
            *(arg1 + 0xf8) = 0
            return 1
        case 0x58
            int32_t* r8_23 = arg4
            
            if (arg3 == 0)
                return sub_142854410(nullptr, arg1, r8_23) __tailcall
            
            return sub_142854510(nullptr, arg1, r8_23) __tailcall
        case 0x59
            if (arg3 == 0)
                return sub_1428539a0(nullptr, arg1, arg4) __tailcall
            
            return sub_142853a50(nullptr, arg1, arg4) __tailcall
        case 0x5b
            return sub_142865900(arg1 + 0x250, arg1 + 0x248, arg4, sx.q(arg3)) __tailcall
        case 0x5c
            return sub_142865a40(arg1 + 0x250, arg1 + 0x248, arg4) __tailcall
        case 0x61
            return sub_1428661c0(*(arg1 + 0x130), arg4, sx.q(arg3), 0) __tailcall
        case 0x62
            return sub_142866330(*(arg1 + 0x130), arg4, 0) __tailcall
        case 0x65
            return sub_1428661c0(*(arg1 + 0x130), arg4, sx.q(arg3), 1) __tailcall
        case 0x66
            return sub_142866330(*(arg1 + 0x130), arg4, 1) __tailcall
        case 0x68
            return sub_142872520(*(arg1 + 0x130), arg4, sx.q(arg3)) __tailcall
        case 0x69
            return sub_142853660(nullptr, arg1, arg3.b) __tailcall
        case 0x6a
            return sub_1428545a0(*(arg1 + 0x130), arg4, 0, arg3) __tailcall
        case 0x6b
            return sub_1428545a0(*(arg1 + 0x130), arg4, 1, arg3) __tailcall
        case 0x73
        label_142871abc:
            *arg4 = *(**(arg1 + 0x130) + 0x10)
            return 1
        case 0x74
            return sub_142854360(*(arg1 + 0x130), arg4) __tailcall
        case 0x75
            return sub_142854610(*(arg1 + 0x130), arg3) __tailcall
        case 0x76
            *(*(arg1 + 0x130) + 0x18) = arg3
            return 1
        case 0x7f
            return zx.q(*(arg1 + 0x230))
        case 0x80
            *arg4 = *(arg1 + 0x220)
            return 1
        case 0x81
            *arg4 = *(arg1 + 0x228)
            return 1

return 0
