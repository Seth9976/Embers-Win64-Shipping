// 函数: sub_141b7ca20
// 地址: 0x141b7ca20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
__builtin_memset(&arg1[0x21], 0, 0x11)
*arg1 = &data_1430753b0
sub_140d3a3a0(arg1 + 0x124, nullptr)
*(arg1 + 0x12c) = 0
sub_140dd6730(&arg1[0x27])
void* rdx = data_143f31678
*(arg1 + 0x70c) = 0
*(arg1 + 0x714) = 0
__builtin_memcpy(&arg1[0xe4], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
arg1[0xe7] = 0
arg1[0xe8] = 0
__builtin_memset(&arg1[0xea], 0, 0x20)
int64_t var_38

if (rdx == 0)
    void*** rax_1 = j_sub_140a82f30(0x580)
    void*** rdi_1 = rax_1
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        int64_t* rbx_1 = data_143e243c8
        void var_48
        int64_t* rax_2 = sub_140b58170(&var_48, "Checkbox", 1)
        int64_t rdx_1 = data_143e243d8
        int64_t r8_1 = *rax_2
        int64_t rax_3 = *rbx_1
        int64_t var_40_1 = r8_1
        var_38 = r8_1
        void* rax_4 = (*(rax_3 + 0x88))(rbx_1, rdx_1)
        void* rbx_2 = rax_4
        
        if (rax_4 == 0)
            sub_140e13090()
            rbx_2 = &data_143e24590
        
        *rdi_1 = &data_142ec9210
        rdi_1[1].b = *(rbx_2 + 8)
        sub_14068e310(&rdi_1[2], rbx_2 + 0x10)
        sub_14068e310(&rdi_1[0x13], rbx_2 + 0x98)
        sub_14068e310(&rdi_1[0x24], rbx_2 + 0x120)
        sub_14068e310(&rdi_1[0x35], rbx_2 + 0x1a8)
        sub_14068e310(&rdi_1[0x46], rbx_2 + 0x230)
        sub_14068e310(&rdi_1[0x57], rbx_2 + 0x2b8)
        sub_14068e310(&rdi_1[0x68], rbx_2 + 0x340)
        sub_14068e310(&rdi_1[0x79], rbx_2 + 0x3c8)
        sub_14068e310(&rdi_1[0x8a], rbx_2 + 0x450)
        *(rdi_1 + 0x4d8) = *(rbx_2 + 0x4d8)
        *(rdi_1 + 0x4e8) = *(rbx_2 + 0x4e8)
        rdi_1[0x9f].b = *(rbx_2 + 0x4f8)
        rdi_1[0xa0] = *(rbx_2 + 0x500)
        void* rax_8 = *(rbx_2 + 0x508)
        rdi_1[0xa1] = rax_8
        
        if (rax_8 != 0)
            *(rax_8 + 8) += 1
        
        *(rdi_1 + 0x510) = *(rbx_2 + 0x510)
        rdi_1[0xa4].b = *(rbx_2 + 0x520)
        rdi_1[0xa5] = *(rbx_2 + 0x528)
        void* rax_11 = *(rbx_2 + 0x530)
        rdi_1[0xa6] = rax_11
        
        if (rax_11 != 0)
            *(rax_11 + 8) += 1
        
        *(rdi_1 + 0x538) = *(rbx_2 + 0x538)
        rdi_1[0xa9] = *(rbx_2 + 0x548)
        *(rdi_1 + 0x550) = *(rbx_2 + 0x550)
        rdi_1[0xac] = *(rbx_2 + 0x560)
        *(rdi_1 + 0x568) = *(rbx_2 + 0x568)
        rdi_1[0xaf] = *(rbx_2 + 0x578)
    
    data_143f31678 = rdi_1
    sub_141bf3c80(&rdi_1[6])
    sub_141bf3c80(&rdi_1[0x17])
    sub_141bf3c80(&rdi_1[0x28])
    sub_141bf3c80(&rdi_1[0x39])
    sub_141bf3c80(&rdi_1[0x4a])
    sub_141bf3c80(&rdi_1[0x5b])
    sub_141bf3c80(&rdi_1[0x6c])
    sub_141bf3c80(&rdi_1[0x7d])
    sub_141bf3c80(&rdi_1[0x8e])
    sub_141bf3c80(&rdi_1[0x9d])
    sub_141bf3c80(&rdi_1[0xa2])
    rdx = data_143f31678

sub_141b85d70(&arg1[0x27], rdx)
arg1[0x24].b = 0
arg1[0xe1].b = 0
*(arg1 + 0x70c) = zx.o(0)
arg1[0xe6].b = 0
*(arg1 + 0x720) = data_14399f5c0

if (&var_38 != &arg1[0xe7])
    uint128_t zmm0_2 = *(arg1 + 0x738)
    *(arg1 + 0x738) = zx.o(0)
    int64_t* rbx_3 = _mm_bsrli_si128(zmm0_2, 8).q
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            int64_t r8_2 = *rbx_3
            (*r8_2)(rbx_3, zx.o(0), r8_2)
            int32_t temp1_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_3 = *rbx_3
                (*(r8_3 + 8))(rbx_3, 1, r8_3)

arg1[0xe9].b = 1
return arg1
