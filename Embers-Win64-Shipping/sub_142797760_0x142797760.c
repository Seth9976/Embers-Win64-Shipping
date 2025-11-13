// 函数: sub_142797760
// 地址: 0x142797760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_141efce60(arg1, arg2)

if (*(arg1 + 0xba) == 2 && arg1[0x17].b != 0)
    j_sub_140b3db50()
    void arg_8
    int64_t* rax
    int128_t zmm6_1
    rax, zmm6_1 = sub_140b58170(&arg_8, "ChaosSolvers", 1)
    result = sub_140963350(sub_140b3dbe0(*rax))
    uint64_t result_1 = result
    int32_t i = 0
    
    if (arg1[0x23].d s> 0)
        int64_t* rdi_1 = nullptr
        int128_t var_38_1 = zmm6_1
        int128_t zmm7
        int128_t var_48_1 = zmm7
        int128_t zmm8
        int128_t var_58_1 = zmm8
        int128_t zmm9
        int128_t var_68_1 = zmm9
        
        do
            int64_t var_128_1 = 0
            void* rcx_3 = *(rdi_1 + arg1[0x24])
            zmm7 = *(rcx_3 + 0x1c0)
            zmm8 = *(rcx_3 + 0x1d0)
            zmm9 = *(rcx_3 + 0x1e0)
            int32_t var_c0_1 = *(rcx_3 + 0x148)
            zmm6_1.q = *(rcx_3 + 0x140)
            int64_t rcx_4 = *(rdi_1 + arg1[0x22])
            void*** rax_5 = sub_140a82f30(0x60, 0x10)
            *(rax_5 + 0x10) = rcx_4.o
            *rax_5 = &data_143251868
            *(rax_5 + 0x20) = zmm7
            *(rax_5 + 0x30) = zmm8
            *(rax_5 + 0x40) = zmm9
            *(rax_5 + 0x50) = zmm6_1
            void*** var_128_2 = rax_5
            int64_t (* var_138)(int64_t* arg1)
            int64_t (* rax_6)(int64_t* arg1) = var_138
            
            if (rax_5 != -0x10)
                rax_6 = sub_14278ec30
            
            var_138 = rax_6
            result = (*(*result_1 + 0x18))(result_1, &var_138)
            i += 1
            rdi_1 = &rdi_1[1]
        while (i s< arg1[0x23].d)

return result
