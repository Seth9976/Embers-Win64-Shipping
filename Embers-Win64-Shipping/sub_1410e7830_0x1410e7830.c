// 函数: sub_1410e7830
// 地址: 0x1410e7830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14

if (sub_142134f80(arg1, 0) == 0)
    r14.b = 1
else if (sub_14212f0d0(arg1) != 0)
    r14.b = 1
else if ((*(*arg1 + 0x38))(arg1) != 0)
    r14.b = 1
else
    r14.b = 0

int32_t rax_5 = (*(*arg1 + 0x168))(arg1)
char rax_6 = sub_1419803d0((*U"1111")[sx.q(arg3)])
char rax_7

if (rax_6 != 0)
    rax_7 = (*(arg2 + 0x60))()

int128_t* result
void* var_48
void* var_38
void* rcx_9
int512_t zmm0_2

if (rax_6 == 0 || rax_7 == 0 || rax_5 == 0)
    uint64_t rcx_10 = zx.q(data_14401b1a0)
    *arg4 = 0
    *(arg4 + 8) = 0
    *arg6 = 0
    *(arg6 + 8) = 0
    TEB* gsbase
    
    if (data_143e55248 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_10 << 3))))
        int64_t r8_2
        r8_2, arg5 = _Init_thread_header(&data_143e55248)
        
        if (data_143e55248 == 0xffffffff)
            int64_t* rcx_23 = data_143db18d0
            
            if (rcx_23 == 0)
                sub_140a53c40()
                rcx_23 = data_143db18d0
            
            r8_2.b = 1
            int64_t* rax_36 = (*(*rcx_23 + 0xb0))(rcx_23, u"r.ShaderPipelines", r8_2)
            int64_t rax_37
            
            if (rax_36 == 0)
                rax_37 = 0
            else
                int64_t rdx_13 = *rax_36
                rax_37 = (*(rdx_13 + 0x58))(rax_36, rdx_13)
            
            data_143e55240 = rax_37
            arg5 = _Init_thread_footer(&data_143e55248)
    
    int64_t rax_19 = sx.q((*U"1111")[sx.q(arg3)])
    
    if (rax_19.d u> 0x1e)
        if ((*(rax_19 * 0x14 + &data_143f025fc) & 1) == 0)
            goto label_1410e79d3
        
        rax_19.b = 0
    else if (test_bit(0x6562c800, rax_19.d) || (*(rax_19 * 0x14 + &data_143f025fc) & 1) != 0)
        rax_19.b = 0
    else
    label_1410e79d3:
        int64_t r15_1 = data_143e55240
        
        if (r15_1 == 0)
            rax_19.b = 0
        else
            int64_t rcx_13
            
            if (data_143de5480 == 0)
                rcx_13 = 0
            else
                rcx_13.b = GetCurrentThreadId().d != data_143de5470
            
            if (*(r15_1 + (rcx_13 << 2)) == 0)
                rax_19.b = 0
            else
                rax_19.b = 1
    
    void** rax_20
    
    if (r14.b != 0)
        if (rax_19.b == 0)
            goto label_1410e7a4f
        
        rax_20, arg5 = sub_142127b90(arg1, &var_38, &data_143e52680, arg2, arg5, 0)
    else if (rax_19.b == 0)
    label_1410e7a4f:
        arg5.o = zx.o(0)
        rax_20 = &var_48
        var_48.o = arg5.o
    else
        rax_20, arg5 = sub_142127b90(arg1, &var_38, &data_143e52540, arg2, arg5, 0)
    
    arg5.o = *rax_20
    *arg9 = arg5.o
    int64_t rcx_16 = *arg9
    
    if (rcx_16 == 0)
        char var_50_4 = 1
        int32_t var_58_4 = 0
        void** rax_31
        rax_31, zmm0_2 = sub_142127800(arg1, &var_38, &data_143e537a0, arg2, arg5)
        rcx_9 = *rax_31
        int64_t var_40_5 = rax_31[1]
        result = arg7
        goto label_1410e7b9b
    
    void* r10_1 = *(arg9 + 8)
    char rax_21 = data_143e537e8
    void* rdx_5
    
    if (rax_21 u>= 5)
        rdx_5 = nullptr
    else
        uint64_t rax_22 = zx.q(rax_21)
        rdx_5 = *(rcx_16 + (rax_22 << 3) + 8)
        
        if (rdx_5 == 0)
            rdx_5 = nullptr
        else
            if ((rdx_5.b & 1) != 0)
                rdx_5 = (rdx_5 s>> 1) + 8 + rcx_16 + (rax_22 << 3)
            
            int64_t r9_6
            
            if ((*(rdx_5 + 0xf8) & 1) == 0)
                r9_6 = *(rdx_5 + 0xf8)
            else
                r9_6 = *(*(*(r10_1 + 0x20) + 0x28) + (sx.q((*(rdx_5 + 0xf8) u>> 1).d) << 3))
            
            if (r9_6 != &data_143e537a0)
                rdx_5 = nullptr
    
    result = arg7
    var_48 = rdx_5
    void* var_40_3 = r10_1
    arg5.o = var_48.o
    *result = arg5.o
    
    if (r14.b != 0)
        void* r10_2 = *(arg9 + 8)
        char rax_26 = data_143e55128
        void* rdx_8
        
        if (rax_26 u>= 5)
            rdx_8 = nullptr
        else
            int64_t rcx_18 = *arg9
            uint64_t rax_27 = zx.q(rax_26)
            rdx_8 = *(rcx_18 + (rax_27 << 3) + 8)
            
            if (rdx_8 == 0)
                rdx_8 = nullptr
            else
                if ((rdx_8.b & 1) != 0)
                    rdx_8 = (rdx_8 s>> 1) + 8 + rcx_18 + (rax_27 << 3)
                
                int64_t r9_8
                
                if ((*(rdx_8 + 0xf8) & 1) == 0)
                    r9_8 = *(rdx_8 + 0xf8)
                else
                    r9_8 = *(*(*(r10_2 + 0x20) + 0x28) + (sx.q((*(rdx_8 + 0xf8) u>> 1).d) << 3))
                
                if (r9_8 != &data_143e550e0)
                    rdx_8 = nullptr
        
        var_48 = rdx_8
        void* var_40_4 = r10_2
        goto label_1410e7bd9
