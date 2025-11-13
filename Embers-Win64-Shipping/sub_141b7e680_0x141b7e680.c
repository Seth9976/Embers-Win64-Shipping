// 函数: sub_141b7e680
// 地址: 0x141b7e680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
*arg1 = &data_143076ef8
arg1[0x21] = &data_1430771b8
sub_140dd8090(&arg1[0x22])
void*** rbp = nullptr
arg1[0x46] = &data_142d8ad18
arg1[0x47].d = 0x42000000
*(arg1 + 0x23c) = 0x42000000
*(arg1 + 0x244) = 0
*(arg1 + 0x24c) = 0
*(arg1 + 0x250) = data_14399f5c0
arg1[0x4c].b = 0
__builtin_memset(&arg1[0x4d], 0, 0x20)
int64_t zmm1 = data_143dbb1f0
arg1[0x52].d = zmm1.d
arg1[0x51].d = zmm1.d
arg1[0x53].b = 0
int64_t var_48 = zmm1
int128_t zmm0 = var_48:4.d
*(arg1 + 0x294) = zmm0.d
*(arg1 + 0x28c) = zmm0.d
*(arg1 + 0x29c) = 3
arg1[0x54] = 0
arg1[0x55] = 0
arg1[0x56].b &= 0xfc
__builtin_memcpy(&arg1[0x57], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
__builtin_memset(&arg1[0x5a], 0, 0x11)
__builtin_memset(&arg1[0x5d], 0, 0x30)
arg1[0x65] = 0
arg1[0x66] = 0
*(arg1 + 0xb4) |= 1
int64_t var_40

if (data_143f31708 == 0)
    void*** rax_1 = j_sub_140a82f30(0x120)
    void*** rdi_1 = rax_1
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        int64_t* rbx_1 = data_143e243c8
        int64_t* rax_2 = sub_140b58170(&var_48, "ExpandableArea", 1)
        int64_t rdx = data_143e24430
        int64_t r8_1 = *rax_2
        int64_t rax_3 = *rbx_1
        int64_t var_30_1 = r8_1
        var_40 = r8_1
        int64_t* rax_4 = (*(rax_3 + 0x88))(rbx_1, rdx)
        int64_t* rbx_2 = rax_4
        
        if (rax_4 == 0)
            sub_140e133e0()
            rbx_2 = &data_143e26230
        
        *rdi_1 = &data_142ec92e8
        sub_14068e310(&rdi_1[1], &rbx_2[1])
        sub_14068e310(&rdi_1[0x12], &rbx_2[0x12])
        rdi_1[0x23].d = rbx_2[0x23].d
    
    data_143f31708 = rdi_1
    sub_141bf3c80(&rdi_1[5])
    sub_141bf3c80(&rdi_1[0x16])

if (data_143f31710 == 0)
    void*** rax_6 = j_sub_140a82f30(0x88)
    
    if (rax_6 != 0)
        int64_t* rbx_3 = data_143e243c8
        rbp = sub_14068e310(rax_6, 
            (*(*rbx_3 + 0x48))(rbx_3, *sub_140b58170(&var_40, "ExpandableArea.Border", 1), 0))
    
    data_143f31710 = rbp
    sub_141bf3c80(&rbp[4])

void* rbx_4 = data_143f31708
sub_140693270(&arg1[0x23], rbx_4 + 8)
sub_140693270(&arg1[0x34], rbx_4 + 0x90)
arg1[0x45].d = *(rbx_4 + 0x118)
sub_140693270(&arg1[0x46], data_143f31710)
arg1[0x59].b = 0
*(arg1 + 0x2b8) = data_14399f5c0

if (&var_40 != &arg1[0x5a])
    uint128_t zmm0_1 = *(arg1 + 0x2d0)
    *(arg1 + 0x2d0) = zx.o(0)
    int64_t* rbx_5 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp1_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_2 = *rbx_5
                (*(r8_2 + 8))(rbx_5, 1, r8_2)

__builtin_memcpy(&arg1[0x5d], 
    "\x00\x00\x80\x40\x00\x00\x00\x40\x00\x00\x80\x40\x00\x00\x00\x40\x00\x00\x80\x3f\x00\x00\x80\x3f\x"
"00\x00\x80\x3f\x00\x00\x80\x3f", 
    0x20)
return arg1
