// 函数: sub_14270ece0
// 地址: 0x14270ece0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t rax_2 = sub_140d3c6e0(arg2 + 0x34)
arg2[6].d
sub_1426cce30(arg1 + 0x50, rax_2)
char rax_3 = sub_1426e25f0(arg1 + 0x50)
TEB* gsbase
int128_t zmm6

if (data_143f72418 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f72418)
    
    if (data_143f72418 == 0xffffffff)
        zmm6 = sub_140b58170(&data_143f72410, "EnvQueryOverlap", 1)
        _Init_thread_footer(&data_143f72418)

void var_158
void var_e8
int64_t* result =
    sub_141eb54c0(&var_e8, data_143f72410, &var_158, (*(arg1 + 0x214) u>> 1).b & 1, nullptr)
uint32_t rcx_6 = zx.d(*(arg1 + 0x211))
uint32_t r13 = zx.d(*(arg1 + 0x210))
int32_t zmm0 = *(arg1 + 0x1f8)
int32_t zmm2 = *(arg1 + 0x1fc)
int32_t zmm1 = *(arg1 + 0x200)
int32_t var_168 = 0

if (rcx_6 == 0)
    int32_t var_164_3 = zmm0
    int32_t var_160_3 = zmm2
    var_168 = 1
label_14270ee26:
    int32_t var_15c_2 = zmm1
label_14270ee2c:
    char rax_4 = (*(arg1 + 0x214)).b
    int128_t var_48_1 = zmm6
    uint64_t (* r15_1)(int64_t arg1, int128_t* arg2, int32_t* arg3, int64_t* arg4, void* arg5, 
        int32_t arg6, int64_t* arg7) = sub_14270d220
    
    if ((rax_4 & 1) != 0)
        r15_1 = sub_14270d300
    
    int128_t zmm7
    int128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    int64_t var_150 = 0
    int64_t var_148_1 = 0
    
    if ((rax_4 & 4) != 0)
        sub_1426e7330(arg2, sub_142738300(), &var_150)
    
    int64_t** var_140
    result = sub_1426c5aa0(&var_140, arg1, arg2, 0xffffffff)
    int32_t i_1
    int32_t i = i_1
    int64_t** r8_4 = var_140
    
    while (i s< r8_4[1].d)
        if ((*(r8_4 + 0x13e) & 1) != 0)
            break
        
        double var_130
        
        if (not(var_130 f< zx.o(0).q))
            int64_t performanceCount[0x2]
            result = QueryPerformanceCounter(&performanceCount)
            i = i_1
            
            if (float.d(performanceCount[0]) f* data_143d796f8 f+ 0x4170000000000000 >= var_130)
                r8_4 = var_140
                break
        
        float var_118
        sub_1426df900(arg1, &var_118, arg2, i)
        int64_t rax_6 = sub_1426df5e0(arg1, arg2, zx.q(i_1))
        int64_t rbx_1 = sx.q(var_148_1.d)
        int32_t rcx_13 = (rbx_1 + 1).d
        var_148_1.d = rcx_13
        
        if (rcx_13 s> var_148_1:4.d)
            sub_1405a4d70(&var_150)
        
        void* var_178_1 = &var_e8
        *(var_150 + (rbx_1 << 3)) = rax_6
        float var_114
        float zmm1_1 = var_114 f+ *(arg1 + 0x208)
        int64_t rax_7 = arg2[0xb]
        float var_108 = var_118 f+ *(arg1 + 0x204)
        float var_104_1 = zmm1_1
        float var_110
        float var_100_1 = var_110 f+ *(arg1 + 0x20c)
        bool rax_8 = r15_1(arg1, &var_108, &var_168, &var_150, rax_7, r13, var_178_1)
        int64_t var_128
        char var_11e
        
        if ((var_11e & 2) == 0)
            uint32_t rdx_10 = zx.d(*(arg1 + 0x4a))
            
            if (rdx_10 != 0 && rdx_10 != 1 && rdx_10 != 2 && rdx_10 == 3 && rax_8 == rax_3)
                zmm1_1 = 1f
                goto label_14270f004
            
            if ((var_11e & 4) == 0)
                zmm1_1 = (zx.o(0)).d
            label_14270f004:
                char var_11f
                uint32_t rcx_17 = zx.d(var_11f)
                int16_t rax_9 = var_128:4.w
                
                if (rcx_17 == 0)
                    var_128.d = var_128.d + zmm1_1
                else if (rcx_17 == 1)
                    if (rax_9 == 0 || not(var_128.d <= zmm1_1))
                        var_128.d = zmm1_1
                else if (rcx_17 == 2)
                    if (rax_9 == 0)
                        var_128.d = zmm1_1
                    else if (not(var_128.d >= zmm1_1))
                        var_128.d = zmm1_1
                else if (rcx_17 == 3)
                    var_128.d = var_128.d * zmm1_1
                
                var_128:4.w = rax_9 + 1
            
            var_128:6.w += 1
        
        int32_t rax_12 = var_148_1.d
        
        if (0 != 0)
            int64_t r9_4 = var_150
            memmove(r9_4 + (sx.q(rax_12 - 1) << 3), r9_4 + (sx.q(rax_12) << 3), 0 << 3)
            rax_12 = var_148_1.d
        
        var_148_1.d = rax_12 - 1
        result = sub_1426ec620(&var_140)
        r8_4 = var_140
        i = i_1
        
        if ((*(r8_4 + 0x13e) & 1) == 0)
            result.b = var_11e & 0xfd
            var_128 = 0
            result.b |= 1
            i += 1
            var_11e = result.b
            i_1 = i
            
            if (i s>= r8_4[1].d)
                break
            
            do
                result = *r8_4
                int32_t r9_5 = *(&result[sx.q(i)] + 4)
                
                if (not(test_bit(r9_5, 0x1e)) && r9_5 s>= 0)
                    break
                
                i += 1
                i_1 = i
            while (i s< r8_4[1].d)
    
    *(r8_4 + 0x124) = i
    int64_t rcx_27 = var_150
    
    if (rcx_27 != 0)
        result = sub_140a74f90(rcx_27)
else
    int32_t var_15c
    
    if (rcx_6 == 1)
        zmm1 = var_15c
        int32_t var_164_2 = zmm0
        int32_t var_160
        int32_t var_160_2 = var_160
        var_168 = 2
        goto label_14270ee26
    
    if (rcx_6 == 2)
        int32_t var_164_1 = zmm0
        int32_t var_15c_1 = var_15c
        int32_t var_160_1 = zmm1
        var_168 = 3
        goto label_14270ee2c

int64_t var_88

if (var_88 != 0)
    result = sub_140a74f90(var_88)

int64_t var_a8

if (var_a8 != 0)
    result = sub_140a74f90(var_a8)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
