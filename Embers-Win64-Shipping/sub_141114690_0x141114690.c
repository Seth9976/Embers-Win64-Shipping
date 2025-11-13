// 函数: sub_141114690
// 地址: 0x141114690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg3 + 0x570) & 0x10
int32_t result
int128_t var_88
int128_t var_78
int32_t var_68
void* const var_60
int64_t var_58
void* var_50
int64_t var_48
int32_t arg_18
int512_t zmm0

if (rax_1 == 0 || data_1439b5c18 == 0)
    var_58 = arg4
    var_50 = arg3
    int128_t* rdx_14 = &var_78
    var_60 = nullptr
    zmm0.o = zx.o(0)
    var_78 = zx.o(0)
    int64_t rax_21 = **(*(arg3 + 0x5c0) + 0x20)
    
    if (rax_1 == 0)
        char rax_38
        int32_t r8_8
        rax_38, r8_8 = (*(rax_21 + 0xd0))(zmm0, rdx_14, arg2, arg2 + 0x1598)
        int32_t rax_39
        int32_t rdx_28
        int32_t r9_6
        int32_t r10_2
        
        if (rax_38 != 0)
            r9_6 = var_78:0xc.d
            rax_39 = var_78:8.d
            r10_2 = var_78:4.d
            rdx_28 = var_78.d
        else
            rdx_28 = *(arg2 + 0x1598)
            r10_2 = *(arg2 + 0x159c)
            rax_39 = *(arg2 + 0x15a0)
            r9_6 = *(arg2 + 0x15a4)
            var_78.d = rdx_28
            var_78:4.d = r10_2
            var_78:8.d = rax_39
            var_78:0xc.d = r9_6
        
        bool c_2 = data_143e56de4 != 0
        var_48 = arg1
        int32_t result_3 = data_1439b5c14
        void* var_38_2 = arg2
        int32_t temp9_1
        int32_t temp10_1
        temp9_1:temp10_1 = sx.q(divs.dp.d(sx.q(rax_39 - rdx_28), sbb.d(r8_8, r8_8, c_2) + 2) + 7)
        arg_18 = (temp10_1 + (temp9_1 & 7)) s>> 3
        int32_t temp17_1
        int32_t temp18_1
        temp17_1:temp18_1 = sx.q(divs.dp.d(sx.q(r9_6 - r10_2), sbb.d(r8_8, r8_8, c_2) + 2) + 7)
        var_68 = (temp18_1 + (temp17_1 & 7)) s>> 3
        void** var_40_2 = &var_50
        int32_t* var_30_2 = &arg_18
        int32_t* var_28_2 = &var_68
        int128_t* var_20_2 = &var_78
        int64_t* var_18_2 = &var_58
        result = &var_60
        void** var_10_2 = &var_60
        
        if (result_3 s>= 0)
            result = 3
            
            if (result_3 s< 3)
                result = result_3
            
            if (result == 1)
                sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5d920, 0)
                var_88 = var_88
                return sub_141110510(&var_48, &var_88)
            
            if (result == 2)
                sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5da80, 0)
                var_88 = var_88
                return sub_141110510(&var_48, &var_88)
            
            if (result == 3)
                sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5dbe0, 0)
                var_88 = var_88
                return sub_141110510(&var_48, &var_88)
    else
        char rax_22
        int32_t r8_5
        rax_22, r8_5 = (*(rax_21 + 0xd0))(zmm0, rdx_14, arg2, arg2 + 0x1598)
        int32_t rax_23
        int32_t rdx_15
        int32_t r9_4
        int32_t r10_1
        
        if (rax_22 != 0)
            r9_4 = var_78:0xc.d
            rax_23 = var_78:8.d
            r10_1 = var_78:4.d
            rdx_15 = var_78.d
        else
            rdx_15 = *(arg2 + 0x1598)
            r10_1 = *(arg2 + 0x159c)
            rax_23 = *(arg2 + 0x15a0)
            r9_4 = *(arg2 + 0x15a4)
            var_78.d = rdx_15
            var_78:4.d = r10_1
            var_78:8.d = rax_23
            var_78:0xc.d = r9_4
        
        bool c_1 = data_143e56de4 != 0
        var_48 = arg1
        int32_t result_2 = data_1439b5c14
        void* var_38_1 = arg2
        int32_t temp26_1
        int32_t temp27_1
        temp26_1:temp27_1 = sx.q(divs.dp.d(sx.q(rax_23 - rdx_15), sbb.d(r8_5, r8_5, c_1) + 2) + 7)
        arg_18 = (temp27_1 + (temp26_1 & 7)) s>> 3
        int32_t temp34_1
        int32_t temp35_1
        temp34_1:temp35_1 = sx.q(divs.dp.d(sx.q(r9_4 - r10_1), sbb.d(r8_5, r8_5, c_1) + 2) + 7)
        var_68 = (temp35_1 + (temp34_1 & 7)) s>> 3
        void** var_40_1 = &var_50
        int32_t* var_30_1 = &arg_18
        int32_t* var_28_1 = &var_68
        int128_t* var_20_1 = &var_78
        int64_t* var_18_1 = &var_58
        result = &var_60
        void** var_10_1 = &var_60
        
        if (result_2 s>= 0)
            result = 3
            
            if (result_2 s< 3)
                result = result_2
            
            if (result == 1)
                sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5ccc0, 0)
                var_88 = var_88
                return sub_141110510(&var_48, &var_88)
            
            if (result == 2)
                sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5ce20, 0)
                var_88 = var_88
                return sub_141110510(&var_48, &var_88)
            
            if (result == 3)
                sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5cf80, 0)
                var_88 = var_88
                return sub_141110510(&var_48, &var_88)
