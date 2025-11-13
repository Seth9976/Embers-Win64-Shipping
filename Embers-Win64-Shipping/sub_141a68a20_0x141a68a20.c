// 函数: sub_141a68a20
// 地址: 0x141a68a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = sx.q(arg2[1].d)
int64_t* rdi = arg3

if (r13 s<= 0)
    return 

int64_t rax = *arg2
int64_t rsi_1 = 0
int64_t arg_10 = rax

do
    int64_t* rcx = arg1[1]
    
    if (rcx != 0)
        int64_t rbx_1 = sx.q(sub_141f893b0(rcx, *(rax + (rsi_1 << 2))))
        
        if (rbx_1.d != 0xffffffff)
            int64_t r12_1 = sx.q(sub_141a58b60(arg1, rbx_1.d, *(*rdi + (rsi_1 << 2))))
            
            if (r12_1.d != rbx_1.d)
                int64_t* rcx_2 = arg1[2]
                int64_t r15_2 = rbx_1 * 0x30
                int64_t var_50 = 0
                int64_t var_48_1 = 0
                int64_t* rdi_2 = *rcx_2 + r15_2
                int64_t rax_4 = *rdi_2
                int32_t rax_5 = rdi_2[1].d
                int64_t rax_6 = rdi_2[2]
                sub_140597df0(&var_50, &rdi_2[3])
                int64_t rax_7 = rdi_2[5]
                int64_t* rdi_3 = arg1[2]
                int64_t rcx_4 = *(r15_2 + *rdi_3 + 0x18)
                
                if (rcx_4 != 0)
                    sub_140a74f90(rcx_4)
                
                int32_t rcx_7 = rdi_3[1].d
                int32_t rax_10 = rcx_7 - rbx_1.d
                
                if (rax_10 != 1)
                    int64_t rcx_5 = *rdi_3
                    memmove(rcx_5 + r15_2, sx.q((rbx_1 + 1).d) * 0x30 + rcx_5, (rax_10 - 1) * 0x30)
                    rcx_7 = rdi_3[1].d
                
                rdi_3[1].d = rcx_7 - 1
                int64_t* rdi_4 = arg1[2]
                int32_t rbp_1 = rdi_4[1].d
                rdi_4[1].d = rbp_1 + 1
                
                if (rbp_1 + 1 s> *(rdi_4 + 0xc))
                    sub_1405c4f50(rdi_4)
                
                int64_t rbx_3 = r12_1 * 0x30
                int64_t rdx_8 = *rdi_4 + rbx_3
                memmove(rdx_8 + 0x30, rdx_8, (rbp_1 - r12_1.d) * 0x30)
                int32_t* rbx_4 = rbx_3 + *rdi_4
                int64_t arg_20 = 0
                *(rbx_4 + 0x20) = 0
                *rbx_4 = 0xffffffff
                rbx_4[1] = 0
                __builtin_memset(&rbx_4[4], 0, 0x14)
                
                if (rbx_4[9] s<= 0xffffffff)
                    sub_1405947f0(&rbx_4[6], 0)
                
                int16_t* rax_18 = *(rbx_4 + 0x18)
                
                if (rax_18 != 0)
                    *rax_18 = 0
                
                *rbx_4 = rax_4
                rbx_4[2] = rax_5
                *(rbx_4 + 0x10) = rax_6
                sub_140597df0(&rbx_4[6], &var_50)
                int64_t rcx_12 = var_50
                *(rbx_4 + 0x28) = rax_7
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                
                rdi = arg3
        
        rax = arg_10
    
    rsi_1 += 1
while (rsi_1 s< r13)
