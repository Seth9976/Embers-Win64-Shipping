// 函数: sub_1419683d0
// 地址: 0x1419683d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = *(arg1 + 0xf0)
int64_t r12 = 0
void* result = &r15[sx.q(*(arg1 + 0xf8))]
uint64_t r13_1 = sx.q(*(arg1 + 0xf8)) << 3 u>> 3

if (r15 u> result)
    r13_1 = 0

uint64_t var_b8 = r13_1

if (r13_1 != 0)
    do
        void* rbx_1 = *r15
        int32_t rcx = 0
        int32_t r11_1 = *(rbx_1 + 0x28)
        void* r9_1 = rbx_1 + 0x10
        int32_t var_118_1 = 0
        int32_t r8_1 = 0
        int32_t var_114_1 = 1
        void* var_110_1 = r9_1
        int32_t var_108_1 = 0xffffffff
        int64_t var_104_1 = 0
        
        if (r11_1 != 0)
            void* rax_1 = *(r9_1 + 0x10)
            
            if (rax_1 != 0)
                r9_1 = rax_1
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(r11_1 - 1)
            int32_t rdx_3 = *r9_1
            
            if (rdx_3 != 0)
            label_1419684bb:
                int32_t rax_8 = neg.d(rdx_3) & rdx_3
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
                int32_t var_114_2 = rax_8
                int32_t arg_10 = temp0_1
                int32_t rax_9
                
                if (rax_8 == 0)
                    rax_9 = 0x20
                else
                    rax_9 = 0x1f - temp0_1
                
                var_104_1.d = r8_1 - rax_9 + 0x1f
                
                if (r8_1 - rax_9 + 0x1f s> r11_1)
                    var_104_1.d = r11_1
            else
                while (true)
                    int64_t rdx_4 = sx.q(rcx)
                    r8_1 += 0x20
                    rcx += 1
                    var_104_1:4.d = r8_1
                    var_118_1 = rcx
                    
                    if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                    int32_t var_108_2 = 0xffffffff
                    
                    if (rdx_3 != 0)
                        goto label_1419684bb
                
                var_104_1.d = r11_1
        
        int512_t zmm4
        zmm4.o = 0xffffffff
        void* var_50_1 = rbx_1
        int16_t var_c0_1 = 0
        int128_t var_88_1 = 0xffffffff
        int128_t zmm0
        zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        result = nullptr
        int128_t var_f8 = rbx_1.o
        int128_t var_e8_1 = var_118_1.o
        int128_t var_58 = zmm0
        
        if (0 s< r11_1)
            do
                int64_t* rbx_3 = sx.q(var_e8_1:0xc.d) * 0xb8 + *var_f8.q
                void* rcx_2 = *(rbx_3[0x15] + 8)
                int64_t rax_14
                
                if (rcx_2 != 0)
                    rax_14 = 0
                    
                    if (0 == *(rcx_2 + 8))
                        *(rcx_2 + 8) = 0
                    else
                        rax_14 = *(rcx_2 + 8)
                
                if (rcx_2 == 0 || ((rax_14 u>> 0x1a).b & 1) != 0)
                    void* rax_16 = rbx_3[0x15]
                    int64_t* rcx_3 = *(rax_16 + 8)
                    *(rax_16 + 8) = 0
                    
                    if (rcx_3 != 0)
                        rcx_3[9].d -= 1
                        
                        if (rcx_3[9].d == 1)
                            sub_140a2f6e0(rcx_3)
                    
                    sub_141982980(*(arg1 + 0x10), rbx_3)
                    int64_t* rsi_1 = *(arg1 + 8)
                    int32_t arg_8
                    sub_141971120(rsi_1, &arg_8, rbx_3)
                    int64_t rax_18 = sx.q(arg_8)
                    void* const rax_20
                    
                    if (rax_18.d == 0xffffffff)
                        rax_20 = nullptr
                    else
                        rax_20 = rax_18 * 0xb8 + *rsi_1
                    
                    int64_t* rcx_6 = rax_20 + 0xa8
                    
                    if (rax_20 == 0)
                        rcx_6 = nullptr
                    
                    if (rcx_6 == 0)
                        int64_t* var_b0 = rbx_3
                        int64_t* var_a8_1 = &rbx_3[0x15]
                        void arg_20
                        sub_14195c390(rsi_1, &arg_20, &var_b0, nullptr)
                    else if (*rcx_6 != rbx_3[0x15])
                        *(arg1 + 0x100) += 1
                        int64_t rsi_2 = sx.q(*(arg1 + 0xc0))
                        int32_t rax_22 = (rsi_2 + 1).d
                        *(arg1 + 0xc0) = rax_22
                        
                        if (rax_22 s> *(arg1 + 0xc4))
                            sub_1405a4d70(arg1 + 0xb8)
                        
                        *(*(arg1 + 0xb8) + (rsi_2 << 3)) = rbx_3[0x15]
                    
                    sub_141982b30(zmm0:8.q, var_e8_1:0xc.d)
                    var_c0_1.b = 1
                
                var_e8_1:8.d &= not.d(var_f8:0xc.d)
                sub_14059bdd0(&var_f8:8)
                result = var_e8_1.q
            while (var_e8_1:0xc.d s< *(result + 0x18))
            
            r13_1 = var_b8
            
            if (var_c0_1.b != 0 && var_c0_1:1.b != 0)
                result, zmm4 = sub_141968110(rbx_1, *(rbx_1 + 8) - *(rbx_1 + 0x34), 1)
        
        r15 = &r15[1]
        r12 += 1
    while (r12 != r13_1)

return result
