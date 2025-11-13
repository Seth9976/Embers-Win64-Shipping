// 函数: sub_142711970
// 地址: 0x142711970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t rax_2 = sub_140d3c6e0(arg2 + 0x34)
arg2[6].d
sub_1426cce30(arg1 + 0x50, rax_2)
arg2[6].d
sub_1426cce30(arg1 + 0x228, rax_2)
arg2[6].d
sub_1426cce30(arg1 + 0x260, rax_2)
arg2[6].d
sub_1426cce30(arg1 + 0x298, rax_2)
char rax_3 = sub_1426e25f0(arg1 + 0x50)
char rax_4 = sub_1426e25f0(arg1 + 0x228)
sub_1426e2610(arg1 + 0x260)
sub_1426e2610(arg1 + 0x298)
int64_t var_158 = 0
int32_t var_150 = 0
void* rdx_4

if (*(arg1 + 0x2d0) == 0)
    rdx_4 = nullptr
else
    void* rax_5 = sub_142736ba0()
    
    if (rax_5 == 0)
        rdx_4 = nullptr
    else
        rdx_4 = *(arg1 + 0x2d0)
        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s> *(rdx_4 + 0x38) || *(*(rdx_4 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
            rdx_4 = nullptr

uint64_t result = sub_1426e7790(arg2, rdx_4, &var_158)

if (result.b != 0)
    TEB* gsbase
    
    if (data_143f72428
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f72428)
        
        if (data_143f72428 == 0xffffffff)
            sub_140b58170(&data_143f72420, "EnvQueryTrace", 1)
            _Init_thread_footer(&data_143f72428)
    
    void var_198
    void var_f8
    sub_141eb54c0(&var_f8, data_143f72420, &var_198, *(arg1 + 0x224) & 1, nullptr)
    uint64_t var_148 = 0
    int64_t var_140_1 = 0
    void* rdx_6
    
    if (*(arg1 + 0x2d0) == 0)
        rdx_6 = nullptr
    else
        void* rax_10 = sub_142736ba0()
        
        if (rax_10 == 0)
            rdx_6 = nullptr
        else
            rdx_6 = *(arg1 + 0x2d0)
            int64_t rax_11 = sx.q(*(rax_10 + 0x38))
            
            if (rax_11.d s> *(rdx_6 + 0x38) || *(*(rdx_6 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
                rdx_6 = nullptr
    
    char rax_13
    float zmm9_1
    rax_13, zmm9_1 = sub_1426e7330(arg2, rdx_6, &var_148)
    
    if (rax_13 != 0)
        sub_141eb8b70(&var_f8, &var_148)
    
    float zmm6_1
    int128_t zmm7_1
    uint128_t zmm8_1
    result, zmm6_1, zmm7_1, zmm8_1 = sub_141ffde90(zx.d(*(arg1 + 0x220)))
    int32_t r15_1 = result.d
    uint32_t rdx_8 = zx.d(*(arg1 + 0x222))
    int32_t zmm1_1 = *(arg1 + 0x214)
    int32_t var_138 = *(arg1 + 0x210)
    int32_t var_130_1 = *(arg1 + 0x218)
    int32_t var_134_1 = zmm1_1
    uint64_t result_1 = 0
    int32_t var_160_1 = 0
    uint64_t (* rax_14)(int64_t arg1, int64_t* arg2, int64_t* arg3, void* arg4, void* arg5, 
        int32_t arg6, int64_t* arg7, int32_t* arg8)
    uint64_t (* r8_9)(int64_t arg1, int64_t* arg2, int64_t* arg3, void* arg4, void* arg5, 
        int32_t arg6, int64_t* arg7, int32_t* arg8)
    
    if (rdx_8 == 0)
        r8_9 = sub_14270d080
        rax_14 = sub_14270d150
    label_142711bf0:
        int128_t var_58_1 = zmm7_1
        uint128_t var_68_1 = zmm8_1
        
        if (rax_4 != 0)
            r8_9 = rax_14
        
        sub_1426f0470(&result_1, arg1, r8_9)
        int32_t rdx_12 = 0
        
        if (var_150 s> 0)
            int64_t rcx_19 = 0
            
            do
                int64_t rax_15 = var_158
                rdx_12 += 1
                *(rcx_19 + rax_15 + 8) = zmm6_1 f+ *(rcx_19 + rax_15 + 8)
                rcx_19 += 0xc
            while (rdx_12 s< var_150)
        
        uint64_t* var_190
        result = sub_1426c5aa0(&var_190, arg1, arg2, 0xffffffff)
        int32_t i_1
        int32_t i = i_1
        uint64_t* r8_11 = var_190
        
        while (i s< r8_11[1].d)
            if ((*(r8_11 + 0x13e) & 1) != 0)
                break
            
            double var_180
            
            if (not(var_180 < 0.0))
                int64_t performanceCount
                result = QueryPerformanceCounter(&performanceCount)
                i = i_1
                
                if (float.d(performanceCount) f* data_143d796f8 f+ 0x4170000000000000 >= var_180)
                    r8_11 = var_190
                    break
            
            void var_110
            int64_t* rax_16 = sub_1426df900(arg1, &var_110, arg2, i)
            float zmm2_1 = zmm9_1 f+ rax_16[1].d
            float zmm1_2 = *(rax_16 + 4)
            int32_t var_128 = *rax_16
            float var_124_1 = zmm1_2
            float var_120_1 = zmm2_1
            int64_t rax_17 = sub_1426df5e0(arg1, arg2, zx.q(i_1))
            int32_t rbx_1 = 0
            int64_t var_178
            char var_16e
            
            if (var_150 s> 0)
                do
                    uint64_t result_2 = 0
                    
                    if (var_160_1 != 0)
                        result_2 = result_1
                    
                    bool rax_20 = (*(*result_2 + 0x48))(result_2, &var_128, 
                        var_158 + sx.q(rbx_1) * 0xc, rax_17, arg2[0xb], r15_1, &var_f8, &var_138)
                    
                    if ((var_16e & 2) == 0)
                        uint32_t rdx_18 = zx.d(*(arg1 + 0x4a))
                        
                        if (rdx_18 != 0 && rdx_18 != 1 && rdx_18 != 2 && rdx_18 == 3
                                && rax_20 == rax_3)
                            zmm1_2 = 1f
                            goto label_142711dab
                        
                        if ((var_16e & 4) == 0)
                            zmm1_2 = (zx.o(0)).d
                        label_142711dab:
                            char var_16f
                            uint32_t rcx_24 = zx.d(var_16f)
                            int16_t rax_21 = var_178:4.w
                            
                            if (rcx_24 == 0)
                                var_178.d = var_178.d + zmm1_2
                            else if (rcx_24 == 1)
                                if (rax_21 == 0 || not(var_178.d <= zmm1_2))
                                    var_178.d = zmm1_2
                            else if (rcx_24 == 2)
                                if (rax_21 == 0)
                                    var_178.d = zmm1_2
                                else if (not(var_178.d >= zmm1_2))
                                    var_178.d = zmm1_2
                            else if (rcx_24 == 3)
                                var_178.d = var_178.d * zmm1_2
                            
                            var_178:4.w = rax_21 + 1
                        
                        var_178:6.w += 1
                    
                    rbx_1 += 1
                while (rbx_1 s< var_150)
            
            result = sub_1426ec620(&var_190)
            r8_11 = var_190
            i = i_1
            
            if ((*(r8_11 + 0x13e) & 1) == 0)
                i += 1
                result.b = var_16e & 0xfd
                var_178 = 0
                result.b |= 1
                i_1 = i
                var_16e = result.b
                
                if (i s>= r8_11[1].d)
                    break
                
                do
                    result = *r8_11
                    int32_t r9_5 = *(result + (sx.q(i) << 3) + 4)
                    
                    if (not(test_bit(r9_5, 0x1e)) && r9_5 s>= 0)
                        break
                    
                    i += 1
                    i_1 = i
                while (i s< r8_11[1].d)
        
        *(r8_11 + 0x124) = i
        
        if (var_160_1 == 0)
            result = result_1
        label_142711ef8:
            
            if (result != 0)
                result = sub_140a74f90(result)
        else
            uint64_t result_3 = result_1
            
            if (result_3 != 0)
                (*(*result_3 + 0x38))(result_3, 0)
                result = result_1
                
                if (result != 0)
                    result = sub_140a84c80(result, 0, 0)
                    result_1 = result
                
                int32_t var_160_2 = 0
                goto label_142711ef8
    else
        if (rdx_8 == 1)
            r8_9 = sub_14270cb80
            rax_14 = sub_14270ccf0
            goto label_142711bf0
        
        if (rdx_8 == 2)
            r8_9 = sub_14270d3e0
            rax_14 = sub_14270d4e0
            goto label_142711bf0
        
        if (rdx_8 == 3)
            r8_9 = sub_14270ce60
            rax_14 = sub_14270cf70
            goto label_142711bf0
    uint64_t rcx_31 = var_148
    
    if (rcx_31 != 0)
        result = sub_140a74f90(rcx_31)
    
    int64_t var_98
    
    if (var_98 != 0)
        result = sub_140a74f90(var_98)
    
    int64_t var_b8
    
    if (var_b8 != 0)
        result = sub_140a74f90(var_b8)

int64_t rcx_34 = var_158

if (rcx_34 != 0)
    result = sub_140a74f90(rcx_34)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
