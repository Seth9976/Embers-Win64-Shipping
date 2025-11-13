// 函数: sub_141ff81b0
// 地址: 0x141ff81b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int16_t* const _String_1 = &data_142d40450
int16_t* const rcx

if (arg2[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg2

int32_t rax_2 = sub_140a54510(rcx, u"StartUE4Live")
int16_t** _String_6
int32_t var_108
int16_t* var_100
int16_t* result_1

if (rax_2 == 0)
    _String_6 = nullptr
    int32_t var_110_1 = 0
    sub_1405947f0(&_String_6, rax_2 + 0xa)
    int32_t rax_3 = var_110_1 + 0xa
    var_110_1 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&_String_6)
    
    int16_t** _String_26 = _String_6
    UnDecorator::getReferenceType(_String_26, u"requester", 0x14)
    sub_14062d6e0(&arg2[2], &var_108, &_String_6)
    int64_t rax_4 = sx.q(var_108)
    void* rcx_5
    
    if (rax_4.d != 0xffffffff)
        rcx_5 = arg2[2] + rax_4 * 0x28
    
    int16_t* rdx_4
    int16_t* r14_2
    
    if (rax_4.d == 0xffffffff || rcx_5 == 0)
        r14_2 = nullptr
        rdx_4 = &data_142d40450
    else
        int32_t r15_1 = *(rcx_5 + 0x18)
        int64_t r14_1 = *(rcx_5 + 0x10)
        var_100 = nullptr
        
        if (r15_1 != 0)
            sub_1405a4c70(&var_100, r15_1, 0)
            r14_2 = var_100
            memcpy(r14_2, r14_1, r15_1 * 2)
            rdx_4 = r14_2
        else
            r14_2 = nullptr
            rdx_4 = nullptr
        
        if (r15_1 == 0)
            rdx_4 = &data_142d40450
    
    sub_140b58260(&result_1, rdx_4, 1)
    
    if (r14_2 != 0)
        sub_140a74f90(r14_2)
    
    if (_String_26 != 0)
        sub_140a74f90(_String_26)
    
    _String_6 = nullptr
    int32_t var_110_2 = 0
    sub_1405947f0(&_String_6, 9)
    int32_t rax_6 = var_110_2 + 9
    var_110_2 = rax_6
    
    if (rax_6 s> 0)
        sub_140594770(&_String_6)
    
    int16_t** _String_27 = _String_6
    UnDecorator::getReferenceType(_String_27, u"tickonly", 0x12)
    sub_14062d6e0(&arg2[2], &var_108, &_String_6)
    int64_t rax_7 = sx.q(var_108)
    void* rcx_15
    
    if (rax_7.d != 0xffffffff)
        rcx_15 = arg2[2] + rax_7 * 0x28
    
    int16_t* const rcx_16
    int16_t* r14_4
    
    if (rax_7.d == 0xffffffff || rcx_15 == 0)
        r14_4 = nullptr
        rcx_16 = &data_142d40450
    else
        int32_t r15_2 = *(rcx_15 + 0x18)
        int64_t r14_3 = *(rcx_15 + 0x10)
        var_100 = nullptr
        
        if (r15_2 != 0)
            sub_1405a4c70(&var_100, r15_2, 0)
            r14_4 = var_100
            memcpy(r14_4, r14_3, r15_2 * 2)
            rcx_16 = r14_4
        else
            r14_4 = nullptr
            rcx_16 = nullptr
        
        if (r15_2 == 0)
            rcx_16 = &data_142d40450
    
    sub_140a54510(rcx_16, u"true")
    
    if (r14_4 != 0)
        sub_140a74f90(r14_4)
    
    if (_String_27 != 0)
        sub_140a74f90(_String_27)
    
    goto label_141ff8436

int16_t* const rcx_25

if (arg2[1].d == 0)
    rcx_25 = &data_142d40450
else
    rcx_25 = *arg2

int32_t rax_12 = sub_140a54510(rcx_25, u"StopUE4Live")

if (rax_12 == 0)
    _String_6 = nullptr
    int32_t var_110_3 = 0
    sub_1405947f0(&_String_6, rax_12 + 0xa)
    int32_t rax_13 = var_110_3 + 0xa
    var_110_3 = rax_13
    
    if (rax_13 s> 0)
        sub_140594770(&_String_6)
    
    int16_t** _String_22 = _String_6
    UnDecorator::getReferenceType(_String_22, u"requester", 0x14)
    sub_14062d6e0(&arg2[2], &var_108, &_String_6)
    int64_t rax_14 = sx.q(var_108)
    void* rcx_30
    
    if (rax_14.d != 0xffffffff)
        rcx_30 = arg2[2] + rax_14 * 0x28
    
    int16_t* rdx_17
    int16_t* r14_6
    
    if (rax_14.d == 0xffffffff || rcx_30 == 0)
        r14_6 = nullptr
        rdx_17 = &data_142d40450
    else
        int32_t r15_3 = *(rcx_30 + 0x18)
        int64_t r14_5 = *(rcx_30 + 0x10)
        var_100 = nullptr
        
        if (r15_3 != 0)
            sub_1405a4c70(&var_100, r15_3, 0)
            r14_6 = var_100
            memcpy(r14_6, r14_5, r15_3 * 2)
            rdx_17 = r14_6
        else
            r14_6 = nullptr
            rdx_17 = nullptr
        
        if (r15_3 == 0)
            rdx_17 = &data_142d40450
    
    sub_140b58260(&result_1, rdx_17, 1)
    
    if (r14_6 != 0)
        sub_140a74f90(r14_6)
    
    if (_String_22 != 0)
        sub_140a74f90(_String_22)
    
    goto label_141ff8436

int16_t* const rcx_37

if (arg2[1].d == 0)
    rcx_37 = &data_142d40450
else
    rcx_37 = *arg2

int32_t rax_16 = sub_140a54510(rcx_37, u"devicesleep")

if (rax_16 == 0)
    _String_6 = nullptr
    int32_t var_110_4 = 0
    sub_1405947f0(&_String_6, rax_16 + 8)
    int32_t rax_17 = var_110_4 + 8
    var_110_4 = rax_17
    
    if (rax_17 s> 0)
        sub_140594770(&_String_6)
    
    int16_t** _String_28 = _String_6
    UnDecorator::getReferenceType(_String_28, u"enabled", 0x10)
    sub_14062d6e0(&arg2[2], &var_108, &_String_6)
    int64_t rax_18 = sx.q(var_108)
    void* rcx_42
    
    if (rax_18.d != 0xffffffff)
        rcx_42 = arg2[2] + rax_18 * 0x28
    
    if (rax_18.d == 0xffffffff || rcx_42 == 0)
        result_1 = nullptr
        int64_t var_e8_1 = 0
    else
        result_1 = nullptr
        int32_t rsi = *(rcx_42 + 0x18)
        int64_t r15_4 = *(rcx_42 + 0x10)
        int64_t var_e8
        var_e8.d = rsi
        
        if (rsi != 0)
            sub_1405a4c70(&result_1, rsi, 0)
            memcpy(result_1, r15_4, rsi * 2)
        else
            var_e8:4.d = 0
    
    sub_140a35630(&result_1)
    int16_t* result_3 = result_1
    
    if (result_3 != 0)
        sub_140a74f90(result_3)
    
    if (_String_28 != 0)
        sub_140a74f90(_String_28)
    
    goto label_141ff8436

int16_t* const rcx_47

if (arg2[1].d == 0)
    rcx_47 = &data_142d40450
else
    rcx_47 = *arg2

int16_t* result
int32_t var_f8
int64_t var_88

if (sub_140a54510(rcx_47, u"shaderresumebatching") != 0)
    int16_t* const rcx_48
    
    if (arg2[1].d == 0)
        rcx_48 = &data_142d40450
    else
        rcx_48 = *arg2
    
    if (sub_140a54510(rcx_48, u"shaderpausebatching") == 0)
        sub_1419d4260()
        goto label_141ff8436
    
    int16_t* const rcx_49
    
    if (arg2[1].d == 0)
        rcx_49 = &data_142d40450
    else
        rcx_49 = *arg2
    
    int32_t rax_22 = sub_140a54510(rcx_49, u"getmemorybucket")
    int128_t var_d8
    int16_t** _String_7
    int16_t*** result_7
    int64_t var_48
    int64_t var_40
    
    if (rax_22 != 0)
        int16_t* const rcx_60
        
        if (arg2[1].d == 0)
            rcx_60 = &data_142d40450
        else
            rcx_60 = *arg2
        
        int32_t rax_28 = sub_140a54510(rcx_60, u"getconfig")
        int16_t*** var_98
        int16_t** _String_4
        
        if (rax_28 != 0)
            int16_t* const rcx_99
            
            if (arg2[1].d == 0)
                rcx_99 = &data_142d40450
            else
                rcx_99 = *arg2
            
            int32_t rax_48 = sub_140a54510(rcx_99, u"cvar")
            
            if (rax_48 == 0)
                _String_6 = nullptr
                int32_t var_110_9 = 0
                sub_1405947f0(&_String_6, rax_48 + 5)
                int32_t rax_49 = var_110_9 + 5
                var_110_9 = rax_49
                
                if (rax_49 s> 0)
                    sub_140594770(&_String_6)
                
                int16_t** _String_32 = _String_6
                UnDecorator::getReferenceType(_String_32, u"name", 0xa)
                sub_14062d6e0(&arg2[2], &var_108, &_String_6)
                int64_t rax_50 = sx.q(var_108)
                void* rdx_55
                
                if (rax_50.d != 0xffffffff)
                    rdx_55 = arg2[2] + rax_50 * 0x28
                
                int32_t r12_1
                
                if (rax_50.d == 0xffffffff || rdx_55 == 0)
                    _String_4 = nullptr
                    r12_1 = 0
                else
                    sub_140596d10(&var_d8, rdx_55 + 0x10)
                    r12_1 = var_d8:8.d
                    _String_4 = var_d8.q
                
                if (_String_32 != 0)
                    sub_140a74f90(_String_32)
                
                int64_t* rcx_106 = data_143db18d0
                
                if (rcx_106 == 0)
                    sub_140a53c40()
                    rcx_106 = data_143db18d0
                
                int16_t** _String_15 = &data_142d40450
                int64_t r8_27
                r8_27.b = 1
                
                if (r12_1 != 0)
                    _String_15 = _String_4
                
                int64_t* rax_53 = (*(*rcx_106 + 0xb0))(rcx_106, _String_15, r8_27)
                
                if (rax_53 == 0)
                    int64_t var_50_3 = 0
                    int64_t var_40_3 = 0
                    
                    if (r12_1 != 0)
                        _String_1 = _String_4
                    
                    __builtin_memset(&var_88, 0, 0x2c)
                    int32_t var_5c_3 = 0x80
                    int32_t var_58_3 = 0xffffffff
                    int32_t var_54_3 = 0
                    int64_t var_48_3 = 0
                    sub_140a2e390(&var_d8, u"CVar %s not found", _String_1)
                    sub_141ff9a20(&arg2[0xc], &var_88, &var_d8)
                    var_40_3.d = 0
                    
                    if (var_48_3 != 0)
                        sub_140a74f90(var_48_3)
                    
                    result = sub_140681eb0(&var_88)
                else
                    _String_6 = nullptr
                    int32_t var_110_10 = 0
                    sub_1405947f0(&_String_6, 6)
                    int32_t rcx_108 = var_110_10 + 6
                    var_110_10 = rcx_108
                    
                    if (rcx_108 s> 0)
                        sub_140594770(&_String_6)
                    
                    UnDecorator::getReferenceType(_String_6, u"value", 0xc)
                    int64_t var_a0_3 = (*(*rax_53 + 0xa0))(rax_53, &var_98)
                    result_7 = &_String_6
                    var_d8.q = &result_7
                    var_d8:8.q = &var_98
                    var_d8 = var_d8
                    sub_14068bf30(&var_88, &var_d8)
                    _String_7 = nullptr
                    int64_t var_b0_3 = 0
                    sub_141ff9a20(&arg2[0xc], &var_88, &_String_7)
                    var_40.d = 0
                    
                    if (var_48 != 0)
                        sub_140a74f90(var_48)
                    
                    result = sub_140681eb0(&var_88)
                    int16_t*** rcx_116 = var_98
                    
                    if (rcx_116 != 0)
                        result = sub_140a74f90(rcx_116)
                    
                    int16_t** _String_21 = _String_6
                    
                    if (_String_21 != 0)
                        result = sub_140a74f90(_String_21)
                
                goto label_141ff9039
            
            int16_t* const rcx_122
            
            if (arg2[1].d == 0)
                rcx_122 = &data_142d40450
            else
                rcx_122 = *arg2
            
            int32_t rax_56 = sub_140a54510(rcx_122, u"shareurl")
            int32_t rbx_1 = 0
            int16_t*** rcx_123 = &_String_6
            _String_6 = nullptr
            int32_t var_110_11 = 0
            
            if (rax_56 != 0)
                __builtin_memset(&var_88, 0, 0x2c)
                int32_t var_5c_4 = 0x80
                int32_t var_58_4 = 0xffffffff
                int32_t var_54_4
                __builtin_memset(&var_54_4, 0, 0x1c)
                sub_1405947f0(rcx_123, 0x10)
                int32_t rax_73 = var_110_11 + 0x10
                var_110_11 = rax_73
                
                if (rax_73 s> 0)
                    sub_140594770(&_String_6)
                
                UnDecorator::getReferenceType(_String_6, u"Unknown command", 0x20)
                sub_141ff9a20(&arg2[0xc], &var_88, &_String_6)
                goto label_141ff94bf
            
            sub_1405947f0(rcx_123, 4)
            int32_t rax_57 = var_110_11 + 4
            var_110_11 = rax_57
            
            if (rax_57 s> 0)
                sub_140594770(&_String_6)
            
            int16_t** _String_29 = _String_6
            UnDecorator::getReferenceType(_String_29, &data_143296d18, 8)
            sub_14062d6e0(&arg2[2], &var_108, &_String_6)
            int64_t rax_58 = sx.q(var_108)
            void* rdx_65
            
            if (rax_58.d != 0xffffffff)
                rdx_65 = arg2[2] + rax_58 * 0x28
            
            if (rax_58.d == 0xffffffff || rdx_65 == 0)
                result_1 = nullptr
            else
                sub_140596d10(&var_d8, rdx_65 + 0x10)
                result_1 = var_d8.q
            
            if (_String_29 != 0)
                sub_140a74f90(_String_29)
            
            _String_6 = nullptr
            int32_t var_110_12 = 0
            sub_1405947f0(&_String_6, 0xc)
            int32_t rax_61 = var_110_12 + 0xc
            var_110_12 = rax_61
            
            if (rax_61 s> 0)
                sub_140594770(&_String_6)
            
            int16_t** _String_30 = _String_6
            UnDecorator::getReferenceType(_String_30, u"description", 0x18)
            sub_14062d6e0(&arg2[2], &var_108, &_String_6)
            int64_t rax_62 = sx.q(var_108)
            void* rdx_70
            
            if (rax_62.d != 0xffffffff)
                rdx_70 = arg2[2] + rax_62 * 0x28
            
            if (rax_62.d == 0xffffffff || rdx_70 == 0)
                var_100 = nullptr
                var_f8.q = 0
            else
                sub_140596d10(&var_100, rdx_70 + 0x10)
            
            if (_String_30 != 0)
                sub_140a74f90(_String_30)
            
            _String_6 = nullptr
            int32_t var_110_13 = 0
            sub_1405947f0(&_String_6, 6)
            int32_t rax_64 = var_110_13 + 6
            var_110_13 = rax_64
            
            if (rax_64 s> 0)
                sub_140594770(&_String_6)
            
            int16_t** _String_31 = _String_6
            UnDecorator::getReferenceType(_String_31, u"title", 0xc)
            sub_14062d6e0(&arg2[2], &var_108, &_String_6)
            int64_t rax_65 = sx.q(var_108)
            void* rdx_75
            
            if (rax_65.d != 0xffffffff)
                rdx_75 = arg2[2] + rax_65 * 0x28
            
            int64_t r15_7
            
            if (rax_65.d == 0xffffffff || rdx_75 == 0)
                r15_7 = 0
            else
                sub_140596d10(&var_d8, rdx_75 + 0x10)
                r15_7 = var_d8.q
            
            if (_String_31 != 0)
                sub_140a74f90(_String_31)
            
            _String_6 = nullptr
            int32_t var_110_14 = 0
            sub_1405947f0(&_String_6, 2)
            int32_t rax_67 = var_110_14 + 2
            var_110_14 = rax_67
            
            if (rax_67 s> 0)
                sub_140594770(&_String_6)
            
            int16_t** _String_24 = _String_6
            UnDecorator::getReferenceType(_String_24, 
                &(*42693578WOCbEVzoHuIMJxKLNP8Q2SgTUqaclefhjkmrvy469")[0x15], 4)
            sub_14062d6e0(&arg2[2], &var_108, &_String_6)
            int64_t rax_68 = sx.q(var_108)
            void* rdx_80
            
            if (rax_68.d != 0xffffffff)
                rdx_80 = arg2[2] + rax_68 * 0x28
            
            int32_t r13_2
            int16_t* _String_5
            
            if (rax_68.d == 0xffffffff || rdx_80 == 0)
                _String_5 = nullptr
                r13_2 = 0
            else
                sub_140596d10(&var_d8, rdx_80 + 0x10)
                r13_2 = var_d8:8.d
                _String_5 = var_d8.q
            
            if (_String_24 != 0)
                sub_140a74f90(_String_24)
            
            _String_6 = nullptr
            int32_t var_110_15 = 0
            sub_1405947f0(&_String_6, 2)
            int32_t rax_70 = var_110_15 + 2
            var_110_15 = rax_70
            
            if (rax_70 s> 0)
                sub_140594770(&_String_6)
            
            int16_t** _String_25 = _String_6
            UnDecorator::getReferenceType(_String_25, 
                &(*42693578WOCbEVzoHuIMJxKLNP8Q2SgTUqaclefhjkmrvy469")[0x2d], 4)
            sub_14062d6e0(&arg2[2], &var_108, &_String_6)
            int64_t rax_71 = sx.q(var_108)
            void* rdx_85
            
            if (rax_71.d != 0xffffffff)
                rdx_85 = arg2[2] + rax_71 * 0x28
            
            int16_t* _String_2
            
            if (rax_71.d == 0xffffffff || rdx_85 == 0)
                _String_2 = nullptr
            else
                sub_140596d10(&var_d8, rdx_85 + 0x10)
                rbx_1 = var_d8:8.d
                _String_2 = var_d8.q
            
            if (_String_25 != 0)
                sub_140a74f90(_String_25)
            
            if (r13_2 s> 1 && rbx_1 s> 1)
                int16_t* const _String = &data_142d40450
                
                if (r13_2 != 0)
                    _String = _String_5
                
                _wtoi(_String)
                
                if (rbx_1 != 0)
                    _String_1 = _String_2
                
                _wtoi(_String_1)
            
            sub_140aae420(&var_d8, &var_100)
            sub_1405970a0(&var_d8)
            
            if (_String_2 != 0)
                sub_140a74f90(_String_2)
            
            if (_String_5 != 0)
                sub_140a74f90(_String_5)
            
            if (r15_7 != 0)
                sub_140a74f90(r15_7)
            
            int16_t* rcx_159 = var_100
            
            if (rcx_159 != 0)
                sub_140a74f90(rcx_159)
            
            result = result_1
            
            if (result != 0)
                result = sub_140a74f90(result)
        else
            _String_6 = nullptr
            int32_t var_110_5 = 0
            sub_1405947f0(&_String_6, rax_28 + 5)
            int32_t rax_29 = var_110_5 + 5
            var_110_5 = rax_29
            
            if (rax_29 s> 0)
                sub_140594770(&_String_6)
            
            int16_t** _String_23 = _String_6
            UnDecorator::getReferenceType(_String_23, u"file", 0xa)
            sub_14062d6e0(&arg2[2], &var_108, &_String_6)
            int64_t rax_30 = sx.q(var_108)
            void* rcx_65
            
            if (rax_30.d != 0xffffffff)
                rcx_65 = arg2[2] + rax_30 * 0x28
            
            int32_t r15_5
            
            if (rax_30.d == 0xffffffff || rcx_65 == 0)
                _String_4 = nullptr
                r15_5 = 0
            else
                r15_5 = *(rcx_65 + 0x18)
                _String_4 = nullptr
                int16_t* result_2 = *(rcx_65 + 0x10)
                _String_6 = nullptr
                result_1 = result_2
                
                if (r15_5 != 0)
                    sub_1405a4c70(&_String_6, r15_5, 0)
                    _String_4 = _String_6
                    memcpy(_String_4, result_1, r15_5 * 2)
            
            if (_String_23 != 0)
                sub_140a74f90(_String_23)
            
            _String_6 = nullptr
            int32_t var_110_6 = 0
            sub_1405947f0(&_String_6, 8)
            int32_t rax_32 = var_110_6 + 8
            var_110_6 = rax_32
            
            if (rax_32 s> 0)
                sub_140594770(&_String_6)
            
            UnDecorator::getReferenceType(_String_6, u"section", 0x10)
            sub_14062d6e0(&arg2[2], &var_108, &_String_6)
            int64_t rax_33 = sx.q(var_108)
            void* rcx_73
            
            if (rax_33.d != 0xffffffff)
                rcx_73 = arg2[2] + rax_33 * 0x28
            
            int32_t var_e0_1
            int16_t** _String_3
            
            if (rax_33.d == 0xffffffff || rcx_73 == 0)
                _String_3 = nullptr
                var_e0_1 = 0
            else
                int32_t rax_35 = *(rcx_73 + 0x18)
                _String_3 = nullptr
                result_1 = *(rcx_73 + 0x10)
                _String_7 = nullptr
                var_e0_1 = rax_35
                
                if (rax_35 != 0)
                    sub_1405a4c70(&_String_7, rax_35, 0)
                    _String_3 = _String_7
                    memcpy(_String_3, result_1, var_e0_1 * 2)
                    var_e0_1 = rax_35
            
            int16_t** _String_18 = _String_6
            
            if (_String_18 != 0)
                sub_140a74f90(_String_18)
            
            _String_6 = nullptr
            int32_t var_110_7 = 0
            sub_1405947f0(&_String_6, 4)
            int32_t rax_37 = var_110_7 + 4
            var_110_7 = rax_37
            
            if (rax_37 s> 0)
                sub_140594770(&_String_6)
            
            UnDecorator::getReferenceType(_String_6, &data_143296c60, 8)
            sub_14062d6e0(&arg2[2], &var_108, &_String_6)
            int64_t rax_38 = sx.q(var_108)
            void* rdx_44
            
            if (rax_38.d != 0xffffffff)
                rdx_44 = arg2[2] + rax_38 * 0x28
            
            int16_t* result_5
            
            if (rax_38.d == 0xffffffff || rdx_44 == 0)
                result_5 = nullptr
                result_1 = nullptr
                var_108 = 0
            else
                sub_140596d10(&result_7, rdx_44 + 0x10)
                result_5 = result_7
                int32_t var_a0
                var_108 = var_a0
                result_1 = result_5
            
            int16_t** _String_19 = _String_6
            
            if (_String_19 != 0)
                sub_140a74f90(_String_19)
            
            int16_t** _String_9 = &data_142d40450
            
            if (r15_5 != 0)
                _String_9 = _String_4
            
            int64_t* rdx_46
            
            if (sub_140a54510(_String_9, u"Game") != 0)
                int16_t** _String_10 = &data_142d40450
                
                if (r15_5 != 0)
                    _String_10 = _String_4
                
                if (sub_140a54510(_String_10, u"Input") != 0)
                    int16_t** _String_11 = &data_142d40450
                    
                    if (r15_5 != 0)
                        _String_11 = _String_4
                    
                    if (sub_140a54510(_String_11, u"GameUserSettings") != 0)
                        int16_t** _String_12 = &data_142d40450
                        
                        if (r15_5 != 0)
                            _String_12 = _String_4
                        
                        if (sub_140a54510(_String_12, u"Scalability") != 0)
                            int16_t** _String_13 = &data_142d40450
                            
                            if (r15_5 != 0)
                                _String_13 = _String_4
                            
                            rdx_46 = &data_143de5810
                            
                            if (sub_140a54510(_String_13, u"Hardware") != 0)
                                rdx_46 = &data_143de5780
                        else
                            rdx_46 = &data_143de5800
                    else
                        rdx_46 = &data_143de5840
                else
                    rdx_46 = &data_143de5820
            else
                rdx_46 = &data_143de5830
            
            sub_140596d10(&var_d8, rdx_46)
            bool cond:8_1 = var_108 != 0
            void* rcx_83 = data_143ddb400
            int16_t* result_8 = &data_142d40450
            var_100 = nullptr
            
            if (cond:8_1)
                result_8 = result_5
            
            var_f8.q = 0
            int16_t* _String_14 = &data_142d40450
            
            if (var_e0_1 != 0)
                _String_14 = _String_3
            
            int16_t* result_6
            
            if (sub_140af5b90(rcx_83, _String_14, result_8, &var_100, &var_d8) == 0)
                int64_t var_50_2 = 0
                result_6 = result_1
                int16_t** _String_8 = &data_142d40450
                int64_t var_40_2 = 0
                
                if (r15_5 != 0)
                    _String_8 = _String_4
                
                var_88 = 0
                int64_t var_80_1 = 0
                int64_t var_68_1 = 0
                int32_t var_60_1 = 0
                int32_t var_5c_2 = 0x80
                
                if (var_e0_1 != 0)
                    _String_1 = _String_3
                
                int64_t var_78_1 = 0
                int64_t var_70_1 = 0
                int32_t var_58_2 = 0xffffffff
                int32_t var_54_2 = 0
                int64_t var_48_2 = 0
                int16_t** _String_16 = _String_8
                sub_140a2e390(&var_98, u"Config key [%s] : %s in %s was not found", _String_1)
                sub_141ff9a20(&arg2[0xc], &var_88, &var_98)
                var_40_2.d = 0
                
                if (var_48_2 != 0)
                    sub_140a74f90(var_48_2)
                
                result = sub_140681eb0(&var_88)
            else
                _String_6 = nullptr
                int32_t var_110_8 = 0
                sub_1405947f0(&_String_6, 6)
                int32_t rax_47 = var_110_8 + 6
                var_110_8 = rax_47
                
                if (rax_47 s> 0)
                    sub_140594770(&_String_6)
                
                UnDecorator::getReferenceType(_String_6, u"value", 0xc)
                _String_7 = &_String_6
                int16_t** var_b0_2 = &var_100
                var_98 = &_String_7
                int16_t**** var_90_1 = &result_7
                var_98.o = var_98.o
                sub_14068bf30(&var_88, &var_98)
                result_7 = nullptr
                int64_t var_a0_2 = 0
                sub_141ff9a20(&arg2[0xc], &var_88, &result_7)
                var_40.d = 0
                
                if (var_48 != 0)
                    sub_140a74f90(var_48)
                
                result = sub_140681eb0(&var_88)
                int16_t** _String_20 = _String_6
                
                if (_String_20 != 0)
                    result = sub_140a74f90(_String_20)
                
                result_6 = result_1
            
            int16_t* rcx_91 = var_100
            
            if (rcx_91 != 0)
                result = sub_140a74f90(rcx_91)
            
            int64_t rcx_92 = var_d8.q
            
            if (rcx_92 != 0)
                result = sub_140a74f90(rcx_92)
            
            if (result_6 != 0)
                result = sub_140a74f90(result_6)
            
            if (_String_3 != 0)
                result = sub_140a74f90(_String_3)
            
        label_141ff9039:
            
            if (_String_4 != 0)
                result = sub_140a74f90(_String_4)
    else
        result_1 = nullptr
        int32_t var_e8_2 = 0
        sub_1405947f0(&result_1, rax_22 + 7)
        int32_t rax_23 = var_e8_2 + 7
        var_e8_2 = rax_23
        
        if (rax_23 s> 0)
            sub_140594770(&result_1)
        
        UnDecorator::getReferenceType(result_1, u"bucket", 0xe)
        sub_140a2e390(&_String_6, u"%d", zx.q(sub_140a47d40()))
        _String_7 = &result_1
        int16_t*** var_b0_1 = &_String_6
        result_7 = &_String_7
        int16_t**** var_a0_1 = &result_7
        var_d8 = result_7.o
        sub_14068bf30(&var_88, &var_d8)
        void* rax_25 = arg2[0xe]
        void* rcx_55 = &arg2[0x10]
        var_100 = nullptr
        var_f8.q = 0
        
        if (rax_25 != 0)
            rcx_55 = rax_25
        
        arg2[0xc]((*(*rcx_55 + 8))(rcx_55), &var_88, &var_100)
        int16_t* rcx_57 = var_100
        
        if (rcx_57 != 0)
            sub_140a74f90(rcx_57)
        
        var_40.d = 0
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        result = sub_140681eb0(&var_88)
        int16_t** _String_17 = _String_6
        
        if (_String_17 != 0)
            result = sub_140a74f90(_String_17)
        
        int16_t* result_4 = result_1
        
        if (result_4 != 0)
            result = sub_140a74f90(result_4)
else
    sub_1419d7250()
label_141ff8436:
    void* rax_9 = arg2[0xe]
    void* rcx_22 = &arg2[0x10]
    int64_t var_50_1 = 0
    int64_t var_40_1 = 0
    
    if (rax_9 != 0)
        rcx_22 = rax_9
    
    __builtin_memset(&var_88, 0, 0x2c)
    int32_t var_5c_1 = 0x80
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    int64_t var_48_1 = 0
    var_100 = nullptr
    var_f8.q = 0
    arg2[0xc]((*(*rcx_22 + 8))(rcx_22), &var_88, &var_100)
    int16_t* rcx_24 = var_100
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
label_141ff94bf:
    var_40_1.d = 0
    
    if (var_48_1 != 0)
        sub_140a74f90(var_48_1)
    
    result = sub_140681eb0(&var_88)
__security_check_cookie(rax_1 ^ &var_148)
return result
