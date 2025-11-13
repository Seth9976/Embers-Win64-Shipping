// 函数: sub_14265cc10
// 地址: 0x14265cc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x30) s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        int64_t rsi_1 = *(arg1 + 0x28)
        void* const r8
        
        if (*(rdi_1 + rsi_1) == 0)
            r8 = nullptr
        else
            void* rax_1 = sub_14269ce80()
            
            if (rax_1 == 0)
                r8 = nullptr
            else
                r8 = *(rdi_1 + rsi_1)
                int64_t rax_2 = sx.q(*(rax_1 + 0x38))
                
                if (rax_2.d s> *(r8 + 0x38) || *(*(r8 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                    r8 = nullptr
        
        int32_t arg_8
        sub_140865c40(arg2 + 0x3a8, &arg_8, r8)
        int64_t rax_4 = sx.q(arg_8)
        void* const rcx_2
        
        if (rax_4.d == 0xffffffff)
            rcx_2 = nullptr
        else
            rcx_2 = *(arg2 + 0x3a8) + rax_4 * 0x18
        
        int32_t* rax_6 = rcx_2 + 8
        
        if (rcx_2 == 0)
            rax_6 = nullptr
        
        if (rax_6 != 0)
            int32_t rbx_1 = *rax_6
            
            if (rbx_1 != 0xffffffff)
                char rax_7 = (*(rdi_1 + rsi_1 + 0x10)).b
                
                if ((rax_7 & 1) == 0)
                    if ((rax_7 & 2) != 0)
                        sub_140a54d00(arg4, zx.q(rbx_1.b), 
                            _mm_max_ss(*(rdi_1 + rsi_1 + 8), 0x3f800000))
                        rax_7 = (*(rdi_1 + rsi_1 + 0x10)).b
                    
                    if ((rax_7 & 4) != 0)
                        sub_140a4f980(arg4, zx.q(rbx_1.b), _mm_max_ss(*(rdi_1 + rsi_1 + 0xc), 0))
                else
                    sub_140a556a0(arg4, zx.q(rbx_1.b))
        
        i += 1
        rdi_1 = &rdi_1[3]
    while (i s< *(arg1 + 0x30))

sub_141defec0(arg4, zx.q(*(arg1 + 0x38)))
return sub_141defeb0(arg4, zx.q(*(arg1 + 0x3c))) __tailcall
