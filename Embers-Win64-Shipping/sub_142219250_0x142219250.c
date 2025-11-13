// 函数: sub_142219250
// 地址: 0x142219250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = data_143f510f8

if (*result == 0)
    return result

TEB* gsbase
void* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f512d8 s> *(rbx_1 + 0x14))
    _Init_thread_header(&data_143f512d8)
    
    if (data_143f512d8 == 0xffffffff)
        atexit(&data_142d080e0)
        _Init_thread_footer(&data_143f512d8)

if (data_143f512f0 s> *(rbx_1 + 0x14))
    _Init_thread_header(&data_143f512f0)
    
    if (data_143f512f0 == 0xffffffff)
        atexit(&data_142d08820)
        _Init_thread_footer(&data_143f512f0)

int64_t rbx_2 = sx.q(data_143f512d0)
int32_t rax_3 = (rbx_2 + 1).d
bool cond:0_1 = rax_3 s<= data_143f512d4
data_143f512d0 = rax_3

if (not(cond:0_1))
    sub_1405a4d70(&data_143f512c8)

*(data_143f512c8 + (rbx_2 << 3)) = arg1
int64_t rbx_3 = sx.q(data_143f512e8)
int32_t rax_5 = (rbx_3 + 1).d
bool cond:1_1 = rax_5 s<= data_143f512ec
data_143f512e8 = rax_5

if (not(cond:1_1))
    sub_140638970(&data_143f512e0)

int128_t* rcx_2 = rbx_3 * 0x30 + data_143f512e0
int64_t var_a8_1 = arg2
void* var_a0_1 = arg4
char var_87_1 = 0
*rcx_2 = *arg3
rcx_2[1] = arg3[1]
rcx_2[2] = arg3[2]
char rdx_2 = *arg6
int32_t var_84_1 = 0xbf800000
int64_t* var_b8
void* var_98_2
int64_t var_68
int64_t var_58
bool cond:7_1

if (rdx_2 == 0)
    int64_t var_90_2 = *(arg6 + 8)
    int64_t rax_18 = data_143f510e0
    
    if (data_143f50bd8 == 0)
        var_98_2 = arg5
        var_b8 = &data_143f512c8
        int64_t* var_b0_4 = &data_143f512e0
        bool var_70_4 = *rax_18 != 0
        bool var_88_4 = rdx_2 != 0
        
        if (arg4 == 0)
            int64_t var_80_7 = 0
        else
            void* rax_30 = sub_142591550()
            void* rdx_8 = *(arg4 + 0x10)
            int64_t rax_31 = sx.q(*(rax_30 + 0x38))
            
            if (rax_31.d s> *(rdx_8 + 0x38))
                var_80_7 = 0
            else
                void* var_80_6 = arg4
                
                if (*(*(rdx_8 + 0x30) + (rax_31 << 3)) != rax_30 + 0x30)
                    var_80_7 = 0
        
        cond:7_1 = arg6[1] == 0
        goto label_142219631
    
    var_b8 = &var_68
    int64_t* var_b0_3 = &var_58
    void* var_98_3 = arg5
    int64_t var_80_3 = 0
    bool cond:4_1 = *rax_18 != 0
    var_68 = data_143f512c8
    bool var_70_3 = cond:4_1
    int32_t var_60_2 = data_143f512d0
    int32_t var_5c_2 = data_143f512d4
    var_58 = data_143f512e0
    int32_t var_50_2 = data_143f512e8
    int32_t var_4c_2 = data_143f512ec
    data_143f512e8.q = 0
    data_143f512c8 = 0
    data_143f512d0.q = 0
    data_143f512e0 = 0
    bool var_88_3 = *arg6 != 0
    
    if (arg4 == 0)
        int64_t var_80_5 = 0
    else
        void* rax_25 = sub_142591550()
        void* rdx_5 = *(arg4 + 0x10)
        int64_t rax_26 = sx.q(*(rax_25 + 0x38))
        
        if (rax_26.d s> *(rdx_5 + 0x38))
            var_80_5 = 0
        else
            void* var_80_4 = arg4
            
            if (*(*(rdx_5 + 0x30) + (rax_26 << 3)) != rax_25 + 0x30)
                var_80_5 = 0
    
    if (arg6[1] != 0)
        sub_142227700(&var_b8)
    
    int64_t rsi_2 = sx.q(*(arg1 + 0xe8))
    int32_t rax_29 = (rsi_2 + 1).d
    *(arg1 + 0xe8) = rax_29
    
    if (rax_29 s> *(arg1 + 0xec))
        sub_1405fdd60(arg1 + 0xe0)
    
    sub_14220aa90(rsi_2 * 0x70 + *(arg1 + 0xe0), &var_b8)
label_1422195b6:
    int64_t rcx_14 = var_58
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    int64_t rcx_15 = var_68
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
else
    int64_t var_90_1 = *(arg6 + 8)
    
    if (data_143f50bd8 != 0)
        var_b8 = &var_68
        int64_t* var_b0_1 = &var_58
        void* var_98_1 = arg5
        int64_t var_80_1 = 0
        bool cond:6_1 = *data_143f510e0 != 0
        var_68 = data_143f512c8
        bool var_70_1 = cond:6_1
        int32_t var_60_1 = data_143f512d0
        int32_t var_5c_1 = data_143f512d4
        var_58 = data_143f512e0
        int32_t var_50_1 = data_143f512e8
        int32_t var_4c_1 = data_143f512ec
        data_143f512e8.q = 0
        data_143f512c8 = 0
        data_143f512d0.q = 0
        data_143f512e0 = 0
        char var_88_1 = 1
        
        if (arg6[1] != 0)
            sub_142227700(&var_b8)
        
        int64_t rsi_1 = sx.q(*(arg1 + 0xd8))
        int32_t rax_14 = (rsi_1 + 1).d
        *(arg1 + 0xd8) = rax_14
        
        if (rax_14 s> *(arg1 + 0xdc))
            sub_1405fdd60(arg1 + 0xd0)
        
        sub_14220a9b0(rsi_1 * 0x70 + *(arg1 + 0xd0), &var_b8)
        goto label_1422195b6
    
    var_98_2 = arg5
    int64_t rax_16 = data_143f510e0
    var_b8 = &data_143f512c8
    int64_t* var_b0_2 = &data_143f512e0
    char var_88_2 = 1
    bool var_70_2 = *rax_16 != 0
    int64_t var_80_2 = 0
    cond:7_1 = arg6[1] == 0
label_142219631:
    
    if (not(cond:7_1))
        sub_142227700(&var_b8)
    
    if (sub_1422136d0(&var_b8) != 0)
        int64_t** var_48 = &var_b8
        int64_t*** var_38_1 = &var_48
        void** (* var_40)(int64_t* arg1, int512_t arg2 @ zmm1) = j_sub_142210120
        sub_14226a6f0(var_98_2, &var_40)
int32_t rax_35 = data_143f512d4
data_143f512d0 = 0

if (rax_35 s< 0 && rax_35 != 0)
    sub_1405c5570(&data_143f512c8, 0)

int32_t rax_36 = data_143f512ec
data_143f512e8 = 0

if (rax_36 s< 0 && rax_36 != 0)
    sub_1405a5220(&data_143f512e0, 0)

return sub_1422272c0(arg1)
