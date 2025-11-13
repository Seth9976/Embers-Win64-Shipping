// 函数: sub_1417b0fd0
// 地址: 0x1417b0fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg1

for (void* r14 = &i[sx.q(arg1[1].d)]; i != r14; i = &i[1])
    void* rbp_1 = *i
    
    if (rbp_1 != 0)
        int32_t j_2 = *(rbp_1 + 0x60)
        
        if (j_2 != 0)
            int32_t rax_1 = arg2[1].d
            int32_t rdx = rax_1 + j_2
            
            if (rdx s> *(arg2 + 0xc))
                sub_1405a52a0(arg2, rdx)
                rax_1 = arg2[1].d
            
            int128_t* r9_1 = *(rbp_1 + 0x58)
            int32_t j_1 = j_2
            int64_t rax_4 = (sx.q(rax_1) << 6) + *arg2
            void* r8_1 = r9_1 + 0x28
            void* rdx_1 = rax_4 + 0x28
            int32_t j
            
            do
                rdx_1 += 0x40
                rax_4 += 0x40
                uint128_t zmm0 = *r9_1
                r9_1 = &r9_1[4]
                r8_1 += 0x40
                *(rax_4 - 0x40) = zmm0
                *(rax_4 - 0x30) = r9_1[-3]
                *(rax_4 - 0x20) = r9_1[-2].q
                *(rdx_1 - 0x40) = *(r8_1 - 0x40)
                *(rdx_1 - 0x38) = *(r8_1 - 0x38)
                *(rdx_1 - 0x34) = *(r8_1 - 0x34)
                *(rdx_1 - 0x2c) = *(r8_1 - 0x2c)
                j = j_1
                j_1 -= 1
            while (j != 1)
            arg2[1].d += j_2

return sub_1417b0e00(arg1, arg2) __tailcall
