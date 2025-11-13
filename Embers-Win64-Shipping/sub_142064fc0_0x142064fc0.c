// 函数: sub_142064fc0
// 地址: 0x142064fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405d16e0(arg1 + 8, nullptr)
int64_t** rsi = arg1 + 0x10
int64_t* result

for (int32_t i = 0; i u< 2; )
    result = *rsi
    
    if (result != 0 && rsi[1] != 0)
        int64_t* result_1 = result
        result[1].d += 1
        void* rdi_1 = rsi[1]
        void* var_50 = rdi_1
        
        if (rdi_1 != 0)
            *(rdi_1 + 8) += 1
            rdi_1 = var_50
        
        sub_140a80f40()
        
        if (data_143f42b68 != 0xffffffff)
            int64_t* result_2 = result_1
            int128_t var_48 = zx.o(0)
            sub_1405d16e0(&var_48, result_2)
            sub_1405d16e0(&var_48:8, rdi_1)
            int32_t r10_1 = data_14399fa54
            int32_t rdi_2 = result_2[3].d
            uint32_t r9_1 = 0x11
            uint64_t rdx_4 = zx.q(r10_1 u/ 3)
            int32_t var_38_1 = rdi_2
            uint32_t r8_1 = 0
            
            do
                uint32_t rax_3 = (r9_1 + r8_1) u>> 1
                
                if (rdi_2 u> *(&data_143a2e1d0 + (zx.q(rax_3 - 1) << 2)))
                    r8_1 = rax_3
                else
                    r9_1 = rax_3
            while (r9_1 - r8_1 u> 1)
            
            int64_t rbp_1 =
                sx.q(*(((sx.q(r10_1 - (rdx_4 * 3).d) * 0x11 + zx.q(r8_1)) << 4) + 0x143f42828))
            int32_t rax_8 = (rbp_1 + 1).d
            *(((sx.q(r10_1 - (rdx_4 * 3).d) * 0x11 + zx.q(r8_1)) << 4) + 0x143f42828) = rax_8
            
            if (rax_8 s> *(((sx.q(r10_1 - (rdx_4 * 3).d) * 0x11 + zx.q(r8_1)) << 4) + 0x143f4282c))
                sub_1405a4df0(((sx.q(r10_1 - (rdx_4 * 3).d) * 0x11 + zx.q(r8_1)) << 4) +
                    &data_143f42820)
            
            int64_t* rdx_6 =
                *(((sx.q(r10_1 - (rdx_4 * 3).d) * 0x11 + zx.q(r8_1)) << 4) + &data_143f42820)
                + rbp_1 * 0x18
            void* rax_10 = var_48.q
            *rdx_6 = rax_10
            
            if (rax_10 != 0)
                *(rax_10 + 8) += 1
                rdi_2 = var_38_1
            
            void* rax_11 = var_48:8.q
            rdx_6[1] = rax_11
            
            if (rax_11 != 0)
                *(rax_11 + 8) += 1
                rdi_2 = var_38_1
            
            *(rdx_6 + 0x14) = r10_1
            rdx_6[2].d = rdi_2
            sub_1405ec8a0(&var_48:8)
            sub_1405d1550(&var_48)
        
        sub_1405ec8a0(&var_50)
        sub_1405d1550(&result_1)
        void* rbx_8 = ((zx.q(i) + 1) << 4) + arg1
        sub_1405d16e0(rbx_8, nullptr)
        result = sub_1405d16e0(rbx_8 + 8, nullptr)
    
    i += 1
    rsi = &rsi[2]

*(arg1 + 0x30) = -1
*(arg1 + 0x40) = data_14399f6e0
*(arg1 + 0x50) = data_14399f6f0
*(arg1 + 0x60) = data_14399f700
*(arg1 + 0x70) = data_14399f710
*(arg1 + 0x80) = data_14399f6e0
*(arg1 + 0x90) = data_14399f6f0
*(arg1 + 0xa0) = data_14399f700
*(arg1 + 0xb0) = data_14399f710
return result
