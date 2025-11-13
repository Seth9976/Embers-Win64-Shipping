// 函数: sub_1426e98b0
// 地址: 0x1426e98b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int32_t rax_2 = sub_141ffde90(zx.d(*(arg2 + 0x28)))
int32_t zmm2 = *(arg2 + 0x20)
int64_t zmm1 = *(arg2 + 0x1c)
TEB* gsbase
int64_t rcx_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
int32_t var_220 = *(arg2 + 0x18)
int32_t var_21c = zmm1.d
int32_t var_218 = zmm2

if (data_143f722c0 s> *(0x14 + rcx_2))
    _Init_thread_header(&data_143f722c0)
    
    if (data_143f722c0 == 0xffffffff)
        sub_140b58170(&data_143f722b8, "EnvQueryTrace", 1)
        _Init_thread_footer(&data_143f722c0)

void var_228
void var_b8
sub_141eb54c0(&var_b8, data_143f722b8, &var_228, *(arg2 + 0x2c) & 1, nullptr)
sub_141eb8b70(&var_b8, arg5)
void* var_158
int64_t* result = sub_1426c5200(&var_158, arg1, rax_2, &var_b8, &var_220, arg6)
uint32_t rcx_6 = zx.d(*(arg2 + 0x2a))
char var_250
uint128_t var_210
void var_1e8
int64_t var_1d8
int32_t var_1d0
void var_140
int32_t var_d0
char var_cc

if (rcx_6 == 0)
    int32_t rsi_5 = arg4[1].d
    int32_t rsi_6 = rsi_5 - 1
    
    if (rsi_5 - 1 s>= 0)
        void* r14_6 = sx.q(rsi_6) * 0x18
        void* r15_3 = r14_6
        void* r12_6 = sx.q(rsi_6 + 1) * 0x18
        int32_t temp5_1
        
        do
            int64_t rbx_3 = *arg4
            memset(&var_1e8, 0, 0x88)
            var_250.q = &var_140
            int64_t* var_258_1
            var_258_1.d = var_d0
            int32_t var_1e0_3 = 0x3f800000
            result = sub_141ec6a20(var_158, &var_1e8, arg3, r15_3 + rbx_3, var_258_1.b, var_250, 
                &data_143f3a660)
            
            if (result.b != 0)
                int32_t var_208_3 = var_1d0
                result = *arg4
                int64_t var_200_3 = 0
                uint128_t zmm0_5
                zmm0_5.q = var_1d8
                var_210 = zmm0_5
                *(result + r14_6) = zmm0_5
                *(result + r14_6 + 0x10) = var_200_3
            else if (var_cc == 1)
                int32_t rcx_25 = arg4[1].d
                int32_t rax_25 = rcx_25 - rsi_6
                
                if (rax_25 != 1)
                    void* rcx_26 = *arg4
                    memmove(rcx_26 + r15_3, r12_6 + rcx_26, (rax_25 - 1) * 0x18)
                    rcx_25 = arg4[1].d
                
                result = zx.q(rcx_25 - 1)
                arg4[1].d = result.d
            
            r12_6 -= 0x18
            r15_3 -= 0x18
            r14_6 -= 0x18
            temp5_1 = rsi_6
            rsi_6 -= 1
        while (temp5_1 - 1 s>= 0)
else if (rcx_6 == 1)
    result = sub_1426c41e0(&var_158, arg3, arg4)
