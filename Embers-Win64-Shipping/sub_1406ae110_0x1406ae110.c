// 函数: sub_1406ae110
// 地址: 0x1406ae110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = ((*arg2 - *arg1) s>> 2 << 5) + arg2[1]

if (arg3 != 0)
    int64_t rcx = arg1[3]
    
    if (0x7fffffffffffffff - rcx u< arg3)
        sub_1406afea0()
        noreturn
    
    int32_t arg_8 = 0
    sub_14068ae80(arg1, (arg3 + 0x1f + rcx) u>> 5, &arg_8)
    int64_t rdx_3 = arg1[3]
    
    if (rdx_3 != 0)
        int64_t r10_1 = *arg1
        void* var_18_1
        
        if (rdx_3 s>= 0 || neg.q(rdx_3) == 0)
            var_18_1 = r10_1 + (rdx_3 u>> 5 << 2)
        else
            var_18_1 = r10_1 - ((not.q(rdx_3) u>> 5 << 2) + 4)
        
        int64_t rdx_4 = rdx_3 + arg3
        arg1[3] = rdx_4
        void* var_28_1
        
        if (rdx_3 + arg3 s>= 0 || neg.q(rdx_4) == 0)
            var_28_1 = r10_1 + (rdx_4 u>> 5 << 2)
        else
            var_28_1 = r10_1 - ((not.q(rdx_4) u>> 5 << 2) + 4)
        
        void* r10_2
        
        if (result s>= 0 || neg.q(result) == 0)
            r10_2 = r10_1 + (result u>> 5 << 2)
        else
            r10_2 = r10_1 - ((not.q(result) u>> 5 << 2) + 4)
        
        var_28_1.o = var_28_1.o
        uint64_t rdx_6 = zx.q(rdx_4.d) & 0x1f
        void* r8_1 = var_28_1
        var_18_1.o = var_18_1.o
        uint64_t rcx_6 = zx.q(rdx_3.d) & 0x1f
        void* r9_1 = var_18_1
        
        while (r10_2 != r9_1 || (zx.q(result.d) & 0x1f) != rcx_6)
            if (rcx_6 == 0)
                rcx_6 = 0x1f
                r9_1 -= 4
            else
                rcx_6 -= 1
            
            if (rdx_6 == 0)
                rdx_6 = 0x1f
                r8_1 -= 4
            else
                rdx_6 -= 1
            
            int32_t rax_32 = *r8_1
            
            if ((*r9_1 & 1 << rcx_6.b) == 0)
                *r8_1 = rax_32 & not.d(1 << (rdx_6.d u% 0x20))
            else
                *r8_1 = rax_32 | 1 << (rdx_6.d u% 0x20)
    else
        arg1[3] = arg3

return result
