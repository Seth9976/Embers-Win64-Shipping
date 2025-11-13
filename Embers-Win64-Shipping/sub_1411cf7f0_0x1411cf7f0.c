// 函数: sub_1411cf7f0
// 地址: 0x1411cf7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg3
int32_t rsi = 0
int32_t rdx = *(rax + 0x44)
uint32_t rax_1 = zx.d(*(rax + 0x56))
int32_t result = rax_1 - 1
int32_t arg_20 = rdx
int32_t result_1 = result

if (rax_1 != 1)
    int32_t r15_1
    
    do
        r15_1 = rsi + 1
        int32_t* rax_2 = sub_14081d830(0x30, *(arg1 + 8), 1, 0)
        int32_t* rbx_1 = rax_2
        
        if (rax_2 == 0)
            rbx_1 = nullptr
        else
            __builtin_memset(&rax_2[4], 0, 0x18)
        
        char var_97_1 = rsi.b
        __builtin_memset(rbx_1, 0, 0x30)
        void* rdi_1 = *arg3
        char var_98 = 0
        int64_t var_94_1 = 0
        int32_t var_8c_1 = 0
        char var_80_1 = 0
        char var_96_1 = 1
        
        if (*(rdi_1 + 0x54) != 0)
            int32_t var_8c_2 = *(rdi_1 + 0x4c)
        
        void*** rax_4 = sub_14081d830(0x38, *(arg1 + 8), 1, 0)
        
        if (rax_4 != 0)
            int128_t zmm0_1 = var_98.o
            rax_4[1] = *(rdi_1 + 8)
            *rax_4 = &data_142f34e88
            *(rax_4 + 0x18) = zmm0_1
            rax_4[2] = 0
            *(rax_4 + 0x28) = rdi_1.o
        
        *(rbx_1 + 0x10) = rax_4
        void* rdi_2 = *arg3
        char var_c8_1 = r15_1.b
        char var_c7_1 = 0
        void*** rax_5
        int512_t zmm6_1
        rax_5, zmm6_1 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
        
        if (rax_5 != 0)
            rax_5[1] = *(rdi_2 + 8)
            *rax_5 = &data_142f285c0
            rax_5[2] = 0
            *(rax_5 + 0x18) = rdi_2.o
        
        *(rbx_1 + 0x18) = rax_5
        *rbx_1 = arg_20
        rbx_1[1] = rsi
        rbx_1[2] = r15_1
        *(rbx_1 + 0x20) = data_14395f4d0
        int128_t var_a8
        char rcx_4 = sub_1419a2ec0(arg2, &var_a8, &data_143e76490, 0)
        zmm6_1.o = var_a8
        int128_t zmm6_2 = sub_1411e1a20(rcx_4)
        var_98.o = zx.o(0)
        sub_141998c50(zmm6_2.q, &data_143e7afd0, rbx_1)
        int32_t var_60_1 = rdx << r15_1.b
        void*** rax_8
        char rcx_6
        rax_8, rcx_6 = sub_14081d830(0x58, *(arg1 + 8), 1, 0)
        void*** rdi_3 = rax_8
        
        if (rax_8 == 0)
            rdi_3 = nullptr
        else
            sub_1411e1a20(rcx_6)
            void* var_b0_1 = &data_143e7b000
            var_98.o = rbx_1.o
            void arg_18
            sub_141992bd0(rdi_3, &arg_18, &var_98, 0xa)
            *rdi_3 = &data_142f38908
            *(rdi_3 + 0x38) = rbx_1.o
            *(rdi_3 + 0x48) = zmm6_2
        
        result = sub_1419968d0(arg1, rdi_3)
        rsi = r15_1
        rdx = arg_20
    while (r15_1 u< result_1)

return result
