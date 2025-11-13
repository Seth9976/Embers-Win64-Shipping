// 函数: sub_140755020
// 地址: 0x140755020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
uint64_t r10 = arg3
void var_80
uint128_t zmm0

if (arg3 != 0)
    void* rcx = *(r10 + 0x48)
    void* rsi_1 = r10 + 0x18
    zmm0 = *arg2
    int32_t rbx_1 = *(arg3 + 0xc)
    void* rdi_1 = nullptr
    arg3.b = 0
    void* var_50_1 = nullptr
    int32_t rax_2 = -1
    char var_84_1 = 0
    
    if (rcx != 0)
        rsi_1 = rcx
    
    int32_t var_88_1 = 0xffffffff
    int32_t var_48_1 = 0
    int32_t var_44_1 = 4
    void* r12_1 = rsi_1 + sx.q(*(r10 + 0x50)) * 0xc
    
    if (rsi_1 != r12_1)
        do
            int64_t r14_1 = sx.q(var_48_1)
            uint32_t var_a8_1 = (*rsi_1).d
            int32_t rax_4 = (r14_1 + 1).d
            int32_t var_b4_1 = rbx_1
            char var_b0_1 = 0
            var_48_1 = rax_4
            
            if (rax_4 s> var_44_1)
                sub_140775760(&var_80, r14_1.d)
                rdi_1 = var_50_1
            
            int64_t rcx_3 = r14_1 * 3
            void* rdx_2 = &var_80
            
            if (rdi_1 != 0)
                rdx_2 = rdi_1
            
            rsi_1 += 0xc
            *(rdx_2 + (rcx_3 << 2)) = var_a8_1.q
            *(rdx_2 + (rcx_3 << 2) + 8) = var_b0_1.d
            rdi_1 = var_50_1
        while (rsi_1 != r12_1)
        
        arg3 = zx.q(var_84_1)
        rax_2 = var_88_1
        zmm0 = zmm0
    
    arg1[1].d = rax_2
    *(arg1 + 0x14) = arg3.b
    *arg1 = zmm0
    *(arg1 + 0x48) = 0
    
    if (rdi_1 == 0)
        memmove(arg1 + 0x18, &var_80, (rdi_1 + 0x30).d)
    
    int64_t rcx_5 = *(arg1 + 0x48)
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
        rdi_1 = var_50_1
    
    *(arg1 + 0x48) = rdi_1
    arg1[5].d = var_48_1
    *(arg1 + 0x54) = var_44_1
    *(arg1 + 0x58) = 1
else if (arg4 == 0)
    *(arg1 + 0x58) = 0
else
    void* rcx_8 = *(arg4 + 0x48)
    void* rsi_2 = arg4 + 0x18
    zmm0 = *arg2
    int32_t rbx_2 = *(arg4 + 4)
    void* rdi_2 = nullptr
    arg3.b = 0
    void* var_50_2 = nullptr
    int32_t rax_6 = -1
    char var_84_2 = 0
    
    if (rcx_8 != 0)
        rsi_2 = rcx_8
    
    int32_t var_88_2 = 0xffffffff
    int32_t var_48_2 = 0
    int32_t var_44_2 = 4
    void* r12_2 = rsi_2 + sx.q(*(arg4 + 0x50)) * 0xc
    
    if (rsi_2 != r12_2)
        do
            int64_t r14_2 = sx.q(var_48_2)
            uint32_t var_a8_2 = (*rsi_2).d
            int32_t rax_8 = (r14_2 + 1).d
            int32_t var_b4_2 = rbx_2
            char var_b0_2 = 0
            var_48_2 = rax_8
            
            if (rax_8 s> var_44_2)
                sub_140775760(&var_80, r14_2.d)
                rdi_2 = var_50_2
            
            int64_t rcx_11 = r14_2 * 3
            void* rdx_6 = &var_80
            
            if (rdi_2 != 0)
                rdx_6 = rdi_2
            
            rsi_2 += 0xc
            *(rdx_6 + (rcx_11 << 2)) = var_a8_2.q
            *(rdx_6 + (rcx_11 << 2) + 8) = var_b0_2.d
            rdi_2 = var_50_2
        while (rsi_2 != r12_2)
        
        arg3 = zx.q(var_84_2)
        rax_6 = var_88_2
        zmm0 = zmm0
    
    arg1[1].d = rax_6
    *(arg1 + 0x14) = arg3.b
    *arg1 = zmm0
    *(arg1 + 0x48) = 0
    
    if (rdi_2 == 0)
        memmove(arg1 + 0x18, &var_80, (rdi_2 + 0x30).d)
    
    int64_t rcx_13 = *(arg1 + 0x48)
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
        rdi_2 = var_50_2
    
    *(arg1 + 0x48) = rdi_2
    arg1[5].d = var_48_2
    *(arg1 + 0x54) = var_44_2
    *(arg1 + 0x58) = 1
__security_check_cookie(rax_1 ^ &var_d8)
return arg1
