// 函数: sub_1406b86f0
// 地址: 0x1406b86f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int64_t* var_198 = arg4
uint64_t rdi = zx.q(arg2)
int32_t var_1c0 = rdi.d
int32_t r14 = 0
int32_t var_1e8 = 0
int64_t var_188
sub_140a2e390(&var_188, u"Stream %i\n", zx.q(arg2))
int32_t var_180
int32_t r8_1 = var_180 - 1

if (var_180 == 0)
    r8_1 = 0

sub_140a20ba0(arg4, var_188, r8_1)
int64_t rcx_2 = var_188

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

void* rax_4 = *(*(*(arg1 + 0xe8) + 0x30) + (rdi << 3))
int32_t* rdi_1 = *(rax_4 + 0xd0)
int32_t* var_1b8 = rdi_1
int32_t r13 = *rdi_1
uint64_t result

if ((r13 & 0xfffffffc) != 0 || r13 == 2)
    sub_140a20ba0(arg4, u"\tUnsupported stream type\n", 0x19)
    result.b = 0
else
    int64_t* rax_5 = sub_1406c8bf0()
    result = rax_5[0x23]
    
    if (result == 0)
        (*(*rax_5 + 0x390))(rax_5)
        result = rax_5[0x23]
    
    if (*(result + 0x2b) == 0 || r13 != 1)
        int64_t* rsi_1 = nullptr
        
        if (r13 == 1)
            rsi_1 = sx.q(sub_1406b8250(arg1 + 0x50, r13)) * 0xa8 + *(arg1 + 0x50)
        else if (r13 == 3)
            rsi_1 = sx.q(sub_1406b8250(arg1 + 0x90, r13 - 2)) * 0xa8 + *(arg1 + 0x90)
        else if (r13 == 0)
            rsi_1 = sx.q(sub_1406b8250(arg1 + 0x190, r13 + 1)) * 0xa8 + *(arg1 + 0x190)
        
        char* rax_13 = avcodec_get_name(zx.q(rdi_1[1]))
        int16_t* var_1e0 = nullptr
        int32_t r15_1 = 0
        int32_t var_1d8_1 = 0
        int32_t rax_14 = 0
        int32_t var_1d4_1 = 0
        int16_t var_1f8
        
        if (rax_13 != 0 && *rax_13 != 0)
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (rax_13[rbx_2] != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_1e0, rbx_2.d + 1)
                rax_14 = var_1d4_1
                r15_1 = var_1d8_1
            
            r15_1 += rbx_2.d + 1
            
            if (r15_1 s> rax_14)
                sub_140594770(&var_1e0)
            
            var_1f8 = 0x3f
            sub_1405a7220(var_1e0, rbx_2.d + 1, rax_13, rbx_2.d + 1, var_1f8)
        
        int16_t* const r8_3 = &data_142d40450
        
        if (r15_1 != 0)
            r8_3 = var_1e0
        
        int64_t var_178
        sub_140a2e390(&var_178, u"\t\tCodec: %s\n", r8_3)
        int32_t rdi_3 = 0x30
        int32_t var_1e8_1 = 0x30
        int32_t var_170
        int32_t r8_4 = var_170 - 1
        
        if (var_170 == 0)
            r8_4 = 0
        
        int64_t* rbx_4 = var_198
        sub_140a20ba0(rbx_4, var_178, r8_4)
        int64_t rcx_14 = var_178
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        int64_t rcx_15 = *(*(arg1 + 0xe8) + 0x4b0)
        
        if (rcx_15 != 0)
            void* rax_18 = av_dict_get(rcx_15, "language", 0, 0, var_1f8)
            
            if (rax_18 != 0)
                char* rax_19 = *(rax_18 + 8)
                int64_t r13_1 = 0
                int64_t var_1d0 = 0
                int32_t rbx_5 = 0
                int32_t var_1c8_1 = 0
                int32_t rcx_16 = 0
                int32_t var_1c4_1 = 0
                
                if (rax_19 != 0 && *rax_19 != 0)
                    int64_t rbx_6 = -1
                    
                    do
                        rbx_6 += 1
                    while (rax_19[rbx_6] != 0)
                    
                    if (rbx_6.d + 1 s> 0)
                        sub_1405947f0(&var_1d0, rbx_6.d + 1)
                        r13_1 = var_1d0
                        rcx_16 = var_1c4_1
                    
                    int32_t rax_20 = var_1c8_1 + rbx_6.d + 1
                    
                    if (rax_20 s> rcx_16)
                        sub_140594770(&var_1d0)
                        r13_1 = var_1d0
                    
                    sub_1405a7220(r13_1, rbx_6.d + 1, rax_19, rbx_6.d + 1, 0x3f)
                    rbx_5 = rax_20
                
                void* rax_21 = &rsi_1[0x10]
                
                if (rax_21 != &var_1d0)
                    int64_t rcx_20 = *rax_21
                    
                    if (rcx_20 != 0)
                        sub_140a74f90(rcx_20)
                        rax_21 = &rsi_1[0x10]
                    
                    *rax_21 = r13_1
                    r13_1 = 0
                    var_1d0 = 0
                    *(rax_21 + 8) = rbx_5
                    *(rax_21 + 0xc) = var_1c4_1
                
                if (r13_1 != 0)
                    sub_140a74f90(r13_1)
                
                rbx_4 = var_198
        
        int32_t var_1b0
        int32_t var_d8
        uint64_t var_d0
        int128_t var_68
        
        if (r13 == 1)
            int32_t* rbx_8 = var_1b8
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = muls.dp.d(0x88888889, rbx_8[0x1d])
            int32_t rdx_13 = (temp1_1 + rbx_8[0x1d]) s>> 4
            int32_t rdi_4 = 0x200
            
            if (2 << av_log2(zx.q((rdx_13 u>> 0x1f) + rdx_13)) s>= 0x200)
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = muls.dp.d(0x88888889, rbx_8[0x1d])
                int32_t rdx_16 = (temp3_1 + rbx_8[0x1d]) s>> 4
                rdi_4 = 2 << av_log2(zx.q((rdx_16 u>> 0x1f) + rdx_16))
            
            var_d8 = 1
            int32_t var_d4_1 = rbx_8[1]
            uint64_t* var_1a8_1 = &var_d0
            var_d0 = 0
            int32_t var_c8_1 = r15_1
            
            if (r15_1 != 0)
                sub_1405a4c70(&var_d0, r15_1, 0)
                memcpy(var_d0, var_1e0, r15_1 * 2)
            else
                int32_t var_c4_1 = 0
            
            var_1f8.d = 1
            int128_t var_c0
            var_c0.d = av_samples_get_buffer_size(0, zx.q(rbx_8[0x1c]), 1, 1, var_1f8)
            int32_t rdx_20 = rbx_8[0x1c]
            var_c0:4.d = rdx_20
            int32_t r8_8 = rbx_8[0x1d]
            var_c0:8.d = r8_8
            int128_t var_b0
            var_b0.q = *(rbx_8 + 0x68)
            var_b0:8.d = 1
            var_1f8.d = 1
            var_b0:0xc.d = av_samples_get_buffer_size(0, rdx_20, r8_8, 1, var_1f8)
            var_1f8.d = 1
            int128_t var_a0
            var_a0.d = av_samples_get_buffer_size(0, zx.q(rbx_8[0x1c]), zx.q(rdi_4), 1, var_1f8)
            var_a0:8.q = 0
            int32_t var_90_1 = 0
            int32_t var_84
            __builtin_memset(&var_84, 0, 0x14)
            sub_1406b7090(&rsi_1[3], &var_d8)
            uint64_t rcx_34 = var_d0
            
            if (rcx_34 != 0)
                sub_140a74f90(rcx_34)
            
            sub_140a2e390(&var_68, u"\t\tChannels: %i\n", zx.q(*(rsi_1 + 0x34)))
            int32_t rax_32 = (var_68:8.q).d
            int32_t r8_11 = rax_32 - 1
            
            if (rax_32 == 0)
                r8_11 = 0
            
            int64_t* rbx_9 = var_198
            sub_140a20ba0(rbx_9, var_68.q, r8_11)
            int64_t rcx_37 = var_68.q
            
            if (rcx_37 != 0)
                sub_140a74f90(rcx_37)
            
            sub_140a2e390(&var_1b8, u"\t\tSample Rate: %i Hz\n", zx.q(rsi_1[7].d))
            int32_t r8_13 = var_1b0 - 1
            
            if (var_1b0 == 0)
                r8_13 = 0
            
            sub_140a20ba0(rbx_9, var_1b8, r8_13)
            int32_t* rcx_40 = var_1b8
            
            if (rcx_40 != 0)
                sub_140a74f90(rcx_40)
            
            sub_140a2e390(&var_198, u"\t\tBits Per Sample: %i\n", zx.q(rsi_1[6].d << 3))
            rdi_3 = 0x1f0
            int32_t var_1e8_2 = 0x1f0
            int32_t var_190
            
            if (var_190 != 0)
                r14 = var_190 - 1
            
            sub_140a20ba0(rbx_9, var_198, r14)
            int64_t* rcx_43 = var_198
            
            if (rcx_43 != 0)
                sub_140a74f90(rcx_43)
        else if (r13 != 0)
            var_d8 = r13
            int32_t var_d4_3 = var_1b8[1]
            uint64_t* var_1a8_3 = &var_d0
            var_d0 = 0
            int32_t var_c8_3 = r15_1
            int32_t var_c4_3
            
            if (r15_1 != 0)
                sub_1405a4c70(&var_d0, r15_1, 0)
                memcpy(var_d0, var_1e0, r15_1 * 2)
            else
                __builtin_memset(&var_c4_3, 0, 0x38)
            int32_t var_84_2
            __builtin_memset(&var_84_2, 0, 0x14)
            sub_1406b7090(&rsi_1[3], &var_d8)
            uint64_t rcx_59 = var_d0
            
            if (rcx_59 != 0)
                sub_140a74f90(rcx_59)
        else
            int64_t rax_35 = *(rax_4 + 0xc0)
            uint128_t zmm1_1
            zmm1_1.q =
                _mm_cvtepi32_pd(zx.q(rax_35.d)).q f/ _mm_cvtepi32_pd(zx.q((rax_35 u>> 0x20).d)).q
            zmm6 = _mm_cvtpd_ps(zmm1_1)
            
            if (not(_mm_cvtps_pd(zmm6.q).q f>= 2.5000000000000001e-05))
                int64_t rax_37 = *(rax_4 + 0x50)
                zmm1_1.q = _mm_cvtepi32_pd(zx.q(rax_37.d)).q
                    f/ _mm_cvtepi32_pd(zx.q((rax_37 u>> 0x20).d)).q
                zmm6 = _mm_cvtpd_ps(zmm1_1)
            
            int64_t var_168
            sub_140a2e390(&var_168, u"\t\tFrame Rate: %g fps\n", _mm_cvtps_pd(zmm6.q))
            int32_t var_160
            int32_t r8_18 = var_160 - 1
            
            if (var_160 == 0)
                r8_18 = 0
            
            sub_140a20ba0(rbx_4, var_168, r8_18)
            int64_t rcx_47 = var_168
            
            if (rcx_47 != 0)
                sub_140a74f90(rcx_47)
            
            var_68 = zx.o(0)
            int32_t* rbx_10 = var_1b8
            av_image_fill_linesizes(&var_68, zx.q(rbx_10[7]), zx.q(rbx_10[0xe]))
            int32_t r13_2 = rbx_10[0xf]
            int32_t rax_40 = rbx_10[0xe]
            sub_140a2e390(&var_1b8, u"\t\tDimensions: %i x %i\n", zx.q(rax_40))
            rdi_3 = 0x630
            int32_t var_1e8_3 = 0x630
            int32_t r8_21 = var_1b0 - 1
            
            if (var_1b0 == 0)
                r8_21 = 0
            
            sub_140a20ba0(var_198, var_1b8, r8_21)
            int32_t* rcx_51 = var_1b8
            
            if (rcx_51 != 0)
                sub_140a74f90(rcx_51)
            
            var_d8 = 0
            int32_t var_d4_2 = rbx_10[1]
            uint64_t* var_1a8_2 = &var_d0
            var_d0 = 0
            int32_t var_c8_2 = r15_1
            int32_t var_c4_2
            
            if (r15_1 != 0)
                sub_1405a4c70(&var_d0, r15_1, 0)
                memcpy(var_d0, var_1e0, r15_1 * 2)
            else
                __builtin_memset(&var_c4_2, 0, 0x38)
            int32_t var_84_1
            __builtin_memset(&var_84_1, 0, 0x14)
            sub_1406b7090(&rsi_1[3], &var_d8)
            uint64_t rcx_55 = var_d0
            
            if (rcx_55 != 0)
                sub_140a74f90(rcx_55)
            
            rsi_1[0xb] = *(rbx_10 + 0x20)
            *(rsi_1 + 0x64) = rax_40
            rsi_1[0xd].d = r13_2
            rsi_1[0xc].d = zmm6.d
            rsi_1[0xe].d = var_68.d
            *(rsi_1 + 0x74) = var_68:4.d
            rsi_1[0xf].d = var_68:8.d
            *(rsi_1 + 0x7c) = var_68:0xc.d
        int128_t var_158
        int64_t* rdx_38
        int32_t rdi_7
        int32_t r14_1
        
        if (rsi_1[0x13].d s> 1)
            void var_120
            rdx_38 = sub_140aae420(&var_120, &rsi_1[0x12])
            rdi_7 = rdi_3 | 8
            r14_1 = var_1c0
        else
            void var_138
            void* var_1a8_4 = &var_138
            var_158 = zx.o(0)
            int32_t rdi_5 = rdi_3 | 1
            int32_t var_1e8_4 = rdi_5
            r14_1 = var_1c0
            int64_t* rax_51 = sub_140aa1100(&var_138, r14_1, nullptr, &var_158)
            int32_t rdi_6 = rdi_5 | 2
            int32_t var_1e8_5 = rdi_6
            char* var_148
            void var_108
            void var_f0
            rdx_38 = sub_1405ea450(&var_108, 
                sub_140a96390(&var_148, _vfprintf_p_l(&var_f0, Unnamed Track (Stream {0})", 
                    FFMPEGMediaTracks")), rax_51)
            rdi_7 = rdi_6 | 4
        
        int32_t var_1e8_6 = rdi_7
        int64_t rcx_65 = *rsi_1
        *rsi_1 = *rdx_38
        *rdx_38 = rcx_65
        int64_t rcx_66 = rsi_1[1]
        rsi_1[1] = rdx_38[1]
        rdx_38[1] = rcx_66
        rsi_1[2].d = rdx_38[2].d
        
        if ((rdi_7.b & 8) != 0)
            rdi_7 &= 0xfffffff7
            int64_t* var_118
            
            if (var_118 != 0)
                var_118[1].d -= 1
                
                if (var_118[1].d == 1)
                    (**var_118)(var_118)
                    result = zx.q(*(var_118 + 0xc))
                    *(var_118 + 0xc) -= 1
                    
                    if (result.d == 1)
                        (*(*var_118 + 8))(var_118, 1)
        
        if ((rdi_7.b & 4) != 0)
            rdi_7 &= 0xfffffffb
            int64_t* var_100
            
            if (var_100 != 0)
                var_100[1].d -= 1
                
                if (var_100[1].d == 1)
                    (**var_100)(var_100)
                    result = zx.q(*(var_100 + 0xc))
                    *(var_100 + 0xc) -= 1
                    
                    if (result.d == 1)
                        (*(*var_100 + 8))(var_100, 1)
        
        if ((rdi_7.b & 2) != 0)
            rdi_7 &= 0xfffffffd
            int64_t* var_e8
            
            if (var_e8 != 0)
                var_e8[1].d -= 1
                
                if (var_e8[1].d == 1)
                    (**var_e8)(var_e8)
                    result = zx.q(*(var_e8 + 0xc))
                    *(var_e8 + 0xc) -= 1
                    
                    if (result.d == 1)
                        (*(*var_e8 + 8))(var_e8, 1)
        
        if ((rdi_7.b & 1) != 0)
            int64_t* rbx_15 = var_158:8.q
            
            if (rbx_15 != 0)
                rbx_15[1].d -= 1
                
                if (rbx_15[1].d == 1)
                    (**rbx_15)(rbx_15)
                    int32_t r12_1 = *(rbx_15 + 0xc)
                    *(rbx_15 + 0xc) -= 1
                    
                    if (r12_1 == 1)
                        (*(*rbx_15 + 8))(rbx_15, zx.q(r12_1))
        
        *(rsi_1 + 0xa4) = r14_1
        int16_t* rcx_75 = var_1e0
        
        if (rcx_75 != 0)
            sub_140a74f90(rcx_75)
        
        result.b = 1
    else
        result.b = 0

__security_check_cookie(rax_1 ^ &var_218)
return result
