// 函数: sub_141ca3c20
// 地址: 0x141ca3c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_141c9fe70(arg1 + 0x198, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
int64_t rsi = 0
void* const rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = rax * 0x30 + *(arg1 + 0x198)

int64_t* rcx_1 = rax_3 + 0x20

if (rax_3 == 0)
    rcx_1 = nullptr

if (rcx_1 != 0)
    void* rcx_2 = *rcx_1
    
    if (rcx_2 != 0)
        int64_t* var_38 = nullptr
        int32_t var_30 = 0
        sub_141ca3a70(rcx_2, &var_38, arg4)
        int64_t rdi_1 = sx.q(var_30)
        
        if (rdi_1.d s> *(arg3 + 0xc))
            sub_1405a51b0(arg3, rdi_1.d)
        
        int64_t* r12 = var_38
        int64_t* r14 = r12
        void* rcx_4 = &r12[rdi_1]
        uint64_t r15_3 = (rcx_4 - r12 + 7) u>> 3
        
        if (r12 u> rcx_4)
            r15_3 = 0
        
        uint64_t rax_4
        
        if (r15_3 != 0)
            do
                int64_t rdi_2 = sx.q(arg3[1].d)
                int128_t* rbp_1 = *r14
                int32_t rax_5 = (rdi_2 + 1).d
                arg3[1].d = rax_5
                
                if (rax_5 s> *(arg3 + 0xc))
                    sub_1405c4e40(arg3)
                
                rax_4 = *arg3
                int64_t rcx_7 = rdi_2 << 5
                r14 = &r14[1]
                rsi += 1
                *(rcx_7 + rax_4) = *rbp_1
                *(rcx_7 + rax_4 + 0x10) = rbp_1[1]
            while (rsi != r15_3)
        
        if (r12 != 0)
            sub_140a74f90(r12)
        
        rax_4.b = 1
        return rax_4

rax_3.b = 0
return rax_3