else
    arg5.o = zx.o(0)
    char var_50_1 = 1
    int32_t var_58_1 = 0
    *arg9 = zx.o(0)
    void** rax_9
    int512_t zmm0
    rax_9, zmm0 = sub_142127800(arg1, &var_38, &data_143e537a0, arg2, arg5)
    char var_50_2 = 1
    int32_t var_58_2 = 0
    int64_t var_40 = rax_9[1]
    var_48 = *rax_9
    zmm0.o = var_48.o
    *arg7 = zmm0.o
    void** rax_12
    int512_t zmm0_1
    rax_12, zmm0_1 = sub_142127800(arg1, &var_38, &data_143e52340, arg2, zmm0)
    char var_50_3 = 1
    int32_t var_58_3 = 0
    int64_t rax_13 = rax_12[1]
    var_48 = *rax_12
    int64_t var_40_1 = rax_13
    zmm0_1.o = var_48.o
    *arg4 = zmm0_1.o
    void** rax_14
    rax_14, zmm0_2 = sub_142127800(arg1, &var_38, &data_143e52440, arg2, zmm0_1)
    rcx_9 = *rax_14
    int64_t var_40_2 = rax_14[1]
    result = arg6
label_1410e7b9b:
    var_48 = rcx_9
    zmm0_2.o = var_48.o
    *result = zmm0_2.o
    
    if (r14.b != 0)
        char var_50_5 = 1
        int32_t var_58_5 = 0
        void** rax_33
        rax_33, arg5 = sub_142127800(arg1, &var_38, &data_143e550e0, arg2, zmm0_2)
        int64_t var_40_6 = rax_33[1]
        var_48 = *rax_33
    label_1410e7bd9:
        result = arg8
        arg5.o = var_48.o
        *result = arg5.o
return result
