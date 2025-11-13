// 函数: sub_142b9d910
// 地址: 0x142b9d910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r10 = arg3

if (arg2 == 0)
    return zx.q((&arg2[0xa]).d)

if (arg1 == 0)
    return zx.q((arg1 + 6).d)

arg1[0x10] = 0
int32_t rbx = 0
arg1[0x1a].b = 0
arg1[0x17] = 0xffffffff
arg1[0x1c] = 0
arg1[0x23] = 0xffffffff
arg1[0x26].b = 0
int32_t rcx = 0
int32_t arg_10 = 0

if (0 s< *arg2)
    int64_t r8 = 0
    int64_t var_50_1 = 0
    
    while (true)
        uint64_t r12_1 = zx.q(sx.d(*(*(arg2 + 0x18) + r8)))
        int64_t rax_4 = *(arg2 + 8)
        int64_t* r14_1 = rax_4 + (r12_1 << 3)
        
        if (r12_1.d u> rcx)
            int64_t r9_1 = *(arg2 + 0x10)
            uint64_t rdx = zx.q(rcx)
            uint64_t rcx_1 = *r14_1
            int64_t* rdi_1 = rax_4 + (rdx << 3)
            uint64_t rax_5 = *(rax_4 + (rdx << 3))
            void* rsi_1 = r9_1 + rdx
            int32_t rdx_2 = sx.d(*(r9_1 + rdx)) & 3
            uint64_t arg_20 = rax_5
            uint64_t var_78 = rax_5
            
            if (rdx_2 == 2)
                return 0x14
            
            if (rdx_2 == 0)
                if ((*(r9_1 + r12_1) & 3) != 1)
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(arg_20.d + rcx_1.d)
                    arg_20.d = (temp1_1 - temp0_1) s>> 1
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q((rcx_1 u>> 0x20).d + arg_20:4.d)
                    arg_20:4.d = (temp3_1 - temp2_1) s>> 1
                    rax_5 = arg_20
                else
                    rax_5 = rcx_1
                    arg_20 = rcx_1
                    r14_1 -= 8
                
                rdi_1 -= 8
                rsi_1 -= 1
            
            bool cond:0_1 = arg1[0xc] != 0
            arg1[5].b = 1
            *(arg1 + 8) = rax_5
            *(arg1 + 0x15) = r10
            
            if (cond:0_1 || (r10 != 0 && arg1[0xb] == 0))
                rcx_1.b = 1
            else
                rcx_1 = 0
            
            arg1[0xa].b = rcx_1.b
            *(arg1 + 0x1c) = rax_5
            *arg1 = 0
            int32_t result
            
            if (rdi_1 u< r14_1)
                do
                    int32_t rcx_3 = sx.d(*(rsi_1 + 1))
                    rsi_1 += 1
                    rdi_1 = &rdi_1[1]
                    int32_t rcx_4 = rcx_3 & 3
                    uint64_t var_48
                    
                    if (rcx_4 == 0)
                        int32_t rdx_7 = *rdi_1
                        var_78.d = rdx_7
                        var_78:4.d = *(rdi_1 + 4)
                        uint64_t rcx_7 = var_78
                        
                        while (true)
                            if (rdi_1 u>= r14_1)
                                result = sub_142b9c880(arg1, &var_78, &arg_20)
                                goto label_142b9dbda
                            
                            int32_t rax_24 = sx.d(*(rsi_1 + 1))
                            rsi_1 += 1
                            uint64_t rbx_1 = rdi_1[1]
                            rdi_1 = &rdi_1[1]
                            int32_t rax_25 = rax_24 & 3
                            var_48 = rbx_1
                            
                            if (rax_25 == 1)
                                result = sub_142b9c880(arg1, &var_78, &var_48)
                                break
                            
                            if (rax_25 != 0)
                                return 0x14
                            
                            int32_t temp4_1
                            int32_t temp5_1
                            temp4_1:temp5_1 = sx.q(rbx_1.d + rdx_7)
                            int32_t var_68 = (temp5_1 - temp4_1) s>> 1
                            int32_t temp6_1
                            int32_t temp7_1
                            temp6_1:temp7_1 = sx.q((rbx_1 u>> 0x20).d + (rcx_7 u>> 0x20).d)
                            int32_t var_64_1 = (temp7_1 - temp6_1) s>> 1
                            result = sub_142b9c880(arg1, &var_78, &var_68)
                            
                            if (result != 0)
                                return result
                            
                            var_78 = rbx_1
                            rcx_7 = rbx_1
                            rdx_7 = var_78.d
                    else if (rcx_4 == 1)
                        int32_t var_70 = *rdi_1
                        int32_t var_6c_1 = *(rdi_1 + 4)
                        result = sub_142b9d700(arg1, &var_70)
                    else
                        if (&rdi_1[1] u> r14_1)
                            return 0x14
                        
                        if ((*(rsi_1 + 1) & 3) != 2)
                            return 0x14
                        
                        int64_t rax_18 = *rdi_1
                        int64_t var_60
                        int32_t* r8_1 = &var_60
                        rdi_1 = &rdi_1[2]
                        int64_t var_58 = rax_18
                        rsi_1 += 2
                        int32_t* rdx_5 = &var_58
                        var_60 = rdi_1[-1]
                        
                        if (rdi_1 u> r14_1)
                            result = sub_142b9ce80(arg1, rdx_5, r8_1, &arg_20)
                            break
                        
                        var_48 = *rdi_1
                        result = sub_142b9ce80(arg1, rdx_5, r8_1, &var_48)
                    
                    if (result != 0)
                        return result
                while (rdi_1 u< r14_1)
                
            label_142b9dbda:
                
                if (result != 0)
                    return result
                
                rbx = arg_10
            
            if (arg1[5].b == 0)
                result = sub_142b9d510(arg1, rdi_1.d)
                
                if (result != 0)
                    return result
        
        rcx = (r12_1 + 1).d
        r8 = var_50_1 + 2
        rbx += 1
        var_50_1 = r8
        arg_10 = rbx
        
        if (rbx s>= sx.d(*arg2))
            break
        
        r10 = arg3

return 0
