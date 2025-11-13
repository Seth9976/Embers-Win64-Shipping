// 函数: sub_1413f25a0
// 地址: 0x1413f25a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int64_t rdx = sx.q(*(arg1 + 0x1c60))

if (rdx.d != 0)
    int32_t rdi_1 = 0
    int32_t r12_1 = 0
    int64_t r15
    r15.b = **(arg1 + 0x1c58) != arg2
    int64_t rbx_1 = 0
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< rdx)
            int64_t* rcx = *(arg1 + 0x1c58) + (rbx_1 << 3)
            
            do
                int32_t rax_3
                rax_3.b = *rcx != arg2
                
                if (zx.d(r15.b) != rax_3)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
                rcx = &rcx[1]
            while (rbx_1 s< rdx)
        
        int32_t rbp_2 = rdi_1 - r9_1.d
        
        if (r15.b != 0)
            if (r12_1 != r9_1.d)
                int64_t rcx_1 = *(arg1 + 0x1c58)
                memmove(rcx_1 + (sx.q(r12_1) << 3), rcx_1 + (r9_1 << 3), rbp_2 << 3)
            
            r12_1 += rbp_2
        
        r15.b ^= 1
    while (rbx_1 s< rdx)
    
    *(arg1 + 0x1c60) = r12_1

uint64_t result = *(arg2 + 0x208)
*(arg2 + 0x208) = 0

if (result != 0)
    void* var_78 = arg1
    uint64_t result_1 = result
    
    if (sub_140a80f40() != 0)
        return sub_1413c7060(&var_78)
    
    if (data_143f138f4 == 0)
        uint32_t rax_7
        
        if (data_143de5480 != 0)
            rax_7.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_7.b != 0)
            int128_t var_68 = var_78.o
            return sub_1413c7060(&var_68)
    
    void var_58
    int64_t* rax_9 = sub_1413dbdb0(&var_58, nullptr, 0xff)
    *(*rax_9 + 0x10) = var_78.o
    void* rcx_7 = *rax_9
    int32_t r8_3 = rax_9[2].d
    int64_t* rdx_5 = rax_9[1]
    int64_t* rbx_2 = *(rcx_7 + 0x28)
    int64_t* arg_8 = rbx_2
    int32_t* rdi_2 = &rbx_2[9]
    
    if (rbx_2 != 0)
        *rdi_2 += 1
        rbx_2 = arg_8
    
    result = sub_1405e48c0(rcx_7, rdx_5, r8_3, 1)
    
    if (rbx_2 != 0)
        result = zx.q(*rdi_2)
        *rdi_2 -= 1
        
        if (result.d == 1)
            return sub_140a2f6e0(arg_8)

return result
