// 函数: sub_1408e4b20
// 地址: 0x1408e4b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void* r14 = arg2
int64_t rbx = 0
int64_t* rcx = *(arg1 + 0x168)
int64_t* rdi = arg3
int64_t* var_138 = rcx
int64_t var_130 = 0
void* result = &rcx[sx.q(*(arg1 + 0x170))]
uint64_t rdx_1 = sx.q(*(arg1 + 0x170)) << 3 u>> 3

if (rcx u> result)
    rdx_1 = 0

if (rdx_1 != 0)
    do
        int64_t* rsi_1 = *rcx
        result = (*(*rsi_1 + 0x20))(rsi_1, *(arg1 + 0x158), zx.q(*(arg1 + 0x15c)))
        
        if (*(result + 0x10) != 0)
            int64_t var_168 = 0
            void* var_170 = &rsi_1[0x6e]
            int64_t var_160_1 = 0
            char var_157_1 = 0xff
            int32_t var_154_1 = 0
            int128_t* var_150 = nullptr
            int64_t var_148_1 = 1
            int64_t var_140 = 0
            sub_1405c4fe0(&var_150)
            int128_t* rax_5 = var_150
            *rax_5 = *(arg1 + 0x80)
            rax_5[1] = *(arg1 + 0x90)
            rax_5[2] = *(arg1 + 0xa0)
            rax_5[3] = *(arg1 + 0xb0)
            *(arg1 + 0x15d)
            *(arg1 + 0x15c)
            *(arg1 + 0x158)
            void* rax_6 = sub_1408e5610(rsi_1)
            int32_t i = 0
            
            if (*(rax_6 + 0x68) s> 0)
                do
                    int32_t var_a4 = var_a4 & 0xf8000000
                    int32_t var_7c = var_7c & 0xfffff800
                    void* rdi_1 = *(r14 + 0x20)
                    int64_t var_78_1 = 0
                    int32_t var_6c_1 = 1
                    int128_t var_68_1
                    __builtin_memset(&var_68_1, 0, 0x18)
                    int32_t var_50_1 = 0xffffffff
                    int32_t var_4c_1 = 0
                    int32_t var_48_1 = 0xffff0000
                    int32_t* rax_9 = *(rax_6 + 0x60) + sx.q(i) * 0xc
                    int32_t var_70_1 = 1
                    char var_178
                    char* var_f8_1 = &var_178
                    void*** (* var_100)() = j_sub_140597fc0
                    int128_t var_e0
                    __builtin_memset(&var_e0, 0, 0x3c)
                    int64_t var_98_1 = 1
                    int32_t var_88_1 = 0xffffffff
                    int32_t var_84_1 = 0
                    int32_t var_80_1 = 0x3f800000
                    var_178 = 0
                    void*** rax_14 =
                        sub_14081d830(0x90, sub_140a756e0(&var_100, &data_143958018) + 0x10, 1, 0)
                    void*** rbx_1 = rax_14
                    
                    if (rax_14 == 0)
                        rbx_1 = nullptr
                    else
                        __builtin_memset(&rbx_1[1], 0, 0x48)
                        *rbx_1 = &data_142e11bb8
                        __builtin_memset(&rbx_1[0xa], 0, 0x40)
                    
                    int64_t rsi_2 = sx.q(*(rdi_1 + 0xc0))
                    int32_t rax_15 = (rsi_2 + 1).d
                    *(rdi_1 + 0xc0) = rax_15
                    
                    if (rax_15 s> *(rdi_1 + 0xc4))
                        sub_14083a310(rdi_1 + 0xb8, rsi_2.d)
                    
                    int64_t rax_16 = *(rdi_1 + 0xb8)
                    char var_177 = 0
                    *(rax_16 + (rsi_2 << 3)) = rbx_1
                    void* rsi_3 = *(r14 + 0x20)
                    char* var_e8_1 = &var_177
                    void*** (* var_f0)() = j_sub_140597fc0
                    void*** rax_18 =
                        sub_14081d830(0x30, sub_140a756e0(&var_f0, &data_143958018) + 0x10, 1, 0)
                    void*** rdi_2 = rax_18
                    
                    if (rax_18 == 0)
                        rdi_2 = nullptr
                    else
                        rdi_2[2] = 0
                        rdi_2[3] = 0
                        *rdi_2 = &data_142e0f070
                        rdi_2[2].d = 0xffffffff
                        *(rdi_2 + 0x14) = 4
                        rdi_2[1] = &data_142d99570
                        rdi_2[3].d = 2
                        rdi_2[4] = 0
                        rdi_2[5] = 0
                    
                    int64_t r14_1 = sx.q(*(rsi_3 + 0xc0))
                    int32_t rax_19 = (r14_1 + 1).d
                    *(rsi_3 + 0xc0) = rax_19
                    
                    if (rax_19 s> *(rsi_3 + 0xc4))
                        sub_14083a310(rsi_3 + 0xb8, r14_1.d)
                    
                    *(*(rsi_3 + 0xb8) + (r14_1 << 3)) = rdi_2
                    sub_1408df3f0(arg1, rsi_1, rax_9, rbx_1, rdi_2, &var_e0)
                    int64_t* rcx_11 = *(rsi_1[6] + (sx.q(i) << 3))
                    r14 = arg2
                    var_68_1:8.q = (*(*rcx_11 + 0x280))(rcx_11)
                    int64_t rbx_2 = sx.q(var_160_1.d)
                    var_48_1:3.b = i.b
                    int32_t var_44 = (((var_44 & 0xfc0c003c) | 0x40c003c) & 0xfbffffff)
                        | zx.d(sub_1422a69b0(arg1, *(r14 + 8))) << 0x1a
                    int32_t rax_28 = (rbx_2 + 1).d
                    var_160_1.d = rax_28
                    
                    if (rax_28 s> var_160_1:4.d)
                        sub_140775640(&var_168)
                    
                    sub_140819f30(rbx_2 * 0xa0 + var_168, &var_e0)
                    
                    if (var_78_1 != 0)
                        sub_140a74f90(var_78_1)
                    
                    i += 1
                while (i s< *(rax_6 + 0x68))
                
                rdi = arg3
            
            sub_1422926f0(&var_170)
            int64_t rbx_3 = sx.q(rdi[1].d)
            int32_t rax_29 = (rbx_3 + 1).d
            rdi[1].d = rax_29
            
            if (rax_29 s> *(rdi + 0xc))
                sub_1407c3b60(rdi)
            
            sub_14081b0c0(rbx_3 * 0x38 + *rdi, &var_170)
            sub_1405ec8a0(&var_140)
            int128_t* rcx_25 = var_150
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            result = sub_14081c7d0(&var_168)
            rbx = var_130
        
        rbx += 1
        rcx = &var_138[1]
        var_130 = rbx
        var_138 = rcx
    while (rbx != rdx_1)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
