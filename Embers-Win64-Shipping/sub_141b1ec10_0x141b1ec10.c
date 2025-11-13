// 函数: sub_141b1ec10
// 地址: 0x141b1ec10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* i_1
sub_141a4a790(arg4, &i_1, arg3, &arg3[4])
int32_t* i = i_1
int32_t result_1
int64_t result = sx.q(result_1)

for (void* r12 = &i[result * 2]; i != r12; i = &i[2])
    int64_t* rax = sub_140d3c6e0(i)
    int64_t* rbx_1 = rax
    void* rax_1
    int64_t rax_2
    void* rdx_1
    
    if (rax != 0)
        rax_1 = sub_14255cbc0()
        rdx_1 = rbx_1[2]
        rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax == 0 || rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        result = sub_140d3c6e0(i)
        int64_t result_2 = result
        
        if (result == 0)
            rbx_1 = nullptr
        else
            int64_t rax_4 = sub_1424a23e0()
            void* rcx_4 = *(result_2 + 0x10)
            result = rax_4 + 0x30
            int64_t rdx_2 = sx.q(*(result + 8))
            
            if (rdx_2.d s> *(rcx_4 + 0x38) || *(*(rcx_4 + 0x30) + (rdx_2 << 3)) != result)
                rbx_1 = nullptr
            else
                rbx_1 = *(result_2 + 0x220)
    
    if ((rax != 0 && rax_2.d s<= *(rdx_1 + 0x38)
            && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30) || rbx_1 != 0)
        int64_t rax_5 = data_143f2c770
        void** const arg_18 = nullptr
        
        if (rax_5 == 0)
            rax_5 = sub_141a54240(&data_143f2c770, 0)
        
        uint128_t zmm0_1 = zx.o(arg4[0x5a])
        int32_t var_60_1 = arg4[0x5b].d
        arg_18 = &data_143057d78
        char rdx_4 = *(arg4 + 0x2dc)
        uint64_t var_68 = zmm0_1.q
        sub_1405c5900(&arg4[0x1f], rax_5, &arg_18, rbx_1, rdx_4, &var_68)
        void* j_1 = *(arg1 + 0x20)
        void* j = arg1 + 8
        
        if (j_1 != 0)
            j = j_1
        
        for (void* rsi_1 = j + sx.q(*(arg1 + 0x28)) * 0xc; j != rsi_1; j += 0xc)
            int512_t zmm2
            zmm2.o = *(j + 8)
            (*(*rbx_1 + 0x868))(rbx_1, *j, zmm2)
        
        void* rax_8 = *(arg1 + 0xb0)
        void* rdi_1 = arg1 + 0x88
        
        if (rax_8 != 0)
            rdi_1 = rax_8
        
        void* rbp_1 = rdi_1 + sx.q(*(arg1 + 0xb8)) * 0x14
        
        if (rdi_1 != rbp_1)
            void* rsi_2 = rdi_1 + 8
            
            do
                int64_t rdx_7 = *rdi_1
                int32_t var_50_1 = *(rsi_2 + 8)
                int64_t rax_11 = *rbx_1
                uint64_t var_58 = *rsi_2
                (*(rax_11 + 0x870))(rbx_1, rdx_7, &var_58)
                rdi_1 += 0x14
                rsi_2 += 0x14
            while (rdi_1 != rbp_1)
        
        void* rax_12 = *(arg1 + 0xf0)
        void* rdi_2 = arg1 + 0xc0
        
        if (rax_12 != 0)
            rdi_2 = rax_12
        
        result = sx.q(*(arg1 + 0xf8))
        void* rbp_2 = rdi_2 + result * 0x18
        
        if (rdi_2 != rbp_2)
            void* rsi_3 = rdi_2 + 8
            
            do
                int64_t rax_13 = *rbx_1
                int64_t rdx_8 = *rdi_2
                uint128_t var_38 = *rsi_3
                result = (*(rax_13 + 0x878))(rbx_1, rdx_8, &var_38)
                rdi_2 += 0x18
                rsi_3 += 0x18
            while (rdi_2 != rbp_2)

return result
