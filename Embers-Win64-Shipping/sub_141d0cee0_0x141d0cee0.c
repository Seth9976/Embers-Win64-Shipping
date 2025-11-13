// 函数: sub_141d0cee0
// 地址: 0x141d0cee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t var_118 = arg2
int32_t var_134
sub_140865c40(&arg1[0xb], &var_134, arg2)
int64_t rax_2 = sx.q(var_134)
void* const rcx_1

if (rax_2.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = arg1[0xb] + rax_2 * 0x18

int16_t* result_1 = rcx_1 + 8

if (rcx_1 == 0)
    result_1 = nullptr

int16_t* result

if (result_1 != 0)
    result = result_1
else
    int16_t* var_128
    sub_140b63b70(&arg_18, &var_128)
    int64_t* rcx_3 = *arg1
    int16_t* const r13_1 = &data_142d40450
    int16_t* const rdx_3 = &data_142d40450
    int32_t var_120
    
    if (var_120 != 0)
        rdx_3 = var_128
    
    int64_t rax_5 = (*(*rcx_3 + 0x118))(rcx_3, rdx_3)
    
    if (rax_5 != 0)
        int64_t i_3 = 6
        int64_t rax_6 = var_118
        int64_t rax_7 = arg_18
        uint128_t var_b4
        void* rax_8 = &var_b4:8
        int32_t var_c8_1 = 0
        int32_t var_c0_1 = 0
        int64_t var_60_1 = 0
        int64_t var_58_1 = 0
        int64_t i
        
        do
            *(rax_8 - 8) = 0
            *rax_8 = 0
            rax_8 += 0xc
            i = i_3
            i_3 -= 1
        while (i != 1)
        int32_t rbx_1 = var_c8_1
        int64_t rax_9 = 0x10001
        int64_t var_6c_1 = 0
        
        if (arg4 u>= 0x10001)
            rax_9 = arg4
        
        uint64_t i_2 = rax_9 - 1
        uint64_t i_4 = i_2
        
        if (rax_9 - 1 s>= 0)
            uint64_t i_5
            uint64_t i_6
            
            do
                rbx_1 += 1
                i_5 = i_4
                i_6 = i_4
                i_4 *= 2
            while (i_5 + i_6 s>= 0)
            int32_t var_c8_2 = rbx_1
        
        int32_t rdx_4 = var_c0_1
        
        for (uint64_t i_1 = 0x10000; i_1 != 0; i_1 u>>= 1)
            i_2 u>>= 1
            rdx_4 += 1
        
        int32_t var_c4_1 = rbx_1
        int32_t rdi = rbx_1
        
        if (i_2 != 0)
            do
                rdi += 1
                i_2 u>>= 1
            while (i_2 != 0)
            
            int32_t var_c4_2 = rdi
        
        uint64_t r12_1 = -1 u>> rbx_1.b
        int32_t rcx_7 = arg1[0x16].d
        uint64_t var_d0_1 = r12_1
        int32_t var_138 = rcx_7
        arg1[0x16].d = rcx_7 + 1
        
        if (rcx_7 + 1 s> *(arg1 + 0xb4))
            sub_1417500c0(&arg1[0x15])
            rcx_7 = var_138
        
        uint128_t zmm0_1 = var_b4
        int64_t* rcx_10 = sx.q(rcx_7) * 0x98 + arg1[0x15]
        *rcx_10 = rax_5
        rcx_10[1] = rax_6
        rcx_10[2] = arg4
        rcx_10[5].d = rdx_4 - 1
        *(rcx_10 + 0x34) = zmm0_1
        *(rcx_10 + 0x2c) = rax_7
        *(rcx_10 + 0x7c) = var_6c_1
        int128_t var_a4
        *(rcx_10 + 0x44) = var_a4
        rcx_10[3] = r12_1
        rcx_10[4].d = rbx_1
        uint128_t var_94
        *(rcx_10 + 0x54) = var_94
        *(rcx_10 + 0x24) = rdi
        int128_t var_84
        *(rcx_10 + 0x64) = var_84
        int64_t var_74
        *(rcx_10 + 0x74) = var_74
        rcx_10[0x11] = var_60_1
        rcx_10[0x12] = var_58_1
        var_138.w = arg1[0x16].w - 1
        int64_t* var_110 = &var_118
        int32_t* var_108_1 = &var_138
        int32_t var_130
        sub_141cf1990(&arg1[0xb], &var_130, &var_110, nullptr)
        result_1 = arg1[0xb] + ((sx.q(var_130) * 3 + 1) << 3)
        void* rbx_3 = zx.q(*result_1) * 0x98 + arg1[0x15]
        
        if (arg1[0x2c].d == 0)
            sub_141cfab60(&arg1[0x2b], 1)
        
        if (data_143a21150 != 0)
            sub_140af2b60()
            char rax_24 = sub_140b21a10(&data_143dbb3f0, u"CachePerPak")
            int32_t rcx_13 = data_143f36240
            
            if (rax_24 != 0)
                rcx_13 = 1
            
            data_143f36240 = rcx_13
            sub_140af2b60()
            char rax_25 = sub_140b21a10(&data_143dbb3f0, u"NewTrimCache")
            int32_t rcx_14 = data_143f36244
            
            if (rax_25 != 0)
                rcx_14 = 1
            
            data_143f36244 = rcx_14
            sub_140af2b60()
            sub_140b2ab20(&data_143dbb3f0, u"PakCacheMaxBlockMemory=", &data_143a2103c)
            data_143a21150 = 0
        
        void* rcx_15 = *(rbx_3 + 8)
        
        if (*(rcx_15 + 0x188) == 1 || data_143f36240 != 0)
            *(rcx_15 + 0x18c) = arg1[0x2c].d
            sub_141cfab60(&arg1[0x2b], 1)
        else
            *(rcx_15 + 0x18c) = 0
        
        if (var_120 != 0)
            r13_1 = var_128
        
        void var_100
        int64_t* rax_27 = sub_141d045a0(&var_100, r13_1)
        
        if (rbx_3 + 0x88 != rax_27)
            *(rbx_3 + 0x88) = *rax_27
            *rax_27 = 0
            sub_1405aeff0(rbx_3 + 0x90, &rax_27[1])
        
        int64_t* var_f8
        
        if (var_f8 != 0)
            var_f8[1].d -= 1
            
            if (var_f8[1].d == 1)
                (**var_f8)(var_f8)
                int32_t rsi_1 = *(var_f8 + 0xc)
                *(var_f8 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    int64_t r8_2 = *var_f8
                    (*(r8_2 + 8))(var_f8, 1, r8_2)
        
        int16_t* rcx_22 = var_128
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        result = result_1
    else
        int16_t* rcx_4 = var_128
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        result = nullptr

__security_check_cookie(rax_1 ^ &var_158)
return result
