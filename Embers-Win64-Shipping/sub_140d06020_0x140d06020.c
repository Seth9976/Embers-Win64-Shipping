// 函数: sub_140d06020
// 地址: 0x140d06020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x10a8)
void var_10d8
int64_t rax_1 = __security_cookie ^ &var_10d8
void* i_3 = arg4
int16_t* result = arg3

if (iswspace(*arg3) != 0)
    int32_t i
    
    do
        wint_t _C = result[1]
        result = &result[1]
        i = iswspace(_C)
    while (i != 0)

uint64_t rcx_1 = zx.q(*result)

while (rcx_1.w == 0x28)
    rcx_1 = zx.q(result[1])
    result = &result[1]

int32_t _Count_1 = 0
int16_t _Source[0x40]

if (rcx_1.w != 0)
    int16_t* rdx = &_Source
    
    while (rcx_1.w u> 0x2e || not(test_bit(0x520000000000, rcx_1)))
        result = &result[1]
        *rdx = rcx_1.w
        _Count_1 += 1
        rdx = &rdx[1]
        rcx_1 = zx.q(*result)
        
        if (rcx_1.w == 0)
            break

int64_t _Count = sx.q(_Count_1)

if (_Count * 2 u< 0x800)
    bool cond:0_1 = *result != 0x2e
    void* i_5 = nullptr
    _Source[_Count] = 0
    int16_t _Destination[0x400]
    int16_t* r15_1
    
    if (cond:0_1)
        if (i_3 == 0)
            sub_140b1f850(arg5, (i_3 + 3).b, 
                Cannot import unqualified delegate name; no object to search", 0)
            __security_check_cookie(rax_1 ^ &var_10d8)
            return nullptr
        
        if (((*(i_3 + 8) u>> 4).b & 1) == 0)
            i_5 = *(i_3 + 0x20)
        
        if (((*(i_3 + 8) u>> 4).b & 1) != 0 || ((*(i_5 + 8) u>> 4).b & 1) == 0)
            r15_1 = *(i_3 + 0x10)
            i_5 = i_3
        else
            r15_1 = *(i_5 + 0x10)
        
        wcsncpy(&_Destination, &_Source, _Count)
        _Destination[_Count] = 0
        
        if (r15_1 == 0)
            goto label_140d0620b
        
    label_140d062a2:
        uint64_t i_4
        sub_140b58260(&i_4, &_Destination, 0)
        uint64_t i_1 = i_4
        void* i_9
        uint64_t i_10
        int16_t* rsi
        int64_t var_1080
        
        if (i_1 != 0)
            int16_t* var_1098 = r15_1
            int16_t* rax_16
            
            if (r15_1 == 0)
                rax_16 = nullptr
            else
                rax_16 = *(r15_1 + 0x48)
            
            int16_t* var_1090_1 = rax_16
            int32_t var_1088_1 = 0xffffffff
            int16_t var_1084_1 = 0x101
            char var_1082_1 = 0
            sub_140d0a0c0(&var_1098)
            rsi = var_1090_1
            
            if (rsi == 0)
            label_140d06379:
                rsi = nullptr
            else
                while (*(rsi + 0x18) != i_1)
                    var_1090_1 = *(rsi + 0x28)
                    sub_140d0a0c0(&var_1098)
                    rsi = var_1090_1
                    
                    if (rsi == 0)
                        goto label_140d06379
            
            if (rsi == 0)
                goto label_140d062b8
            
            int16_t* var_1078
            int32_t var_1070
            
            if (rsi[0x5a].b != arg2[0x5a].b)
                var_1080 = *(arg2 + 0x18)
                sub_140b63b70(&var_1080, &var_1078)
                int16_t* r15_4 = &data_142d40450
                int16_t* rbx_2 = &data_142d40450
                i_4 = *(rsi + 0x18)
                
                if (var_1070 != 0)
                    rbx_2 = var_1078
                
                sub_140b63b70(&i_4, &var_1098)
                int16_t* var_10b8_2 = rbx_2
                
                if (var_1090_1.d != 0)
                    r15_4 = var_1098
                
                sub_140b1f850(arg5, 3, 
                    Function %s does not match number of params with delegate signature %s", r15_4)
                int16_t* rcx_30 = var_1098
                
                if (rcx_30 != 0)
                    sub_140a74f90(rcx_30)
                
                int16_t* rcx_31 = var_1078
                
                if (rcx_31 == 0)
                label_140d064f3:
                    i_9 = nullptr
                    rsi = nullptr
                    i_4 = 0
                    i_10 = i_4
                else
                    sub_140a74f90(rcx_31)
                    i_9 = nullptr
                    rsi = nullptr
                    i_4 = 0
                    i_10 = i_4
            else
                int32_t r15_2 = 0
                void* var_1090_2 = *(rsi + 0x50)
                var_1098 = rsi
                int32_t var_1088_2 = 0xffffffff
                int16_t var_1084_2 = 0x101
                char var_1082_2 = 0
                sub_1406328d0(&var_1098)
                var_1070.q = *(arg2 + 0x50)
                var_1078 = arg2
                int32_t var_1068_1 = 0xffffffff
                int16_t var_1064_1 = 0x101
                char var_1062_1 = 0
                sub_1406328d0(&var_1078)
                
                if (arg2[0x5a].b u> 0)
                    while (true)
                        void* rbx = var_1070.q
                        
                        if (*(var_1090_2 + 8) == *(rbx + 8) &&
                                not(test_bit(zx.q(*(rbx + 0x40)) ^ zx.q(*(var_1090_2 + 0x40)), 8)))
                            var_1090_2 = *(var_1090_2 + 0x20)
                            sub_1406328d0(&var_1098)
                            var_1070.q = *(rbx + 0x20)
                            sub_1406328d0(&var_1078)
                            r15_2 += 1
                            
                            if (r15_2 s>= zx.d(arg2[0x5a].b))
                                goto label_140d06457
                            
                            continue
                        
                        var_1080 = *(arg2 + 0x18)
                        sub_140b63b70(&var_1080, &var_1098)
                        int16_t* const r15_3 = &data_142d40450
                        int16_t* const rbx_1 = &data_142d40450
                        i_4 = *(rsi + 0x18)
                        
                        if (var_1090_2.d != 0)
                            rbx_1 = var_1098
                        
                        sub_140b63b70(&i_4, &var_1078)
                        int16_t* const var_10b8_1 = rbx_1
                        
                        if (var_1070 != 0)
                            r15_3 = var_1078
                        
                        sub_140b1f850(arg5, 3, 
                            Function %s does not match param types with delegate signature %s", r15_3)
                        int16_t* rcx_25 = var_1078
                        
                        if (rcx_25 != 0)
                            sub_140a74f90(rcx_25)
                        
                        int16_t* rcx_26 = var_1098
                        
                        if (rcx_26 != 0)
                            sub_140a74f90(rcx_26)
                        
                        break
                    
                    goto label_140d064f3
                
            label_140d06457:
                i_10 = *(rsi + 0x18)
                i_9 = nullptr
        else
            rsi = nullptr
        label_140d062b8:
            int16_t* var_10a0
            
            if (r15_1 != 0)
                var_1080 = *(r15_1 + 0x18)
                sub_140b63b70(&var_1080, &i_4)
            else
                i_4 = 0
                sub_1405947f0(&i_4, (r15_1 + 5).d)
                var_10a0.d = r15_1.d + 5
                
                if (r15_1.d + 5 s> var_10a0:4.d)
                    sub_140594770(&i_4)
                
                UnDecorator::getReferenceType(i_4, u"None", 0xa)
            
            int16_t* const i_11 = &data_142d40450
            
            if (var_10a0.d != 0)
                i_11 = i_4
            
            int16_t* const i_12 = i_11
            int16_t (* var_10b8_3)[0x40] = &_Source
            sub_140b1f850(arg5, 3, 
                Unable to find function %s in object %s for delegate (found class: %s)", &_Destination)
            uint64_t i_8 = i_4
            
            if (i_8 != 0)
                sub_140a74f90(i_8)
            
            i_9 = nullptr
            i_4 = 0
            i_10 = i_4
        
        if (rsi != 0)
            i_9 = i_5
        
        sub_140d3a3a0(arg1, i_9)
        *(arg1 + 8) = i_10
        
        if (rsi == 0 || i_5 == 0)
            result = nullptr
        
        __security_check_cookie(rax_1 ^ &var_10d8)
        return result
    
    int16_t i_2 = result[1]
    result = &result[1]
    int32_t rdx_1 = 0
    
    if (i_2 != 0)
        int16_t (* rcx_2)[0x400] = &_Destination
        
        while (i_2 != 0x29)
            if (i_2 == 0x2c)
                break
            
            result = &result[1]
            *rcx_2 = i_2
            rdx_1 += 1
            rcx_2 = &(*rcx_2)[1]
            i_2 = *result
            
            if (i_2 == 0)
                break
    
    if (sx.q(rdx_1) * 2 u< 0x800)
        _Destination[sx.q(rdx_1)] = 0
    label_140d0620b:
        int64_t* rax_12 = sub_140d2ee50(sub_140bdf2e0(), -ffffffffffffffff, &_Source, 0)
        r15_1 = rax_12
        
        if (rax_12 != 0)
            i_5 = rax_12[0x23]
            
            if (i_5 == 0)
                int64_t rdx_4 = *rax_12
                (*(rdx_4 + 0x390))(rax_12, rdx_4)
                i_5 = *(r15_1 + 0x118)
        else if (i_5 != 0)
        label_140d0628f:
            r15_1 = *(i_5 + 0x10)
        else
            while (i_3 != 0)
                void* i_6 = sub_140d2ee50(sub_140d41340(), i_3, &_Source, 0)
                i_3 = *(i_3 + 0x20)
                i_5 = i_6
                
                if (i_6 != 0)
                    goto label_140d0628f_2
            
            if (i_5 != 0)
            label_140d0628f_1:
                r15_1 = *(i_5 + 0x10)
            else
                void* i_7 = sub_140d2ee50(sub_140d41340(), i_5 - 1, &_Source, 0)
                i_5 = i_7
                
                if (i_7 != 0)
                label_140d0628f_2:
                    r15_1 = *(i_5 + 0x10)
        
        goto label_140d062a2

__report_rangecheckfailure()
noreturn
