// 函数: sub_141494d20
// 地址: 0x141494d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t* rcx = *(*(arg1 + 0x5c0) + 0x20)
float var_110
(*(*rcx + 0x10))(rcx, &var_110)
int64_t rsi = 0
char r13 = *(*(*(arg1 + 0x5c0) + 0x20) + 0x138)
int128_t var_100
__builtin_memset(&var_100, 0, 0x30)
int64_t var_a4
__builtin_memset(&var_a4, 0, 0x43)
int128_t var_b8 = zx.o(0)
int16_t var_60 = 0
sub_140fdc870(arg2, &var_100)
int64_t rax_5 = sub_14148ba80(arg1, arg5, 0)
uint128_t zmm0 = zx.o(*(arg4 + 0x60c))
int32_t zmm1 = arg4[0x1a6].d
int32_t var_10c
uint128_t zmm4
zmm4.d = _mm_shuffle_ps(zmm0, zmm0, 0x55).d f- var_10c
uint64_t var_138 = zmm0.q
float zmm3 = zmm0.d - var_110
int32_t var_104
zmm0.d = var_104.d f* 1.04999995f
int64_t var_d0 = rax_5
zmm4.d = zmm4.d f* zmm4.d
zmm1 = zmm1 f+ zmm1 f+ zmm0.d
float var_108
float zmm2 = *(arg4 + 0x614) - var_108
int32_t var_a8 = 0
zmm4.d = zmm4.d f+ zmm3 * zmm3
zmm4.d = zmm4.d f+ zmm2 * zmm2
int64_t rax_8

if (zmm4.d f>= zmm1 f* zmm1)
    int64_t var_c0_1 = data_1439b53d0
    rax_8 = data_1439b54e8
    
    if (*(arg4 + 0xd34) != 0)
        rax_8 = data_1439b5500
else
    int64_t var_c0 = data_14395d9e8
    rax_8 = data_1439b5500
    
    if (*(arg4 + 0xd34) != 0)
        rax_8 = data_1439b54e8

int64_t var_c8 = rax_8
int32_t rax_10 = sub_14148c700()
void* var_148
void* var_140
void* var_128
void* var_120
int128_t var_e0

