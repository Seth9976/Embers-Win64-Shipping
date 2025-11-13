// 函数: sub_14194b1a0
// 地址: 0x14194b1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_1c8
int64_t rax_2 = __security_cookie ^ &var_1c8
(*(*arg2 + 0x48))(arg2)

if (data_143f01c92 != 0)
    sub_140a80f40()

void* rax = (*(*arg2 + 0x48))(arg2)

if (rax != 0)
    sub_14193ce50()
    int32_t r11_1 = data_1439c7558
    int32_t var_1a4_1 = 1
    int32_t rcx_2 = 0
    int32_t var_1a8_1 = 0
    int32_t var_198_1 = 0xffffffff
    int64_t* r9_1 = &data_1439c7540
    int64_t* var_1a0_1 = &data_1439c7540
    int32_t r8_1 = 0
    int64_t var_194_1 = 0
    
    if (r11_1 != 0)
        int64_t* rax_5 = data_1439c7550
        
        if (rax_5 != 0)
            r9_1 = rax_5
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_14194b29b:
            int32_t rax_12 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_1a4_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_2
            
            var_194_1.d = r8_1 - rax_13 + 0x1f
            
            if (r8_1 - rax_13 + 0x1f s> r11_1)
                var_194_1.d = r11_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx_2)
                r8_1 += 0x20
                rcx_2 += 1
                var_194_1:4.d = r8_1
                var_1a8_1 = rcx_2
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                int32_t var_198_2 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_14194b29b
            
            var_194_1.d = r11_1
    
    int64_t* var_120_1 = &data_1439c7530
    int64_t* var_148 = &data_1439c7530
    int128_t var_130_1 = 0xffffffff
    int64_t* var_158_1 = &data_1439c7530
    int16_t var_150_1 = 0
    int128_t zmm3 = var_1a8_1.o
    int128_t zmm2 = var_148.o
    int128_t var_178_1 = zmm3
    int128_t var_188 = zmm2
    int128_t zmm0_1
    zmm0_1.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    var_130_1 = zmm0_1
    
    if (0 s< *(zmm3.q + 0x18))
        int32_t i = var_178_1:0xc.d
        
        do
            int128_t* r9_3 = sx.q(i) * 0xe0 + *var_188.q
            double zmm1[0x2] = r9_3[1]
            int128_t var_108 = *r9_3
            double var_f8_1[0x2] = zmm1
            int128_t var_e8_1 = r9_3[2]
            double var_d8_1[0x2] = r9_3[3]
            int128_t var_c8_1 = r9_3[4]
            double var_b8_1[0x2] = r9_3[5]
            int128_t var_a8_1 = r9_3[6]
            double var_98_1[0x2] = r9_3[7]
            int128_t var_88_1 = r9_3[8]
            double var_78_1[0x2] = r9_3[9]
            int128_t var_68_1 = r9_3[0xa]
            double var_58_1[0x2] = r9_3[0xb]
            void* var_48_1 = r9_3[0xc].q
            
            if (var_48_1 == 0 || *(var_48_1 + 0x14) != *(rax + 0x14)
                    || *(var_48_1 + 0x10) != *(rax + 0x10))
                for (int32_t j = 0; j u< 8; j += 1)
                    void* r8_3 = *(&var_108 + sx.q(j) * 0x18)
                    
                    if (r8_3 != 0 && *(r8_3 + 0x14) == *(rax + 0x14)
                            && *(r8_3 + 0x10) == *(rax + 0x10))
                        goto label_14194b449
            else
            label_14194b449:
                var_1a8_1.q = arg1
                var_1a0_1.d = r9_3[0xd].d - 1
                int128_t var_140_1
                var_140_1:8.q = 0
                var_130_1:8.q = &data_142d42ed8
                var_120_1.o = var_1a8_1.o
                var_148 = j_sub_14192e690
                zmm2, zmm3 = sub_14195af10(&var_148, 0, zmm2, zmm3)
                sub_14194bc00(zmm0_1:8.q, i)
                var_150_1.b = 1
            
            var_178_1:8.d &= not.d(var_188:0xc.d)
            sub_14059bdd0(&var_188:8)
            i = var_178_1:0xc.d
        while (i s< *(var_178_1.q + 0x18))
        
        if (var_150_1.b != 0 && var_150_1:1.b != 0)
            sub_1419349d0(var_158_1, var_158_1[1].d - *(var_158_1 + 0x34), 1)

__security_check_cookie(rax_2 ^ &var_1c8)
