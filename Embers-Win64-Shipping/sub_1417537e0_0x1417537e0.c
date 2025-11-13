// 函数: sub_1417537e0
// 地址: 0x1417537e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* rdi = arg2
sub_141754910(arg1, arg2, arg3)
int64_t* rax_2
int512_t zmm1
rax_2, zmm1 = sub_14152fe60(rdi, arg1 + 0x80, arg3)
int64_t* rax_3
int512_t zmm1_1
rax_3, zmm1_1 = sub_14152ff50(rax_2, arg1 + 0xb0, zmm1)
sub_14152fb00(rax_3, arg1 + 0x68, zmm1_1)
(*(*rdi + 0x1d8))(rdi, &data_1439a9458)
int32_t rax_5
int512_t zmm1_2
rax_5, zmm1_2 = sub_140b4e7c0(rdi, &data_1439a9458)
int32_t i = 0

if (rax_5 s>= 1)
    sub_14152fa30(rdi, arg1 + 0xf8, zmm1_2)
    
    if ((rdi[5].b & 1) != 0)
        int32_t r14_1 = *(arg1 + 0x100)
        (**(arg1 + 0x108))(arg1 + 0x108, zx.q(r14_1))
        int32_t rbx_1 = 0
        
        if (r14_1 s> 0)
            do
                sub_141744270(arg1, rbx_1)
                rbx_1 += 1
            while (rbx_1 s< r14_1)

int32_t rax_7
int512_t zmm1_3
rax_7, zmm1_3 = sub_140b4e7c0(rdi, &data_1439a9458)

if (rax_7 s>= 2)
    sub_14152f6c0(rdi, arg1 + 0xe0, zmm1_3)

(*(*rdi + 0x1d8))(rdi, &data_1439a9538)
int64_t var_128
int64_t var_110
int64_t var_c8
uint128_t var_a8

if (sub_140b4e7c0(rdi, &data_1439a9538) s>= 2)
    sub_1417559b0(rdi, arg1 + 0x128)
    void* rbx_2 = arg1 + 0x140
    sub_1415300e0(rdi, arg1 + 0x158, sub_1417559b0(rdi, rbx_2))
    
    if (sub_140b4e7c0(rdi, &data_1439a9538) s< 0x10 && *(arg1 + 0x100) s> 0)
        int128_t* r14_2 = nullptr
        uint64_t* r12_1 = nullptr
        
        do
            int64_t rcx_16 = *rbx_2
            *(r12_1 + rcx_16) = *(r12_1 + rcx_16)
            *(r12_1 + rcx_16 + 8) = *(r12_1 + rcx_16 + 8)
            *(r12_1 + rcx_16 + 0xc) = *(r12_1 + rcx_16 + 0xc)
            *(r12_1 + rcx_16 + 0x14) = *(r12_1 + rcx_16 + 0x14)
            void* rcx_18 = *(arg1 + 0xf8) + r12_1
            void* rdi_1 = rcx_18
            void* rax_13 = *(rcx_18 + 8)
            
            if (rax_13 != 0)
                rdi_1 = rax_13
            
            void* r13_1 = rdi_1 + (sx.q(*(rcx_18 + 0x10)) << 3)
            
            if (rdi_1 != r13_1)
                do
                    void* rbx_3 = *rdi_1
                    int64_t* r8_1 = *(rbx_3 + 0x28)
                    char rdx_10 = *(r8_1 + 0xc)
                    
                    if (rdx_10 != 0)
                        int64_t rcx_19 = *(arg1 + 0x28)
                        var_a8 = *((sx.q(i) << 4) + *(arg1 + 0x68))
                        uint128_t zmm0_2 = *(r14_2 + rcx_19 + 4)
                        float temp0_1[0x4] =
                            _mm_unpacklo_ps(*(r14_2 + rcx_19), *(r14_2 + rcx_19 + 8))
                        zmm0_2 = _mm_unpacklo_ps(zmm0_2, zx.o(0)[0].q)
                        float zmm2_2[0x4] = data_14399f66c
                        float var_98_1[0x4] = _mm_unpacklo_ps(temp0_1, zmm0_2.q)
                        float var_88_1[0x4] = _mm_unpacklo_ps(
                            _mm_unpacklo_ps(data_14399f668, data_14399f670.q), 
                            _mm_unpacklo_ps(zmm2_2, 0)[0].q)
                        
                        if (r8_1 != 0 && rdx_10 != 0)
                            int32_t* rax_19 = (*(*r8_1 + 0x28))(r8_1, &var_c8)
                            sub_14003bce0(&var_a8, rax_19, &rax_19[3], &var_110, &var_128)
                            *(rbx_3 + 0x30) = var_110
                            zmm0_2 = zx.o(var_128)
                            int32_t var_108
                            *(rbx_3 + 0x38) = var_108
                            *(rbx_3 + 0x3c) = zmm0_2.q
                            int32_t var_120
                            *(rbx_3 + 0x44) = var_120
                    
                    rdi_1 += 8
                while (rdi_1 != r13_1)
                
                rbx_2 = arg1 + 0x140
            
            i += 1
            r12_1 = &r12_1[3]
            r14_2 += 0xc
        while (i s< *(arg1 + 0x100))
        
        rdi = arg2
