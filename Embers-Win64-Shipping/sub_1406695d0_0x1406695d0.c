// 函数: sub_1406695d0
// 地址: 0x1406695d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(&arg1[1], 0, 0x14)
__builtin_memset(&arg1[4], 0, 0x38)
arg1[0xe] = 0
*arg1 = &data_142d84eb0
arg1[0xb] = 0
arg1[0xc] = 1
arg1[0xd].w = 0
arg1[0xe] = *arg2
*arg2 = 0
arg1[0xf].d = arg2[1].d
*(arg1 + 0x7c) = *(arg2 + 0xc)
arg2[1] = 0
int32_t rax_3 = arg1[0xf].d
arg1[0x10] = 0

if (rax_3 s> 1)
    int64_t rsi_1 = arg1[0xe]
    void*** rax_5 = j_sub_140a82f30(0xb0)
    void*** rdi_3
    
    if (rax_5 == 0)
        rdi_3 = nullptr
    else
        rdi_3 = sub_1406693d0(rax_5, rsi_1, sx.q(rax_3 - 1) * 2, 0, 0)
    
    void arg_8
    
    if (&arg1[0x10] != &arg_8)
        void*** rsi_2 = arg1[0x10]
        arg1[0x10] = rdi_3
        
        if (rsi_2 != 0)
            *rsi_2 = &data_142d84578
            
            if (rsi_2[0x15].b != 0)
                sub_140a74f90(rsi_2[0x12])
                rsi_2[0x12] = 0
            
            sub_140b4cb40(rsi_2)
            j_sub_140a74f90(rsi_2)
    else if (rdi_3 != 0)
        *rdi_3 = &data_142d84578
        
        if (rdi_3[0x15].b != 0)
            sub_140a74f90(rdi_3[0x12])
            rdi_3[0x12] = 0
        
        sub_140b4cb40(rdi_3)
        j_sub_140a74f90(rdi_3)
    
    arg1[4] = arg1[0x10]

return arg1
