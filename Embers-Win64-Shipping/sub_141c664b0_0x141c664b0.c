// 函数: sub_141c664b0
// 地址: 0x141c664b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143f34a18
float zmm0[0x4] = sub_140b34200("SubmixDynamics", rax)
int64_t* r13 = *(arg2 + 0x20)
int32_t i = 0
int32_t i_1 = 0

if (*(arg2 + 8) s> 0)
    int64_t* rdi_1 = *arg3
    void* r10_1 = arg1 + 0xd0
    int32_t rcx = *(arg2 + 0xc)
    int64_t* arg_20 = rdi_1
    
    do
        int32_t rsi_1 = 0
        int32_t r15_2 = rcx * i
        int64_t r12_1 = sx.q(r15_2)
        
        if (rcx s> 0)
            int32_t* rdi_2 = nullptr
            
            do
                int32_t* r14 = &rdi_2[r12_1]
                *(rdi_2 + *(arg1 + 0xa8)) = *(r14 + *r13)
                bool z_1
                
                if (0 == *(arg1 + 0x90))
                    *(arg1 + 0x90) = 0
                    z_1 = true
                else
                    *(arg1 + 0x90)
                    z_1 = false
                
                if (z_1)
                    zmm0 = sub_141c462c0(r10_1, (zx.o(0)).d)
                    r10_1 = arg1 + 0xd0
                    *(rdi_2 + *(arg1 + 0x98)) = *(r14 + *r13)
                else if (*(arg1 + 0x88) s<= rsi_1 + r15_2)
                    zmm0 = zx.o(0)
                    *(rdi_2 + *(arg1 + 0x98)) = 0
                else
                    zmm0 = *(r14 + *(arg1 + 0x80))
                    *(rdi_2 + *(arg1 + 0x98)) = zmm0[0]
                
                rcx = *(arg2 + 0xc)
                rsi_1 += 1
                rdi_2 = &rdi_2[1]
            while (rsi_1 s< rcx)
            
            i = i_1
            rdi_1 = arg_20
        
        zmm0 = sub_141c3f680(r10_1, *(arg1 + 0xa8), rcx, *(arg1 + 0xb8), zmm0, *(arg1 + 0x98))
        rcx = *(arg2 + 0xc)
        int32_t r9_2 = 0
        
        if (rcx s> 0)
            int64_t r8_1 = 0
            int64_t r10_2 = *rdi_1 + (r12_1 << 2)
            
            do
                r8_1 += 4
                r9_2 += 1
                *(r10_2 + r8_1 - 4) = *(r8_1 + *(arg1 + 0xb8) - 4)
                rcx = *(arg2 + 0xc)
            while (r9_2 s< rcx)
        
        i += 1
        r10_1 = arg1 + 0xd0
        i_1 = i
    while (i s< *(arg2 + 8))

return sub_140b38680("SubmixDynamics", rax) __tailcall