else
    var_58 = arg4
    zmm0.o = zx.o(0)
    var_60 = arg3
    var_78 = zx.o(0)
    var_50 = nullptr
    char rax_4
    int32_t r8_1
    rax_4, r8_1 = (*(**(*(arg3 + 0x5c0) + 0x20) + 0xd0))(zmm0, &var_78, arg2, arg2 + 0x1598)
    int32_t rax_5
    int32_t rdx_1
    int32_t r9_1
    int32_t r10
    
    if (rax_4 != 0)
        r9_1 = var_78:0xc.d
        rax_5 = var_78:8.d
        r10 = var_78:4.d
        rdx_1 = var_78.d
    else
        rdx_1 = *(arg2 + 0x1598)
        r10 = *(arg2 + 0x159c)
        rax_5 = *(arg2 + 0x15a0)
        r9_1 = *(arg2 + 0x15a4)
        var_78.d = rdx_1
        var_78:4.d = r10
        var_78:8.d = rax_5
        var_78:0xc.d = r9_1
    
    bool c = data_143e56de4 != 0
    var_48 = arg1
    int32_t result_1 = data_1439b5c14
    void* var_38 = arg2
    int32_t temp43_1
    int32_t temp44_1
    temp43_1:temp44_1 = sx.q(divs.dp.d(sx.q(rax_5 - rdx_1), sbb.d(r8_1, r8_1, c) + 2) + 7)
    arg_18 = (temp44_1 + (temp43_1 & 7)) s>> 3
    int32_t temp51_1
    int32_t temp52_1
    temp51_1:temp52_1 = sx.q(divs.dp.d(sx.q(r9_1 - r10), sbb.d(r8_1, r8_1, c) + 2) + 7)
    var_68 = (temp52_1 + (temp51_1 & 7)) s>> 3
    void** var_40 = &var_60
    int32_t* var_30 = &arg_18
    int32_t* var_28 = &var_68
    int128_t* var_20 = &var_78
    int64_t* var_18 = &var_58
    result = &var_50
    int64_t* var_10 = &var_50
    
    if (result_1 s>= 0)
        result = 3
        
        if (result_1 s< 3)
            result = result_1
        
        if (result == 1)
            sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5c060, 0)
            var_88 = var_88
            return sub_141110510(&var_48, &var_88)
        
        if (result == 2)
            sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5c1c0, 0)
            var_88 = var_88
            return sub_141110510(&var_48, &var_88)
        
        if (result == 3)
            sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5c320, 0)
            var_88 = var_88
            return sub_141110510(&var_48, &var_88)
return result
