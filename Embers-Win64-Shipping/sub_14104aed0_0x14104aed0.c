// 函数: sub_14104aed0
// 地址: 0x14104aed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* i = *(arg1 + 0x18)

while (i != 0)
    void* r15_1 = *(i + 0xc8)
    int32_t r12_1 = -1
    void* rsi_1 = *(i + 0x78)
    int32_t r13_1 = *(arg1 + 0x10)
    char arg_8 = 0
    void* rbx_3 = **(rsi_1 + 0x6d8) + 0x1c0
    int64_t var_68 = *(r15_1 + 0x20)
    int32_t var_60_1 = 0
    int32_t var_58_1 = r13_1
    
    if (*(r15_1 + 0xfc) != 0)
        sub_141037220(rbx_3, r15_1, 0x400, r13_1)
    else
        r12_1 = *(r15_1 + 0xf0)
        
        if (r12_1 != 0x400)
            arg_8 = 1
            sub_1410129f0(rbx_3, r15_1, r12_1, 0x400, r13_1)
    
    void* rdi_1 = *(rbx_3 + 8)
    int32_t rdx_3 = *(rdi_1 + 0x128)
    int64_t* rcx_2 = *(rdi_1 + 0x30)
    
    if (rdx_3 != 0)
        (*(*rcx_2 + 0xd0))(rcx_2, rdx_3, *(rdi_1 + 0x120))
        *(rdi_1 + 0x128) = 0
    
    int32_t j = 0
    void* rcx_3 = **(rsi_1 + 0x6d8)
    *(rcx_3 + 0x3b90) += *(arg1 + 0x28)
    
    if (*(arg1 + 0x28) s> 0)
        int64_t rsi_2 = 0
        
        do
            int32_t* rdx_5 = *(arg1 + 0x20) + rsi_2
            int64_t var_98 = *(*(*(rdx_5 + 0x10) + 0x10) + 0x20)
            int32_t var_90_1 = 1
            int128_t var_88_1 = *(rdx_5 + 0x18)
            int128_t var_78_1 = *(rdx_5 + 0x28)
            int64_t* rcx_5 = *(*(rbx_3 + 8) + 0x30)
            (*(*rcx_5 + 0x80))(rcx_5, &var_68, zx.q(*rdx_5), zx.q(rdx_5[1]), rdx_5[2], &var_98, 0)
            void* rdx_7 = *(i + 0xc8)
            void* rax_8 = *(rdx_7 + 0x28)
            
            if (rax_8 == 0)
                if (data_1439b4ad4 != 0 && *(rdx_7 + 0x38) != 0)
                    sub_141026da0(*(*(rbx_3 + 8) + 0x118), rdx_7 + 0x30)
            else if (data_1439b4ad4 != 0 && *(rax_8 + 0x30) != 0)
                sub_141026da0(*(*(rbx_3 + 8) + 0x118), rax_8 + 0x28)
            
            j += 1
            rsi_2 += 0x38
        while (j s< *(arg1 + 0x28))
    
    if (arg_8 != 0)
        sub_1410129f0(rbx_3, r15_1, 0x400, r12_1, r13_1)
    
    result = *(i + 0x128)
    i = &result[-0xe]
    
    if (result == 0)
        i = nullptr

return result
