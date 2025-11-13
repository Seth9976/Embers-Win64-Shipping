// 函数: sub_140635840
// 地址: 0x140635840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg1 != 0)
    void* rax = sub_1424890f0()
    void* rcx = *(arg1 + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (result << 3)) == rax + 0x30)
        void* rcx_1 = *(arg1 + 0x280)
        
        if (rcx_1 != 0)
            uint64_t var_18 = 0
            int32_t var_10 = 0
            sub_141f5e6a0(rcx_1, &var_18)
            void* rbx
            
            if (var_10 s<= 0)
                rbx.b = 0
            else
                int32_t var_28[0x4]
                int32_t* rax_1 = sub_141f5e140(*(arg1 + 0x280), &var_28, *var_18, 0)
                rbx.b = 1
                *arg2 = *rax_1
                arg2[1].d = rax_1[2]
            
            uint64_t rcx_3 = var_18
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            return zx.q(rbx.b)

result.b = 0
return result
