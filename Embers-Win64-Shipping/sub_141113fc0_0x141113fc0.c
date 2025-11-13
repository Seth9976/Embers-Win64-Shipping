// 函数: sub_141113fc0
// 地址: 0x141113fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = data_1439b5c18
int32_t result
int128_t var_88
int128_t var_78
int32_t var_68
int32_t var_64
void* const var_60
int64_t var_58
void* var_50
int64_t var_48

if (rdx == 0 || arg5 == 0)
    var_58 = arg4
    var_50 = arg3
    var_78 = zx.o(0)
    int128_t* rdx_15 = &var_78
    
    if (rdx != 0)
        var_60 = nullptr
        int64_t* rcx_8 = *(*(arg3 + 0x5c0) + 0x20)
        char rax_22
        int32_t r8_5
        rax_22, r8_5 = (*(*rcx_8 + 0xd0))(rcx_8, rdx_15, arg2, arg2 + 0x1598)
        int32_t rax_23
        int32_t rdx_16
        int32_t r9_4
        int32_t r10_1
        
        if (rax_22 != 0)
            r9_4 = var_78:0xc.d
            rax_23 = var_78:8.d
            r10_1 = var_78:4.d
            rdx_16 = var_78.d
        else
            rdx_16 = *(arg2 + 0x1598)
            r10_1 = *(arg2 + 0x159c)
            rax_23 = *(arg2 + 0x15a0)
            r9_4 = *(arg2 + 0x15a4)
            var_78.d = rdx_16
            var_78:4.d = r10_1
            var_78:8.d = rax_23
            var_78:0xc.d = r9_4
        
        bool c_1 = data_143e56de4 != 0
        var_48 = arg1
        int32_t result_2 = data_1439b5c24
        void* var_38_1 = arg2
        int32_t temp9_1
        int32_t temp10_1
        temp9_1:temp10_1 = sx.q(divs.dp.d(sx.q(rax_23 - rdx_16), sbb.d(r8_5, r8_5, c_1) + 2) + 7)
        var_64 = (temp10_1 + (temp9_1 & 7)) s>> 3
        int32_t temp17_1
        int32_t temp18_1
        temp17_1:temp18_1 = sx.q(divs.dp.d(sx.q(r9_4 - r10_1), sbb.d(r8_5, r8_5, c_1) + 2) + 7)
        var_68 = (temp18_1 + (temp17_1 & 7)) s>> 3
        void** var_40_1 = &var_50
        int32_t* var_30_1 = &var_64
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
                sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5c480, 0)
                var_88 = var_88
                return sub_1411102d0(&var_48, &var_88)
            
            if (result == 2)
                sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5c5e0, 0)
                var_88 = var_88
                return sub_1411102d0(&var_48, &var_88)
            
            if (result == 3)
                sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5c740, 0)
                var_88 = var_88
                return sub_1411102d0(&var_48, &var_88)
    else if (arg5 == 0)
        var_60 = nullptr
        int64_t* rcx_24 = *(*(arg3 + 0x5c0) + 0x20)
        char rax_59
        int32_t r8_13
        rax_59, r8_13 = (*(*rcx_24 + 0xd0))(rcx_24, rdx_15, arg2, arg2 + 0x1598)
        int32_t rax_60
        int32_t rdx_42
        int32_t r9_8
        int32_t r10_3
        
        if (rax_59 != 0)
            r9_8 = var_78:0xc.d
            rax_60 = var_78:8.d
            r10_3 = var_78:4.d
            rdx_42 = var_78.d
        else
            rdx_42 = *(arg2 + 0x1598)
            r10_3 = *(arg2 + 0x159c)
            rax_60 = *(arg2 + 0x15a0)
            r9_8 = *(arg2 + 0x15a4)
            var_78.d = rdx_42
            var_78:4.d = r10_3
            var_78:8.d = rax_60
            var_78:0xc.d = r9_8
        
        bool c_3 = data_143e56de4 != 0
        var_48 = arg1
        int32_t result_4 = data_1439b5c24
        void* var_38_3 = arg2
        int32_t temp43_1
        int32_t temp44_1
        temp43_1:temp44_1 = sx.q(divs.dp.d(sx.q(rax_60 - rdx_42), sbb.d(r8_13, r8_13, c_3) + 2) + 7)
        var_64 = (temp44_1 + (temp43_1 & 7)) s>> 3
        int32_t temp51_1
        int32_t temp52_1
        temp51_1:temp52_1 = sx.q(divs.dp.d(sx.q(r9_8 - r10_3), sbb.d(r8_13, r8_13, c_3) + 2) + 7)
        var_68 = (temp52_1 + (temp51_1 & 7)) s>> 3
        void** var_40_3 = &var_50
        int32_t* var_30_3 = &var_64
        int32_t* var_28_3 = &var_68
        int128_t* var_20_3 = &var_78
        int64_t* var_18_3 = &var_58
        result = &var_60
        void** var_10_3 = &var_60
        
        if (result_4 s>= 0)
            result = 3
            
            if (result_4 s< 3)
                result = result_4
            
            if (result == 1)
                sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5d0e0, 0)
                var_88 = var_88
                return sub_1411102d0(&var_48, &var_88)
            
            if (result == 2)
                sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5d240, 0)
                var_88 = var_88
                return sub_1411102d0(&var_48, &var_88)
            
            if (result == 3)
                sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5d3a0, 0)
                var_88 = var_88
                return sub_1411102d0(&var_48, &var_88)
    else
        var_60 = arg6
        int64_t* rcx_16 = *(*(arg3 + 0x5c0) + 0x20)
        char rax_41
        int32_t r8_9
        rax_41, r8_9 = (*(*rcx_16 + 0xd0))(rcx_16, rdx_15, arg2, arg2 + 0x1598)
        int32_t rax_42
        int32_t rdx_29
        int32_t r9_6
        int32_t r10_2
        
        if (rax_41 != 0)
            r9_6 = var_78:0xc.d
            rax_42 = var_78:8.d
            r10_2 = var_78:4.d
            rdx_29 = var_78.d
        else
            rdx_29 = *(arg2 + 0x1598)
            r10_2 = *(arg2 + 0x159c)
            rax_42 = *(arg2 + 0x15a0)
            r9_6 = *(arg2 + 0x15a4)
            var_78.d = rdx_29
            var_78:4.d = r10_2
            var_78:8.d = rax_42
            var_78:0xc.d = r9_6
        
        bool c_2 = data_143e56de4 != 0
        var_48 = arg1
        int32_t result_3 = data_1439b5c24
        void* var_38_2 = arg2
        int32_t temp60_1
        int32_t temp61_1
        temp60_1:temp61_1 = sx.q(divs.dp.d(sx.q(rax_42 - rdx_29), sbb.d(r8_9, r8_9, c_2) + 2) + 7)
        var_64 = (temp61_1 + (temp60_1 & 7)) s>> 3
        int32_t temp68_1
        int32_t temp69_1
        temp68_1:temp69_1 = sx.q(divs.dp.d(sx.q(r9_6 - r10_2), sbb.d(r8_9, r8_9, c_2) + 2) + 7)
        var_68 = (temp69_1 + (temp68_1 & 7)) s>> 3
        void** var_40_2 = &var_50
        int32_t* var_30_2 = &var_64
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
                sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5d500, 0)
                var_88 = var_88
                return sub_1411102d0(&var_48, &var_88)
            
            if (result == 2)
                sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5d660, 0)
                var_88 = var_88
                return sub_1411102d0(&var_48, &var_88)
            
            if (result == 3)
                sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5d7c0, 0)
                var_88 = var_88
                return sub_1411102d0(&var_48, &var_88)
