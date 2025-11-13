// 函数: sub_14278ecb0
// 地址: 0x14278ecb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xa4] == 0)
    return 0

void*** rax = j_sub_140a82f30(0x730)
void*** result

if (rax == 0)
    result = nullptr
else
    result = sub_142786b40(rax, arg1)

void* rcx_1 = *(arg1[0xa4] + 0xc0)

if (rcx_1 != 0 && sub_141d1e500(rcx_1) != 0)
    int64_t* rax_4 = j_sub_140a82f30(0xf0)
    int64_t* rbx_1 = rax_4
    
    if (rax_4 == 0)
        rbx_1 = nullptr
    else
        __builtin_memset(rax_4, 0, 0xa0)
        __builtin_memset(&rax_4[0x18], 0, 0x30)
    
    sub_142790c70(arg1, rbx_1)
    uint64_t* rax_5 = j_sub_140a82f30(0x28)
    uint64_t* rdi_1 = rax_5
    
    if (rax_5 == 0)
        rdi_1 = nullptr
    else
        __builtin_memset(rax_5, 0, 0x21)
    
    sub_142791800(arg1, rdi_1)
    int64_t* var_40_1 = rbx_1
    
    if (sub_140a80f40() != 0)
    label_14278ee49:
        
        if (result != 0)
            sub_142796840(result, rbx_1, 0)
            sub_142796d30(result, rdi_1)
    else
        if (data_143f138f4 == 0)
            if (data_143de5480 == 0)
                goto label_14278ee49
            
            uint32_t rax_7
            rax_7.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_7.b == 0)
                goto label_14278ee7a
            
            goto label_14278ee49
        
    label_14278ee7a:
        void var_30
        void** rax_8 = sub_14278ef00(&var_30, nullptr, 0xff)
        void* rcx_7 = *rax_8
        *(rcx_7 + 0x10) = result.o
        *(rcx_7 + 0x20) = rdi_1
        void* rcx_8 = *rax_8
        int64_t* rdi_2 = *(rcx_8 + 0x30)
        
        if (rdi_2 != 0)
            rdi_2[9].d += 1
        
        sub_140778000(rcx_8, rax_8[1], rax_8[2].d, 1)
        
        if (rdi_2 != 0)
            rdi_2[9].d -= 1
            
            if (rdi_2[9].d == 1)
                sub_140a2f6e0(rdi_2)

return result
