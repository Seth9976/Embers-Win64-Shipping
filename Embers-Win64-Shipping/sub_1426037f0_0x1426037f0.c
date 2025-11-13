// 函数: sub_1426037f0
// 地址: 0x1426037f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_58 = zmm6
int64_t* r15 = arg1
uint32_t zmm7[0x4]
uint32_t var_68[0x4] = zmm7
uint32_t zmm10[0x4]
uint32_t var_98[0x4] = zmm10
int128_t zmm11
int128_t var_a8 = zmm11
int128_t zmm12
int128_t var_b8 = zmm12
int128_t zmm13
int128_t var_c8 = zmm13
int128_t zmm14
int128_t var_d8 = zmm14
int128_t zmm15
int128_t var_e8 = zmm15
int64_t rax_1 = *arg6
int64_t r10_1 = sx.q(arg6[1].d) << 5
int128_t zmm8 = *(r10_1 + rax_1 - 0x14)
float zmm0 = *(r10_1 + rax_1 - 0x10)
uint32_t zmm9[0x4] = *(r10_1 + rax_1 - 0xc)
int32_t arg_10 = zmm8.d
uint32_t arg_18 = zmm9[0]

if (arg2 s< arg3)
    int64_t i_2 = sx.q(arg2)
    int64_t i_1 = i_2
    int64_t* r14_3 = arg5 + 8 + (i_2 << 3)
    int64_t i
    
    do
        int64_t r11_1 = r14_3[-1]
        void* r8 = *r15
        
        if (r11_1 == 0)
            return -0x7ffffff8
        
        char rdx = (*(r8 + 0x9c)).b
        char r15_1 = (*(r8 + 0xa0)).b
        int32_t r12_2 = (1 << (*(r8 + 0x98)).b).d - 1
        int32_t rbp_1 = (1 << rdx).d
        char r13_1 = r15_1 + rdx
        int32_t r9_2 = (r11_1 u>> r15_1).d & (rbp_1 - 1)
        int32_t rax_4 = *(r8 + 0x30)
        int32_t rdx_2 = ((1 << r15_1).d - 1) & r11_1.d
        
        if (r9_2 u>= rax_4)
            return -0x7ffffff8
        
        int64_t rsi_1 = *(r8 + 0x90)
        int32_t* r9_4 = zx.q(r9_2) * 0xb0 + rsi_1
        
        if (*r9_4 != ((r11_1 u>> r13_1).d & r12_2))
            return -0x7ffffff8
        
        void* rax_6 = *(r9_4 + 8)
        
        if (rax_6 == 0 || rdx_2 u>= *(rax_6 + 0x18))
            return -0x7ffffff8
        
        int64_t r10_5 = *r14_3
        int32_t* rbx_3 = (zx.q(rdx_2) << 5) + *(r9_4 + 0x10)
        
        if (r10_5 == 0)
            return -0x7ffffff8
        
        uint64_t rdi_3 = zx.q((1 << r15_1).d - 1) & zx.q(r10_5.d)
        int32_t rdx_5 = (r10_5 u>> r15_1).d & (rbp_1 - 1)
        
        if (rdx_5 u>= rax_4)
            return -0x7ffffff8
        
        int32_t* rax_10 = zx.q(rdx_5) * 0xb0 + rsi_1
        
        if (*rax_10 != ((r10_5 u>> r13_1).d & r12_2))
            return -0x7ffffff8
        
        void* rcx_7 = *(rax_10 + 8)
        
        if (rcx_7 == 0 || rdi_3.d u>= *(rcx_7 + 0x18))
            return -0x7ffffff8
        
        r15 = arg1
        int32_t* rdi_5 = (rdi_3 << 5) + *(rax_10 + 0x10)
        float var_120
        int32_t var_110
        
        if ((sub_1426108d0(r15, r11_1, rbx_3, r9_4, r10_5, rdi_5, rax_10, &var_120, &var_110)
                u>> 0x1f).b != 0)
            break
        
        if ((arg7 & 1) == 0 || ((*(rdi_5 + 0x1f) ^ *(rbx_3 + 0x1f)) & 0x3f) != 0)
            zmm12 = var_120
            int32_t var_108
            zmm7 = var_108
            zmm6.d = var_110.d f- zmm12.d
            int32_t var_118
            zmm13 = var_118
            float zmm4_1 = *arg4
            zmm7[0] = zmm7[0] f- zmm13.d
            zmm4_1 = zmm4_1 f- zmm8.d
            int32_t var_10c
            zmm10 = var_10c
            float zmm5 = arg4[2] f- zmm9[0]
            int32_t var_11c
            zmm11 = var_11c
            zmm8.d = zmm8.d f- zmm12.d
            zmm9[0] = zmm9[0] f- zmm13.d
            zmm7[0] = zmm7[0] f* zmm4_1
            zmm7[0] = zmm7[0] f- zmm6.d * zmm5
            uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm7, data_142d3f770)
            float zmm0_1
            uint32_t zmm2_1[0x4]
            float zmm3_1
            
            if (not(temp0_1[0] f< 9.99999997e-07f))
                zmm0_1 = zmm7[0]
                uint32_t zmm1_1[0x4] = 0x3f800000
                zmm1_1[0] = 1f f/ zmm7[0]
                zmm3_1 = zmm6.d f* zmm9[0]
                zmm2_1 = zmm9
                zmm2_1[0] = zmm2_1[0] f* zmm4_1
                zmm3_1 = (zmm3_1 - zmm0_1 f* zmm8.d) f* zmm1_1[0]
                zmm2_1[0] = zmm2_1[0] f- zmm8.d * zmm5
                zmm2_1[0] = zmm2_1[0] f* zmm1_1[0]
            
            if (not(temp0_1[0] f< 9.99999997e-07f) && not(zmm3_1 < 0f) && zmm3_1 <= 1f)
                goto label_142603bbd
            
            TEB* gsbase
            int64_t rsi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
            
            if (data_143f712a0 s> *(0x14 + rsi_2))
                _Init_thread_header(&data_143f712a0)
                
                if (data_143f712a0 == 0xffffffff)
                    data_143f7129c = 0x31800000
                    _Init_thread_footer(&data_143f712a0)
            
            zmm10[0] = zmm10[0] f- zmm11.d
            zmm7[0] = zmm7[0] f* zmm7[0]
            zmm10[0] = zmm10[0] f* zmm10[0]
            zmm10[0] = zmm10[0] f+ zmm6.d f* zmm6.d
            zmm10[0] = zmm10[0] f+ zmm7[0]
            
            if (not(zmm10[0] f>= data_143f7129c))
                if (data_143f712a0 s> *(0x14 + rsi_2))
                    _Init_thread_header(&data_143f712a0)
                    
                    if (data_143f712a0 == 0xffffffff)
                        data_143f7129c = 0x31800000
                        _Init_thread_footer(&data_143f712a0)
                
                zmm0_1 = zmm0 f- zmm11.d
                zmm8.d = zmm8.d f* zmm8.d
                zmm9[0] = zmm9[0] f* zmm9[0]
                char rax_17
                
                if (not(zmm0_1 * zmm0_1 f+ zmm8.d f+ zmm9[0] f< data_143f7129c))
                    rax_17 = sub_142609980(&var_120, arg4)
                
                if (zmm0_1 * zmm0_1 f+ zmm8.d f+ zmm9[0] f< data_143f7129c || rax_17 != 0)
                    zmm2_1 = zx.o(0)
                label_142603bbd:
                    bool cond:1_1 = *(rdi_5 + 0x1f) u< 0x40
                    zmm10[0] = zmm10[0] f- zmm11.d
                    int64_t r9_5 = *r14_3
                    zmm6.d = zmm6.d f* zmm2_1[0]
                    int64_t r8_5 = 4
                    
                    if (cond:1_1)
                        r8_5 = 0
                    
                    zmm7[0] = zmm7[0] f* zmm2_1[0]
                    zmm10[0] = zmm10[0] f* zmm2_1[0]
                    zmm6.d = zmm6.d f+ zmm12.d
                    zmm7[0] = zmm7[0] f+ zmm13.d
                    zmm10[0] = zmm10[0] f+ zmm11.d
                    int32_t var_100 = zmm6.d
                    uint32_t var_f8_1 = zmm7[0]
                    uint32_t var_fc_1 = zmm10[0]
                    int32_t result = sub_142603df0(r15, &var_100, r8_5, r9_5, arg6)
                    
                    if (result != 0x20000000)
                        return result
            
            zmm8 = arg_10
            zmm9 = arg_18
        
        r14_3 = &r14_3[1]
        i = i_1 + 1
        i_1 = i
    while (i s< sx.q(arg3))

return 0x20000000
