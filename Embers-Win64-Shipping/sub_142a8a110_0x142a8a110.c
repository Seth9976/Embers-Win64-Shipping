// 函数: sub_142a8a110
// 地址: 0x142a8a110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t var_30 = -2
char var_197 = 0
int32_t var_148 = 0

if (arg3 != 0)
    *arg3 = 0

if (sx.d(sub_142a87210(*arg4)) != 0)
    return 0

if (arg_10 s< 0)
    int64_t var_140_1 = -1
    
    do
        var_140_1 += 1
    while (arg1[var_140_1] != 0)
    
    arg_10 = var_140_1.d

char* i_8 = sub_142a7dd00(sx.q(arg_10 + 1))

if (i_8 == 0)
    *arg4 = 7
    return 0

__builtin_memcpy(i_8, arg1, sx.q(arg_10))
i_8[sx.q(arg_10)] = 0
int64_t var_1b0
sub_140dd5b90(&var_1b0, sub_142a7dd00(0x58))

if (sx.d(Concurrency::details::_CancellationTokenState::TokenRegistrationContainer::empty(&var_1b0))
        != 0)
    sub_142a7dcd0(i_8)
    *arg4 = 7
    int64_t var_a8_1 = 0
    sub_142a87200(&var_1b0)
    return var_a8_1

sub_142a89d20(sub_14183e350(&var_1b0))
*sub_14183e350(&var_1b0) = i_8

if (arg_10 s< 2)
    int64_t rax_22 = sub_142a8a090(&var_1b0)
    sub_142a87200(&var_1b0)
    return rax_22

int32_t var_d0_1 = 0

for (int32_t i = 0; i s< 0x34; i += 2)
    int64_t var_138_1 = -1
    
    do
        var_138_1 += 1
    while ((&data_143641a10)[sx.q(i)][var_138_1] != 0)
    
    int32_t rax_28 = var_138_1.d
    
    if (arg_10 s>= rax_28 && (arg_10 s<= rax_28 || sx.d(i_8[sx.q(rax_28)]) == 0x2d))
        int64_t i_6 = sx.q(i)
        
        if (sub_142a86320((&data_143641a10)[i_6], i_8, rax_28, i_6.d) == 0)
            var_148 = rax_28
            int64_t var_130_1 = -1
            
            do
                var_130_1 += 1
            while ((&data_143641a10)[sx.q(i + 1)][var_130_1] != 0)
            
            int32_t rax_40 = var_130_1.d
            int32_t rax_43 = rax_40 + arg_10 - rax_28
            
            if (arg_10 s< rax_43)
                sub_142a7dcd0(i_8)
                i_8 = sub_142a7dd00(sx.q(rax_43 + 1))
                
                if (i_8 == 0)
                    *arg4 = 7
                    int64_t var_88_1 = 0
                    sub_142a87200(&var_1b0)
                    return var_88_1
                
                *sub_14183e350(&var_1b0) = i_8
                arg_10 = rax_43
            
            var_d0_1 = rax_28 - rax_40
            char* var_e0_1 = (&data_143641a10)[sx.q(i + 1)]
            char* var_128_1 = *sub_14183e350(&var_1b0)
            char* var_28_1 = var_128_1
            char j
            
            do
                j = *var_e0_1
                *var_128_1 = j
                var_e0_1 = &var_e0_1[1]
                var_128_1 = &var_128_1[1]
            while (j != 0)
            
            if (rax_28 != arg_10)
                void* var_d8_1 = &arg1[sx.q(rax_28)]
                char* var_120_1 = sx.q(rax_40) + *sub_14183e350(&var_1b0)
                char* var_20_1 = var_120_1
                char j_1
                
                do
                    j_1 = *var_d8_1
                    *var_120_1 = j_1
                    var_d8_1 += 1
                    var_120_1 = &var_120_1[1]
                while (j_1 != 0)
            
            break

