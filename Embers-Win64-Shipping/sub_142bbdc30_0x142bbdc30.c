// 函数: sub_142bbdc30
// 地址: 0x142bbdc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t arg_8

if ((*(rcx + 8) & 2) != 0)
    if ((*(*(rcx + 0x2d0) + 0xd0))(rcx, arg3, &arg_8) == 0)
        return sub_142bbddd0(arg1, arg_8)
    
    arg1[8].d = 0xffffffff

sub_142b95d30(*arg1, arg2)
void* rcx_2 = *arg1
int64_t* rdi_1 = *(*(rcx_2 + 0x3e8) + 0x10d8)
int64_t rax_4 = sub_142b922e0(*(*(rcx_2 + 0x90) + 8), "pshinter")

if (rax_4 != 0 && rdi_1 != 0)
    int64_t rdx_1 = *rdi_1
    
    if (rdx_1 != 0)
        int64_t rax_5 = rdx_1(rax_4)
        
        if (rax_5 != 0)
            void* r13_1 = *(*arg1 + 0x3e8)
            int32_t r15_1 = *(r13_1 + 0x624)
            int64_t* rax_6 = *arg1[7]
            arg_8.q = rax_6
            (*(rax_5 + 8))(*rax_6, zx.q(*(arg1 + 0x1c)), zx.q(arg1[4].d), 0, 0)
            uint64_t rdi_2 = zx.q(*(r13_1 + 0x8b0))
            
            while (rdi_2.d != 0)
                rdi_2 = zx.q(rdi_2.d - 1)
                int32_t rsi_1 = *(*(r13_1 + (rdi_2 << 3) + 0x8b8) + 0x44)
                uint32_t rax_9
                uint32_t r14_1
                
                if (r15_1 == rsi_1)
                    r14_1 = *(arg1 + 0x1c)
                    rax_9 = arg1[4].d
                else
                    r14_1 = sub_142b93dd0(*(arg1 + 0x1c), r15_1, rsi_1)
                    rax_9 = sub_142b93dd0(arg1[4].d, r15_1, rsi_1)
                
                (*(rax_5 + 8))(*(arg_8.q + (rdi_2 << 3) + 8), zx.q(r14_1), zx.q(rax_9), 0, 0)

return 0
