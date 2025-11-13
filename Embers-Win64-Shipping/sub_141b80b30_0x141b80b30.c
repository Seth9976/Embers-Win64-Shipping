// 函数: sub_141b80b30
// 地址: 0x141b80b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
*arg1 = &data_14307a3f0
sub_140dd8940(&arg1[0x21])
sub_140d3a3a0(&arg1[0x5b], nullptr)
arg1[0x5c] = 0
sub_140d3a3a0(&arg1[0x5f], nullptr)
void* rbx = data_143f317a0
__builtin_memset(&arg1[0x60], 0, 0x18)
int64_t var_28

if (rbx == 0)
    void*** rax_1 = j_sub_140a82f30(0x1a0)
    void*** rsi_1 = rax_1
    
    if (rax_1 == 0)
        rsi_1 = nullptr
    else
        int64_t* rbx_1 = data_143e243c8
        void var_38
        int64_t* rax_2 = sub_140b58170(&var_38, "ProgressBar", 1)
        int64_t rdx = data_143e24420
        int64_t r8_1 = *rax_2
        int64_t rax_3 = *rbx_1
        int64_t var_30_1 = r8_1
        var_28 = r8_1
        int64_t* rax_4 = (*(rax_3 + 0x88))(rbx_1, rdx)
        int64_t* rbx_2 = rax_4
        
        if (rax_4 == 0)
            sub_140e13500()
            rbx_2 = &data_143e25ba0
        
        *rsi_1 = &data_142ec92d0
        sub_14068e310(&rsi_1[1], &rbx_2[1])
        sub_14068e310(&rsi_1[0x12], &rbx_2[0x12])
        sub_14068e310(&rsi_1[0x23], &rbx_2[0x23])
    
    data_143f317a0 = rsi_1
    sub_141bf3c80(&rsi_1[5])
    sub_141bf3c80(&rsi_1[0x16])
    sub_141bf3c80(&rsi_1[0x27])
    rbx = data_143f317a0

sub_140693270(&arg1[0x22], rbx + 8)
sub_140693270(&arg1[0x33], rbx + 0x90)
sub_140693270(&arg1[0x44], rbx + 0x118)
arg1[0x39].b = 0
*(arg1 + 0x1b8) = data_14399f5c0
uint128_t zmm0

if (&var_28 != &arg1[0x3a])
    zmm0 = *(arg1 + 0x1d0)
    *(arg1 + 0x1d0) = zx.o(0)
    int64_t* rbx_3 = _mm_bsrli_si128(zmm0, 8).q
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp1_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_2 = *rbx_3
                (*(r8_2 + 8))(rbx_3, 1, r8_2)

*(arg1 + 0x2cc) = 0
arg1[0x59].d = 0
zmm0 = data_14399f5c0
arg1[0x5a] = 0
*(arg1 + 0x2e8) = zmm0
return arg1