if (var_148 == 0)
    for (int32_t i_1 = 0; i_1 s< 0x34; i_1 += 2)
        char* rax_83 = (&data_143641bb0)[sx.q(i_1)]
        int64_t var_118_1 = -1
        
        do
            var_118_1 += 1
        while (rax_83[var_118_1] != 0)
        
        if (sub_142a86320(rax_83, i_8, var_118_1.d, var_118_1.d) == 0)
            void* rcx_39 = &i_8[var_118_1]
            
            if (sx.d(*rcx_39) == 0 || sx.d(*rcx_39) == 0x2d)
                char* _Source = (&data_143641bb0)[sx.q(i_1 + 1)]
                uint64_t _Count = -1
                
                do
                    _Count += 1
                while (_Source[_Count] != 0)
                
                strncpy(*sub_14183e350(&var_1b0), _Source, _Count)
                
                if (sx.d(*rcx_39) != 0x2d)
                    i_8[_Count] = 0
                else
                    memmove(&i_8[_Count], rcx_39, arg_10 - var_118_1.d + 1)
                
                var_d0_1 = var_118_1.d - _Count.d
                break

int16_t var_1c8_1 = 0x81
char* i_4 = i_8
char* i_2 = i_4
int32_t var_168_1 = 0
int64_t* var_1a0_1 = nullptr
char* i_10 = nullptr
char* i_9 = nullptr

