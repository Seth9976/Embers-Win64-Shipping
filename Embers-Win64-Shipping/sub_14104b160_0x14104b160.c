// 函数: sub_14104b160
// 地址: 0x14104b160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* rax_7 = &__return_addr
void* rdi = *(arg1 + 0x28)
void* i = *(arg1 + 0x20)
void* rdx = *(rdi + 0x10)
void* arg_8 = rdx

if (i != 0)
    int64_t r13
    int64_t var_20_1 = r13
    
    do
        void* rbp_1 = *(i + 0xc8)
        r13.b = 0
        void* rsi_1 = *(i + 0x78)
        int32_t r15_1 = -1
        arg2 = *(arg1 + 0x30)
        int32_t r12_1 = *(arg1 + 0x10)
        int128_t zmm1 = *(arg1 + 0x40)
        void* rdi_2 = **(rsi_1 + 0x6d8) + 0x1c0
        int64_t var_58 = *(rbp_1 + 0x20)
        int64_t var_88 = *(rdx + 0x20)
        int32_t var_50_1 = 0
        int32_t var_48_1 = r12_1
        int32_t var_80_1 = 1
        int128_t var_78_1 = arg2
        int128_t var_68_1 = zmm1
        
        if (*(rbp_1 + 0xfc) != 0)
            arg2 = sub_141037220(rdi_2, rbp_1, 0x400, r12_1)
        else
            r15_1 = *(rbp_1 + 0xf0)
            
            if (r15_1 != 0x400)
                r13.b = 1
                arg2 = sub_1410129f0(rdi_2, rbp_1, r15_1, 0x400, r12_1)
        
        void* rcx_2 = **(rsi_1 + 0x6d8)
        *(rcx_2 + 0x3b90) += 1
        void* rsi_2 = *(rdi_2 + 8)
        int32_t rdx_3 = *(rsi_2 + 0x128)
        int64_t* rcx_3 = *(rsi_2 + 0x30)
        
        if (rdx_3 != 0)
            (*(*rcx_3 + 0xd0))(rcx_3, rdx_3, *(rsi_2 + 0x120))
            *(rsi_2 + 0x128) = 0
            rsi_2 = *(rdi_2 + 8)
        
        int64_t* rcx_4 = *(rsi_2 + 0x30)
        (*(*rcx_4 + 0x80))(rcx_4, &var_58, zx.q(*(arg1 + 0x14)), zx.q(*(arg1 + 0x18)), 
            *(arg1 + 0x1c), &var_88, 0)
        void* rdx_5 = *(i + 0xc8)
        void* rax_6 = *(rdx_5 + 0x28)
        
        if (rax_6 == 0)
            if (data_1439b4ad4 != 0 && *(rdx_5 + 0x38) != 0)
                arg2 = sub_141026da0(*(*(rdi_2 + 8) + 0x118), rdx_5 + 0x30)
        else if (data_1439b4ad4 != 0 && *(rax_6 + 0x30) != 0)
            arg2 = sub_141026da0(*(*(rdi_2 + 8) + 0x118), rax_6 + 0x28)
        
        if (r13.b != 0)
            arg2 = sub_1410129f0(rdi_2, rbp_1, 0x400, r15_1, r12_1)
        
        rax_7 = *(i + 0x128)
        rdx = arg_8
        i = &rax_7[-0xe]
        
        if (rax_7 == 0)
            i = nullptr
    while (i != 0)
    
    rdi = *(arg1 + 0x28)

if (rdi == 0)
    *(arg1 + 0x28) = 0
    return rax_7

sub_141059a80(rdi, arg2, rdx, 0)
int64_t rax_8 = j_sub_140a74f90(rdi)
*(arg1 + 0x28) = 0
return rax_8
