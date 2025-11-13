// 函数: sub_140cf1d30
// 地址: 0x140cf1d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = *arg1
int64_t* r12 = arg1[1]
int32_t rsi = arg3
int64_t r13 = sx.q(arg1[3].d)
int32_t rbx = arg2

if (arg3 != 0)
    while (true)
        void** r8 = arg1[2]
        void* rdx_2
        
        if ((not.b(arg1[6].b) & 1) != 0)
            if (rbx s< 0 || rbx s>= r8[5].d)
                rbx += 1
                continue
            else
                void* rax_9 = r8[4]
                void* r9 = &r8[2]
                
                if (rax_9 != 0)
                    r9 = rax_9
                
                int32_t rax_10 = rbx
                
                if (rbx s< 0)
                    rax_10 = rbx + 0x1f
                
                if (not(test_bit(*(r9 + (sx.q(rax_10 s>> 5) << 2)), rbx & 0x1f)))
                    rbx += 1
                    continue
                else if (r8[1].d != *(r8 + 0x34))
                    rdx_2 = sx.q(*(arg1 + 0x2c) * rbx) + *r8
                else
                    rdx_2 = nullptr
        else if (rbx s< 0 || rbx s>= r8[3].d)
            rbx += 1
            continue
        else
            void* rcx = r8[2]
            
            if ((rcx.b & 1) != 0)
                rcx = (rcx s>> 1) + &r8[2]
            
            int32_t rax_3 = rbx
            
            if (rbx s< 0)
                rax_3 = rbx + 0x1f
            
            if (not(test_bit(*(rcx + (sx.q(rax_3 s>> 5) << 2)), rbx & 0x1f)))
                rbx += 1
                continue
            else if (r8[1].d != *(r8 + 0x24))
                void* rcx_3 = *r8
                
                if ((rcx_3.b & 1) != 0)
                    rcx_3 = (rcx_3 s>> 1) + r8
                
                rdx_2 = sx.q(*(arg1 + 0x2c) * rbx) + rcx_3
            else
                rdx_2 = nullptr
        
        if ((*(*r15 + 0x80))(r15, rdx_2, arg4, zx.q(arg5)) != 0)
            void** rcx_8 = arg1[2]
            int32_t rax_18 = rcx_8[1].d
            void* rdx_6
            
            if ((not.b(arg1[6].b) & 1) != 0)
                if (rax_18 != *(rcx_8 + 0x34))
                    rdx_6 = sx.q(*(arg1 + 0x2c) * rbx) + *rcx_8
                else
                    rdx_6 = nullptr
            else if (rax_18 != *(rcx_8 + 0x24))
                void* r8_2 = *rcx_8
                
                if ((r8_2.b & 1) != 0)
                    r8_2 = (r8_2 s>> 1) + rcx_8
                
                rdx_6 = sx.q(*(arg1 + 0x2c) * rbx) + r8_2
            else
                rdx_6 = nullptr
            
            if ((*(*r12 + 0x80))(r12, rdx_6 + r13, arg4 + r13, zx.q(arg5)) != 0)
                return 1
        
        rbx += 1
        int32_t temp0_1 = rsi
        rsi -= 1
        
        if (temp0_1 == 1)
            break

return 0
