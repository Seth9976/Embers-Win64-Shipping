// 函数: sub_1410e7450
// 地址: 0x1410e7450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x168))()
char rax_2 = sub_1419803d0((*U"1111")[sx.q(arg3)])
char rax_3

if (rax_2 != 0)
    rax_3 = (*(arg2 + 0x60))()

void* var_48
void* var_38
int128_t* rax_12
void* rcx_6
int512_t zmm0_2

if (rax_2 == 0 || rax_3 == 0 || rax_1 == 0)
    uint64_t rcx_7 = zx.q(data_14401b1a0)
    *arg4 = 0
    *(arg4 + 8) = 0
    *arg6 = 0
    *(arg6 + 8) = 0
    TEB* gsbase
    
    if (data_143e55248 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_7 << 3))))
        int64_t r8_2
        r8_2, arg5 = _Init_thread_header(&data_143e55248)
        
        if (data_143e55248 == 0xffffffff)
            int64_t* rcx_19 = data_143db18d0
            
            if (rcx_19 == 0)
                sub_140a53c40()
                rcx_19 = data_143db18d0
            
            r8_2.b = 1
            int64_t* rax_36 = (*(*rcx_19 + 0xb0))(rcx_19, u"r.ShaderPipelines", r8_2)
            int64_t rax_37
            
            if (rax_36 == 0)
                rax_37 = 0
            else
                int64_t rdx_12 = *rax_36
                rax_37 = (*(rdx_12 + 0x58))(rax_36, rdx_12)
            
            data_143e55240 = rax_37
            arg5 = _Init_thread_footer(&data_143e55248)
    
    int64_t rax_16 = sx.q((*U"1111")[sx.q(arg3)])
    
    if (rax_16.d u> 0x1e)
        if ((*(rax_16 * 0x14 + &data_143f025fc) & 1) != 0)
            goto label_1410e7613
        
        goto label_1410e75c6
    
    void** rax_18
    
    if (test_bit(0x6562c800, rax_16.d) || (*(rax_16 * 0x14 + &data_143f025fc) & 1) != 0)
    label_1410e7613:
        arg5.o = zx.o(0)
        rax_18 = &var_48
        var_48.o = arg5.o
    else
    label_1410e75c6:
        int64_t r14_1 = data_143e55240
        
        if (r14_1 == 0)
            goto label_1410e7613
        
        int64_t rcx_10
        
        if (data_143de5480 == 0)
            rcx_10 = 0
        else
            rcx_10.b = GetCurrentThreadId() != data_143de5470
        
        if (*(r14_1 + (rcx_10 << 2)) == 0)
            goto label_1410e7613
        
        rax_18, arg5 = sub_142127b90(arg1, &var_38, &data_143e52720, arg2, arg5, 0)
    
    arg5.o = *rax_18
    *arg9 = arg5.o
    int64_t rcx_12 = *arg9
    
    if (rcx_12 == 0)
        char var_50_4 = 1
        int32_t var_58_4 = 0
        void** rax_30
        rax_30, zmm0_2 = sub_142127800(arg1, &var_38, &data_143e537a0, arg2, arg5)
        rcx_6 = *rax_30
        int64_t var_40_5 = rax_30[1]
        rax_12 = arg7
        goto label_1410e7756
    
    void* r10_1 = *(arg9 + 8)
    char rax_19 = data_143e537e8
    void* rdx_4
    
    if (rax_19 u>= 5)
        rdx_4 = nullptr
    else
        uint64_t rax_20 = zx.q(rax_19)
        rdx_4 = *(rcx_12 + (rax_20 << 3) + 8)
        
        if (rdx_4 == 0)
            rdx_4 = nullptr
        else
            if ((rdx_4.b & 1) != 0)
                rdx_4 = (rdx_4 s>> 1) + 8 + rcx_12 + (rax_20 << 3)
            
            int64_t r9_5
            
            if ((*(rdx_4 + 0xf8) & 1) == 0)
                r9_5 = *(rdx_4 + 0xf8)
            else
                r9_5 = *(*(*(r10_1 + 0x20) + 0x28) + (sx.q((*(rdx_4 + 0xf8) u>> 1).d) << 3))
            
            if (r9_5 != &data_143e537a0)
                rdx_4 = nullptr
    
    void* var_40_3 = r10_1
    var_48 = rdx_4
    arg5.o = var_48.o
    *arg7 = arg5.o
    void* r10_2 = *(arg9 + 8)
    char rax_25 = data_143e54fc8
    void* rdx_7
    
    if (rax_25 u>= 5)
        rdx_7 = nullptr
    else
        int64_t rcx_14 = *arg9
        uint64_t rax_26 = zx.q(rax_25)
        rdx_7 = *(rcx_14 + (rax_26 << 3) + 8)
        
        if (rdx_7 == 0)
            rdx_7 = nullptr
        else
            if ((rdx_7.b & 1) != 0)
                rdx_7 = (rdx_7 s>> 1) + 8 + rcx_14 + (rax_26 << 3)
            
            int64_t r9_7
            
            if ((*(rdx_7 + 0xf8) & 1) == 0)
                r9_7 = *(rdx_7 + 0xf8)
            else
                r9_7 = *(*(*(r10_2 + 0x20) + 0x28) + (sx.q((*(rdx_7 + 0xf8) u>> 1).d) << 3))
            
            if (r9_7 != &data_143e54f80)
                rdx_7 = nullptr
    
    var_48 = rdx_7
    void* var_40_4 = r10_2
else
    arg5.o = zx.o(0)
    char var_50_1 = 1
    int32_t var_58_1 = 0
    *arg9 = zx.o(0)
    void** rax_5
    int512_t zmm0
    rax_5, zmm0 = sub_142127800(arg1, &var_38, &data_143e537a0, arg2, arg5)
    char var_50_2 = 1
    int32_t var_58_2 = 0
    int64_t var_40 = rax_5[1]
    var_48 = *rax_5
    zmm0.o = var_48.o
    *arg7 = zmm0.o
    void** rax_8
    int512_t zmm0_1
    rax_8, zmm0_1 = sub_142127800(arg1, &var_38, &data_143e52340, arg2, zmm0)
    char var_50_3 = 1
    int32_t var_58_3 = 0
    int64_t rax_9 = rax_8[1]
    var_48 = *rax_8
    int64_t var_40_1 = rax_9
    zmm0_1.o = var_48.o
    *arg4 = zmm0_1.o
    void** rax_10
    rax_10, zmm0_2 = sub_142127800(arg1, &var_38, &data_143e52440, arg2, zmm0_1)
    rcx_6 = *rax_10
    int64_t var_40_2 = rax_10[1]
    rax_12 = arg6
label_1410e7756:
    var_48 = rcx_6
    zmm0_2.o = var_48.o
    char var_50_5 = 1
    int32_t var_58_5 = 0
    *rax_12 = zmm0_2.o
    void** rax_32
    rax_32, arg5 = sub_142127800(arg1, &var_38, &data_143e54f80, arg2, zmm0_2)
    int64_t var_40_6 = rax_32[1]
    var_48 = *rax_32
arg5.o = var_48.o
*arg8 = arg5.o
return arg8
