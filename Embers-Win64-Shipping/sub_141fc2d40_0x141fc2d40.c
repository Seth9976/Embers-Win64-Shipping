// 函数: sub_141fc2d40
// 地址: 0x141fc2d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int64_t rbp = sx.q(sub_14230f1e0(arg2, nullptr))
*arg1 = 0

if (rbp.d != 0xffffffff)
    int64_t rdi_1 = sx.q(data_143f3d218)
    
    if (rbp.d s>= rdi_1.d)
        int32_t rax_2 = rdi_1.d + rbp.d - rdi_1.d + 1
        bool cond:0_1 = rax_2 s<= data_143f3d21c
        data_143f3d218 = rax_2
        
        if (not(cond:0_1))
            sub_1405a4f90(&data_143f3d210)
        
        memset((rdi_1 << 4) + data_143f3d210, 0, sx.q(rbp.d - rdi_1.d + 1) << 4)
    
    int64_t r12_2 = rbp << 4
    int64_t* rdi_3 = data_143f3d210 + r12_2
    int64_t rsi_4 = sx.q(rdi_3[1].d)
    int32_t rax_3 = (rsi_4 + 1).d
    rdi_3[1].d = rax_3
    
    if (rax_3 s> *(rdi_3 + 0xc))
        sub_1405a4f90(rdi_3)
    
    int64_t* rdx_4 = (rsi_4 << 4) + *rdi_3
    *rdx_4 = 0
    rdx_4[1].d = 0
    
    if (arg3 != rdx_4 && arg3[1].d != 0)
        int64_t* rcx_5 = *arg3
        
        if (rcx_5 != 0)
            (*(*rcx_5 + 0x40))(rcx_5)
    
    int64_t rax_5 = data_143f3d210
    int64_t rax_6 = *(r12_2 + rax_5)
    int64_t rcx_7 = sx.q(*(r12_2 + rax_5 + 8)) * 2
    
    if (*(rax_6 + (rcx_7 << 3) - 8) != 0)
        int64_t* rcx_8 = *(rax_6 + (rcx_7 << 3) - 0x10)
        void arg_8
        
        if (rcx_8 != 0)
            rbx = *(*(*rcx_8 + 0x30))(rcx_8, &arg_8)
    
    *arg1 = rbx
    sub_14231dd00(&data_143f3d220, rbp.d, 1)

return arg1
