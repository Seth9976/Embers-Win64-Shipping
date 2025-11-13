// 函数: sub_1406aa660
// 地址: 0x1406aa660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool rax_1

if ((arg1[0x10].d & 0x100) != 0)
    rax_1 = sub_1406aba60(arg1)

if ((arg1[0x10].d & 0x100) == 0 || rax_1 == 0)
    if (sub_1406aae90(arg1) != 0)
        return sub_1406a95f0(&arg1[8], *(arg1 + 0x74)) __tailcall
    
    if ((arg1[0x10].d & 0x20000) != 0)
        char rax_3 = sub_1406aade0(arg1, 1)
        
        if (rax_3 != 0)
            return rax_3
else
    int64_t rdi_1 = sx.q(*(arg1 + 0x74))
    int32_t rax_2 = arg1[0x10].d
    
    if (rdi_1.d != 0)
        if ((test_bit(rax_2, 9) && rdi_1.d u> 9) || zx.q(arg1[3].d) u< rdi_1 || arg1[7] u<= rdi_1
                || not(test_bit(*(arg1[4] + (rdi_1 u>> 5 << 2)), zx.d(rdi_1.b) & 0x1f)))
            sub_1406ad7b0(arg1, error_backref)
            noreturn
        
        void*** rax_7 = j_sub_140a82f30(0x28)
        void*** rdx_2 = rax_7
        
        if (rax_7 == 0)
            rdx_2 = rax_7
        else
            rax_7[1].d = 0xf
            __builtin_memset(rdx_2 + 0xc, 0, 0x14)
            *rdx_2 = &data_142d8b5a0
            rdx_2[4].d = rdi_1.d
        
        rdx_2[3] = arg1[9]
        void* rax_9 = arg1[9]
        int64_t rcx_3 = *(rax_9 + 0x10)
        
        if (rcx_3 != 0)
            rdx_2[2] = rcx_3
            *(*(arg1[9] + 0x10) + 0x18) = rdx_2
            rax_9 = arg1[9]
        
        *(rax_9 + 0x10) = rdx_2
        arg1[9] = rdx_2
        return rax_9
    
    if (test_bit(rax_2, 0x14))
        return sub_1406a95f0(&arg1[8], 0)

sub_1406ad7b0(arg1, error_escape)
noreturn
