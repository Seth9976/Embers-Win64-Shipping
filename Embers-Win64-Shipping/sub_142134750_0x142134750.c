// 函数: sub_142134750
// 地址: 0x142134750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t arg_8
(*(*arg1 + 0x400))(arg1, &arg_8)
int32_t result = 0x220

if ((arg_8 & 0x220) != 0)
    int32_t var_19c_1 = 0x3f99999a
    int128_t var_168_1 = data_1432d8660
    int128_t zmm6 = data_1432d8640
    int32_t var_158_1 = 0x3f400000
    int128_t zmm7 = data_1432d8650
    int32_t var_150_1 = 0x3f59999a
    int128_t zmm8 = data_14399f5c0
    char var_1a0_1 = 0
    int32_t var_1a8_1 = 0x402b2fed
    int128_t zmm0 = data_142d3f670
    int32_t var_154_1 = 0x3fa66666
    int128_t zmm9 = data_1432d8630
    int128_t zmm10 = data_1432d8620
    int32_t var_1a4_1 = 0x3dcccccd
    void* rax_2 = (*(*arg1 + 0x440))(arg1, 0x3dcccccd)
    int32_t rcx_1
    int128_t zmm1
    int128_t zmm2
    int64_t zmm3
    
    if (rax_2 == 0)
        rcx_1 = zmm0:0xc.d
        zmm3 = zmm0:4.q
        zmm2 = var_158_1.o
        zmm1 = var_168_1
        zmm0 = var_1a8_1.o
    else
        zmm9 = *(rax_2 + 0x28)
        rcx_1 = *(rax_2 + 0xb0)
        zmm10 = *(rax_2 + 0x38)
        zmm0 = *(rax_2 + 0x48)
        zmm6 = *(rax_2 + 0x58)
        zmm7 = *(rax_2 + 0x68)
        zmm8 = *(rax_2 + 0x78)
        zmm1 = *(rax_2 + 0x88)
        zmm2 = *(rax_2 + 0x98)
        zmm3 = *(rax_2 + 0xa8)
    
    int128_t var_1c8 = zmm9
    int128_t var_14c_1
    var_14c_1:0xc.d = rcx_1
    var_1a8_1.o = zmm0
    int64_t rdx
    int64_t var_130_1 = rdx
    var_158_1.o = zmm2
    var_14c_1:4.q = zmm3
    
    if (sub_140a80f40() != 0)
        return sub_14211c4d0(&var_1c8)
    
    if (data_143f138f4 == 0)
        uint32_t rax_5
        
        if (data_143de5480 != 0)
            rax_5.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_5.b != 0)
            int128_t var_108 = var_1c8
            int128_t var_f8 = zmm10
            int128_t var_e8 = var_1a8_1.o
            int128_t var_d8 = zmm6
            int128_t var_c8 = zmm7
            int128_t var_b8 = zmm8
            int128_t var_a8 = zmm1
            int128_t var_98 = var_158_1.o
            int128_t var_88 = var_14c_1
            int128_t var_78 = rax_2.o
            return sub_14211c4d0(&var_108)
    
    void var_128
    int64_t* rax_7 = sub_142122ea0(&var_128, nullptr, 0xff)
    void* rdx_4 = *rax_7
    *(rdx_4 + 0x10) = var_1c8
    *(rdx_4 + 0x20) = zmm10
    *(rdx_4 + 0x30) = var_1a8_1.o
    *(rdx_4 + 0x40) = zmm6
    *(rdx_4 + 0x50) = zmm7
    *(rdx_4 + 0x60) = zmm8
    *(rdx_4 + 0x70) = zmm1
    *(rdx_4 + 0x80) = var_158_1.o
    *(rdx_4 + 0x90) = var_14c_1
    *(rdx_4 + 0xa0) = rax_2.o
    void* rcx_5 = *rax_7
    int32_t r8_1 = rax_7[2].d
    int64_t* rdx_5 = rax_7[1]
    int64_t* rbx_1 = *(rcx_5 + 0xb8)
    int64_t* arg_20 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_20
    
    result = sub_142132380(rcx_5, rdx_5, r8_1, 1)
    
    if (rbx_1 != 0)
        result = *rdi_1
        *rdi_1 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_20)

return result
