// 函数: sub_142b30920
// 地址: 0x142b30920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int16_t rcx = *(arg2 + 8)
int64_t r13
r13.b = 0
int32_t r14 = 0
int32_t rax_1

if (rcx s< 0)
    rax_1 = *(arg2 + 0xc)
else
    rax_1 = sx.d(rcx) s>> 5

int16_t rax_2

if (rax_1 u<= 1)
    rax_2 = -1
else if ((rcx.b & 2) == 0)
    rax_2 = *(*(arg2 + 0x18) + 2)
else
    rax_2 = *(arg2 + 0xc)

if (zx.d(rax_2) - 0x2800 u> 0xd)
    abort()
    noreturn

int64_t result

switch (rax_2)
    case 0x2800, 0x2801
        return 0
    case 0x2802
        int32_t rax_4
        
        if (*arg4 s<= 0)
            rax_4 = sub_142b30740(arg1, 
                sub_142b30740(arg1, sub_142b305b0(arg1, 0, arg4), 0, 1, arg4), 0, 2, arg4)
        else
            rax_4 = 0
        
        if (*arg4 s> 0)
            return 0
        
        int32_t r8_1
        
        if (rax_4 s< 0 || rax_4 s>= *(arg1 + 0x250))
            r8_1 = 0
        else
            r8_1 = (*(*(arg1 + 0x260) + (sx.q(rax_4) << 3))).d
        
        uint64_t r8_3 = zx.q(r8_1 s>> 8) & 0xfffff
        
        if (r8_3.d != 0)
            if (r8_3.d s< *(arg1 + 0x250))
                rsi = (*(*(arg1 + 0x260) + (r8_3 << 3))).d
            
            if ((rsi.b u>> 3 & 1) != 0)
                rsi.b &= 3
                
                if (rsi.b == 2)
                    return 0x4040000006002200
                        + (((zx.q(r8_3.d) & 0x1fc0) + ((zx.q(r8_3.d) & 0xfe000) << 1)) << 0x2a)
                        + zx.q((r8_3.d & 0x3f) << 0x18)
        
        int32_t* rcx_10 = *(arg1 + 0x30)
        return zx.q(rcx_10[zx.q(*rcx_10)]) & 0xffffff7f
    case 0x2803
        void* rcx_11 = *(arg1 + 0x30)
        r14 = 2
        result = zx.q(*(rcx_11 + (zx.q(*(rcx_11 + 4) - 1) << 2))) & 0xffffff7f
    label_142b30ca3:
        int32_t rax_39 = sub_142b306b0(arg1, result, r14, arg4)
        int64_t r8_13 = sx.q(rax_39)
        
        if (*arg4 s> 0)
            return 0
        
        int32_t r9_2
        
        if (rax_39 s< 0 || r8_13.d s>= *(arg1 + 0x250))
            r9_2 = 0
        else
            r9_2 = (*(*(arg1 + 0x260) + (r8_13 << 3))).d
        
        if (((zx.d(rax_2) - 0x2800).b & 1) != 0)
            uint64_t rdx_25 = zx.q(r9_2 s>> 8) & 0xfffff
            
            while (rdx_25.d != 0)
                int32_t r10_1
                
                if (rdx_25.d s>= *(arg1 + 0x250))
                    r10_1 = 0
                else
                    r10_1 = (*(*(arg1 + 0x260) + (rdx_25 << 3))).d
                
                if ((r10_1 & 3) u< r14)
                    break
                
                r8_13 = zx.q(rdx_25.d)
                r9_2 = r10_1
                rdx_25 = zx.q(r10_1 s>> 8) & 0xfffff
            
            r9_2.b u>>= 3
            
            if ((r9_2.b & 1) == 0)
                return result
        else
            if ((r9_2.b & 0x60) == 0)
                if (r13.b != 0)
                    r8_13 = zx.q(r9_2 s>> 8) & 0xfffff
                    
                    if (r8_13.d == 0)
                        int32_t rbp_10 = (result s>> 0x20).d
                        result = zx.q(sub_142b79200(arg1 + 0x30, rbp_10, 
                            j_sub_142b790c0(arg1 + 0x30, rbp_10), 
                            *((zx.q(rbp_10) u>> 0x18) + *(*(arg1 + 0x28) + 0x48)))) << 0x20 | 0x5000500
                        
                        if (*arg4 s<= 0)
                            r8_13 = zx.q(sub_142b305b0(arg1, (result s>> 0x20).d, arg4))
                        else
                            r8_13 = 0
                        
                        if (*arg4 s> 0)
                            return 0
                        
                        if (r8_13.d s< 0 || r8_13.d s>= *(arg1 + 0x250))
                            r9_2 = 0
                        else
                            r9_2 = (*(*(arg1 + 0x260) + (sx.q(r8_13.d) << 3))).d
                    else
                        if (r8_13.d s>= *(arg1 + 0x250))
                            r9_2 = 0
                        else
                            r9_2 = (*(*(arg1 + 0x260) + (r8_13 << 3))).d
                        
                        result = (((zx.q(r8_13.d) & 0x1fc0) + ((zx.q(r8_13.d) & 0xfe000) << 1))
                            << 0x2a) + zx.q((r8_13.d & 0x3f) << 0x18) + 0x4040000006002000
                            + zx.q(r14 << 8)
                
                if ((r9_2.b & 0x60) == 0)
                    return result
            
            if ((r9_2.b u>> 6 & 1) != 0)
                uint64_t r9_7 = zx.q(r9_2 s>> 8) & 0xfffff
                int32_t r8_19
                
                if (r9_7.d s>= *(arg1 + 0x250))
                    r8_19 = 0
                else
                    r8_19 = (*(*(arg1 + 0x260) + (r9_7 << 3))).d
                
                r8_13 = zx.q(r8_19 s>> 8) & 0xfffff
                
                if (r8_13.d s>= *(arg1 + 0x250))
                    r9_2 = 0
                else
                    r9_2 = (*(*(arg1 + 0x260) + (r8_13 << 3))).d
            
            if ((r9_2.b u>> 5 & 1) != 0)
                uint64_t r9_9 = zx.q(r9_2 s>> 8) & 0xfffff
                
                if (r9_9.d s< *(arg1 + 0x250))
                    rsi = (*(*(arg1 + 0x260) + (r9_9 << 3))).d
                
                r8_13 = zx.q(rsi s>> 8) & 0xfffff
        
        int32_t rcx_36 = r8_13.d
        return (((zx.q(rcx_36) & 0x1fc0) + ((zx.q(rcx_36) & 0xfe000) << 1)) << 0x2a)
            + zx.q((r8_13.d & 0x3f) << 0x18) + 0x4040000006002000 + zx.q(r14 << 8)
    case 0x2804
        r14 = 1
        int32_t rax_18
        
        if (*arg4 s<= 0)
            rax_18 = sub_142b30740(arg1, sub_142b305b0(arg1, 0, arg4), 0, 1, arg4)
        else
            rax_18 = 0
        
        if (*arg4 s> 0)
            return 0
        
        int32_t r8_7
        
        if (rax_18 s< 0 || rax_18 s>= *(arg1 + 0x250))
            r8_7 = 0
        else
            r8_7 = (*(*(arg1 + 0x260) + (sx.q(rax_18) << 3))).d
        
        int32_t i_1 = r8_7 s>> 8 & 0xfffff
        
        if (i_1 != 0)
            int32_t r9 = *(arg1 + 0x250)
            int32_t i
            
            do
                int32_t rdx_6
                
                if (i_1 s>= r9)
                    rdx_6 = 0
                else
                    rdx_6 = (*(*(arg1 + 0x260) + (zx.q(i_1) << 3))).d
                
                int32_t rax_23 = rdx_6 & 3
                
                if (rax_23 u< 1)
                    break
                
                if (rax_23 == 1)
                    if ((1 & rdx_6.b u>> 3) == 0)
                        break
                    
                    if ((1 & rdx_6.b u>> 5) != 0)
                        uint64_t rdx_9 = zx.q(rdx_6 s>> 8) & 0xfffff
                        
                        if (rdx_9.d s< r9)
                            rsi = (*(*(arg1 + 0x260) + (rdx_9 << 3))).d
                        
                        i_1 = rsi s>> 8 & 0xfffff
                    
                    return 0x4040000006002100
                        + (((zx.q(i_1) & 0x1fc0) + ((zx.q(i_1) & 0xfe000) << 1)) << 0x2a)
                        + zx.q((i_1 & 0x3f) << 0x18)
                
                i = rdx_6 s>> 8 & 0xfffff
                i_1 = i
            while (i != 0)
        
        void* rcx_16 = *(arg1 + 0x30)
        result = zx.q(*(rcx_16 + (zx.q(*(rcx_16 + 4)) << 2))) & 0xffffff7f
        goto label_142b30ca3
    case 0x2805
        void* rcx_20 = *(arg1 + 0x30)
        r14 = 1
        result = zx.q(*(rcx_20 + (zx.q(*(rcx_20 + 8) - 1) << 2))) & 0xffffff7f
        goto label_142b30ca3
    case 0x2806
        void* rcx_21 = *(arg1 + 0x30)
        result = zx.q(*(rcx_21 + (zx.q(*(rcx_21 + 8)) << 2))) << 0x20 | 0x5000500
    label_142b30c94:
        r13.b = 1
        goto label_142b30ca3
    case 0x2807
        result = sub_142b79590(arg1 + 0x30, *(arg1 + 0x40) + 1)
        goto label_142b30ca3
    case 0x2808
        result = sub_142b79190(arg1 + 0x30, *(arg1 + 0x40) + 1)
        goto label_142b30c94
    case 0x2809
        result = sub_142b79190(arg1 + 0x30, sub_142aa6110(*(arg1 + 0x28), 0x11))
        goto label_142b30ca3
    case 0x280a
        result = sub_142aa62e0(*(arg1 + 0x28), 0x4e00, arg4)
        goto label_142b30ca3
    case 0x280b
        *arg4 = 0x10
        *arg3 = "reset to [last implicit] not supported"
        return 0
    case 0x280c
        result = -0xfdfdfffafffb00
        goto label_142b30c94
    case 0x280d
        *arg4 = 1
        *arg3 = "LDML forbids tailoring to U+FFFF"
        return 0
