// 函数: sub_1426b6cf0
// 地址: 0x1426b6cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rbx = 0
uint64_t result = 0

if (*(arg1 + 0x38) s<= 0)
label_1426b6d30:
    void* rcx = *(arg2 + 0x30)
    
    if (rcx == 0)
        result.b = 0
    else
        int32_t var_68_1 = 0x7f800000
        int32_t var_70_1 = 0
        int64_t arg_8 = 0
        void* rax = sub_140d2e1f0(rcx, arg1, 0, 0xfffffff, 0, 0)
        void* r14_1 = rax
        void* rax_1
        int64_t rax_2
        void* rdx_1
        
        if (rax != 0)
            rax_1 = sub_14272e980()
            rdx_1 = *(r14_1 + 0x10)
            rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax == 0 || rax_2.d s> *(rdx_1 + 0x38)
                || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            r14_1 = nullptr
            int64_t var_38_2 = 0
        else
            void* var_38_1 = r14_1
        
        var_68_1.q = arg1
        var_70_1.q = arg2
        int64_t var_50 = 0
        int32_t var_48_1 = 0
        int16_t var_58 = 0
        sub_1426b5430(0, r14_1, 0, &var_58, &var_50, var_70_1, var_68_1)
        sub_1426a3230(var_50, var_48_1, 0)
        int32_t r11_1 = 0
        
        if (var_48_1 s> 0)
            int64_t rax_5 = var_50
            int64_t* r10_2 = nullptr
            
            do
                r11_1 += 1
                void* rdx_4 = *(r10_2 + rax_5)
                int16_t r8_1 = *(r10_2 + rax_5 + 0x14) + rbx
                char r9_1 = *(r10_2 + rax_5 + 0x16)
                int16_t rcx_3 = *(r10_2 + rax_5 + 0x10)
                int64_t rax_6 = *(r10_2 + rax_5 + 8)
                r10_2 = &r10_2[3]
                *(rdx_4 + 0x48) = rax_6
                *(rdx_4 + 0x50) = rcx_3
                *(rdx_4 + 0x52) = r8_1
                *(rdx_4 + 0x54) = r9_1
                rax_5 = var_50
                rbx += *(r10_2 + rax_5 - 6)
            while (r11_1 s< var_48_1)
        
        int64_t rsi_1 = sx.q(*(arg1 + 0x38))
        int32_t rax_7 = (rsi_1 + 1).d
        *(arg1 + 0x38) = rax_7
        
        if (rax_7 s> *(arg1 + 0x3c))
            sub_1405a4df0(arg1 + 0x30)
        
        result = *(arg1 + 0x30)
        int64_t rcx_5 = rsi_1 * 3
        *(result + (rcx_5 << 3)) = arg2.o
        *(result + (rcx_5 << 3) + 0x10) = rbx.q
        int64_t rcx_6 = var_50
        *arg3 = r14_1
        *arg4 = rbx
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        result.b = 1
else
    int64_t* r10_1 = *(arg1 + 0x30)
    
    while (*r10_1 != arg2)
        result = zx.q(result.d + 1)
        r10_1 = &r10_1[3]
        
        if (result.d s>= *(arg1 + 0x38))
            goto label_1426b6d30
    
    *arg3 = r10_1[1]
    *arg4 = r10_1[2].w
    result.b = 1

return result
