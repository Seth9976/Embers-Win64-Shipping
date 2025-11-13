// 函数: sub_141c6da50
// 地址: 0x141c6da50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141e7c7a0()

if (result == 0)
    return result

void var_38
sub_141e7c8f0(result, &var_38, *(arg1 + 0xc8))

if (sub_141e80b60(&var_38) == 0)
    int32_t var_50_1 = 0
    int64_t* rax_8 = sub_140a84c80(0, 0x30, 0)
    int64_t* var_48_1 = rax_8
    
    if (rax_8 != 0)
        rax_8[1] = arg1
        *rax_8 = &data_142da2598
        *(rax_8 + 0x10) = sub_141c65da0.o
        rax_8[5] = sub_140a387b0()
        *rax_8 = &data_142da25f0
    
    int64_t rbx_1 = 0
    
    if (rax_8 != 0)
        sub_140599630(&data_143a2d488, 1)
        void arg_18
        int64_t* rax_11 = (*(*rax_8 + 0x30))(rax_8, &arg_18)
        int64_t r14_2 = sx.q(data_143a2d490)
        rbx_1 = *rax_11
        int32_t rax_12 = (r14_2 + 1).d
        bool cond:0_1 = rax_12 s<= data_143a2d494
        data_143a2d490 = rax_12
        
        if (not(cond:0_1))
            sub_1405a4f90(&data_143a2d488)
        
        void** rax_15 = (r14_2 << 4) + data_143a2d488
        *rax_15 = rax_8
        rax_15[1].d = 3
    
    *(arg1 + 0x1b8) = rbx_1
    *(arg1 + 0x90)
    *(arg1 + 0x90) = 0
else
    int64_t* rax_1 = sub_1405948a0(&var_38)
    
    if (sub_140d3c6e0(arg1 + 0x78) != arg2)
        if (sub_140d3e110(arg1 + 0x78) != 0)
            int64_t rax_4 = sub_140d3c6e0(arg1 + 0x78)
            int64_t r9_1 = *rax_1
            (*(r9_1 + 0x70))(rax_1, arg1 + 0x70, rax_4, r9_1)
        
        sub_140d3a3a0(arg1 + 0x78, arg2)
        int32_t r8_3
        r8_3.b = sub_140d3e110(arg1 + 0x78) != 0
        *(arg1 + 0x90)
        *(arg1 + 0x90) = r8_3
        bool z_1
        
        if (0 == *(arg1 + 0x90))
            *(arg1 + 0x90) = 0
            z_1 = true
        else
            *(arg1 + 0x90)
            z_1 = false
        
        if (not(z_1))
            int64_t rax_7 = sub_140d3c6e0(arg1 + 0x78)
            int64_t r9_2 = *rax_1
            (*(r9_2 + 0x68))(rax_1, arg1 + 0x70, rax_7, r9_2)

return sub_141e71cd0(&var_38)
