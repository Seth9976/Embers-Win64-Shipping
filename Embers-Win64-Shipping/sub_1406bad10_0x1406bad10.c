// 函数: sub_1406bad10
// 地址: 0x1406bad10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int32_t arg_18 = 0
_Query_perf_frequency()
_Query_perf_counter()
void var_98
av_init_packet(&var_98)
_Query_perf_frequency()
_Query_perf_counter()
fflush(__acrt_iob_func(1))
_Query_perf_frequency()
_Query_perf_counter()
int128_t var_d8
__builtin_memset(&var_d8, 0, 0x18)
uint64_t rcx_2 = zx.q(arg2[1].d)
uint32_t rax_1 = (rcx_2 << 2).d
int64_t rdx = sx.q(rax_1)

if (rax_1 != 0)
    if (rdx u> 0x7fffffffffffffff)
        sub_14058ac50()
        noreturn
    
    sub_14058ac70(&var_d8, rdx)
    rcx_2 = zx.q(arg2[1].d)

int64_t r14 = sx.q(rcx_2.d)
int128_t var_c0
__builtin_memset(&var_c0, 0, 0x28)
void* rsi = nullptr
void* rcx_4 = nullptr
int32_t* i = nullptr
int32_t* i_1
void* r8_2

if (r14 == 0)
    r8_2 = nullptr
    i_1 = nullptr
label_1406bae72:
    int32_t rax_4 = 0
    
    for (; i != rcx_4; i = &i[1])
        *i = rax_4
        rax_4 += 1
    
    int128_t* var_e8 = &var_d8
    int64_t* var_e0_1 = arg2
    var_e8.o = var_e8.o
    sub_1406b4ed0(&data_142d8d8aa, i_1, r8_2, &var_e8)
    _Query_perf_frequency()
    _Query_perf_counter()
    int64_t arg_20 = var_d8.q
    _Query_perf_frequency()
    int64_t result = _Query_perf_counter()
    int64_t var_c8
    
    if (*(arg1 + 0x410) == 0 || *(arg1 + 0x3d0) == 0)
        if (i_1 == 0)
            goto label_1406bb0e7
        
        int32_t* i_3 = i_1
        
        if ((rsi - i_1) s>> 2 << 2 u< 0x1000)
        label_1406bb0e1:
            result = j_sub_140a74f90(i_1)
        label_1406bb0e7:
            void* rcx_21 = var_d8.q
            
            if (rcx_21 == 0)
                goto label_1406bb130
            
            void* rax_19 = rcx_21
            
            if (var_c8 - rcx_21 u>= 0x1000)
                rcx_21 = *(rcx_21 - 8)
                
                if (rax_19 - rcx_21 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            result = j_sub_140a74f90(rcx_21)
            __builtin_memset(&var_d8, 0, 0x18)
        label_1406bb130:
            int64_t rcx_22 = *arg2
            
            if (rcx_22 == 0)
                return result
            
            return sub_140a74f90(rcx_22)
        
        i_1 = *(i_1 - 8)
        
        if (i_3 - i_1 - 8 u<= 0x1f)
            goto label_1406bb0e1
    else
        _Query_perf_frequency()
        _Query_perf_counter()
        int64_t rdx_2 = *(arg1 + 0x3e0)
        sws_scale(*(arg1 + 0x410), &arg_20, arg1 + 0x474, 0, *(*(arg1 + 0x3d0) + 0x78), rdx_2, 
            rdx_2 + 0x40)
        _Query_perf_frequency()
        _Query_perf_counter()
        int64_t rcx_10 = *(arg1 + 0x3d8)
        *(arg1 + 0x3d8) = rcx_10 + 1
        *(*(arg1 + 0x3e0) + 0x88) = rcx_10
        sub_1406bb190(arg1, *(arg1 + 0x3e0), &var_98)
        _Query_perf_frequency()
        _Query_perf_counter()
        av_packet_rescale_ts(&var_98, *(*(arg1 + 0x3d0) + 0x64), *(*(arg1 + 0x3c8) + 0x18))
        int32_t var_74_1 = **(arg1 + 0x3c8)
        int32_t rax_11 = av_interleaved_write_frame(*(arg1 + 0x3f8), &var_98)
        
        if (rax_11 s< 0)
            var_e8 = nullptr
            int64_t var_e0_2 = 0
            arg_18 = 1
            sub_140a20c40(&var_e8, rax_11)
            int128_t* rcx_16 = var_e8
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
        
        _Query_perf_frequency()
        _Query_perf_counter()
        av_packet_unref(&var_98)
        _Query_perf_frequency()
        _Query_perf_counter()
        _Query_perf_frequency()
        result = _Query_perf_counter()
        
        if (i_1 == 0)
            goto label_1406bb057
        
        int32_t* i_2 = i_1
        
        if ((rsi - i_1) s>> 2 << 2 u< 0x1000)
        label_1406bb051:
            result = j_sub_140a74f90(i_1)
        label_1406bb057:
            void* rcx_19 = var_d8.q
            
            if (rcx_19 == 0)
                goto label_1406bb130
            
            void* rax_14 = rcx_19
            
            if (var_c8 - rcx_19 u>= 0x1000)
                rcx_19 = *(rcx_19 - 8)
                
                if (rax_14 - rcx_19 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            result = j_sub_140a74f90(rcx_19)
            __builtin_memset(&var_d8, 0, 0x18)
            goto label_1406bb130
        
        i_1 = *(i_1 - 8)
        
        if (i_2 - i_1 - 8 u<= 0x1f)
            goto label_1406bb051
else
    if (r14 u> 0x3fffffffffffffff)
        sub_14058ac50()
        noreturn
    
    int64_t count = r14 << 2
    
    if (count u< 0x1000)
        if (count == 0)
            i = nullptr
        else
            i = j_sub_140a82f30(count)
        
        goto label_1406bae42
    
    if (count + 0x27 u<= count)
        stdext::threads::_Throw_lock_error()
        noreturn
    
    int64_t rax_2 = j_sub_140a82f30(count + 0x27)
    
    if (rax_2 != 0)
        i = (rax_2 + 0x27) & 0xffffffffffffffe0
        *(i - 8) = rax_2
    label_1406bae42:
        i_1 = i
        var_c0.q = i
        rsi = &i[r14]
        void* var_b0_1 = rsi
        memset(i, 0, count)
        r8_2 = rsi
        var_c0:8.q = rsi
        rcx_4 = rsi
        goto label_1406bae72
_invalid_parameter_noinfo_noreturn()
noreturn
