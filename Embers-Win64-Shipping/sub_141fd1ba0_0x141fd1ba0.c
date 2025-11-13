// 函数: sub_141fd1ba0
// 地址: 0x141fd1ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg2

if (rdi == 0)
    return 

if (*(rdi + 0x18) u<= data_143a2dccc)
    void* arg_10 = rdi
    *(rdi + 8) += 1
    sub_140a80f40()
    
    if (data_143f3e848 != 0xffffffff)
        void* rbx_1 = arg_10
        uint32_t rsi_1 = 0
        void* var_28 = nullptr
        sub_1405d16e0(&var_28, rbx_1)
        int32_t rax_2 = data_14399fa54
        void* arg_18 = rbx_1
        *(rdi + 8) += 1
        int32_t rbp_1 = *(arg_10 + 0x18)
        sub_1405d1550(&arg_18)
        int32_t r10_1 = data_14399fa54
        int32_t var_20_1 = rbp_1
        uint32_t r9_1 = 0x10
        uint64_t rdx_2 = zx.q(r10_1 u/ 3)
        uint32_t rax_5
        
        do
            uint32_t r8_2 = (r9_1 + rsi_1) u>> 1
            rax_5 = r8_2
            int32_t temp2_1 = *(&data_143a2dc90 + (zx.q(r8_2 - 1) << 2))
            
            if (rbp_1 u> temp2_1)
                rax_5 = r9_1
            
            if (rbp_1 u> temp2_1)
                rsi_1 = r8_2
            
            r9_1 = rax_5
        while (rax_5 - rsi_1 u> 1)
        int64_t rdi_1 =
            sx.q(*((((sx.q(r10_1 - (rdx_2 * 3).d) << 4) + zx.q(rsi_1)) << 4) + 0x143f3e538))
        int32_t rax_7 = (rdi_1 + 1).d
        *((((sx.q(r10_1 - (rdx_2 * 3).d) << 4) + zx.q(rsi_1)) << 4) + 0x143f3e538) = rax_7
        
        if (rax_7 s> *((((sx.q(r10_1 - (rdx_2 * 3).d) << 4) + zx.q(rsi_1)) << 4) + 0x143f3e53c))
            sub_1405a4f90((((sx.q(r10_1 - (rdx_2 * 3).d) << 4) + zx.q(rsi_1)) << 4) +
                &data_143f3e530)
        
        void* rax_8 = var_28
        int64_t* rcx_7 = (rdi_1 << 4)
            + *((((sx.q(r10_1 - (rdx_2 * 3).d) << 4) + zx.q(rsi_1)) << 4) + &data_143f3e530)
        *rcx_7 = rax_8
        
        if (rax_8 != 0)
            *(rax_8 + 8) += 1
        
        *(rcx_7 + 0xc) = rax_2
        rcx_7[1].d = rbp_1
        sub_1405d1550(&var_28)
    
    sub_1405d1550(&arg_10)

sub_1405d16e0(arg2, nullptr)
