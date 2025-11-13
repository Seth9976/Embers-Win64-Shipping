// 函数: sub_141b93200
// 地址: 0x141b93200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rax_1 = sub_141c122a0()
void* rdx = *(arg2 + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

int32_t i = 0

if (*(arg1 + 0x30) s<= 0)
    return 

int64_t r14_1 = 0

do
    char* rdi_2 = *(arg1 + 0x28) + r14_1
    rax = sub_141b71960(*(arg2 + 0x10), *(rdi_2 + 4))
    
    if (rax != 0)
        int64_t r8_2 = *rax
        rax = (*(r8_2 + 0x140))(rax, sx.q(*(rax + 0x4c)) + arg2, r8_2)
        int64_t r15_1 = rax
        
        if (rax != 0)
            int64_t rax_2 = sub_141c17b40()
            void* rcx_3 = *(r15_1 + 0x10)
            int64_t rdx_4 = sx.q(*(rax_2 + 0x38))
            
            if (rdx_4.d s<= *(rcx_3 + 0x38) && *(*(rcx_3 + 0x30) + (rdx_4 << 3)) == rax_2 + 0x30)
                int128_t var_78
                sub_140d3a3a0(&var_78, nullptr)
                int64_t var_70_1 = 0
                sub_140d3a3a0(&var_78, arg2)
                int64_t rbx_1 = *(rdi_2 + 0x14)
                char rdi_3 = *rdi_2
                int64_t var_70_2 = *(rdi_2 + 0xc)
                int128_t zmm0_1 = var_78
                int64_t var_58_1 = 0
                int64_t var_50
                sub_140d3a3a0(&var_50, nullptr)
                var_50 = zmm0_1.q
                char var_40_1 = rdi_3
                int64_t rdi_4 = sx.q(*(arg2 + 0x1d8))
                int32_t rax_6 = (rdi_4 + 1).d
                *(arg2 + 0x1d8) = rax_6
                
                if (rax_6 s> *(arg2 + 0x1dc))
                    sub_1405c4ec0(arg2 + 0x1d0)
                
                rax = *(arg2 + 0x1d0)
                int64_t rcx_9 = rdi_4 * 5
                *(rax + (rcx_9 << 3)) = r15_1.o
                *(rax + (rcx_9 << 3) + 0x10) = zmm0_1:8.q.o
                *(rax + (rcx_9 << 3) + 0x20) = rbx_1
    
    i += 1
    r14_1 += 0x1c
while (i s< *(arg1 + 0x30))
