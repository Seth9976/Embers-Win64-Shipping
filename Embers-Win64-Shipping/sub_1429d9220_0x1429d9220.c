// 函数: sub_1429d9220
// 地址: 0x1429d9220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38[0x2]
uint64_t result = __security_cookie ^ &var_38
uint64_t result_1 = result
int32_t* r10 = *(arg1 + 8)
int32_t i = 0

if (*r10 s> 0)
    int64_t r12_1 = 0
    
    do
        void* rdx_1 = *(arg1 + 8)
        int64_t j = 0
        int64_t r14_1 = *(arg1 + 0xc0)
        int64_t r15_1 = *(r10 + 0x78)
        int32_t* r8_1 = *(rdx_1 + 0x30) + (sx.q(*(*(rdx_1 + 0x18) + r12_1 + 4)) << 2)
        int32_t* rsi_2 = *(rdx_1 + 0x48) + (sx.q(*(*(rdx_1 + 0x18) + r12_1 + 4)) << 2) - r8_1
        int32_t* rbx_1 = *(arg1 + 0x78) + (sx.q(*(*(arg1 + 0x58) + r12_1 + 4)) << 2)
        int32_t* rdi_1 = *(arg1 + 0x90) + (sx.q(*(r12_1 + *(arg1 + 0x68) + 4)) << 2)
        
        do
            int64_t rax_11 = sx.q(*(rsi_2 + r8_1) * 2)
            int32_t rcx_4 = *(r15_1 + (rax_11 << 2))
            int64_t r10_1 = r14_1 + (rax_11 << 2)
            
            if (rcx_4 == *(r15_1 + (rax_11 << 2) + 4) || *r8_1 == rcx_4)
                rax_11.b = 0
            else
                rax_11.b = 1
            
            r8_1 = &r8_1[1]
            (&var_38)[j][0] = *(r10_1 + (zx.q(rax_11.b) << 2))
            var_34
            *(&var_34 + (j << 3)) = *(r10_1 + ((zx.q(rax_11.b) ^ 1) << 2))
            j += 1
        while (j s< 3)
        
        uint64_t rax_13 = zx.q(*rbx_1)
        
        if (rax_13.d != 0xffffffff)
            void* r8_2 = *(arg1 + 0x10)
            int32_t* rcx_9 =
                *(r8_2 + 0x48) + (sx.q(*(*(r8_2 + 0x18) + (sx.q(((rax_13 << 1) + 1).d) << 2))) << 2)
            *rcx_9 = var_38[0]
            rcx_9[1] = *rdi_1
            int32_t var_24
            rcx_9[2] = var_24
        
        uint64_t rax_20 = zx.q(rbx_1[1])
        
        if (rax_20.d != 0xffffffff)
            void* r8_3 = *(arg1 + 0x10)
            int32_t* rcx_11 =
                *(r8_3 + 0x48) + (sx.q(*(*(r8_3 + 0x18) + (sx.q(((rax_20 << 1) + 1).d) << 2))) << 2)
            *rcx_11 = var_38[1]
            int32_t var_30
            rcx_11[1] = var_30
            rcx_11[2] = rdi_1[1]
        
        uint64_t rax_27 = zx.q(rbx_1[2])
        
        if (rax_27.d != 0xffffffff)
            void* r8_4 = *(arg1 + 0x10)
            int32_t* rcx_13 =
                *(r8_4 + 0x48) + (sx.q(*(*(r8_4 + 0x18) + (sx.q(((rax_27 << 1) + 1).d) << 2))) << 2)
            *rcx_13 = rdi_1[2]
            int32_t var_2c
            rcx_13[1] = var_2c
            int32_t var_28
            rcx_13[2] = var_28
        
        result = zx.q(rbx_1[3])
        
        if (result.d != 0xffffffff)
            void* r8_5 = *(arg1 + 0x10)
            int32_t* rcx_15 =
                *(r8_5 + 0x48) + (sx.q(*(*(r8_5 + 0x18) + (sx.q(((result << 1) + 1).d) << 2))) << 2)
            *rcx_15 = rdi_1[2]
            rcx_15[1] = *rdi_1
            result = zx.q(rdi_1[1])
            rcx_15[2] = result.d
        
        r10 = *(arg1 + 8)
        i += 1
        r12_1 += 8
    while (i s< *r10)

__security_check_cookie(result_1 ^ &var_38)
return result
