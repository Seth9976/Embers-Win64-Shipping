// 函数: sub_141b810c0
// 地址: 0x141b810c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
*arg1 = &data_14307c160
sub_140dd8c90(&arg1[0x21])
void* rdx = data_143f317b8
void*** rbx = nullptr
int128_t zmm0 = data_142d3f6c0
arg1[0xc0] = 0
arg1[0xc1] = 0
arg1[0xbe] = 0
arg1[0xbf].d = 0
*(arg1 + 0xb4) &= 0xfe
arg1[0xbc].w = 0x101
*(arg1 + 0x5e2) = 1
*(arg1 + 0x5e4) = 0x41800000
arg1[0xbd].d = 0x41800000
*(arg1 + 0x5ec) = zmm0

if (rdx == 0)
    void*** rax_1 = j_sub_140a82f30(0x4d0)
    
    if (rax_1 != 0)
        int64_t* rbx_1 = data_143e243c8
        void arg_8
        int64_t* rax_2 = sub_140b58170(&arg_8, "Scrollbar", 1)
        int64_t r9_1 = *rbx_1
        int64_t r8_1 = *rax_2
        int64_t arg_18 = r8_1
        int64_t arg_20 = r8_1
        void* rax_3 = (*(r9_1 + 0x88))(rbx_1, data_143e24428, r8_1, r9_1)
        
        if (rax_3 == 0)
            rax_3 = sub_140e13580()
        
        rbx = sub_140dd8b40(rax_1, rax_3)
    
    data_143f317b8 = rbx
    sub_141bf3d60(rbx)
    rdx = data_143f317b8

sub_140de17f0(&arg1[0x21], rdx)
return arg1
