// 函数: sub_141b81600
// 地址: 0x141b81600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
*arg1 = &data_14307cfb0
sub_140d3a3a0(arg1 + 0x10c, nullptr)
*(arg1 + 0x114) = 0
sub_140ddb2e0(&arg1[0x25])
void* rbx = data_143f317d0
__builtin_memset(&arg1[0x93], 0, 0x60)
*(arg1 + 0x11c) = 0
arg1[0x24].d = 0x3f800000
arg1[0x8d].b = 0
*(arg1 + 0x46c) = data_14399f5c0
int128_t zmm1 = data_14399f5c0
arg1[0x92].d = 0x3c23d70a
*(arg1 + 0x494) = 1
*(arg1 + 0x48e) = 0x100
*(arg1 + 0x47c) = zmm1

if (rbx == 0)
    void*** rax_1 = j_sub_140a82f30(0x340)
    void*** rdi_1 = rax_1
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        int64_t* rbx_1 = data_143e243c8
        void arg_8
        int64_t r8_1 = *sub_140b58170(&arg_8, "Slider", 1)
        int64_t arg_18 = r8_1
        int64_t arg_20 = r8_1
        int64_t* rax_4 = (*(*rbx_1 + 0x88))(rbx_1, data_143e24440)
        int64_t* rbx_2 = rax_4
        
        if (rax_4 == 0)
            sub_140e13680()
            rbx_2 = &data_143e26360
        
        *rdi_1 = &data_142ec9318
        sub_14068e310(&rdi_1[1], &rbx_2[1])
        sub_14068e310(&rdi_1[0x12], &rbx_2[0x12])
        sub_14068e310(&rdi_1[0x23], &rbx_2[0x23])
        sub_14068e310(&rdi_1[0x34], &rbx_2[0x34])
        sub_14068e310(&rdi_1[0x45], &rbx_2[0x45])
        sub_14068e310(&rdi_1[0x56], &rbx_2[0x56])
        rdi_1[0x67].d = rbx_2[0x67].d
    
    data_143f317d0 = rdi_1
    sub_141bf3c80(&rdi_1[5])
    sub_141bf3c80(&rdi_1[0x16])
    sub_141bf3c80(&rdi_1[0x27])
    sub_141bf3c80(&rdi_1[0x38])
    sub_141bf3c80(&rdi_1[0x49])
    sub_141bf3c80(&rdi_1[0x5a])
    rbx = data_143f317d0

sub_140693270(&arg1[0x26], rbx + 8)
sub_140693270(&arg1[0x37], rbx + 0x90)
sub_140693270(&arg1[0x48], rbx + 0x118)
sub_140693270(&arg1[0x59], rbx + 0x1a0)
sub_140693270(&arg1[0x6a], rbx + 0x228)
sub_140693270(&arg1[0x7b], rbx + 0x2b0)
arg1[0x8c].d = *(rbx + 0x338)
return arg1
