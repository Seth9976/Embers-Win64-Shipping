// 函数: sub_141972130
// 地址: 0x141972130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t var_84
__builtin_memset(&var_84, 0, 0x30)
int128_t* rsi = arg2
int64_t var_50 = 0
int32_t var_48 = 0
int16_t var_44 = 0
char var_42 = 0
int16_t var_40 = 0
int128_t var_e0
__builtin_memset(&var_e0, 0, 0x30)
int128_t var_98 = zx.o(0)

if ((not.b(arg3) & 1) == 0)
    int64_t rax_2 = arg2[0xa].q
    int128_t zmm1 = arg2[1]
    int32_t i = 0
    var_e0 = *arg2
    int128_t var_d0_1 = zmm1
    int128_t var_c0_1 = arg2[2]
    int128_t var_b0_1 = arg2[3]
    int128_t var_a0_1 = arg2[4]
    var_98 = arg2[5]
    var_84:4.o = arg2[6]
    int64_t var_70
    var_70.o = arg2[7]
    int64_t var_60
    var_60.o = arg2[8]
    var_50.o = arg2[9]
    var_40.q = rax_2
    int32_t rax_3 = *(arg1 + 0xa0)
    var_84.d = rax_3
    
    if (rax_3 != 0)
        do
            uint64_t i_1 = zx.q(i)
            uint64_t rax_5 = (i_1 + 7) * 3
            int64_t* rcx = *(arg1 + (rax_5 << 3))
            void* r14_1 = arg1 + (rax_5 << 3)
            
            if (rcx == 0)
                *(&var_84:4 + i_1) = 0
                rax_5.b = 0
            else
                *(&var_84:4 + i_1) = *(rcx + 0x3c)
                int64_t var_78
                *(&var_78 + (i_1 << 2)) = rcx[8].d
                int64_t rax_9 = (*(*rcx + 0x10))()
                
                if (rax_9 != 0)
                    var_44:1.b = 1
                
                if (rax_9 == 0 || *(rax_9 + 0x68) u<= 1)
                    var_44:1.b = 0
                
                rax_5 = zx.q(*(&var_84:4 + i_1))
            
            if (rax_5.b != 0)
                var_48.w = *(*r14_1 + 0x38)
            
            i += 1
        while (i u< var_84.d)
    
    int64_t* rcx_2 = *(arg1 + 0x168)
    int32_t var_58_1
    
    if (rcx_2 == 0)
        var_58_1 = 0
    else
        var_58_1 = *(rcx_2 + 0x3c)
        var_58_1 = rcx_2[8].d
        void* rax_14 = (*(*rcx_2 + 0x10))()
        
        if (rax_14 == 0 || *(rax_14 + 0x68) u<= 1)
            var_44:1.b = 0
        else
            var_44:1.b = 1
    
    var_50.b = *(arg1 + 0x170)
    var_50:1.b = *(arg1 + 0x171)
    var_50:2.b = *(arg1 + 0x172)
    var_50:3.b = *(arg1 + 0x173)
    var_50:4.d = *(arg1 + 0x174)
    
    if (var_58_1 != 0)
        var_48.w = *(*(arg1 + 0x168) + 0x38)
    
    rsi = &var_e0
    var_48:2.b = *(arg1 + 0x178)
    var_48:3.b = *(arg1 + 0x179)
    char var_42_1 = *(arg1 + 0x17a)

char rax_24 = sub_141975e10(arg1)
int64_t* rbx_1 = data_1439c8138
int32_t var_13c
sub_141971120(rbx_1, &var_13c, rsi)
int64_t rcx_6 = sx.q(var_13c)
void* const rcx_8

if (rcx_6.d == 0xffffffff)
    rcx_8 = nullptr
else
    rcx_8 = rcx_6 * 0xb8 + *rbx_1

void** rbx_2 = rcx_8 + 0xa8

if (rcx_8 == 0)
    rbx_2 = nullptr

if (rbx_2 != 0)
    goto label_141972444