if (arg6 == 0)
    if (r13 s>= 0)
        if (rax_10 == 1)
            sub_1419a2ec0(arg4[0xa2a], &var_148, &data_143ed9940, 0)
            sub_1419a2ec0(arg4[0xa2a], &var_128, &data_143ee08b0, 0)
            void* rax_99 = var_148
            var_100.q = data_1439c9410
            int64_t rcx_149 = 0
            
            if (rax_99 != 0)
                int64_t rdx_103 = sx.q(*(rax_99 + 0x10c))
                int64_t* rbx_19 = *(var_140 + 0x10)
                int64_t rax_101 = rbx_19[3]
                
                if (*(rax_101 + (rdx_103 << 3)) == 0)
                    sub_1419ccf30(rbx_19, rdx_103.d)
                    rax_101 = rbx_19[3]
                
                rcx_149 = *(rax_101 + (rdx_103 << 3))
            
            void* rbx_20 = var_128
            int64_t rax_102 = 0
            var_100:8.q = rcx_149
            
            if (rbx_20 != 0)
                int64_t rdx_104 = sx.q(*(rbx_20 + 0x10c))
                int64_t rcx_151 = rdx_104
                int64_t* r13_28 = *(var_120 + 0x10)
                int64_t rax_104 = r13_28[3]
                
                if (*(rax_104 + (rdx_104 << 3)) == 0)
                    sub_1419ccf30(r13_28, rdx_104.d)
                    rax_104 = r13_28[3]
                    rcx_151 = rdx_104
                
                rax_102 = *(rax_104 + (rcx_151 << 3))
            
            var_e0.q = rax_102
            sub_1419870b0(arg2, &var_100, 2)
            sub_14149e690(var_148, arg2, arg4, arg1)
            void* var_150_15 = arg1
            sub_14149d2b0(rbx_20, arg2, arg3, arg4, nullptr)
        else if (rax_10 == 2)
            sub_1419a2ec0(arg4[0xa2a], &var_148, &data_143ed9940, 0)
            sub_1419a2ec0(arg4[0xa2a], &var_128, &data_143ee0a10, 0)
            void* rax_93 = var_148
            var_100.q = data_1439c9410
            int64_t rcx_139 = 0
            
            if (rax_93 != 0)
                int64_t rdx_96 = sx.q(*(rax_93 + 0x10c))
                int64_t* rbx_17 = *(var_140 + 0x10)
                int64_t rax_95 = rbx_17[3]
                
                if (*(rax_95 + (rdx_96 << 3)) == 0)
                    sub_1419ccf30(rbx_17, rdx_96.d)
                    rax_95 = rbx_17[3]
                
                rcx_139 = *(rax_95 + (rdx_96 << 3))
            
            void* rbx_18 = var_128
            int64_t rax_96 = 0
            var_100:8.q = rcx_139
            
            if (rbx_18 != 0)
                int64_t rdx_97 = sx.q(*(rbx_18 + 0x10c))
                int64_t rcx_141 = rdx_97
                int64_t* r13_26 = *(var_120 + 0x10)
                int64_t rax_98 = r13_26[3]
                
                if (*(rax_98 + (rdx_97 << 3)) == 0)
                    sub_1419ccf30(r13_26, rdx_97.d)
                    rax_98 = r13_26[3]
                    rcx_141 = rdx_97
                
                rax_96 = *(rax_98 + (rcx_141 << 3))
            
            var_e0.q = rax_96
            sub_1419870b0(arg2, &var_100, 2)
            sub_14149e690(var_148, arg2, arg4, arg1)
            void* var_150_14 = arg1
            sub_14149d2b0(rbx_18, arg2, arg3, arg4, nullptr)
        else if (rax_10 == 3)
            sub_1419a2ec0(arg4[0xa2a], &var_148, &data_143ed9940, 0)
            sub_1419a2ec0(arg4[0xa2a], &var_128, &data_143ee0b70, 0)
            void* rax_87 = var_148
            var_100.q = data_1439c9410
            int64_t rcx_129 = 0
            
            if (rax_87 != 0)
                int64_t rdx_89 = sx.q(*(rax_87 + 0x10c))
                int64_t* rbx_15 = *(var_140 + 0x10)
                int64_t rax_89 = rbx_15[3]
                
                if (*(rax_89 + (rdx_89 << 3)) == 0)
                    sub_1419ccf30(rbx_15, rdx_89.d)
                    rax_89 = rbx_15[3]
                
                rcx_129 = *(rax_89 + (rdx_89 << 3))
            
            void* rbx_16 = var_128
            int64_t rax_90 = 0
            var_100:8.q = rcx_129
            
            if (rbx_16 != 0)
                int64_t rdx_90 = sx.q(*(rbx_16 + 0x10c))
                int64_t rcx_131 = rdx_90
                int64_t* r13_24 = *(var_120 + 0x10)
                int64_t rax_92 = r13_24[3]
                
                if (*(rax_92 + (rdx_90 << 3)) == 0)
                    sub_1419ccf30(r13_24, rdx_90.d)
                    rax_92 = r13_24[3]
                    rcx_131 = rdx_90
                
                rax_90 = *(rax_92 + (rcx_131 << 3))
            
            var_e0.q = rax_90
            sub_1419870b0(arg2, &var_100, 2)
            sub_14149e690(var_148, arg2, arg4, arg1)
            void* var_150_13 = arg1
            sub_14149d2b0(rbx_16, arg2, arg3, arg4, nullptr)
        else if (rax_10 == 4)
            sub_1419a2ec0(arg4[0xa2a], &var_128, &data_143ed9940, 0)
            sub_1419a2ec0(arg4[0xa2a], &var_148, &data_143ee0cd0, 0)
            void* r13_22 = var_128
            int64_t rax_82 = 0
            var_100.q = data_1439c9410
            
            if (r13_22 != 0)
                int64_t rdx_82 = sx.q(*(r13_22 + 0x10c))
                int64_t rcx_120 = rdx_82
                int64_t* rbx_13 = *(var_120 + 0x10)
                int64_t rax_84 = rbx_13[3]
                
                if (*(rax_84 + (rdx_82 << 3)) == 0)
                    sub_1419ccf30(rbx_13, rdx_82.d)
                    rax_84 = rbx_13[3]
                    rcx_120 = rdx_82
                
                rax_82 = *(rax_84 + (rcx_120 << 3))
            
            void* rbx_14 = var_148
            var_100:8.q = rax_82
            int64_t rax_85 = 0
            
            if (rbx_14 != 0)
                rax_85 = sub_1410970c0(*(var_140 + 0x10), *(rbx_14 + 0x10c))
            
            var_e0.q = rax_85
            sub_1419870b0(arg2, &var_100, 2)
            sub_14149e690(r13_22, arg2, arg4, arg1)
            void* var_150_12 = arg1
            sub_14149d2b0(rbx_14, arg2, arg3, arg4, nullptr)
        else if (rax_10 == 5)
            sub_1419a2ec0(arg4[0xa2a], &var_128, &data_143ed9940, 0)
            sub_1419a2ec0(arg4[0xa2a], &var_148, &data_143ee0e30, 0)
            void* r13_21 = var_128
            int64_t rax_78 = 0
            var_100.q = data_1439c9410
            
            if (r13_21 != 0)
                rax_78 = sub_1410970c0(*(var_120 + 0x10), *(r13_21 + 0x10c))
            
            void* rbx_12 = var_148
            var_100:8.q = rax_78
            int64_t rax_80 = 0
            
            if (rbx_12 != 0)
                rax_80 = sub_1410970c0(*(var_140 + 0x10), *(rbx_12 + 0x10c))
            
            var_e0.q = rax_80
            sub_1419870b0(arg2, &var_100, 2)
            sub_14149e690(r13_21, arg2, arg4, arg1)
            void* var_150_11 = arg1
            sub_14149d2b0(rbx_12, arg2, arg3, arg4, nullptr)
    else if (rax_10 == 1)
        sub_1419a2ec0(arg4[0xa2a], &var_148, &data_143ed9940, 0)
        sub_1419a2ec0(arg4[0xa2a], &var_128, &data_143ee0f90, 0)
        void* rax_68 = var_148
        var_100.q = data_1439c9410
        int64_t rcx_102 = 0
        
        if (rax_68 != 0)
            int64_t rdx_68 = sx.q(*(rax_68 + 0x10c))
            int64_t* rbx_10 = *(var_140 + 0x10)
            int64_t rax_70 = rbx_10[3]
            
            if (*(rax_70 + (rdx_68 << 3)) == 0)
                sub_1419ccf30(rbx_10, rdx_68.d)
                rax_70 = rbx_10[3]
            
            rcx_102 = *(rax_70 + (rdx_68 << 3))
        
        void* rbx_11 = var_128
        int64_t rax_71 = 0
        var_100:8.q = rcx_102
        
        if (rbx_11 != 0)
            int64_t rdx_69 = sx.q(*(rbx_11 + 0x10c))
            int64_t rcx_104 = rdx_69
            int64_t* r13_20 = *(var_120 + 0x10)
            int64_t rax_73 = r13_20[3]
            
            if (*(rax_73 + (rdx_69 << 3)) == 0)
                sub_1419ccf30(r13_20, rdx_69.d)
                rax_73 = r13_20[3]
                rcx_104 = rdx_69
            
            rax_71 = *(rax_73 + (rcx_104 << 3))
        
        var_e0.q = rax_71
        sub_1419870b0(arg2, &var_100, 2)
        sub_14149e690(var_148, arg2, arg4, arg1)
        void* var_150_10 = arg1
        sub_14149d2b0(rbx_11, arg2, arg3, arg4, nullptr)
    else if (rax_10 == 2)
        sub_1419a2ec0(arg4[0xa2a], &var_148, &data_143ed9940, 0)
        sub_1419a2ec0(arg4[0xa2a], &var_128, &data_143ee10f0, 0)
        void* rax_62 = var_148
        var_100.q = data_1439c9410
        int64_t rcx_92 = 0
        
        if (rax_62 != 0)
            int64_t rdx_61 = sx.q(*(rax_62 + 0x10c))
            int64_t* rbx_8 = *(var_140 + 0x10)
            int64_t rax_64 = rbx_8[3]
            
            if (*(rax_64 + (rdx_61 << 3)) == 0)
                sub_1419ccf30(rbx_8, rdx_61.d)
                rax_64 = rbx_8[3]
            
            rcx_92 = *(rax_64 + (rdx_61 << 3))
        
        void* rbx_9 = var_128
        int64_t rax_65 = 0
        var_100:8.q = rcx_92
        
        if (rbx_9 != 0)
            int64_t rdx_62 = sx.q(*(rbx_9 + 0x10c))
            int64_t rcx_94 = rdx_62
            int64_t* r13_18 = *(var_120 + 0x10)
            int64_t rax_67 = r13_18[3]
            
            if (*(rax_67 + (rdx_62 << 3)) == 0)
                sub_1419ccf30(r13_18, rdx_62.d)
                rax_67 = r13_18[3]
                rcx_94 = rdx_62
            
            rax_65 = *(rax_67 + (rcx_94 << 3))
        
        var_e0.q = rax_65
        sub_1419870b0(arg2, &var_100, 2)
        sub_14149e690(var_148, arg2, arg4, arg1)
        void* var_150_9 = arg1
        sub_14149d2b0(rbx_9, arg2, arg3, arg4, nullptr)
    else if (rax_10 == 3)
        sub_1419a2ec0(arg4[0xa2a], &var_148, &data_143ed9940, 0)
        sub_1419a2ec0(arg4[0xa2a], &var_128, &data_143ee1250, 0)
        void* rax_56 = var_148
        var_100.q = data_1439c9410
        int64_t rcx_82 = 0
        
        if (rax_56 != 0)
            int64_t rdx_54 = sx.q(*(rax_56 + 0x10c))
            int64_t* rbx_6 = *(var_140 + 0x10)
            int64_t rax_58 = rbx_6[3]
            
            if (*(rax_58 + (rdx_54 << 3)) == 0)
                sub_1419ccf30(rbx_6, rdx_54.d)
                rax_58 = rbx_6[3]
            
            rcx_82 = *(rax_58 + (rdx_54 << 3))
        
        void* rbx_7 = var_128
        int64_t rax_59 = 0
        var_100:8.q = rcx_82
        
        if (rbx_7 != 0)
            int64_t rdx_55 = sx.q(*(rbx_7 + 0x10c))
            int64_t rcx_84 = rdx_55
            int64_t* r13_16 = *(var_120 + 0x10)
            int64_t rax_61 = r13_16[3]
            
            if (*(rax_61 + (rdx_55 << 3)) == 0)
                sub_1419ccf30(r13_16, rdx_55.d)
                rax_61 = r13_16[3]
                rcx_84 = rdx_55
            
            rax_59 = *(rax_61 + (rcx_84 << 3))
        
        var_e0.q = rax_59
        sub_1419870b0(arg2, &var_100, 2)
        sub_14149e690(var_148, arg2, arg4, arg1)
        void* var_150_8 = arg1
        sub_14149d2b0(rbx_7, arg2, arg3, arg4, nullptr)
    else if (rax_10 == 4)
        sub_1419a2ec0(arg4[0xa2a], &var_148, &data_143ed9940, 0)
        sub_1419a2ec0(arg4[0xa2a], &var_128, &data_143ee13b0, 0)
        void* rax_50 = var_148
        var_100.q = data_1439c9410
        int64_t rcx_72 = 0
        
        if (rax_50 != 0)
            int64_t rdx_47 = sx.q(*(rax_50 + 0x10c))
            int64_t* rbx_4 = *(var_140 + 0x10)
            int64_t rax_52 = rbx_4[3]
            
            if (*(rax_52 + (rdx_47 << 3)) == 0)
                sub_1419ccf30(rbx_4, rdx_47.d)
                rax_52 = rbx_4[3]
            
            rcx_72 = *(rax_52 + (rdx_47 << 3))
        
        void* rbx_5 = var_128
        int64_t rax_53 = 0
        var_100:8.q = rcx_72
        
        if (rbx_5 != 0)
            int64_t rdx_48 = sx.q(*(rbx_5 + 0x10c))
            int64_t rcx_74 = rdx_48
            int64_t* r13_14 = *(var_120 + 0x10)
            int64_t rax_55 = r13_14[3]
            
            if (*(rax_55 + (rdx_48 << 3)) == 0)
                sub_1419ccf30(r13_14, rdx_48.d)
                rax_55 = r13_14[3]
                rcx_74 = rdx_48
            
            rax_53 = *(rax_55 + (rcx_74 << 3))
        
        var_e0.q = rax_53
        sub_1419870b0(arg2, &var_100, 2)
        sub_14149e690(var_148, arg2, arg4, arg1)
        void* var_150_7 = arg1
        sub_14149d2b0(rbx_5, arg2, arg3, arg4, nullptr)
    else if (rax_10 == 5)
        sub_1419a2ec0(arg4[0xa2a], &var_148, &data_143ed9940, 0)
        sub_1419a2ec0(arg4[0xa2a], &var_128, &data_143ee1510, 0)
        void* rax_44 = var_148
        var_100.q = data_1439c9410
        int64_t rcx_62 = 0
        
        if (rax_44 != 0)
            int64_t rdx_40 = sx.q(*(rax_44 + 0x10c))
            int64_t* rbx_2 = *(var_140 + 0x10)
            int64_t rax_46 = rbx_2[3]
            
            if (*(rax_46 + (rdx_40 << 3)) == 0)
                sub_1419ccf30(rbx_2, rdx_40.d)
                rax_46 = rbx_2[3]
            
            rcx_62 = *(rax_46 + (rdx_40 << 3))
        
        void* rbx_3 = var_128
        int64_t rax_47 = 0
        var_100:8.q = rcx_62
        
        if (rbx_3 != 0)
            int64_t rdx_41 = sx.q(*(rbx_3 + 0x10c))
            int64_t rcx_64 = rdx_41
            int64_t* r13_12 = *(var_120 + 0x10)
            int64_t rax_49 = r13_12[3]
            
            if (*(rax_49 + (rdx_41 << 3)) == 0)
                sub_1419ccf30(r13_12, rdx_41.d)
                rax_49 = r13_12[3]
                rcx_64 = rdx_41
            
            rax_47 = *(rax_49 + (rcx_64 << 3))
        
        var_e0.q = rax_47
        sub_1419870b0(arg2, &var_100, 2)
        sub_14149e690(var_148, arg2, arg4, arg1)
        void* var_150_6 = arg1
        sub_14149d2b0(rbx_3, arg2, arg3, arg4, nullptr)
