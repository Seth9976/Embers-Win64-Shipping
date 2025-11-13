// 函数: sub_141b811f0
// 地址: 0x141b811f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
void*** rbp = nullptr
arg1[0x21] = 0
arg1[0x22] = 0
arg1[0x23].b = 1
*arg1 = &data_14307c470
sub_140dd9270(&arg1[0x24])
sub_140dd8c90(&arg1[0x69])
arg1[0x105].w = 1
*(arg1 + 0x82a) = 0
__builtin_memcpy(arg1 + 0x82c, 
    "\x00\x00\x10\x41\x00\x00\x10\x41\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x"
"00\x00\x01\x00\x00", 
    0x1d)
*(arg1 + 0x84c) = 0
arg1[0x10a].b = 0
*(arg1 + 0x854) = 0x3f800000
arg1[0x10b] = 0
arg1[0x10c] = 0
arg1[0x10e] = 0
arg1[0x10f] = 0
*(arg1 + 0xb4) &= 0xfe
bool cond:0 = data_143f317c0 != 0
*(arg1 + 0xc2) = 1
void arg_8
int64_t arg_18
int64_t arg_20

if (not(cond:0))
    void*** rax_1 = j_sub_140a82f30(0x228)
    void*** rsi_1 = rax_1
    
    if (rax_1 == 0)
        rsi_1 = nullptr
    else
        int64_t* rbx_1 = data_143e243c8
        int64_t r8_1 = *sub_140b58170(&arg_8, "ScrollBox", 1)
        arg_18 = r8_1
        arg_20 = r8_1
        int64_t* rax_4 = (*(*rbx_1 + 0x88))(rbx_1, data_143e24488)
        int64_t* rbx_2 = rax_4
        
        if (rax_4 == 0)
            sub_140e13600()
            rbx_2 = &data_143e27e80
        
        *rsi_1 = &data_142ec93f0
        sub_14068e310(&rsi_1[1], &rbx_2[1])
        sub_14068e310(&rsi_1[0x12], &rbx_2[0x12])
        sub_14068e310(&rsi_1[0x23], &rbx_2[0x23])
        sub_14068e310(&rsi_1[0x34], &rbx_2[0x34])
    
    data_143f317c0 = rsi_1
    sub_141bf3c80(&rsi_1[5])
    sub_141bf3c80(&rsi_1[0x16])
    sub_141bf3c80(&rsi_1[0x27])
    sub_141bf3c80(&rsi_1[0x38])

if (data_143f317c8 == 0)
    void*** rax_5 = j_sub_140a82f30(0x4d0)
    
    if (rax_5 != 0)
        int64_t* rbx_3 = data_143e243c8
        int64_t* rax_6 = sub_140b58170(&arg_8, "ScrollBar", 1)
        int64_t r9_1 = *rbx_3
        int64_t r8_2 = *rax_6
        arg_18 = r8_2
        arg_20 = r8_2
        void* rax_7 = (*(r9_1 + 0x88))(rbx_3, data_143e24428, r8_2, r9_1)
        
        if (rax_7 == 0)
            rax_7 = sub_140e13580()
        
        rbp = sub_140dd8b40(rax_5, rax_7)
    
    data_143f317c8 = rbp
    sub_141bf3d60(rbp)

void* rbx_4 = data_143f317c0
sub_140693270(&arg1[0x25], rbx_4 + 8)
sub_140693270(&arg1[0x36], rbx_4 + 0x90)
sub_140693270(&arg1[0x47], rbx_4 + 0x118)
sub_140693270(&arg1[0x58], rbx_4 + 0x1a0)
sub_140de17f0(&arg1[0x69], data_143f317c8)
*(arg1 + 0x851) = 1
return arg1
