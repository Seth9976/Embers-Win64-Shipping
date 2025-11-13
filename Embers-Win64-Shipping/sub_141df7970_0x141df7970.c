// 函数: sub_141df7970
// 地址: 0x141df7970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = (*(*arg2 + 0x20))(arg2, &data_14399f600)
void* rdi = arg1[4]

if (rdi != 0)
    void* rax_1 = *(rdi + 0x5b0)
    
    if (rax_1 != 0)
        *(*(rax_1 + 0x40) + 8)
    
    if (rdi != 0)
        void* rax_3 = sub_142591550()
        void* rdx = *(rdi + 0x10)
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
            void* r8
            r8.b = 1
            sub_141f3e990(arg1[4], 1, r8.b)
    
    void* r8_1 = arg1[0x48]
    
    if (r8_1 == 0)
        void* rax_7 = (*(*arg1 + 0x300))(arg1)
        arg1[0x48] = rax_7
        r8_1 = rax_7
    
    int32_t rcx_4 = sx.d(*(r8_1 + 0x410))
    int32_t rdx_1 = sx.d(*(r8_1 + 0x430))
    int32_t rax_8 = sx.d(*(r8_1 + 0x400))
    int32_t r8_2 = sx.d(*(r8_1 + 0x420))
    float var_38_1[0x2] = _mm_cvtps_pd(*(r8_1 + 0xc0))
    int32_t var_40_1 = rax_8
    int32_t var_48_1 = rcx_4
    int32_t var_50_1 = rdx_1
    int32_t var_58_1 = r8_2
    int64_t var_28
    sub_140a2e390(&var_28, 
        LOD(%d/%d) UpdateCounter(%d) EvalCounter(%d) CacheBoneCounter(%d) InitCounter(%d) DeltaSeconds("
    ")", zx.q(*(rdi + 0x558)))
    sub_142409af0(arg2, &var_28, arg3)
    result = sub_141f73df0(rdi)
    
    if (result != 0)
        void* rdx_3 = *(rdi + 0x630)
        
        if (rdx_3 != 0)
            uint32_t r9_2 = zx.d(*(rdx_3 + 2))
            int32_t var_50_2 = r9_2 & 1
            int32_t var_58_2 = r9_2 u>> 4 & 1
            int64_t var_18
            sub_140a2e390(&var_18, URO Rate(%d) SkipUpdate(%d) SkipEval(%d) Interp(%d)", 
                zx.q(*(rdx_3 + 4)))
            int64_t rcx_11 = var_28
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            var_28 = var_18
            int32_t var_10
            int32_t var_20_1 = var_10
            int32_t var_c
            int32_t var_1c_1 = var_c
            result = sub_142409af0(arg2, &var_28, arg3)
    
    int64_t rcx_13 = var_28
    
    if (rcx_13 != 0)
        return sub_140a74f90(rcx_13)

return result