else if (rax_10 == 1)
    sub_1419a2ec0(arg4[0xa2a], &var_148, &data_143ed9940, 0)
    sub_1419a2ec0(arg4[0xa2a], &var_128, &data_143ee01d0, 0)
    void* rax_35 = var_148
    var_100.q = data_1439c9410
    int64_t rcx_51 = 0
    
    if (rax_35 != 0)
        int64_t rdx_33 = sx.q(*(rax_35 + 0x10c))
        int64_t rcx_52 = rdx_33
        int64_t* r13_9 = *(var_140 + 0x10)
        int64_t rax_37 = r13_9[3]
        
        if (*(rax_37 + (rdx_33 << 3)) == 0)
            sub_1419ccf30(r13_9, rdx_33.d)
            rax_37 = r13_9[3]
            rcx_52 = rdx_33
        
        rcx_51 = *(rax_37 + (rcx_52 << 3))
    
    void* r13_10 = var_128
    var_100:8.q = rcx_51
    
    if (r13_10 != 0)
        int64_t rdx_34 = sx.q(*(r13_10 + 0x10c))
        int64_t rcx_54 = rdx_34
        int64_t* rax_39 = *(var_120 + 0x10)
        int64_t rsi_9 = rax_39[3]
        
        if (*(rsi_9 + (rdx_34 << 3)) == 0)
            sub_1419ccf30(rax_39, rdx_34.d)
            rcx_54 = rdx_34
            rsi_9 = rax_39[3]
        
        rsi = *(rsi_9 + (rcx_54 << 3))
    
    var_e0.q = rsi
    sub_1419870b0(arg2, &var_100, 2)
    sub_14149e690(var_148, arg2, arg4, arg1)
    sub_14149d740(r13_10, arg2, arg3, arg4, arg6, arg1)
