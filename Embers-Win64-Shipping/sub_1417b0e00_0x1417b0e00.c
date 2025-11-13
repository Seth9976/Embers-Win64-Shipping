// 函数: sub_1417b0e00
// 地址: 0x1417b0e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x20)
uint128_t zmm0

for (void* r14 = &i[sx.q(*(arg1 + 0x28))]; i != r14; i = &i[1])
    void* rbp_1 = *i
    
    if (rbp_1 != 0)
        int32_t j_4 = *(rbp_1 + 0x18)
        
        if (j_4 != 0)
            int32_t rax_1 = arg2[1].d
            int32_t rdx = rax_1 + j_4
            
            if (rdx s> *(arg2 + 0xc))
                sub_1405a52a0(arg2, rdx)
                rax_1 = arg2[1].d
            
            int128_t* r9_1 = *(rbp_1 + 0x10)
            int32_t j_2 = j_4
            int64_t rcx_3 = (sx.q(rax_1) << 6) + *arg2
            void* r8_1 = r9_1 + 0x28
            void* rdx_1 = rcx_3 + 0x28
            int32_t j
            
            do
                rdx_1 += 0x40
                rcx_3 += 0x40
                zmm0 = *r9_1
                r9_1 = &r9_1[4]
                r8_1 += 0x40
                *(rcx_3 - 0x40) = zmm0
                *(rcx_3 - 0x30) = r9_1[-3]
                *(rcx_3 - 0x20) = r9_1[-2].q
                *(rdx_1 - 0x40) = *(r8_1 - 0x40)
                *(rdx_1 - 0x38) = *(r8_1 - 0x38)
                *(rdx_1 - 0x34) = *(r8_1 - 0x34)
                *(rdx_1 - 0x2c) = *(r8_1 - 0x2c)
                j = j_2
                j_2 -= 1
            while (j != 1)
            arg2[1].d += j_4

int64_t* i_1 = *(arg1 + 0x40)
int64_t result = sx.q(*(arg1 + 0x48))

for (void* r14_1 = &i_1[result]; i_1 != r14_1; i_1 = &i_1[1])
    void* rbp_2 = *i_1
    
    if (rbp_2 != 0)
        int32_t j_5 = *(rbp_2 + 0x60)
        
        if (j_5 != 0)
            int32_t rax_4 = arg2[1].d
            int32_t rdx_2 = rax_4 + j_5
            
            if (rdx_2 s> *(arg2 + 0xc))
                sub_1405a52a0(arg2, rdx_2)
                rax_4 = arg2[1].d
            
            uint128_t* r9_2 = *(rbp_2 + 0x58)
            int32_t j_3 = j_5
            int64_t rcx_7 = (sx.q(rax_4) << 6) + *arg2
            void* r8_2 = r9_2 + 0x28
            void* rdx_3 = rcx_7 + 0x28
            int32_t j_1
            
            do
                rdx_3 += 0x40
                rcx_7 += 0x40
                zmm0 = *r9_2
                r9_2 = &r9_2[4]
                r8_2 += 0x40
                *(rcx_7 - 0x40) = zmm0
                *(rcx_7 - 0x30) = r9_2[-3]
                *(rcx_7 - 0x20) = r9_2[-2].q
                *(rdx_3 - 0x40) = *(r8_2 - 0x40)
                *(rdx_3 - 0x38) = *(r8_2 - 0x38)
                *(rdx_3 - 0x34) = *(r8_2 - 0x34)
                result = zx.q(*(r8_2 - 0x2c))
                *(rdx_3 - 0x2c) = result.d
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            arg2[1].d += j_5

return result
