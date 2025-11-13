// 函数: sub_142bbddd0
// 地址: 0x142bbddd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[8].d = arg2
sub_142b961f0(*arg1, arg2)
void* rcx_1 = *arg1
int64_t* rdi = *(*(rcx_1 + 0x3e8) + 0x10d8)
int64_t rax_1 = sub_142b922e0(*(*(rcx_1 + 0x90) + 8), "pshinter")

if (rax_1 != 0 && rdi != 0)
    int64_t rdx = *rdi
    
    if (rdx != 0)
        int64_t result = rdx(rax_1)
        
        if (result == 0)
            return result
        
        void* r13 = *(*arg1 + 0x3e8)
        int32_t r15 = *(r13 + 0x624)
        int64_t* rax_2 = *arg1[7]
        (*(result + 8))(*rax_2, zx.q(*(arg1 + 0x1c)), zx.q(arg1[4].d), 0, 0)
        uint64_t rdi_1 = zx.q(*(r13 + 0x8b0))
        
        while (rdi_1.d != 0)
            rdi_1 = zx.q(rdi_1.d - 1)
            int32_t rsi_1 = *(*(r13 + (rdi_1 << 3) + 0x8b8) + 0x44)
            uint32_t rax_5
            uint32_t r14_1
            
            if (r15 == rsi_1)
                r14_1 = *(arg1 + 0x1c)
                rax_5 = arg1[4].d
            else
                r14_1 = sub_142b93dd0(*(arg1 + 0x1c), r15, rsi_1)
                rax_5 = sub_142b93dd0(arg1[4].d, r15, rsi_1)
            
            (*(result + 8))(rax_2[rdi_1 + 1], zx.q(r14_1), zx.q(rax_5), 0, 0)

return 0