else if (rax_10 == 2)
    sub_1419a2ec0(arg4[0xa2a], &var_148, &data_143ed9940, 0)
    sub_1419a2ec0(arg4[0xa2a], &var_128, &data_143ee0330, 0)
    void* rax_30 = var_148
    var_100.q = data_1439c9410
    int64_t rcx_40 = 0
    
    if (rax_30 != 0)
        int64_t rdx_26 = sx.q(*(rax_30 + 0x10c))
        int64_t rcx_41 = rdx_26
        int64_t* r13_7 = *(var_140 + 0x10)
        int64_t rax_32 = r13_7[3]
        
        if (*(rax_32 + (rdx_26 << 3)) == 0)
            sub_1419ccf30(r13_7, rdx_26.d)
            rax_32 = r13_7[3]
            rcx_41 = rdx_26
        
        rcx_40 = *(rax_32 + (rcx_41 << 3))
    
    void* r13_8 = var_128
    var_100:8.q = rcx_40
    
    if (r13_8 != 0)
        int64_t rdx_27 = sx.q(*(r13_8 + 0x10c))
        int64_t rcx_43 = rdx_27
        int64_t* rax_34 = *(var_120 + 0x10)
        int64_t rsi_7 = rax_34[3]
        
        if (*(rsi_7 + (rdx_27 << 3)) == 0)
            sub_1419ccf30(rax_34, rdx_27.d)
            rcx_43 = rdx_27
            rsi_7 = rax_34[3]
        
        rsi = *(rsi_7 + (rcx_43 << 3))
    
    var_e0.q = rsi
    sub_1419870b0(arg2, &var_100, 2)
    sub_14149e690(var_148, arg2, arg4, arg1)
    sub_14149d740(r13_8, arg2, arg3, arg4, arg6, arg1)
