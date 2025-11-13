// 函数: sub_140f06390
// 地址: 0x140f06390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358

if (*(arg2 + 0x3c) == 0)
    int64_t* var_328 = arg2
    void*** rax_2 = sub_140ee0e40()
    void* var_308 = &rax_2[2]
    sub_140918950(&var_308, &rax_2[2])
    int64_t var_338_1 = 0x4d8
    int64_t* var_2f8_1 = &var_328
    sub_140e23ed0(&rax_2[2], "SSlateAsyncTaskNotificationWidget")
    void var_1d8
    int64_t* rax_3
    int128_t zmm1_1
    rax_3, zmm1_1 = sub_140e93f70(&var_1d8)
    int128_t var_318
    int64_t* rax_4 = sub_140ee5b00(&var_308, &var_318, rax_3, zmm1_1)
    int64_t* rcx_4 = rax_4[1]
    
    if (rcx_4 != 0)
        rcx_4[1].d += 1
    
    void var_1e8
    
    if (&arg1[0x16] == &var_1e8)
    label_140f06498:
        
        if (rcx_4 != 0)
            rcx_4[1].d -= 1
            
            if (rcx_4[1].d == 1)
                (**rcx_4)(rcx_4)
                int32_t temp2_1 = *(rcx_4 + 0xc)
                *(rcx_4 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx_4 + 8))(rcx_4, 1)
    else
        arg1[0x16] = *rax_4
        int64_t* rbx_2 = arg1[0x17]
        
        if (rcx_4 == rbx_2)
            goto label_140f06498
        
        arg1[0x17] = rcx_4
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp6_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t* var_310
    
    if (var_310 != 0)
        var_310[1].d -= 1
        
        if (var_310[1].d == 1)
            (**var_310)(var_310)
            int32_t temp5_1 = *(var_310 + 0xc)
            *(var_310 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_310 + 8))(var_310, 1)
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t temp7_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*rax_2)[1](rax_2, 1)
    
    sub_140ddea30(&var_1d8)
    int64_t rax_12 = arg1[0x16]
    int64_t* rbx_5 = arg1[0x17]
    int64_t rcx_13 = rax_12 + 0x390
    
    if (rax_12 == 0)
        rcx_13 = 0
    
    if (rbx_5 != 0)
        rbx_5[1].d += 1
    
    int64_t var_2e8 = rcx_13
    int64_t* var_2e0_1 = rbx_5
    
    if (rbx_5 != 0)
        rbx_5[1].d += 1
    
    void var_2d8
    sub_140a96170(&var_2d8)
    int32_t var_2a8_1 = 0x3f000000
    int32_t var_2a0_1 = 0x3f800000
    int32_t var_298_1 = 0xbf800000
    int32_t var_2a4_1 = 0x40000000
    int64_t var_2c0
    __builtin_memset(&var_2c0, 0, 0x18)
    int16_t var_29c_1 = 0
    char var_29a_1 = 0
    char var_294_1 = 1
    int16_t var_290_1 = 0x100
    int64_t var_288_1 = 0
    int32_t var_280_1 = 0
    int64_t var_278_1 = 0
    int32_t var_270_1 = 0
    void var_268
    sub_140a96170(&var_268)
    char var_250_1 = 0
    int64_t var_248_1 = 0
    int32_t var_240_1 = 0
    int64_t var_238_1 = 0
    int32_t var_230_1 = 0
    void var_228
    sub_140a96170(&var_228)
    char var_210_1 = 0
    int64_t var_208_1 = 0
    int32_t var_200_1 = 0
    char var_1f8_1 = 1
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp9_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    int64_t* rcx_19 = data_143e2a110
    int32_t var_2a8_2 = arg2[6].d
    int32_t var_2a0_2 = arg2[7].d
    int32_t var_2a4_2 = *(arg2 + 0x34)
    char var_294_2 = 0
    
    if (rcx_19 == 0)
        TEB* gsbase
        
        if (data_143e2a140
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143e2a140)
            
            if (data_143e2a140 == 0xffffffff)
                InitializeCriticalSection(&data_143e2a118)
                SetCriticalSectionSpinCount(&data_143e2a118, 0xfa0)
                atexit(&data_142ccb620)
                _Init_thread_footer(&data_143e2a140)
        
        EnterCriticalSection(&data_143e2a118)
        
        if (data_143e2a110 == 0)
            void* rax_17 = j_sub_140a82f30(0x40)
            
            if (rax_17 == 0)
                data_143e2a110 = 0
            else
                __builtin_memset(rax_17, 0, 0x20)
                *(rax_17 + 0x28) = 0
                *(rax_17 + 0x38) = 1
                data_143e2a110 = rax_17
        
        LeaveCriticalSection(&data_143e2a118)
        rcx_19 = data_143e2a110
    
    sub_140ee80a0(rcx_19, &var_318, &var_2e8)
    
    if (var_310 != 0)
        var_310[1].d += 1
    
    int128_t zmm1_3 = var_318
    int128_t* rax_19 = arg1[0x16] + 0x478
    var_328.o = zmm1_3
    
    if (var_310 != 0)
        var_310[1].d += 1
    
    if (&var_328 != rax_19)
        int128_t zmm0_2 = *rax_19
        *rax_19 = zmm1_3
        var_328.o = zmm0_2
    
    int64_t* var_320
    
    if (var_320 != 0)
        var_320[1].d -= 1
        
        if (var_320[1].d == 1)
            (**var_320)(var_320)
            int32_t temp12_1 = *(var_320 + 0xc)
            *(var_320 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*var_320 + 8))(var_320, 1)
    
    if (var_310 != 0)
        var_310[1].d -= 1
        
        if (var_310[1].d == 1)
            (**var_310)(var_310)
            int32_t temp14_1 = *(var_310 + 0xc)
            *(var_310 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*(*var_310 + 8))(var_310, 1)
    
    int64_t* rcx_26 = var_318.q
    (*(*rcx_26 + 0x270))(rcx_26, 1)
    
    if (var_310 != 0)
        var_310[1].d -= 1
        
        if (var_310[1].d == 1)
            (**var_310)(var_310)
            int32_t temp15_1 = *(var_310 + 0xc)
            *(var_310 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*var_310 + 8))(var_310, 1)
    
    sub_1408daf60(&var_2e8)

int64_t result = sub_140af73f0(arg1, arg2)
__security_check_cookie(rax_1 ^ &var_358)
return result
