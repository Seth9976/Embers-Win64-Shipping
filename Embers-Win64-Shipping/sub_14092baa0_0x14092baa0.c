// 函数: sub_14092baa0
// 地址: 0x14092baa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
int64_t rcx_1
result, rcx_1 = EnterCriticalSection(arg1 + 0x2e8)
int32_t i = 0

if (*(arg1 + 0x318) s> 0)
    void* r14_1 = nullptr
    
    do
        result = *(arg1 + 0x310)
        void* rdi_1 = r14_1 + result
        
        if (rdi_1 != 0)
            if (*(rdi_1 + 0x38) != 0 || *(rdi_1 + 0x3a) != 0)
                rcx_1.b = 1
            else
                rcx_1.b = 0
            
            if (*(rdi_1 + 0xe0) != 4 || *(rdi_1 + 0x39) != 0)
                result.b = 1
            else
                result.b = 0
            
            if (rcx_1.b == 0 || result.b == 0 || *(rdi_1 + 0xac) s<= 0)
                result.b = 0
            else
                result.b = 1
            
            if (result.b != 0)
                int64_t var_48
                __builtin_memset(&var_48, 0, 0x15)
                sub_1405c5510(&var_48, 0x400)
                int32_t var_40_1
                int64_t rsi_1 = sx.q(var_40_1)
                int32_t rax = (rsi_1 + 0x400).d
                int32_t var_40_2 = rax
                int64_t var_3c
                
                if (rax s> var_3c.d)
                    sub_1405daba0(&var_48)
                
                memset(rsi_1 + var_48, 0, 0x400)
                sub_14093db30(arg1 + 0x1f0, &var_48, arg4)
                int512_t zmm2_1
                result, zmm2_1 = sub_1409207f0(arg1, &var_48, rdi_1)
                char var_34
                
                if (var_34 == 0)
                    result = sub_14093d470(arg1 + 0x1f0, var_48, var_3c:4.d, zmm2_1)
                
                rcx_1 = var_48
                
                if (rcx_1 != 0)
                    result, rcx_1 = sub_140a74f90(rcx_1)
        
        i += 1
        r14_1 += 0xe8
    while (i s< *(arg1 + 0x318))

if (arg1 == -0x2e8)
    return result

return LeaveCriticalSection(arg1 + 0x2e8) __tailcall
