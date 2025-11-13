// 函数: sub_140e3ac70
// 地址: 0x140e3ac70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)
char rcx = (*(arg1 + 0x26c)).b
int32_t rdi = 1 << rcx
int32_t rsi = 0xffffffff << rcx
void* rdx = *(arg1 + (r10 << 3) + 0x328)
int64_t rbp = sx.q(*(arg1 + 0x264))
int32_t arg_10 = rdi
int32_t arg_18 = rsi
int32_t rcx_1 = *(rdx + 0x18)
int32_t result = *(arg1 + 0x348)
int64_t r14_2 = sx.q(*(rdx + 8) * rcx_1 * arg4) + sx.q(rcx_1 * arg3) + *rdx
int64_t arg_8 = r14_2
bool cond:0 = result s<= 0

if (result != 0)
label_140e3af8f:
    
    if (not(cond:0))
        if (rbp.d s<= *(arg1 + 0x268))
            void* r15_2 = &data_1439b36b0 + (sx.q(rbp.d) << 2)
            
            do
                int64_t rax_29 = sx.q(*r15_2)
                int16_t* rsi_2 = r14_2 + (rax_29 << 1)
                
                if (*(r14_2 + (rax_29 << 1)) != 0)
                    int32_t rcx_16 = *(arg1 + 0x24f4)
                    int32_t r14_4 = *(arg1 + 0x24f8)
                    *(arg1 + 0x24f4) = rcx_16 - 1
                    int32_t rdi_14
                    
                    if (rcx_16 - 1 s> 0)
                        rdi_14 = r14_4 * 2
                    else
                        int32_t rax_30 = *(arg1 + 0x368)
                        int32_t r8_4 = r14_4 << rcx_16.b
                        *(arg1 + 0x24f8) = r8_4
                        
                        if (rax_30 s< 2)
                        label_140e3b056:
                            uint32_t rdi_15 = zx.d(sub_140e3ce00(arg1, arg5))
                            char rax_36 = sub_140e3ce00(arg1, arg5)
                            int32_t rdx_11 = *(arg1 + 0x24f4)
                            int32_t rdi_18 = rdi_15 << 8 | *(arg1 + 0x24f8) | zx.d(rax_36)
                            *(arg1 + 0x24f4) = rdx_11 + 0x10
                            rdi_14 = rdi_18 << (neg.d(rdx_11)).b
                        else
                            char* rcx_17 = arg1[0x36].q
                            char r10_2 = *rcx_17
                            
                            if (r10_2 == 0xff)
                                goto label_140e3b056
                            
                            char r9_2 = rcx_17[1]
                            
                            if (r9_2 == 0xff)
                                goto label_140e3b056
                            
                            *(arg1 + 0x368) = rax_30 - 2
                            arg1[0x36].q = &rcx_17[2]
                            *(arg1 + 0x24f4) = rcx_16 + 0xf
                            rdi_14 = (zx.d(r10_2) << 8 | zx.d(r9_2) | r8_4) << (neg.d(rcx_16 - 1)).b
                    
                    *(arg1 + 0x24f8) = rdi_14
                    int32_t rcx_22
                    
                    if (r14_4 s< 0)
                        rcx_22 = sx.d(*rsi_2)
                    
                    if (r14_4 s>= 0 || (arg_10 & rcx_22) != 0)
                        r14_2 = arg_8
                    else
                        r14_2 = arg_8
                        
                        if (rcx_22.w s< 0)
                            rcx_22.w += arg_18.w
                            *rsi_2 = rcx_22.w
                        else
                            rcx_22.w += arg_10.w
                            *rsi_2 = rcx_22.w
                
                rbp = zx.q(rbp.d + 1)
                r15_2 += 4
            while (rbp.d s<= *(arg1 + 0x268))
            
            result = *(arg1 + 0x348)
        
        result -= 1
        *(arg1 + 0x348) = result
