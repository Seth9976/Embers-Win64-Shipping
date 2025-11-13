// 函数: sub_141f13f20
// 地址: 0x141f13f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t result = arg4
int64_t* r12 = arg2
void* rbp = arg1
int32_t i_1 = 0

if (arg2[1].d s> 0)
    uint64_t rcx = zx.q(data_14401b1a0)
    int64_t* r15_1 = nullptr
    int128_t zmm6 = zx.o(0)
    void* rcx_1 = arg5
    int64_t* var_c8_1 = nullptr
    
    do
        if (test_bit(result, i))
            int64_t* rcx_2 = rcx_1 + 0x50
            void* rax_1 = *(r15_1 + *r12)
            int64_t* rax_2 = rcx_2[2]
            
            if (rax_2 != 0)
                rcx_2 = rax_2
            
            int32_t j = 0
            int64_t* rsi_1 = *(rcx_2 + r15_1)
            int32_t var_f0
            int32_t i_2
            char var_e0
            
            if (*(rbp + 0x158) s> 0)
                int64_t rbx_1 = 0
                
                do
                    int64_t r11_1 = *(rbp + 0x150)
                    int64_t rdx_1 = sx.q(j) * 0x34 + r11_1
                    var_e0 = 0
                    i_2 = zmm6.d
                    var_f0 = *(r11_1 + rbx_1 + 0x28)
                    (*(*rsi_1 + 0x30))(rsi_1, rdx_1, rdx_1 + 0xc, rdx_1 + 0x18, 
                        *(r11_1 + rbx_1 + 0x30), var_f0, i_2, 0)
                    j += 1
                    rbx_1 += 0x34
                while (j s< *(rbp + 0x158))
            
            int32_t j_1 = 0
            int512_t zmm3
            
            if (*(rbp + 0x168) s> 0)
                int64_t rbx_2 = 0
                
                do
                    int64_t r10_2 = *(rbp + 0x160)
                    zmm3.o = *(r10_2 + rbx_2 + 0x1c)
                    int64_t rdx_2 = r10_2 + sx.q(j_1) * 0x28
                    (*(*rsi_1 + 0x38))(rsi_1, rdx_2, rdx_2 + 0xc, zmm3, *(r10_2 + rbx_2 + 0x24), 
                        var_f0, i_2, var_e0)
                    j_1 += 1
                    rbx_2 += 0x28
                while (j_1 s< *(rbp + 0x168))
            
            int32_t j_2 = 0
            
            if (*(rbp + 0x178) s> 0)
                int64_t* r14 = nullptr
                int32_t* r12_1 = 0x14
                int32_t* var_a0_1 = 0x14
                TEB* gsbase
                int64_t r15_2 = *(gsbase->ThreadLocalStoragePointer + (rcx << 3))
                int64_t var_a8_1 = r15_2
                
                do
                    if (data_143f3b154 s> *(r12_1 + r15_2))
                        _Init_thread_header(&data_143f3b154)
                        
                        if (data_143f3b154 == 0xffffffff)
                            data_143f3b148 = 0x3f800000
                            data_143f3b150 = 0
                            _Init_thread_footer(&data_143f3b154)
                    
                    if (data_143f3b164 s> *(r12_1 + r15_2))
                        _Init_thread_header(&data_143f3b164)
                        
                        if (data_143f3b164 == 0xffffffff)
                            data_143f3b158 = 0
                            data_143f3b15c = 0x3f800000
                            _Init_thread_footer(&data_143f3b164)
                    
                    if (data_143f3b174 s> *(r12_1 + r15_2))
                        _Init_thread_header(&data_143f3b174)
                        
                        if (data_143f3b174 == 0xffffffff)
                            data_143f3b168 = 0
                            data_143f3b170 = 0x3f800000
                            _Init_thread_footer(&data_143f3b174)
                    
                    void* rsi_2 = *(rbp + 0x170)
                    var_f0.q = 0
                    char var_f8_3 = 0
                    void var_78
                    sub_141fd6cc0(&var_78, *(rax_1 + 0x1548), 1, 0, 0, nullptr)
                    int32_t k = 0
                    
                    if (*(r14 + rsi_2 + 8) s> 0)
                        do
                            i_2.q = &data_14399f630
                            var_f0.q = &data_143f3b168
                            var_f8_3.q = &data_143f3b158
                            sub_141fdacb0(&var_78, *(r14 + rsi_2) + sx.q(k) * 0xc, &data_143dbb1f0, 
                                &data_143f3b148, &data_143f3b158, &data_143f3b168)
                            k += 1
                        while (k s< *(r14 + rsi_2 + 8))
                        
                        rbp = arg1
                        r15_2 = var_a8_1
                        r12_1 = var_a0_1
                    
                    int32_t k_1 = 0
                    
                    if (*(r14 + rsi_2 + 0x18) s> 0)
                        int64_t rbx_3 = 4
                        
                        do
                            int32_t* rax_14 = *(r14 + rsi_2 + 0x10)
                            sub_141fdaaf0(&var_78, *(rbx_3 + rax_14 - 4), *(rax_14 + rbx_3), 
                                *(rbx_3 + rax_14 + 4))
                            k_1 += 3
                            rbx_3 += 0xc
                        while (k_1 s< *(r14 + rsi_2 + 0x18))
                    
                    char var_d8 = 0
                    char* var_90_1 = &var_d8
                    void*** (* var_98)() = j_sub_140597fc0
                    void* rax_15 = sub_140a756e0(&var_98, &data_143958018)
                    void*** rdi_3 = (*(rax_15 + 0x10) + 0xf) & 0xfffffffffffffff0
                    void* rax_16 = &rdi_3[0x36]
                    
                    if (rax_16 u> *(rax_15 + 0x18))
                        sub_140b0e3d0(rax_15 + 0x10, 0x1c0)
                        rdi_3 = (*(rax_15 + 0x10) + 0xf) & 0xfffffffffffffff0
                        rax_16 = &rdi_3[0x36]
                    
                    *(rax_15 + 0x10) = rax_16
                    
                    if (rdi_3 != 0)
                        int128_t var_88
                        sub_140acc920(&var_88, rsi_2 + 0x20 + r14)
                        int32_t var_cc_1 = 0
                        void var_c0
                        int32_t rcx_15 = *sub_140b5e500(&var_c0, 0x3e)
                        int64_t* rcx_16 = *(data_143f5b298 + 0x388)
                        int64_t rax_20 = (*(*rcx_16 + 0x280))(rcx_16)
                        sub_142118c70(rdi_3)
                        rdi_3[0x32] = rax_20
                        *rdi_3 = &data_142e0eff8
                        int128_t zmm0_1 = var_88
                        rdi_3[0x35] = rcx_15.q
                        *(rdi_3 + 0x198) = zmm0_1
                    
                    var_e0.q = arg5
                    i_2 = i_1
                    var_f0.b = 0
                    zmm3, zmm6 = sub_141fe3230(&var_78, &data_14399f6e0, rdi_3, 
                        *(r14 + rsi_2 + 0x24), 0, 0, i_2, var_e0)
                    sub_141fd8140(&var_78)
                    j_2 += 1
                    r14 = &r14[6]
                while (j_2 s< *(rbp + 0x178))
                
                i = i_1
                r15_1 = var_c8_1
                r12 = arg2
            
            result = arg4
            rcx_1 = arg5
        
        i += 1
        r15_1 = &r15_1[1]
        i_1 = i
        var_c8_1 = r15_1
    while (i s< r12[1].d)

return result
