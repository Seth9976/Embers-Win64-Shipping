// 函数: sub_14205a1d0
// 地址: 0x14205a1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
int64_t* rax = *(arg1 + 0x70)
void* rdx = &rax[sx.q(*(arg1 + 0x78))]

if (rax == rdx)
    return arg2

do
    void* rbx_1 = *rax
    
    if (rbx_1 != 0)
        int64_t* rcx_1 = *(rbx_1 + 0x30)
        
        if (rcx_1 != 0 && *(rcx_1 + 0x6c) == arg3)
            int32_t rdi = 0
            int64_t r12 = sx.q((*(*rcx_1 + 0x60))(rcx_1))
            void* r13 = *(**(*(rbx_1 + 0x30) + 0x40) + (r12 << 3))
            int32_t r15 = *(r13 + 8)
            
            if (r15 != 0)
                do
                    int32_t var_34_1 = rdi
                    void* rdx_2 = sx.q(rdi) * 0x150 + *(rbx_1 + 0x20)
                    void* r8 = *(rdx_2 + 0x38)
                    void* rcx_5 = *(rdx_2 + 0x128)
                    int64_t rax_5 = *(rcx_5 + 0x10)
                    int64_t var_60_1 = *(rdx_2 + 0x68)
                    int64_t rax_7
                    int64_t rdx_3
                    rdx_3:rax_7 = mulu.dp.q(-0x5555555555555555, zx.q(*(rcx_5 + 0x18)))
                    int32_t rax_8 = *(r8 + 8)
                    int64_t* rcx_7 = *(r13 + 0x18)
                    int32_t var_40_1 = *(r8 + 4)
                    int32_t var_44_1 = *(r8 + 0x10)
                    int64_t rax_11 = rcx_7[3]
                    uint32_t var_3c_1 = (rdx_3 u>> 3).d
                    int32_t rax_13 = (*(*rcx_7 + 0x58))()
                    int32_t var_50_1 = 0
                    int64_t rbp_1 = sx.q(arg2[4])
                    int32_t var_4c_1 = *(r13 + 0xa8)
                    int32_t var_30_1 = r12.d
                    int32_t rax_15 = (rbp_1 + 1).d
                    arg2[4] = rax_15
                    
                    if (rax_15 s> arg2[5])
                        sub_1405c4fe0(&arg2[2])
                    
                    int64_t rax_16 = *(arg2 + 8)
                    rdi += 1
                    int64_t rcx_10 = rbp_1 << 6
                    *(rcx_10 + rax_16) = rax_5.o
                    *(rcx_10 + rax_16 + 0x10) = rax_11.o
                    *(rcx_10 + rax_16 + 0x20) = rax_8.o
                    *(rcx_10 + rax_16 + 0x30) = rax_13.o
                while (rdi u< r15)
            
            return arg2
    
    rax = &rax[1]
while (rax != rdx)

return arg2