else
    int32_t var_150
    
    if (rcx_6 == 2)
        int32_t rsi_3 = arg4[1].d
        int32_t rsi_4 = rsi_3 - 1
        
        if (rsi_3 - 1 s>= 0)
            void* r14_4 = sx.q(rsi_4) * 0x18
            void* r15_2 = r14_4
            void* r12_4 = sx.q(rsi_4 + 1) * 0x18
            int32_t temp7_1
            
            do
                int64_t rbx_2 = *arg4
                memset(&var_1e8, 0, 0x88)
                void* rcx_17 = var_158
                uint64_t var_238_2 = &data_143f3a660
                void* var_240_2 = &var_140
                int32_t* var_248_2 = &var_220
                var_250.d = var_d0
                int128_t* var_258_3 = &data_14399f720
                int32_t var_21c_2 = var_150
                int32_t var_1e0_2 = 0x3f800000
                var_220 = 2
                result = sub_141ecd380(rcx_17, &var_1e8, arg3, r15_2 + rbx_2, var_258_3, var_250, 
                    var_248_2, var_240_2, var_238_2)
                
                if (result.b != 0)
                    int32_t var_208_2 = var_1d0
                    result = *arg4
                    int64_t var_200_2 = 0
                    uint128_t zmm0_4
                    zmm0_4.q = var_1d8
                    var_210 = zmm0_4
                    *(result + r14_4) = zmm0_4
                    *(result + r14_4 + 0x10) = var_200_2
                else if (var_cc == 1)
                    int32_t rcx_18 = arg4[1].d
                    int32_t rax_17 = rcx_18 - rsi_4
                    
                    if (rax_17 != 1)
                        void* rcx_19 = *arg4
                        memmove(rcx_19 + r15_2, r12_4 + rcx_19, (rax_17 - 1) * 0x18)
                        rcx_18 = arg4[1].d
                    
                    result = zx.q(rcx_18 - 1)
                    arg4[1].d = result.d
                
                r12_4 -= 0x18
                r15_2 -= 0x18
                r14_4 -= 0x18
                temp7_1 = rsi_4
                rsi_4 -= 1
            while (temp7_1 - 1 s>= 0)
    else if (rcx_6 == 3)
        int32_t rsi_1 = arg4[1].d
        int32_t rsi_2 = rsi_1 - (rcx_6 - 2)
        
        if (rsi_1 - (rcx_6 - 2) s>= 0)
            int64_t r14_2 = sx.q(rsi_2) * 0x18
            int64_t r15_1 = r14_2
            int64_t r12_2 = sx.q(rsi_2 + 1) * 0x18
            int32_t temp9_1
            
            do
                int64_t rbx_1 = *arg4
                memset(&var_1e8, 0, 0x88)
                void* rcx_11 = var_158
                uint64_t var_238_1 = &data_143f3a660
                void* var_240_1 = &var_140
                int32_t* var_248_1 = &var_220
                var_250.d = var_d0
                int128_t* var_258_2 = &data_14399f720
                int32_t var_21c_1 = var_150
                int32_t var_148
                int32_t var_218_1 = var_148.d
                int32_t var_1e0_1 = 0x3f800000
                var_220 = 3
                result = sub_141ecd380(rcx_11, &var_1e8, arg3, r15_1 + rbx_1, var_258_2, var_250, 
                    var_248_1, var_240_1, var_238_1)
                
                if (result.b != 0)
                    int32_t var_208_1 = var_1d0
                    result = *arg4
                    int64_t var_200_1 = 0
                    uint128_t zmm0_2
                    zmm0_2.q = var_1d8
                    var_210 = zmm0_2
                    *(result + r14_2) = zmm0_2
                    *(result + r14_2 + 0x10) = var_200_1
                else if (var_cc == 1)
                    int32_t rcx_12 = arg4[1].d
                    int32_t rax_9 = rcx_12 - rsi_2
                    
                    if (rax_9 != 1)
                        int64_t rcx_13 = *arg4
                        memmove(rcx_13 + r15_1, r12_2 + rcx_13, (rax_9 - 1) * 0x18)
                        rcx_12 = arg4[1].d
                    
                    result = zx.q(rcx_12 - 1)
                    arg4[1].d = result.d
                
                r12_2 -= 0x18
                r15_1 -= 0x18
                r14_2 -= 0x18
                temp9_1 = rsi_2
                rsi_2 -= 1
            while (temp9_1 - 1 s>= 0)
int64_t var_c8

if (var_c8 != 0)
    result = sub_140a74f90(var_c8)

int64_t var_e0

if (var_e0 != 0)
    result = sub_140a74f90(var_e0)

int64_t var_100

if (var_100 != 0)
    result = sub_140a74f90(var_100)

int64_t var_58

if (var_58 != 0)
    result = sub_140a74f90(var_58)

int64_t var_78

if (var_78 != 0)
    result = sub_140a74f90(var_78)

__security_check_cookie(rax_1 ^ &var_278)
return result