int64_t* rax_25 = sub_141972b30(&data_1439c8130)
int32_t var_138
sub_141971120(rax_25, &var_138, rsi)
int64_t rcx_10 = sx.q(var_138)
void* const rcx_12

if (rcx_10.d == 0xffffffff)
    rcx_12 = nullptr
else
    rcx_12 = rcx_10 * 0xb8 + *rax_25

rbx_2 = rcx_12 + 0xa8

if (rcx_12 == 0)
    rbx_2 = nullptr

if (rbx_2 != 0)
    goto label_141972444

int64_t* rbx_3 = data_1439c8140
int32_t var_134
sub_141971120(rbx_3, &var_134, rsi)
int64_t rax_26 = sx.q(var_134)
void* const rax_28

if (rax_26.d == 0xffffffff)
    rax_28 = nullptr
else
    rax_28 = rax_26 * 0xb8 + *rbx_3

rbx_2 = rax_28 + 0xa8

if (rax_28 == 0)
    rbx_2 = nullptr

void*** result
void*** result_1

if (rbx_2 == 0)
    sub_141967120(sub_141974050(rsi), rsi)
    void*** result_2 = j_sub_140a82f30(0x20)
    
    if (result_2 == 0)
        result_2 = nullptr
    else
        result_2[1] = 0
        *result_2 = &data_143001f10
        result_2[2] = 0
        result_2[3] = 0
    
    result_1 = result_2
    result_1[2] = sub_1419815e0(sub_141974050(rsi))
    
    if (rax_24 == 0)
        int64_t* rcx_28 = data_143f0f180
        void var_128
        (*(*rcx_28 + 0xe0))(rcx_28, &var_128, rsi)
        sub_141962b90(&result_1[3], &var_128)
        sub_141962470(&var_128)
        
        if (result_1[3] == 0)
            sub_141974210(rsi)
    else
        void var_f8
        void** rax_34 = sub_1419691f0(&var_f8, nullptr, 0xff)
        sub_141960e70(*rax_34 + 0x10, result_1, rsi)
        void* rcx_25 = *rax_34
        int32_t r8_5 = rax_34[2].d
        int64_t* rdx_7 = rax_34[1]
        int64_t* rbx_5 = *(rcx_25 + 0xc8)
        int64_t* var_130 = rbx_5
        
        if (rbx_5 != 0)
            rbx_5[9].d += 1
        
        sub_141987180(rcx_25, rdx_7, r8_5, 1)
        
        if (&result_1[1] != &var_130)
            int64_t* rcx_26 = result_1[1]
            result_1[1] = rbx_5
            
            if (rcx_26 != 0)
                rcx_26[9].d -= 1
                
                if (rcx_26[9].d == 1)
                    sub_140a2f6e0(rcx_26)
        else if (rbx_5 != 0)
            rbx_5[9].d -= 1
            
            if (rbx_5[9].d == 1)
                sub_140a2f6e0(var_130)
        
        if (result_1[1] != 0)
            sub_14195b8b0(arg1 + 0x58, &result_1[1])
    
    int64_t* rax_41 = sub_141972b30(&data_1439c8130)
    int128_t* var_108 = rsi
    void** var_100_1 = &result_1
    int32_t var_120
    sub_14195c390(rax_41, &var_120, &var_108, nullptr)
    result = result_1
else
    int128_t* var_118 = rsi
    void** var_110_1 = rbx_2
    int32_t var_140
    sub_14195c390(rax_25, &var_140, &var_118, nullptr)
label_141972444:
    result = *rbx_2
    result_1 = result
    
    if (rax_24 != 0)
        void* rcx_15 = result[1]
        
        if (rcx_15 != 0)
            int64_t rax_29 = 0
            
            if (0 == *(rcx_15 + 8))
                *(rcx_15 + 8) = 0
            else
                rax_29 = *(rcx_15 + 8)
            
            if (((rax_29 u>> 0x1a).b & 1) == 0 && result[1] != 0)
                sub_14195b8b0(arg1 + 0x58, &result[1])
            
            result = result_1
__security_check_cookie(rax_1 ^ &var_168)
return result
