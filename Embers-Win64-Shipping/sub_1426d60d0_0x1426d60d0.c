// 函数: sub_1426d60d0
// 地址: 0x1426d60d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg3 + 0x10) = data_143b58058.q
arg3[6] = data_143b58060
int32_t rdi = 3
*arg3 = data_143b57f9c
char rcx

if ((*(arg1 + 0xac) & 0x400) == 0)
    int64_t* rcx_2 = *(arg2 + 0xc0) + 0x220
    char rax_3
    rax_3, arg4 = (*(*rcx_2 + 0x40))(rcx_2)
    rcx = rax_3
else
    rcx = 0

arg3[9].b ^= (arg3[9].b ^ rcx) & 1

if ((arg3[9].b & 1) == 0)
    int32_t rax_5 = sub_1426e6600(arg1, arg2, arg3, arg4)
    rdi = rax_5
    
    if (rax_5 != 3)
        return rax_5

if ((*(arg1 + 0xac) & 1) != 0)
    void* rbp_1 = *(arg2 + 0xb8)
    
    if (rbp_1 != 0)
        if (*(arg3 + 8) != 0)
            sub_1426c1a20(rbp_1, arg1[0x12].b, *(arg3 + 8))
        
        void* (* var_28_1)(int64_t* arg1, void* arg2, float arg3, float arg4, float arg5 @ zmm1) =
            sub_1426e4f10
        int32_t var_20_1 = 0
        int64_t var_38 = 0
        int32_t var_30_1 = 0
        void*** rax_6 = sub_1405978f0(0x30, &var_38)
        
        if (rax_6 != 0)
            *rax_6 = &data_143477f88
            sub_140d3a3a0(&rax_6[1], arg1)
            *(rax_6 + 0x10) = var_28_1.o
            rax_6[5] = sub_140a387b0()
        
        void arg_8
        *(arg3 + 8) = *sub_1426bbe90(rbp_1, &arg_8, arg1[0x12].b, arg1, &var_38)

return rdi