while (i_2 != 0)
    char* i_3 = i_2
    char* i_7 = i_3
    
    while (sx.d(*i_7) != 0)
        if (sx.d(*i_7) == 0x2d)
            break
        
        i_7 = &i_7[1]
    
    if (sx.d(*i_7) != 0)
        i_2 = &i_7[1]
    else
        i_2 = nullptr
    
    int32_t rcx_50 = i_7.d - i_3.d
    
    if ((sx.d(var_1c8_1) & 1) != 0 && sx.d(sub_142a8b940(i_3, rcx_50)) != 0)
        *i_7 = 0
        *(sub_14183e350(&var_1b0) + 8) = sub_142a861c0(i_3)
        i_4 = i_7
        var_1c8_1 = 0xbc
        
        if (rcx_50 s> 3)
            continue
        else
            var_1c8_1 = 0xbe
            continue
    
    if ((sx.d(var_1c8_1) & 2) != 0 && sx.d(sub_142a89ed0(i_3, rcx_50)) != 0)
        *i_7 = 0
        *(sub_14183e350(&var_1b0) + (sx.q(var_168_1) << 3) + 0x10) = sub_142a861c0(i_3)
        var_168_1 += 1
        i_4 = i_7
        
        if (var_168_1 s>= 3)
            var_1c8_1 = 0xbc
            continue
        else
            var_1c8_1 = 0xbe
            continue
    
    if ((sx.d(var_1c8_1) & 4) != 0 && sx.d(sub_142a8ba20(i_3, rcx_50)) != 0)
        *i_7 = 0
        *i_3 = sub_142a863a0(zx.d(*i_3))
        void* var_160_2 = &i_3[1]
        
        while (sx.d(*var_160_2) != 0)
            *var_160_2 = sub_142a86220(zx.d(*var_160_2))
            var_160_2 += 1
        
        *(sub_14183e350(&var_1b0) + 0x28) = i_3
        i_4 = i_7
        var_1c8_1 = 0xb8
        continue
    
    if ((sx.d(var_1c8_1) & 8) != 0 && sx.d(sub_142a8b980(i_3, rcx_50)) != 0)
        *i_7 = 0
        *(sub_14183e350(&var_1b0) + 0x30) = sub_142a861f0(i_3)
        i_4 = i_7
        var_1c8_1 = 0xb0
        continue
    
    if ((sx.d(var_1c8_1) & 0x10) != 0)
        if (sx.d(sub_142a8a000(i_3, rcx_50)) != 0)
        label_142a8ab8b:
            char** rax_177 = sub_142a7dd00(0x10)
            
            if (rax_177 == 0)
                *arg4 = 7
                int64_t var_58_1 = 0
                sub_142a87200(&var_1b0)
                return var_58_1
            
            *i_7 = 0
            *rax_177 = sub_142a861f0(i_3)
            
            if (sx.d(sub_142a873e0(sub_14183e350(&var_1b0) + 0x38, rax_177)) == 0)
                sub_142a7dcd0(rax_177)
                break
            
            i_4 = i_7
            var_1c8_1 = 0xb0
            continue
        else if (sx.d(var_197) != 0 && sx.d(sub_142a89f30(i_3, rcx_50)) != 0)
            goto label_142a8ab8b
    
    if ((sx.d(var_1c8_1) & 0x20) != 0 && sx.d(sub_142a89e30(i_3, rcx_50)) != 0)
        if (var_1a0_1 != 0)
            if (i_10 == 0 || i_9 == 0)
                sub_142a7dcd0(var_1a0_1)
                var_1a0_1 = nullptr
                break
            
            *i_9 = 0
            var_1a0_1[1] = sub_142a861c0(i_10)
            
            if (sx.d(sub_142a87220(sub_14183e350(&var_1b0) + 0x40, var_1a0_1, 0)) == 0)
                sub_142a7dcd0(var_1a0_1)
                var_1a0_1 = nullptr
                break
            
            i_4 = i_9
        
        var_1a0_1 = sub_142a7dd00(0x18)
        
        if (var_1a0_1 == 0)
            *arg4 = 7
            int64_t var_50_1 = 0
            sub_142a87200(&var_1b0)
            return var_50_1
        
        *i_7 = 0
        *var_1a0_1 = sub_142a861c0(i_3)
        var_1a0_1[1] = 0
        i_10 = nullptr
        i_9 = nullptr
        var_1c8_1 = 0x40
        continue
    
    if ((sx.d(var_1c8_1) & 0x40) != 0 && sx.d(sub_142a89e90(i_3, rcx_50)) != 0)
        if (i_10 == 0)
            i_10 = i_3
        
        i_9 = i_7
        var_1c8_1 = 0xe0
        continue
    
    if ((sx.d(var_1c8_1) & 0x80) == 0)
        break
    
    if (sx.d(sub_142a86220(zx.d(*i_3))) != 0x78)
        break
    
    if (rcx_50 != 1)
        break
    
    if (var_1a0_1 != 0)
        if (i_10 == 0 || i_9 == 0)
            sub_142a7dcd0(var_1a0_1)
            var_1a0_1 = nullptr
            break
        
        *i_9 = 0
        var_1a0_1[1] = sub_142a861c0(i_10)
        
        if (sx.d(sub_142a87220(sub_14183e350(&var_1b0) + 0x40, var_1a0_1, 0)) == 0)
            sub_142a7dcd0(var_1a0_1)
            var_1a0_1 = nullptr
            break
        
        i_4 = i_9
        var_1a0_1 = nullptr
    
    if (i_2 == 0)
        break
    
    char* i_5 = i_2
    
    while (i_2 != 0)
        char* _Str1 = i_2
        char* _Str1_1 = _Str1
        
        while (sx.d(*_Str1_1) != 0)
            if (sx.d(*_Str1_1) == 0x2d)
                break
            
            _Str1_1 = &_Str1_1[1]
        
        if (sx.d(*_Str1_1) != 0)
            i_2 = &_Str1_1[1]
        else
            i_2 = nullptr
        
        uint64_t _MaxCount = -1
        
        do
            _MaxCount += 1
        while ((*"lvariant")[_MaxCount] != 0)
        
        if (strncmp(_Str1, "lvariant", _MaxCount) == 0)
            *_Str1_1 = 0
            var_1c8_1 = 0x10
            var_197 = 1
            break
        
        if (sx.d(sub_142a89f30(_Str1, _Str1_1.d - _Str1.d)) == 0)
            break
        
        i_4 = _Str1_1
    
    if (sx.d(var_1c8_1) != 0x10)
        if (i_4 - i_5 s> 0)
            *i_4 = 0
            *(sub_14183e350(&var_1b0) + 0x48) = sub_142a861c0(i_5)
        
        break

if (var_1a0_1 != 0)
    if (i_10 == 0 || i_9 == 0)
        sub_142a7dcd0(var_1a0_1)
    else
        *i_9 = 0
        var_1a0_1[1] = sub_142a861c0(i_10)
        
        if (sx.d(sub_142a87220(sub_14183e350(&var_1b0) + 0x40, var_1a0_1, 0)) == 0)
            sub_142a7dcd0(var_1a0_1)
        else
            i_4 = i_9

if (arg3 != 0)
    *arg3 = i_4.d - (*sub_14183e350(&var_1b0)).d + var_d0_1

int64_t rax_258 = sub_142a8a090(&var_1b0)
sub_142a87200(&var_1b0)
return rax_258