else if (rax_10 == 3)
    sub_1419a2ec0(arg4[0xa2a], &var_148, &data_143ed9940, 0)
    sub_1419a2ec0(arg4[0xa2a], &var_128, &data_143ee0490, 0)
    void* rax_25 = var_148
    var_100.q = data_1439c9410
    int64_t rcx_29 = 0
    
    if (rax_25 != 0)
        int64_t rdx_19 = sx.q(*(rax_25 + 0x10c))
        int64_t rcx_30 = rdx_19
        int64_t* r13_5 = *(var_140 + 0x10)
        int64_t rax_27 = r13_5[3]
        
        if (*(rax_27 + (rdx_19 << 3)) == 0)
            sub_1419ccf30(r13_5, rdx_19.d)
            rax_27 = r13_5[3]
            rcx_30 = rdx_19
        
        rcx_29 = *(rax_27 + (rcx_30 << 3))
    
    void* r13_6 = var_128
    var_100:8.q = rcx_29
    
    if (r13_6 != 0)
        int64_t rdx_20 = sx.q(*(r13_6 + 0x10c))
        int64_t rcx_32 = rdx_20
        int64_t* rax_29 = *(var_120 + 0x10)
        int64_t rsi_5 = rax_29[3]
        
        if (*(rsi_5 + (rdx_20 << 3)) == 0)
            sub_1419ccf30(rax_29, rdx_20.d)
            rcx_32 = rdx_20
            rsi_5 = rax_29[3]
        
        rsi = *(rsi_5 + (rcx_32 << 3))
    
    var_e0.q = rsi
    sub_1419870b0(arg2, &var_100, 2)
    sub_14149e690(var_148, arg2, arg4, arg1)
    sub_14149d740(r13_6, arg2, arg3, arg4, arg6, arg1)
