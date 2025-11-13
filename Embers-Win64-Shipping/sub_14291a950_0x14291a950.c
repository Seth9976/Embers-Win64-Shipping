// 函数: sub_14291a950
// 地址: 0x14291a950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
__chkstk(0x88)
int64_t rax = sx.q(arg3[1].d)
int32_t var_84 = 0
int64_t* r13 = arg1
int32_t rbp = 0
int64_t rax_2

if (rax.d s<= 0 || *(*arg3 + (rax << 3) - 8) != 0)
    rax_2 = sx.q(arg4[1].d)

if ((rax.d s<= 0 || *(*arg3 + (rax << 3) - 8) != 0)
        && (rax_2.d s<= 0 || *(*arg4 + (rax_2 << 3) - 8) != 0))
    int32_t rax_5 = sub_142890210(arg3, 4)
    int32_t rax_6
    
    if (rax_5 == 0)
        rax_6 = sub_142890210(arg4, rax_5 + 4)
    
    if (rax_5 != 0 || rax_6 != 0)
        rbp = 1
        var_84 = 1
    
    if (sub_142890300(arg4) != 0)
        sub_1428a5670(3, 0x6b, 0x67, "crypto\bn\bn_div.c", 0xb0)
        return 0
    
    int32_t rax_9
    
    if (rbp == 0)
        rax_9 = sub_1428909a0(arg3, arg4)
    
    if (rbp != 0 || rax_9 s>= 0)
        sub_1428d8e50(arg5)
        
        if (r13 == 0)
            int64_t* rax_12 = sub_1428d8ba0(arg5)
            r13 = rax_12
            arg_8 = rax_12
        
        int64_t* rax_13 = sub_1428d8ba0(arg5)
        int64_t* rax_14 = sub_1428d8ba0(arg5)
        int64_t* r15 = rax_14
        int64_t* rax_15 = sub_1428d8ba0(arg5)
        
        if (rax_15 != 0)
            int32_t rax_17 = sub_142890560(arg4) & 0x8000003f
            
            if (rax_17 s< 0)
                rax_17 = ((rax_17 - 1) | 0xffffffc0) + 1
            
            if (sub_1428f5510(rax_15, arg4, 0x40 - rax_17) != 0)
                rax_15[2].d = 0
                
                if (sub_1428f5510(r15, arg3, 0x40 * 2 - rax_17) != 0)
                    r15[2].d = 0
                    
                    if (rbp == 0)
                        goto label_14291abf7
                    
                    int32_t rcx_16 = rax_15[1].d
                    int32_t rdx_5 = r15[1].d
                    
                    if (rdx_5 s> rcx_16 + 1)
                        if (sub_142890e60(r15, rdx_5 + 1) != 0)
                            *(*r15 + (sx.q(r15[1].d) << 3)) = 0
                            r15[1].d += 1
                        label_14291abf7:
                            int64_t rdx_9 = sx.q(rax_15[1].d)
                            int64_t r8_3 = sx.q(r15[1].d)
                            int32_t var_58_1 = 0
                            int32_t rdi_2 = r8_3.d - rdx_9.d
                            int32_t var_60_1 = rdx_9.d
                            int32_t var_54_1 = 2
                            int64_t rcx_21 = sx.q(rdi_2)
                            int32_t var_88_1 = rdx_9.d
                            int64_t* var_68 = *r15 + (rcx_21 << 3)
                            int32_t var_5c_1 = *(r15 + 0xc) - rdi_2
                            int64_t r14_1 = *rax_15
                            int64_t rbp_1 = *(r14_1 + (rdx_9 << 3) - 8)
                            int64_t r14_2
                            
                            if (rdx_9.d != 1)
                                r14_2 = *(r14_1 + (rdx_9 << 3) - 0x10)
                            else
                                r14_2 = 0
                            
                            int64_t* rsi_3 = *r15 + ((r8_3 - 1) << 3)
                            
                            if (sub_142890e60(r13, rdi_2 + 1) != 0)
                                r13[2].d = arg4[2].d ^ arg3[2].d
                                r13[1].d = rdi_2 - var_84
                                int64_t* r13_1 = *r13 + ((rcx_21 - 1) << 3)
                                
                                if (sub_142890e60(rax_13, var_88_1 + 1) != 0)
                                    int64_t* rbx_2
                                    
                                    if (var_84 != 0)
                                        rbx_2 = arg_8
                                    else if (sub_1428909a0(&var_68, rax_15) s< 0)
                                        rbx_2 = arg_8
                                        rbx_2[1].d -= 1
                                    else
                                        int64_t* rcx_30 = var_68
                                        sub_142921500(rcx_30, rcx_30, *rax_15, var_88_1)
                                        *r13_1 = 1
                                        rbx_2 = arg_8
                                    
                                    void* r13_2 = &r13_1[1]
                                    
                                    if (rbx_2[1].d != 0)
                                        r13_2 = r13_1
                                    else
                                        rbx_2[2].d = 0
                                    
                                    if (rdi_2 - 1 s> 0)
                                        int32_t rbx_3 = var_88_1
                                        uint64_t i_1 = zx.q(rdi_2 - 1)
                                        uint64_t i
                                        
                                        do
                                            int64_t rcx_31 = *rsi_3
                                            uint64_t rdi_4
                                            
                                            if (rcx_31 != rbp_1)
                                                int64_t rbx_4 = rsi_3[-1]
                                                uint64_t rax_45 =
                                                    sub_14291cec0(rcx_31, rbx_4, rbp_1)
                                                uint64_t r9_1 = zx.q(rax_45.d)
                                                rdi_4 = rax_45
                                                int64_t rbx_5 = rbx_4 - rax_45 * rbp_1
                                                uint64_t rcx_35 = rax_45 u>> 0x20
                                                uint64_t rdx_16 = r14_2 u>> 0x20
                                                int64_t rdx_17 = rdx_16 * rcx_35
                                                int64_t rax_47 = rdx_16 * r9_1
                                                int64_t rcx_36 = 0x100000000 + rdx_17
                                                int64_t r8_8 = zx.q(r14_2.d) * rcx_35 + rax_47
                                                
                                                if (r8_8 u>= rax_47)
                                                    rcx_36 = rdx_17
                                                
                                                int64_t rcx_37 = rcx_36 + (r8_8 u>> 0x20)
                                                int64_t r8_9 = r8_8 << 0x20
                                                int64_t rdx_18 = rcx_37 + 1
                                                int64_t r10_3 = zx.q(r14_2.d) * r9_1 + r8_9
                                                
                                                if (r10_3 u>= r8_9)
                                                    rdx_18 = rcx_37
                                                
                                                if (rdx_18 u>= rbx_5)
                                                    while (rdx_18 != rbx_5 || r10_3 u> rsi_3[-2])
                                                        rdi_4 -= 1
                                                        rbx_5 += rbp_1
                                                        
                                                        if (rbx_5 u< rbp_1)
                                                            break
                                                        
                                                        int64_t rax_50 = rdx_18 - 1
                                                        
                                                        if (r10_3 u>= r14_2)
                                                            rax_50 = rdx_18
                                                        
                                                        r10_3 -= r14_2
                                                        rdx_18 = rax_50
                                                        
                                                        if (rax_50 u< rbx_5)
                                                            break
                                                
                                                rbx_3 = var_88_1
                                            else
                                                rdi_4 = -1
                                            
                                            *((rdx_9 << 3) + *rax_13) =
                                                sub_14291f9e0(*rax_13, *rax_15, rbx_3, rdi_4)
                                            void* rcx_41 = var_68 - 8
                                            var_68 = rcx_41
                                            
                                            if (sub_142921500(rcx_41, rcx_41, *rax_13, rbx_3 + 1)
                                                    != 0)
                                                int64_t* rcx_42 = var_68
                                                rdi_4 -= 1
                                                
                                                if (sub_14291cd80(rcx_42, rcx_42, *rax_15, rbx_3)
                                                        != 0)
                                                    *rsi_3 += 1
                                            
                                            r13_2 -= 8
                                            rsi_3 -= 8
                                            i = i_1
                                            i_1 -= 1
                                            *r13_2 = rdi_4
                                        while (i != 1)
                                        r15 = rax_14
                                        rbx_2 = arg_8
                                    
                                    sub_142890ce0(r15)
                                    
                                    if (arg2 != 0)
                                        int32_t rdi_5 = arg3[2].d
                                        sub_1428f5760(arg2, r15, 0x40 * 2 - rax_17)
                                        
                                        if (sub_142890300(arg2) == 0)
                                            arg2[2].d = rdi_5
                                    
                                    if (var_84 != 0)
                                        sub_142890ce0(rbx_2)
                                    
                                    sub_1428d8a60(arg5)
                                    return 1
                    else if (sub_142890e60(r15, rcx_16 + 2) != 0)
                        int32_t r8_2 = rax_15[1].d
                        int64_t rcx_18 = sx.q(r15[1].d)
                        
                        if (rcx_18.d s< r8_2 + 2)
                            int64_t rdx_7 = rcx_18 << 3
                            
                            do
                                rdx_7 += 8
                                rcx_18 = zx.q(rcx_18.d + 1)
                                *(rdx_7 + *r15 - 8) = 0
                                r8_2 = rax_15[1].d
                            while (rcx_18.d s< r8_2 + 2)
                        
                        r15[1].d = r8_2 + 2
                        goto label_14291abf7
        
        sub_1428d8a60(arg5)
        return 0
    
    int64_t* rax_10
    
    if (arg2 != 0)
        rax_10 = sub_142890040(arg2, arg3)
    
    if (arg2 == 0 || rax_10 != 0)
        if (r13 != 0)
            sub_142890900(r13, 0)
        
        return 1
else
    sub_1428a5670(3, 0x6b, 0x6b, "crypto\bn\bn_div.c", 0x9a)

return 0
