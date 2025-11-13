// 函数: sub_1423a6ce0
// 地址: 0x1423a6ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1

if (*(rbx + 0x54) == 0)
    void* rcx = *(rbx + 0x100)
    
    if (rcx != 0)
        int64_t* rax = *(arg2 + 8)
        
        if (rax != 0)
            void* rdx = rax[0x1d]
            void* arg_8 = rdx
            
            if (rdx != 0)
                *(rdx + 8) += 1
                rcx = *(rbx + 0x100)
            
            *(rcx + 8) += 1
            *(rdx + 8) += 1
            bool cond:0_1 = data_143f02ba8 == 0
            void* var_18 = rcx
            void* var_10_1 = rdx
            
            if (cond:0_1)
                void*** rcx_4 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                void* rax_1 = &rcx_4[4]
                
                if (rax_1 u> data_143f02bd0)
                    sub_140b0e3d0(&data_143f02bc8, 0x28)
                    rcx_4 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    rax_1 = &rcx_4[4]
                
                data_143f02bac += 1
                int128_t zmm0 = var_18.o
                data_143f02bc8 = rax_1
                *data_143f02ba0 = rcx_4
                data_143f02ba0 = &rcx_4[1]
                rcx_4[1] = 0
                *rcx_4 = &data_143339448
                *(rcx_4 + 0x10) = zmm0
            else
                sub_1423a66c0(&var_18)
            
            sub_1405d1550(&arg_8)

if (*(rbx + 0x100) == 0)
    return 

void* rcx_8 = *(arg2 + 8)

if (rcx_8 == 0)
    return 

if (*(rbx + 0x54) == 0)
    sub_1423cc420(rcx_8, rbx + 0x100, *(rbx + 8), arg4, arg3)

sub_1405d16e0(rbx + 0x100, nullptr)
