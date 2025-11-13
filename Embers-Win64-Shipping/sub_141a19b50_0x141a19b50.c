// 函数: sub_141a19b50
// 地址: 0x141a19b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141a22c50()
int64_t rcx = sx.q(*(arg1 + 0x80))
int32_t r9 = 0

if (rcx.d s> 0)
    int64_t* rbp_1 = *(arg1 + 0x78)
    int64_t rdx_1 = 0
    int64_t* r8_1 = rbp_1
    
    do
        void* rcx_1 = *r8_1
        
        if (rcx_1 != 0)
            void* rax_1 = *(rcx_1 + 0x10)
            int64_t rcx_2 = sx.q(*(rax + 0x38))
            
            if (rcx_2.d s<= *(rax_1 + 0x38) && *(*(rax_1 + 0x30) + (rcx_2 << 3)) == rax + 0x30)
                int32_t var_28 = 0x7f800000
                void** rsi = sx.q(r9) << 3
                int64_t arg_8 = 0
                void* rcx_5 = *(rsi + rbp_1)
                void* rax_5 = sub_140d2e1f0(rcx_5, *(rcx_5 + 0x20), 0, 0xfffffff, 0, 0)
                void* rbx_1 = rax_5
                void* rax_6
                void* rcx_6
                int64_t rdx_4
                
                if (rax_5 != 0)
                    rax_6 = sub_141a22c50()
                    rcx_6 = *(rbx_1 + 0x10)
                    rdx_4 = sx.q(*(rax_6 + 0x38))
                
                if (rax_5 == 0 || rdx_4.d s> *(rcx_6 + 0x38)
                        || *(*(rcx_6 + 0x30) + (rdx_4 << 3)) != rax_6 + 0x30)
                    rbx_1 = nullptr
                
                sub_140d3a3a0(rbx_1 + 0x78, arg1)
                int64_t result = *(arg1 + 0x78)
                *(rsi + result) = rbx_1
                return result
        
        r9 += 1
        rdx_1 += 1
        r8_1 = &r8_1[1]
    while (rdx_1 s< rcx)

return sub_141a005f0(arg1) __tailcall
