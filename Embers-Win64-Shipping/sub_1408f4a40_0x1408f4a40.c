// 函数: sub_1408f4a40
// 地址: 0x1408f4a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ed8440(arg1)
int64_t* rax = sub_1408f4ea0()

if (rax != 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 8))(rax, rdx_1)

int32_t rax_1 = arg1[0x3f].d

if (rax_1 == 0 || rax_1 == 1)
    void* rax_2 = arg1[0x14]
    
    if (rax_2 != 0)
        int64_t arg_8 = *(rax_2 + 0x18)
        int64_t var_18
        sub_140b63b70(&arg_8, &var_18)
        
        if (&arg1[0x3e] == &var_18)
            int64_t rcx_3 = var_18
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
        else
            int64_t rcx_2 = arg1[0x3e]
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            arg1[0x3e] = var_18
            int32_t var_10
            arg1[0x3f].d = var_10
            int32_t var_c
            *(arg1 + 0x1fc) = var_c

void* result = zx.q(arg1[0x3f].d)

if (result.d != 0 && result.d != 1)
    result = sub_142033b60(&arg1[0x3e], arg1[0x40].d)
    void* result_1 = result
    
    if (result == 0)
        result_1 = nullptr
    else
        void* rax_7 = sub_1408f5ff0()
        void* rcx_5 = *(result_1 + 0x10)
        result = rax_7 + 0x30
        int64_t rdx_4 = sx.q(*(result + 8))
        
        if (rdx_4.d s> *(rcx_5 + 0x38) || *(*(rcx_5 + 0x30) + (rdx_4 << 3)) != result)
            result_1 = nullptr
    
    arg1[0x49] = result_1
    
    if (result_1 != 0)
        *(arg1 + 0x230) = *(result_1 + 0x28)
        *(arg1 + 0x250) = *(result_1 + 0x40)
        *(arg1 + 0x260) = *(result_1 + 0x50)
        *(arg1 + 0x270) = *(result_1 + 0x60)
        *(arg1 + 0x280) = *(result_1 + 0x70)
        *(arg1 + 0x290) = *(result_1 + 0x80)
        *(arg1 + 0x2a0) = *(result_1 + 0x90)
        *(arg1 + 0x311) = 1

return result