else if (rax_10 == 4)
    sub_1419a2ec0(arg4[0xa2a], &var_148, &data_143ed9940, 0)
    sub_1419a2ec0(arg4[0xa2a], &var_128, &data_143ee05f0, 0)
    void* rax_20 = var_148
    var_100.q = data_1439c9410
    int64_t rcx_18 = 0
    
    if (rax_20 != 0)
        int64_t rdx_12 = sx.q(*(rax_20 + 0x10c))
        int64_t rcx_19 = rdx_12
        int64_t* r13_3 = *(var_140 + 0x10)
        int64_t rax_22 = r13_3[3]
        
        if (*(rax_22 + (rdx_12 << 3)) == 0)
            sub_1419ccf30(r13_3, rdx_12.d)
            rax_22 = r13_3[3]
            rcx_19 = rdx_12
        
        rcx_18 = *(rax_22 + (rcx_19 << 3))
    
    void* r13_4 = var_128
    var_100:8.q = rcx_18
    
    if (r13_4 != 0)
        int64_t rdx_13 = sx.q(*(r13_4 + 0x10c))
        int64_t rcx_21 = rdx_13
        int64_t* rax_24 = *(var_120 + 0x10)
        int64_t rsi_3 = rax_24[3]
        
        if (*(rsi_3 + (rdx_13 << 3)) == 0)
            sub_1419ccf30(rax_24, rdx_13.d)
            rcx_21 = rdx_13
            rsi_3 = rax_24[3]
        
        rsi = *(rsi_3 + (rcx_21 << 3))
    
    var_e0.q = rsi
    sub_1419870b0(arg2, &var_100, 2)
    sub_14149e690(var_148, arg2, arg4, arg1)
    sub_14149d740(r13_4, arg2, arg3, arg4, arg6, arg1)