else if (rbp.d s<= *(arg1 + 0x268))
    int64_t r15_1 = rbp
    void* rax_5 = arg1 + ((r10 + 0x95) << 2)
    void* var_58_1 = rax_5
    
    while (true)
        int32_t r9 = *(arg1 + 0x24f8)
        int64_t r8 = *(arg1 + (sx.q(*rax_5) << 3) + 0x2c8)
        int64_t r12_1 = sx.q(*(r8 + (zx.q(r9) u>> 0x18 << 2) + 4))
        uint32_t rax_14
        
        if (r12_1.d s>= 0)
            rax_14 = zx.d(*(r12_1 + r8 + 0x804))
        else
            int32_t rdx_1 = 0x17
            
            do
                int64_t rcx_4 = 0x241 - sx.q((r9 u>> rdx_1.b & 1) + r12_1.d)
                rdx_1 -= 1
                r12_1 = zx.q(*(r8 + (rcx_4 << 2)))
            while (r12_1.d s< 0)
            
            rax_14 = 0x1f - rdx_1
        
        sub_140e3cc80(arg1, rax_14, arg5)
        int32_t r13_2 = r12_1.d s>> 4
        int32_t r12_2 = r12_1.d & 0xf
        int32_t arg_20 = r12_2
        
        if (r12_2 != 0)
            if (r12_2 != 1)
                sub_140e43530(arg1, 0xffffff1a)
                noreturn
            
            int32_t r12_3 = rsi
            
            if (sub_140e3cc80(arg1, r12_2, arg5) != 0)
                r12_3 = rdi
            
            arg_20 = r12_3
        else if (r13_2 != 0xf)
            result = 1 << r13_2.b
            *(arg1 + 0x348) = result
            
            if (r13_2 != 0)
                int32_t rax_27 = sub_140e3cc80(arg1, r13_2, arg5)
                *(arg1 + 0x348) += rax_27
                result = *(arg1 + 0x348)
            
            break
        
        do
            int64_t rax_16 = sx.q(*(&data_1439b36b0 + (r15_1 << 2)))
            int16_t* rsi_1 = r14_2 + (rax_16 << 1)
            
            if (*(r14_2 + (rax_16 << 1)) == 0)
                int32_t temp1_1 = r13_2
                r13_2 -= 1
                
                if (temp1_1 - 1 s< 0)
                    break
            else
                int32_t rcx_7 = *(arg1 + 0x24f4)
                int32_t r14_3 = *(arg1 + 0x24f8)
                *(arg1 + 0x24f4) = rcx_7 - 1
                int32_t rdi_5
                
                if (rcx_7 - 1 s> 0)
                    rdi_5 = r14_3 * 2
                else
                    int32_t rax_17 = *(arg1 + 0x368)
                    int32_t r8_2 = r14_3 << rcx_7.b
                    *(arg1 + 0x24f8) = r8_2
                    
                    if (rax_17 s< 2)
                    label_140e3ae87:
                        uint32_t rdi_6 = zx.d(sub_140e3ce00(arg1, arg5))
                        char rax_23 = sub_140e3ce00(arg1, arg5)
                        int32_t rdx_6 = *(arg1 + 0x24f4)
                        int32_t rdi_9 = rdi_6 << 8 | *(arg1 + 0x24f8) | zx.d(rax_23)
                        *(arg1 + 0x24f4) = rdx_6 + 0x10
                        rdi_5 = rdi_9 << (neg.d(rdx_6)).b
                    else
                        char* rcx_8 = arg1[0x36].q
                        char r10_1 = *rcx_8
                        
                        if (r10_1 == 0xff)
                            goto label_140e3ae87
                        
                        char r9_1 = rcx_8[1]
                        
                        if (r9_1 == 0xff)
                            goto label_140e3ae87
                        
                        *(arg1 + 0x368) = rax_17 - 2
                        arg1[0x36].q = &rcx_8[2]
                        *(arg1 + 0x24f4) = rcx_7 + 0xf
                        rdi_5 = (zx.d(r10_1) << 8 | zx.d(r9_1) | r8_2) << (neg.d(rcx_7 - 1)).b
                
                *(arg1 + 0x24f8) = rdi_5
                rdi = arg_10
                int32_t rcx_13
                
                if (r14_3 s< 0)
                    rcx_13 = sx.d(*rsi_1)
                
                if (r14_3 s>= 0 || (rdi & rcx_13) != 0)
                    r14_2 = arg_8
                else
                    r14_2 = arg_8
                    
                    if (rcx_13.w s< 0)
                        rcx_13.w += arg_18.w
                        *rsi_1 = rcx_13.w
                    else
                        rcx_13.w += rdi.w
                        *rsi_1 = rcx_13.w
            
            rbp = zx.q(rbp.d + 1)
            r15_1 += 1
        while (rbp.d s<= *(arg1 + 0x268))
        
        if (arg_20 != 0 && r15_1 s< 0x40)
            *(r14_2 + (sx.q(*(&data_1439b36b0 + (r15_1 << 2))) << 1)) = arg_20.w
        
        rbp = zx.q(rbp.d + 1)
        r15_1 += 1
        
        if (rbp.d s> *(arg1 + 0x268))
            result = *(arg1 + 0x348)
            break
        
        rsi = arg_18
        rax_5 = var_58_1
    
    cond:0 = result s<= 0
    goto label_140e3af8f

return result
