// 函数: sub_142064dc0
// 地址: 0x142064dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a80f40()
sub_1405d16e0(arg1 + 0x40, nullptr)
void* rsi = arg1 + 0x10
void* r14 = rsi
int64_t i_1 = 2
int64_t* result
int64_t i

do
    void* rax_1 = *rsi
    
    if (rax_1 != 0 && *(rsi + 8) != 0)
        void* var_58 = rax_1
        *(rax_1 + 8) += 1
        void* rdi_1 = *(rsi + 8)
        void* var_50 = rdi_1
        
        if (rdi_1 != 0)
            *(rdi_1 + 8) += 1
            rdi_1 = var_50
        
        sub_140a80f40()
        
        if (data_143f42618 != 0xffffffff)
            void* rbx_1 = var_58
            int128_t var_48 = zx.o(0)
            sub_1405d16e0(&var_48, rbx_1)
            sub_1405d16e0(&var_48:8, rdi_1)
            int32_t r10_1 = data_14399fa54
            int32_t rdi_2 = *(rbx_1 + 0x18)
            uint32_t r9_1 = 0x11
            uint64_t rdx_4 = zx.q(r10_1 u/ 3)
            int32_t var_38_1 = rdi_2
            uint32_t r8_1 = 0
            
            do
                uint32_t rax_4 = (r9_1 + r8_1) u>> 1
                
                if (rdi_2 u> *(&data_143a2e1d0 + (zx.q(rax_4 - 1) << 2)))
                    r8_1 = rax_4
                else
                    r9_1 = rax_4
            while (r9_1 - r8_1 u> 1)
            
            int64_t rbp_1 =
                sx.q(*(((sx.q(r10_1 - (rdx_4 * 3).d) * 0x11 + zx.q(r8_1)) << 4) + 0x143f422d8))
            int32_t rax_9 = (rbp_1 + 1).d
            *(((sx.q(r10_1 - (rdx_4 * 3).d) * 0x11 + zx.q(r8_1)) << 4) + 0x143f422d8) = rax_9
            
            if (rax_9 s> *(((sx.q(r10_1 - (rdx_4 * 3).d) * 0x11 + zx.q(r8_1)) << 4) + 0x143f422dc))
                sub_1405a4df0(((sx.q(r10_1 - (rdx_4 * 3).d) * 0x11 + zx.q(r8_1)) << 4) +
                    &data_143f422d0)
            
            int64_t* rdx_6 =
                *(((sx.q(r10_1 - (rdx_4 * 3).d) * 0x11 + zx.q(r8_1)) << 4) + &data_143f422d0)
                + rbp_1 * 0x18
            void* rax_11 = var_48.q
            *rdx_6 = rax_11
            
            if (rax_11 != 0)
                *(rax_11 + 8) += 1
                rdi_2 = var_38_1
            
            void* rax_12 = var_48:8.q
            rdx_6[1] = rax_12
            
            if (rax_12 != 0)
                *(rax_12 + 8) += 1
                rdi_2 = var_38_1
            
            *(rdx_6 + 0x14) = r10_1
            rdx_6[2].d = rdi_2
            sub_1405ec8a0(&var_48:8)
            sub_1405d1550(&var_48)
        
        sub_1405ec8a0(&var_50)
        sub_1405d1550(&var_58)
    
    sub_1405d16e0(r14, nullptr)
    result = sub_1405d16e0(r14 + 8, nullptr)
    r14 += 0x10
    rsi += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
return result
