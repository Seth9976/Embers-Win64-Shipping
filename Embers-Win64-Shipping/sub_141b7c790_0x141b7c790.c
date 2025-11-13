// 函数: sub_141b7c790
// 地址: 0x141b7c790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
void*** rbx = nullptr
__builtin_memset(&arg1[0x21], 0, 0x11)
*arg1 = &data_143074840
sub_140dd6180(&arg1[0x25])
void* rdx = data_143f31670
__builtin_memset(&arg1[0x79], 0, 0x60)

if (rdx == 0)
    void*** rax_1 = j_sub_140a82f30(0x278)
    
    if (rax_1 != 0)
        int64_t* rbx_1 = data_143e243c8
        void arg_8
        int64_t* rax_2 = sub_140b58170(&arg_8, "Button", 1)
        int64_t r9_1 = *rbx_1
        int64_t r8_1 = *rax_2
        int64_t arg_18 = r8_1
        int64_t arg_20 = r8_1
        void* rax_3 = (*(r9_1 + 0x88))(rbx_1, data_143e243e8, r8_1, r9_1)
        
        if (rax_3 == 0)
            rax_3 = sub_140e13010()
        
        rbx = sub_14068def0(rax_1, rax_3)
    
    data_143f31670 = rbx
    sub_141bf3c80(&rbx[5])
    sub_141bf3c80(&rbx[0x16])
    sub_141bf3c80(&rbx[0x27])
    sub_141bf3c80(&rbx[0x38])
    rdx = data_143f31670

sub_140de14d0(&arg1[0x25], rdx)
*(arg1 + 0x3a0) = data_14399f5c0
int128_t zmm1 = data_14399f5c0
arg1[0x78].w = 0
*(arg1 + 0x3c3) = 1
*(arg1 + 0x3b0) = zmm1
return arg1
