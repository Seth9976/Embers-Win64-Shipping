// 函数: sub_140d0b740
// 地址: 0x140d0b740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *arg1
int64_t* rcx = arg1[1]
int32_t r14 = 0
int32_t r12 = 0
int32_t rdi = arg4
int32_t rbx = arg2
int32_t var_48 = arg1[3].d
int32_t arg_8 = 0
int32_t result

if (arg5 != 0)
    int32_t i
    
    do
        void* r9 = arg1[2]
        char r11_1 = not.b(arg1[6].b) & 1
        
        while (true)
            bool c_1
            
            if (r11_1 != 0)
                if (rbx s>= 0 && rbx s< *(r9 + 0x28))
                    void* rax_3 = *(r9 + 0x20)
                    void* r8_2 = r9 + 0x10
                    
                    if (rax_3 != 0)
                        r8_2 = rax_3
                    
                    int32_t rax_4 = rbx
                    
                    if (rbx s< 0)
                        rax_4 = rbx + 0x1f
                    
                    c_1 = test_bit(*(r8_2 + (sx.q(rax_4 s>> 5) << 2)), rbx & 0x1f)
                label_140d0b834:
                    
                    if (c_1)
                        break
            else if (rbx s>= 0 && rbx s< *(r9 + 0x18))
                void* rax_1 = *(r9 + 0x10)
                
                if ((rax_1.b & 1) != 0)
                    rax_1 = (rax_1 s>> 1) + r9 + 0x10
                
                int32_t rcx_2 = rbx
                
                if (rbx s< 0)
                    rcx_2 = rbx + 0x1f
                
                c_1 = test_bit(*(rax_1 + (sx.q(rcx_2 s>> 5) << 2)), rbx & 0x1f)
                goto label_140d0b834
            rbx += 1
        
        void** r9_1 = *(arg3 + 0x10)
        char r10_1 = not.b(*(arg3 + 0x30)) & 1
        
        while (true)
            bool c_2
            
            if (r10_1 != 0)
                if (rdi s>= 0 && rdi s< r9_1[5].d)
                    void* rax_11 = r9_1[4]
                    void* r8_3 = &r9_1[2]
                    
                    if (rax_11 != 0)
                        r8_3 = rax_11
                    
                    int32_t rax_12 = rdi
                    
                    if (rdi s< 0)
                        rax_12 = rdi + 0x1f
                    
                    c_2 = test_bit(*(r8_3 + (sx.q(rax_12 s>> 5) << 2)), rdi & 0x1f)
                label_140d0b8c1:
                    
                    if (c_2)
                        break
            else if (rdi s>= 0 && rdi s< r9_1[3].d)
                void* rcx_7 = r9_1[2]
                
                if ((rcx_7.b & 1) != 0)
                    rcx_7 = (rcx_7 s>> 1) + &r9_1[2]
                
                int32_t rax_8 = rdi
                
                if (rdi s< 0)
                    rax_8 = rdi + 0x1f
                
                c_2 = test_bit(*(rcx_7 + (sx.q(rax_8 s>> 5) << 2)), rdi & 0x1f)
                goto label_140d0b8c1
            rdi += 1
        
        void** rcx_12 = arg1[2]
        int32_t rax_15 = rcx_12[1].d
        void* r14_1
        
        if (r11_1 != 0)
            if (rax_15 != *(rcx_12 + 0x34))
                r14_1 = sx.q(*(arg1 + 0x2c) * rbx) + *rcx_12
            else
                r14_1 = nullptr
        else if (rax_15 != *(rcx_12 + 0x24))
            void* rdx_5 = *rcx_12
            
            if ((rdx_5.b & 1) != 0)
                rdx_5 = (rdx_5 s>> 1) + rcx_12
            
            r14_1 = sx.q(*(arg1 + 0x2c) * rbx) + rdx_5
        else
            r14_1 = nullptr
        
        result = r9_1[1].d
        void* rsi_1
        
        if (r10_1 != 0)
            if (result != *(r9_1 + 0x34))
                rsi_1 = sx.q(*(arg3 + 0x2c) * rdi) + *r9_1
            else
                rsi_1 = nullptr
        else if (result != *(r9_1 + 0x24))
            void* rdx_7 = *r9_1
            
            if ((rdx_7.b & 1) != 0)
                rdx_7 = (rdx_7 s>> 1) + r9_1
            
            rsi_1 = sx.q(*(arg3 + 0x2c) * rdi) + rdx_7
        else
            rsi_1 = nullptr
        
        if (r14_1 == arg6)
            r14 = arg_8 + 1
            arg_8 = r14
        else if ((*(*rax + 0x80))(rax, r14_1, arg6, zx.q(arg7), var_48, rax, rcx).b == 0)
            r14 = arg_8
        else
            int64_t rax_23 = sx.q(var_48)
            
            if ((*(*rcx + 0x80))(rcx, r14_1 + rax_23, rax_23 + arg6, zx.q(arg7)).b == 0)
                r14 = arg_8
            else
                r14 = arg_8 + 1
                arg_8 = r14
        
        if (rsi_1 == arg6)
            r12 += 1
        else if ((*(*rax + 0x80))(rax, rsi_1, arg6, zx.q(arg7), var_48, rax, rcx).b != 0)
            int64_t rax_25 = sx.q(var_48)
            
            if ((*(*rcx + 0x80))(rcx, rsi_1 + rax_25, rax_25 + arg6, zx.q(arg7)).b != 0)
                r12 += 1
        
        rbx += 1
        rdi += 1
        i = arg5
        arg5 -= 1
    while (i != 1)

result.b = r14 == r12
return result
