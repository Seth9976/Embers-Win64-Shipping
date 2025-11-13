// 函数: sub_1408bd750
// 地址: 0x1408bd750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2

if (arg2 != 0)
    int64_t rsi_2 = sx.q(arg3) * 0x50
    int64_t* rdi_2 = *(arg1 + 0x10) + rsi_2
    int32_t arg_20
    sub_1408be510(rdi_2, &arg_20, arg2)
    int64_t rax_2 = sx.q(arg_20)
    int64_t result = 0
    int64_t* rdi_3
    
    if (rax_2.d != 0xffffffff)
        void* rcx_1 = *rdi_2 + rax_2 * 0x18
        rdi_3 = rcx_1 + 8
        
        if (rcx_1 == 0)
            rdi_3 = nullptr
    
    if (rax_2.d != 0xffffffff && rdi_3 != 0)
    label_1408bd85a:
        int64_t* rdi_7 = *rdi_3
        
        if (rdi_7 != 0)
            int32_t rcx_5 = rdi_7[2].d
            
            if (rcx_5 == 0xffffffff)
                sub_1408bd910(rdi_7, rcx_5 + 0xb)
                rcx_5 = rdi_7[2].d
            
            int64_t r9 = *rdi_7
            int64_t* r8_3 = *(r9 + (sx.q(rcx_5) << 3))
            
            if (r8_3[1].d s>= *(r8_3 + 0xc))
                if (rcx_5 s>= rdi_7[1].d - 1)
                    sub_1408bd910(rdi_7, 0xa)
                    rcx_5 = rdi_7[2].d
                    r9 = *rdi_7
                
                rdi_7[2].d = rcx_5 + 1
                r8_3 = *(r9 + (sx.q(rcx_5) << 3) + 8)
            
            if (r8_3 != 0)
                int32_t rax_13 = r8_3[1].d
                
                if (rax_13 s< *(r8_3 + 0xc))
                    int64_t rbx_1 = *r8_3
                    r8_3[1].d = rax_13 + 1
                    int64_t rcx_8 = sx.q(rax_13 + 1) * 0x2a8
                    result = rbx_1 - 0x2a8 + rcx_8
                    
                    if (rbx_1 - 0x2a8 != neg.q(rcx_8))
                        *(rdi_7 + 0x14) -= 1
            
            return result
    else
        int64_t* rax_4 = j_sub_140a82f30(0x20)
        
        if (rax_4 == 0)
            rax_4 = nullptr
        else
            *rax_4 = 0
            rax_4[1] = 0
            rax_4[2].d = 0xffffffff
            *(rax_4 + 0x14) = 0
        
        void* rcx_2 = *(arg1 + 0x10)
        int64_t* var_38 = rax_4
        int64_t* var_30 = &arg_10
        int64_t** var_28_1 = &var_38
        sub_1408b8a60(rcx_2 + rsi_2, &arg_20, &var_30, nullptr)
        int64_t* rdi_5 = *(arg1 + 0x10) + rsi_2
        sub_1408be510(rdi_5, &arg_20, arg_10)
        int64_t rax_5 = sx.q(arg_20)
        
        if (rax_5.d != 0xffffffff)
            void* rdi_6 = *rdi_5 + rax_5 * 0x18
            
            if (rdi_6 != 0)
                rdi_3 = rdi_6 + 8
                
                if (rdi_3 != 0)
                    goto label_1408bd85a

return 0