else if (*(arg1 + 0x88) s> 0)
    int64_t r13_2 = 0
    var_128 = 0
    float (* r14_3)[0x4] = nullptr
    uint64_t* var_130_1 = nullptr
    uint64_t* rdi_2 = nullptr
    void* rdx_13 = arg1 + 0x80
    
    do
        void* rcx_22 = *(*rdx_13 + (r13_2 << 3))
        
        if (rcx_22 == 0 || *(rcx_22 + 0xc) == 0)
            rcx_22.b = 0
        else
            rcx_22.b = 1
        
        (*(arg1 + 0x158))[r13_2] = rcx_22.b
        
        if ((*(arg1 + 0x158))[r13_2] != 0)
            int64_t rbx_4 = *(arg1 + 0x128)
            int64_t* rcx_23 = *(*rdx_13 + (r13_2 << 3))
            int64_t* rax_27 = (*(*rcx_23 + 0x28))(rcx_23, &var_110)
            int64_t i_1 = sx.q(i)
            int64_t r8_4 = i_1 << 4
            *(rdi_2 + rbx_4) = *rax_27
            *(rdi_2 + rbx_4 + 8) = rax_27[1].d
            *(rdi_2 + rbx_4 + 0xc) = *(rax_27 + 0xc)
            *(rdi_2 + rbx_4 + 0x14) = *(rax_27 + 0x14)
            int64_t rcx_25 = *(arg1 + 0x28)
            int64_t rax_29 = *(arg1 + 0x68)
            var_110 = r8_4
            int64_t rax_30 = *(arg1 + 0x128)
            var_a8 = *(r8_4 + rax_29)
            uint128_t zmm0_1 = *(r14_3 + rcx_25 + 4)
            float temp0_7[0x4] = _mm_unpacklo_ps(*(r14_3 + rcx_25), *(r14_3 + rcx_25 + 8))
            int32_t* rdx_15 = rax_30 + i_1 * 0x18
            zmm0_1 = _mm_unpacklo_ps(zmm0_1, zx.o(0)[0].q)
            float zmm2_1[0x4] = data_14399f66c
            float var_98_2[0x4] = _mm_unpacklo_ps(temp0_7, zmm0_1.q)
            float var_88_2[0x4] = _mm_unpacklo_ps(
                _mm_unpacklo_ps(data_14399f668, data_14399f670.q), _mm_unpacklo_ps(zmm2_1, 0)[0].q)
            int64_t var_f8
            int64_t var_e8
            sub_14003bce0(&var_a8, rdx_15, &rdx_15[3], &var_e8, &var_f8)
            int64_t rax_31 = *(arg1 + 0x140)
            int64_t zmm1_4 = var_f8
            *(rdi_2 + rax_31) = var_e8
            *(rdi_2 + rax_31 + 0xc) = zmm1_4
            int32_t var_e0
            *(rdi_2 + rax_31 + 8) = var_e0
            int32_t var_f0
            *(rdi_2 + rax_31 + 0x14) = var_f0
            void* rcx_30 = *(arg1 + 0xf8) + rdi_2
            void* rdi_3 = rcx_30
            void* rax_32 = *(rcx_30 + 8)
            
            if (rax_32 != 0)
                rdi_3 = rax_32
            
            void* rdx_17 = rdi_3 + (sx.q(*(rcx_30 + 0x10)) << 3)
            
            if (rdi_3 != rdx_17)
                void* rax_34 = rdx_17
                
                do
                    void* rbx_5 = *rdi_3
                    int64_t* r8_6 = *(rbx_5 + 0x28)
                    char rdx_18 = *(r8_6 + 0xc)
                    
                    if (rdx_18 != 0)
                        int64_t rcx_31 = *(arg1 + 0x28)
                        uint128_t var_78 = (*(arg1 + 0x68))[i_1]
                        zmm0_1 = *(r14_3 + rcx_31 + 4)
                        float temp0_13[0x4] =
                            _mm_unpacklo_ps(*(r14_3 + rcx_31), *(r14_3 + rcx_31 + 8))
                        zmm0_1 = _mm_unpacklo_ps(zmm0_1, zx.o(0)[0].q)
                        zmm2_1 = data_14399f66c
                        float var_68_1[0x4] = _mm_unpacklo_ps(temp0_13, zmm0_1.q)
                        float var_58_1[0x4] = _mm_unpacklo_ps(
                            _mm_unpacklo_ps(data_14399f668, data_14399f670.q), 
                            _mm_unpacklo_ps(zmm2_1, 0)[0].q)
                        
                        if (r8_6 != 0 && rdx_18 != 0)
                            int32_t* rax_37 = (*(*r8_6 + 0x28))(r8_6, &var_110)
                            int64_t var_d8
                            sub_14003bce0(&var_78, rax_37, &rax_37[3], &var_d8, &var_c8)
                            *(rbx_5 + 0x30) = var_d8
                            zmm0_1 = zx.o(var_c8)
                            int32_t var_d0
                            *(rbx_5 + 0x38) = var_d0
                            *(rbx_5 + 0x3c) = zmm0_1.q
                            int32_t var_c0
                            *(rbx_5 + 0x44) = var_c0
                        
                        rax_34 = rdx_17
                    
                    rdi_3 += 8
                while (rdi_3 != rax_34)
                
                r13_2 = var_128
            
            rdi_2 = var_130_1
            rdx_13 = arg1 + 0x80
        
        r13_2 += 1
        rdi_2 = &rdi_2[3]
        i += 1
        var_128 = r13_2
        r14_3 = &(*r14_3)[3]
        var_130_1 = rdi_2
    while (i s< *(arg1 + 0x88))
    
    rdi = arg2
int32_t rax_40
int512_t zmm1_7
rax_40, zmm1_7 = sub_140b4e7c0(rdi, &data_1439a9538)

if (rax_40 s>= 6)
    sub_14152ee50(rdi, arg1 + 0x170, zmm1_7)
else
    int64_t r14_4 = sx.q(*(arg1 + 0x88))
    int64_t rsi_1 = sx.q(*(arg1 + 0x178))
    int32_t rax_41 = (rsi_1 + r14_4).d
    *(arg1 + 0x178) = rax_41
    
    if (rax_41 s> *(arg1 + 0x17c))
        sub_140594770(arg1 + 0x170)
    
    memset(*(arg1 + 0x170) + (rsi_1 << 1), 0, r14_4 * 2)

uint64_t result = sub_140b4e7c0(rdi, &data_1439a9538)
__security_check_cookie(rax_1 ^ &var_168)
return result