else if (rax_10 == 5)
    sub_1419a2ec0(arg4[0xa2a], &var_148, &data_143ed9940, 0)
    sub_1419a2ec0(arg4[0xa2a], &var_128, &data_143ee0750, 0)
    void* rax_15 = var_148
    var_100.q = data_1439c9410
    int64_t rcx_7 = 0
    
    if (rax_15 != 0)
        int64_t rdx_5 = sx.q(*(rax_15 + 0x10c))
        int64_t rcx_8 = rdx_5
        int64_t* r13_1 = *(var_140 + 0x10)
        int64_t rax_17 = r13_1[3]
        
        if (*(rax_17 + (rdx_5 << 3)) == 0)
            sub_1419ccf30(r13_1, rdx_5.d)
            rax_17 = r13_1[3]
            rcx_8 = rdx_5
        
        rcx_7 = *(rax_17 + (rcx_8 << 3))
    
    void* r13_2 = var_128
    var_100:8.q = rcx_7
    
    if (r13_2 != 0)
        int64_t rdx_6 = sx.q(*(r13_2 + 0x10c))
        int64_t rcx_10 = rdx_6
        int64_t* rax_19 = *(var_120 + 0x10)
        int64_t rsi_1 = rax_19[3]
        
        if (*(rsi_1 + (rdx_6 << 3)) == 0)
            sub_1419ccf30(rax_19, rdx_6.d)
            rcx_10 = rdx_6
            rsi_1 = rax_19[3]
        
        rsi = *(rsi_1 + (rcx_10 << 3))
    
    var_e0.q = rsi
    sub_1419870b0(arg2, &var_100, 2)
    sub_14149e690(var_148, arg2, arg4, arg1)
    sub_14149d740(r13_2, arg2, arg3, arg4, arg6, arg1)
sub_141223ee0(arg2)
__security_check_cookie(rax_1 ^ &var_178)
return &data_142f11598
