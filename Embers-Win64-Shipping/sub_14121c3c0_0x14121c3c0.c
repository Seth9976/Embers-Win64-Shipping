// 函数: sub_14121c3c0
// 地址: 0x14121c3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
void* rdx = *(arg1 + 0x80)
void* rcx = *(arg1 + 0x20)
int64_t result
result.b = 0
int128_t* r14_2 = sx.q(*(arg1 + 0x28)) * 0x30 + *(rdx + 0xee8)

if (*(rdx + 8) s< 3 && (*(rcx + 0x138) & 2) != 0)
    TEB* gsbase
    
    if (data_143e883d8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e883d8)
        
        if (data_143e883d8 == 0xffffffff)
            int64_t* rcx_24 = data_143db18d0
            
            if (rcx_24 == 0)
                sub_140a53c40()
                rcx_24 = data_143db18d0
            
            int64_t r8_4
            r8_4.b = 1
            int64_t* rax_22 = (*(*rcx_24 + 0xb0))(rcx_24, u"r.Mobile.EnableMovableSpotLights", r8_4)
            int64_t rax_20
            
            if (rax_22 == 0)
                rax_20 = 0
            else
                int64_t rdx_10 = *rax_22
                rax_20 = (*(rdx_10 + 0x58))(rax_22, rdx_10)
            
            data_143e883d0 = rax_20
            _Init_thread_footer(&data_143e883d8)
    
    rcx = *(arg1 + 0x20)
    uint32_t rdx_1 = zx.d(*(rcx + 0x13c))
    
    if (((rdx_1 - 1).b & 0xfd) == 0 || (rdx_1.b == 2 && *(data_143e883d0 + 4) != 0))
        result.b = 1
    else
        result.b = 0

if ((*(rcx + 0x138) & 0x34) != 0 || result.b != 0)
    float zmm2_1[0x4]
    float zmm3_1[0x4]
    zmm2_1, zmm3_1 = sub_1413e83d0(*(arg1 + 0x80))
    void* rcx_4 = *(arg1 + 0x80)
    void*** (* var_118)()
    float var_108[0x4]
    float var_f8[0x4]
    int64_t* var_d8
    char arg_8
    
    if ((*(r14_2 + 0x28) & 3) != 0)
        sub_14121b290(rcx_4 + 0x1d60, r14_2, rcx_4 + 0x1d60, rcx_4 + 0x20d0)
        arg_8 = 0
        char* var_110_2 = &arg_8
        var_118 = j_sub_140597fc0
        int64_t* rax_12 = sub_140a756e0(&var_118, &data_143958018) + 0x10
        var_d8 = rax_12
        int64_t rcx_16 = *rax_12
        int64_t rcx_17 = rax_12[2]
        char var_c0_1 = 0
        int64_t result_2 = rax_12[3]
        rax_12[3] = &var_d8
        int64_t* rax_13 = var_d8
        rax_13[4].d += 1
        int64_t* rcx_18 = *(arg1 + 0x20)
        (*(*rcx_18 + 0x10))(rcx_18, &var_118)
        int32_t zmm4_1 = var_110_2:4.d
        int32_t zmm2_2 = var_118:4.d
        void* i = *(arg1 + 0x80) + 0x2120
        int32_t var_fc_1 = 0
        float zmm0_1[0x4] = var_108
        zmm0_1[0] = var_118.d[0]
        int32_t var_ec_1 = 0
        float temp0_1[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
        var_f8[0] = zmm4_1
        temp0_1[0] = zmm2_2
        float temp0_2[0x4] = _mm_shuffle_ps(var_f8, var_f8, 0xe1)
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
        temp0_2[0] = zmm4_1
        temp0_3[0] = var_110_2.d
        float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
        float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
        temp0_4[0] = zmm4_1
        float var_98[0x4] = temp0_5
        zmm0_1 = *(i + 0x4060)
        float var_88_1[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
        float var_68_1[0x4] = zmm0_1
        float var_58_1[0x4] = *(i + 0x4070)
        float var_48_1[0x4] = *(i + 0x4080)
        int64_t var_38_1 = 0
        int64_t var_30_1 = 0
        int32_t var_20_1 = 0
        sub_14122de70(&var_98)
        float zmm2_3[0x4]
        float zmm3_3[0x4]
        result, zmm2_3, zmm3_3 = sub_14121c840(&var_98)
        
        while (i != 0)
            void* i_1 = i
            int64_t rbx_1 = sx.q(var_20_1)
            void* i_2 = *(i_1 + 0x4000)
            
            if (i_2 != 0)
                i_1 = i_2
            
            sub_141223450(arg1, r14_2, i_1 + (rbx_1 << 6), zmm3_3, zmm2_3)
            var_20_1 = rbx_1.d + 1
            result, zmm2_3, zmm3_3 = sub_14121c840(&var_98)
        
        if (var_c0_1 == 0)
            int64_t* rax_18 = var_d8
            char var_c0_2 = 1
            rax_18[4].d -= 1
            int64_t* rcx_23 = var_d8
            
            if (rcx_17 != rcx_23[2])
                sub_140b16b40(rcx_23, rcx_17)
                rcx_23 = var_d8
            
            *rcx_23 = rcx_16
            result = result_2
            var_d8[3] = result
    else
        int64_t r15_1 = sx.q(*(rcx_4 + 0x2118))
        int32_t rax_2 = (r15_1 + 1).d
        *(rcx_4 + 0x2118) = rax_2
        
        if (rax_2 s> *(rcx_4 + 0x211c))
            sub_1405a4cf0(rcx_4 + 0x2110)
        
        int64_t rcx_6 = *(rcx_4 + 0x2110)
        int32_t rax_3 = *(arg1 + 0x28)
        arg_8 = 0
        *(rcx_6 + (r15_1 << 2)) = rax_3
        char* var_110_1 = &arg_8
        var_118 = j_sub_140597fc0
        int64_t* rax_5 = sub_140a756e0(&var_118, &data_143958018) + 0x10
        var_108[0].q = rax_5
        var_108[2].q = *rax_5
        var_f8[0].q = rax_5[2]
        var_f8[2].b = 0
        int64_t result_1 = rax_5[3]
        rax_5[3] = &var_108
        void* rax_6 = var_108[0].q
        *(rax_6 + 0x20) += 1
        void* rax_7 = *(arg1 + 0x80)
        int64_t* rsi_2 = *(rax_7 + 0xdb8)
        result = &rsi_2[sx.q(*(rax_7 + 0xdc0))]
        uint64_t r15_3 = sx.q(*(rax_7 + 0xdc0)) << 3 u>> 3
        
        if (rsi_2 u> result)
            r15_3 = 0
        
        if (r15_3 != 0)
            do
                sub_141385200(&var_d8, *rsi_2)
                result, zmm2_1, zmm3_1 = sub_141223450(arg1, r14_2, &var_d8, zmm3_1, zmm2_1)
                rbx += 1
                rsi_2 = &rsi_2[1]
            while (rbx != r15_3)
        
        if (var_f8[2].b == 0)
            void* rax_9 = var_108[0].q
            var_f8[2].b = 1
            *(rax_9 + 0x20) -= 1
            int64_t* rcx_12 = var_108[0].q
            int64_t rdx_5 = var_f8[0].q
            
            if (rdx_5 != rcx_12[2])
                sub_140b16b40(rcx_12, rdx_5)
                rcx_12 = var_108[0].q
            
            *rcx_12 = var_108[2].q
            result = result_1
            var_108[0].q[3] = result

return result
