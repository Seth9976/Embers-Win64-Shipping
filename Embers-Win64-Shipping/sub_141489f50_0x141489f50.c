// 函数: sub_141489f50
// 地址: 0x141489f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_578
int64_t rax_1 = __security_cookie ^ &var_578
void** var_4e8
sub_1422d9d50(&var_4e8)
int32_t r15 = 0
*(arg3 + 0x138) = 0

if (*(arg3 + 0x13c) != 0)
    sub_1408098d0(arg3 + 0x120, 0)

*(arg3 + 0xe0) = 0

if (*(arg3 + 0xe4) != 0)
    sub_1408098d0(arg3 + 0xc8, 0)

*(arg3 + 0x118) = 0

if (*(arg3 + 0x11c) != 0)
    sub_1408098d0(arg3 + 0x100, 0)

*(arg3 + 0x150) = 0

if (*(arg3 + 0x154) != 0)
    sub_141105040(arg3 + 0x140, 0)

*(arg3 + 0x1c8) = 0

if (*(arg3 + 0x1cc) != 0)
    sub_1408098d0(arg3 + 0x1b0, 0)

*(arg3 + 0xf8) = 0

if (*(arg3 + 0xfc) != 0)
    sub_140bcf1d0(arg3 + 0xe8, 0)

__builtin_memset(arg3 + 0x180, 0, 0x18)
int64_t var_540 = arg5
int64_t var_548 = arg4
int32_t var_550 = sub_1422e48a0(arg3 + 0x10)
sub_14147ac00(arg3 + 0xb0, arg2, arg9, &var_4e8, arg2 + 0x26f0, var_550, var_548, var_540)
int64_t* rax_6 = arg7
int32_t r12 = rax_6[1].d

if (r12 != 0)
    void* rbx_1 = arg1
    
    do
        void* rbp_1 = *(*rax_6 + (sx.q(r15) << 3))
        int32_t r10_1 = _mm_bsrli_si128(*(*(arg2 + 0x1658) + sx.q(*(rbp_1 + 0x110)) * 0x10), 8).d
        
        if (not(test_bit(r10_1, 0xf)))
            int64_t* rcx_14 = *(rbp_1 + 8)
            void var_4f8
            r10_1 = (*(*(*rcx_14 + 0x70))(rcx_14, &var_4f8, arg2)).12:8.d
        
        if ((r10_1.b & 8) != 0 && (r10_1.b & 2) != 0)
            bool cond:0_1 = *(arg3 + 0x118) s<= 0
            int32_t i = 0
            int32_t rax_11 = *(rbp_1 + 0xd8)
            *(arg3 + 0x178) = *(rbp_1 + 8)
            
            if (not(cond:0_1))
                int64_t r8_2 = 0
                
                do
                    void* rcx_16 = *(arg3 + 0x110)
                    r8_2 += 8
                    void* rdx_3 = arg3 + 0x100
                    
                    if (rcx_16 != 0)
                        rdx_3 = rcx_16
                    
                    void* rdx_4 = arg3 + 0x100
                    *(*(rdx_3 + r8_2 - 8) + 0x470) = rax_11
                    void* rcx_18 = *(arg3 + 0x110)
                    
                    if (rcx_18 != 0)
                        rdx_4 = rcx_18
                    
                    i += 1
                    *(*(rdx_4 + r8_2 - 8) + 0x474) = 0
                while (i s< *(arg3 + 0x118))
            
            int32_t i_1 = 0
            
            if (*(arg3 + 0x150) s> 0)
                int64_t rdx_5 = 0
                
                do
                    void* rax_12 = *(arg3 + 0x148)
                    void* rcx_20 = arg3 + 0x140
                    rdx_5 += 2
                    
                    if (rax_12 != 0)
                        rcx_20 = rax_12
                    
                    i_1 += 1
                    *(rcx_20 + rdx_5 - 2) = 0
                while (i_1 s< *(arg3 + 0x150))
            
            if (test_bit(r10_1, 0xe))
                void* rdx_6 = *(rbx_1 + 0x48)
                
                if (rdx_6 != 0)
                    int64_t rax_13 = sx.q(*(rbp_1 + 0x110))
                    
                    if (rax_13.d s< 0 || rax_13.d s>= *(rdx_6 + 0x1560)
                            || *(*(rdx_6 + 0x1558) + (rax_13 << 3)) == 0)
                        int64_t* rcx_22 = *(rbp_1 + 8)
                        int512_t zmm2
                        zmm2.o = *(rdx_6 + 0xd5c)
                        var_540.d = 0xbf800000
                        var_548 = 0
                        var_550.b = 1
                        void* var_558
                        var_558.b = 0
                        int64_t rax_16 = (*(*rcx_22 + 0x150))(rcx_22, rdx_6, zmm2, 
                            *(rdx_6 + 0x4898), var_558, var_550, var_548, var_540, arg6)
                        sub_141428a40(*(arg1 + 0x48), rbp_1, rax_16)
                        sub_141428a40(arg2, rbp_1, rax_16)
                        rbx_1 = arg1
            
            int64_t* rcx_25 = *(rbp_1 + 8)
            (*(*rcx_25 + 0x58))(rcx_25, arg8, arg3 + 0x10, 1, arg3 + 0xb0, var_550, var_548, 
                var_540, arg6)
        
        rax_6 = arg7
        r15 += 1
    while (r15 u< r12)

void* rcx_26 = arg3 + 0xe8
void* rax_19 = *(rcx_26 + 8)

if (rax_19 != 0)
    rcx_26 = rax_19

*arg10 = *rcx_26
sub_1422dbe10(&var_4e8)
__security_check_cookie(rax_1 ^ &var_578)
return &data_142f28578