else
    var_58 = arg4
    int512_t zmm0
    zmm0.o = zx.o(0)
    var_60 = arg3
    var_50 = arg6
    var_78 = zx.o(0)
    char rax_4
    int32_t r8_1
    rax_4, r8_1 = (*(**(*(arg3 + 0x5c0) + 0x20) + 0xd0))(zmm0, &var_78, arg2, arg2 + 0x1598)
    int32_t rax_5
    int32_t rdx_2
    int32_t r9_1
    int32_t r10
    
    if (rax_4 != 0)
        r9_1 = var_78:0xc.d
        rax_5 = var_78:8.d
        r10 = var_78:4.d
        rdx_2 = var_78.d
    else
        rdx_2 = *(arg2 + 0x1598)
        r10 = *(arg2 + 0x159c)
        rax_5 = *(arg2 + 0x15a0)
        r9_1 = *(arg2 + 0x15a4)
        var_78.d = rdx_2
        var_78:4.d = r10
        var_78:8.d = rax_5
        var_78:0xc.d = r9_1
    
    bool c = data_143e56de4 != 0
    var_48 = arg1
    int32_t result_1 = data_1439b5c24
    void* var_38 = arg2
    int32_t temp26_1
    int32_t temp27_1
    temp26_1:temp27_1 = sx.q(divs.dp.d(sx.q(rax_5 - rdx_2), sbb.d(r8_1, r8_1, c) + 2) + 7)
    var_68 = (temp27_1 + (temp26_1 & 7)) s>> 3
    int32_t temp34_1
    int32_t temp35_1
    temp34_1:temp35_1 = sx.q(divs.dp.d(sx.q(r9_1 - r10), sbb.d(r8_1, r8_1, c) + 2) + 7)
    var_64 = (temp35_1 + (temp34_1 & 7)) s>> 3
    int64_t* var_40 = &var_60
    int32_t* var_30 = &var_68
    int32_t* var_28 = &var_64
    int128_t* var_20 = &var_78
    int64_t* var_18 = &var_58
    result = &var_50
    int64_t* var_10 = &var_50
    
    if (result_1 s>= 0)
        result = 3
        
        if (result_1 s< 3)
            result = result_1
        
        if (result == 1)
            sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5c8a0, 0)
            var_88 = var_88
            return sub_1411102d0(&var_48, &var_88)
        
        if (result == 2)
            sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5ca00, 0)
            var_88 = var_88
            return sub_1411102d0(&var_48, &var_88)
        
        if (result == 3)
            sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e5cb60, 0)
            var_88 = var_88
            return sub_1411102d0(&var_48, &var_88)
return result
