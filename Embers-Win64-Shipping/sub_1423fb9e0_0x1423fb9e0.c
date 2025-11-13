// 函数: sub_1423fb9e0
// 地址: 0x1423fb9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_5 = arg1
int32_t arg_20 = 0
int16_t* rbx = arg3
*arg1 = 0
int32_t rdi = (data_143f5bc68.q).d
int64_t* i_10 = arg1
int64_t rsi = data_143f5bc60
arg1[1].d = rdi

if (rdi != 0)
    sub_1405a4c70(arg1, rdi, 0)
    memcpy(*i_10, rsi, rdi * 2)
else
    *(arg1 + 0xc) = 0

void* r14 = &i_10[2]
*r14 = 0
int32_t rdi_1 = (data_143f5bc88).d
int64_t rsi_1 = data_143f5bc80
*(r14 + 8) = rdi_1

if (rdi_1 != 0)
    sub_1405a4c70(r14, rdi_1, 0)
    memcpy(*r14, rsi_1, rdi_1 * 2)
else
    *(r14 + 0xc) = 0

i_10[4].d = data_143f5bcb0
*(i_10 + 0x24) = 1
void* _String_3 = &i_10[5]
sub_14151ffb0(&i_10[5])
__builtin_memset(&i_10[7], 0, 0x28)
int32_t rsi_2 = (data_143f5bc98).d
int64_t r14_1 = data_143f5bc90
void* _String_18 = &i_10[0xb]
i_10[0xc].d = rsi_2
void* i_2

if (rsi_2 != 0)
    sub_1405a4c70(&i_10[0xb], rsi_2, 0)
    i_2 = &i_10[0xb]
    memcpy(i_10[0xb], r14_1, rsi_2 * 2)
else
    *(i_10 + 0x64) = 0
    i_2 = &i_10[0xb]

if (data_143f5b830 == 0)
    sub_140b1bef0(&data_143f5bc60)
    data_143f5b830 = 1
    
    if (i_10 != &data_143f5bc60)
        int32_t rsi_3 = (data_143f5bc68.q).d
        int64_t r14_2 = data_143f5bc60
        int32_t r8_6 = *(i_10 + 0xc)
        i_10[1].d = rsi_3
        
        if (rsi_3 != 0 || r8_6 != 0)
            sub_1405a4c70(i_10, rsi_3, r8_6)
            memcpy(*i_10, r14_2, rsi_3 * 2)
        else
            *(i_10 + 0xc) = 0
    
    if (i_10 != &data_143f5bc70)
        int32_t rsi_4 = (data_143f5bc88).d
        int64_t r14_3 = data_143f5bc80
        int32_t r8_9 = *(i_10 + 0x1c)
        i_10[3].d = rsi_4
        
        if (rsi_4 != 0 || r8_9 != 0)
            sub_1405a4c70(&i_10[2], rsi_4, r8_9)
            memcpy(i_10[2], r14_3, rsi_4 * 2)
        else
            *(i_10 + 0x1c) = 0
    
    i_10[4].d = data_143f5bcb0
    
    if (i_10 == 0x143f5bc38)
        i_2 = &i_10[0xb]
    else
        int32_t rsi_5 = (data_143f5bc98).d
        int64_t r14_4 = data_143f5bc90
        int32_t r8_12 = *(i_10 + 0x64)
        i_10[0xc].d = rsi_5
        
        if (rsi_5 != 0 || r8_12 != 0)
            sub_1405a4c70(&i_10[0xb], rsi_5, r8_12)
            i_2 = &i_10[0xb]
            memcpy(i_10[0xb], r14_4, rsi_5 * 2)
        else
            *(i_10 + 0x64) = 0
            i_2 = &i_10[0xb]

int64_t rax_6 = -1

do
    rax_6 += 1
while (rbx[rax_6] != 0)

int64_t rax_7 = 2 * (sx.q(rax_6.d) + 1)

if (mulu.dp.q(2, sx.q(rax_6.d) + 1) u>> 0x40 != zx.o(0))
    rax_7 = -1

int16_t* string_5 = j_sub_140a82f30(rax_7)
int16_t* rdx_11 = string_5 - rbx
int16_t* string_4 = string_5
int16_t* string_3 = string_5
int16_t i

do
    i = *rbx
    *(rdx_11 + rbx) = i
    rbx = &rbx[1]
while (i != 0)

if (arg4 == 2)
    sub_140597df0(i_10, arg2)
    sub_140597df0(&i_10[2], &arg2[2])
    sub_140597df0(&i_10[5], &arg2[5])
    sub_140597df0(i_2, &arg2[0xb])
    i_10[4].d = arg2[4].d
label_1423fbd07:
    int32_t i_1 = 0
    
    if (arg2[0xa].d s> 0)
        int64_t* r15_1 = nullptr
        
        do
            int64_t rbx_1 = sx.q(i_10[0xa].d)
            int32_t rax_9 = (rbx_1 + 1).d
            i_10[0xa].d = rax_9
            
            if (rax_9 s> *(i_10 + 0x54))
                sub_1405a4f90(&i_10[9])
            
            int64_t rbx_2 = rbx_1 << 4
            int64_t* rbx_3 = rbx_2 + i_10[9]
            
            if (rbx_2 != neg.q(i_10[9]))
                int64_t rax_10 = arg2[9]
                *rbx_3 = 0
                i_2 = sx.q(*(r15_1 + rax_10 + 8))
                int64_t r12 = *(r15_1 + rax_10)
                rbx_3[1].d = i_2.d
                
                if (i_2.d != 0)
                    sub_1405a4c70(rbx_3, i_2.d, 0)
                    memcpy(*rbx_3, r12, i_2.d * 2)
                else
                    *(rbx_3 + 0xc) = 0
            
            i_1 += 1
            r15_1 = &r15_1[2]
        while (i_1 s< arg2[0xa].d)
        
        i_10 = i_5
    
    string_3 = string_4
else if (arg4 == 1)
    goto label_1423fbd07

if (*string_5 == 0x20)
    do
        string_3 = &string_3[1]
    while (*string_3 == 0x20)
    
    string_4 = string_3

wchar16* rdi_3 = wcschr(string_3, 0x3f)
wchar16* rax_13 = wcschr(string_3, 0x23)

if (rdi_3 == 0)
    rdi_3 = rax_13
else if (rax_13 != 0 && rdi_3 u>= rax_13)
    rdi_3 = rax_13

int64_t var_a8

if (rdi_3 != 0)
    wchar16 rbx_4 = *rdi_3
    wchar16 r14_5 = 0
    *rdi_3 = 0
    void* string_1 = &rdi_3[1]
    
    do
        i_2 = wcschr(string_1, 0x3f)
        wchar16* i_7 = wcschr(string_1, 0x23)
        
        if (i_2 == 0)
            i_2 = i_7
        else if (i_7 != 0 && i_2 u>= i_7)
            i_2 = i_7
        
        if (i_2 != 0)
            r14_5 = *i_2
            *i_2 = 0
            i_2 += 2
        
        wchar16* rax_15 = wcschr(string_1, 0x3f)
        
        if (rax_15 != 0)
            rax_15.b = 0
        else if (wcschr(string_1, (rax_15 + 0x23).w) != 0)
            rax_15.b = 0
        else
            rax_15.b = 1
        
        if (rax_15.b == 0)
            sub_14215dc20(i_10, sub_1423fd810(&var_a8, nullptr))
            int64_t var_50
            
            if (var_50 != 0)
                sub_140a74f90(var_50)
            
            int32_t j_2
            int32_t j_1 = j_2
            int64_t* var_60
            int64_t* rbx_7 = var_60
            
            if (j_1 != 0)
                int32_t j
                
                do
                    int64_t rcx_36 = *rbx_7
                    
                    if (rcx_36 != 0)
                        sub_140a74f90(rcx_36)
                    
                    rbx_7 = &rbx_7[2]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                rbx_7 = var_60
            
            if (rbx_7 != 0)
                sub_140a74f90(rbx_7)
            
            int64_t var_70
            
            if (var_70 != 0)
                sub_140a74f90(var_70)
            
            int64_t var_80
            
            if (var_80 != 0)
                sub_140a74f90(var_80)
            
            int64_t var_98
            
            if (var_98 != 0)
                sub_140a74f90(var_98)
            
            int64_t rcx_41 = var_a8
            
            if (rcx_41 != 0)
                sub_140a74f90(rcx_41)
            
            *(i_10 + 0x24) = 0
            break
        
        if (rbx_4 != 0x3f)
            if (i_10[0xb] != string_1)
                int32_t rbx_6
                
                if (string_1 == 0 || *string_1 == 0)
                    rbx_6 = 0
                else
                    int64_t rbx_5 = -1
                    
                    do
                        rbx_5 += 1
                    while (*(string_1 + (rbx_5 << 1)) != 0)
                    
                    rbx_6 = rbx_5.d + 1
                
                int32_t rdx_24 = 0
                i_10[0xc].d = 0
                
                if (*(i_10 + 0x64) != rbx_6)
                    sub_1405947f0(&i_10[0xb], rbx_6)
                    rdx_24 = i_10[0xc].d
                
                int32_t rax_16 = rbx_6 + rdx_24
                i_10[0xc].d = rax_16
                
                if (rax_16 s> *(i_10 + 0x64))
                    sub_140594770(&i_10[0xb])
                
                if (rbx_6 != 0)
                    memcpy(i_10[0xb], string_1, rbx_6 * 2)
        else if (string_1 == 0 || *string_1 != 0x2d)
            sub_142401e40(i_10, string_1)
        else
            sub_14241df00(i_10, string_1 + 2, nullptr, &data_143de5830)
        
        string_1 = i_2
        rbx_4 = r14_5
    while (i_2 != 0)
    
    string_3 = string_4

char r15_2 = 0

if (*(i_10 + 0x24) == 1)
    int16_t i_3 = *string_3
    int16_t* string_7 = string_3
    
    while (i_3 != 0)
        if (i_3 == 0x3a)
            int16_t rax_18 = string_7[1]
            
            if (rax_18 == 0x5c || rax_18 == 0x2f)
                int64_t rax_19 = -1
                
                do
                    rax_19 += 1
                while (string_7[rax_19] != 0)
                
                if (rax_19.d s> 2)
                    int16_t rax_20 = string_7[2]
                    
                    if (rax_20 == 0x5c || rax_20 == 0x2f)
                        *string_7 = 0
                        int32_t rax_21 = iswalpha(*string_3)
                        i_2.b = rax_21 != 0
                        
                        if (rax_21 != 0)
                            wint_t _C = *string_3
                            int16_t* string_9 = string_3
                            
                            while (_C != 0)
                                if (iswalnum(_C) == 0)
                                    int16_t rcx_44 = *string_9
                                    
                                    if ((0xfffc & (rcx_44 - 0x2b)) != 0 || rcx_44 == 0x2c)
                                        i_2.b = 0
                                        break
                                
                                _C = string_9[1]
                                string_9 = &string_9[1]
                        
                        uint32_t rax_24 = zx.d(i_2.b)
                        *(i_10 + 0x24) = rax_24
                        
                        if (rax_24 == 1)
                            if (*i_10 != string_3)
                                int32_t rdi_5
                                
                                if (*string_3 == 0)
                                    rdi_5 = 0
                                else
                                    int64_t rdi_4 = -1
                                    
                                    do
                                        rdi_4 += 1
                                    while (string_3[rdi_4] != 0)
                                    
                                    rdi_5 = rdi_4.d + 1
                                
                                int32_t rdx_28 = 0
                                i_10[1].d = 0
                                
                                if (*(i_10 + 0xc) != rdi_5)
                                    sub_1405947f0(i_10, rdi_5)
                                    rdx_28 = i_10[1].d
                                
                                int32_t rax_25 = rdi_5 + rdx_28
                                i_10[1].d = rax_25
                                
                                if (rax_25 s> *(i_10 + 0xc))
                                    sub_140594770(i_10)
                                
                                if (rdi_5 != 0)
                                    memcpy(*i_10, string_3, rdi_5 * 2)
                            
                            string_3 = &string_7[3]
                            r15_2 = 1
                        
                        break
        
        i_3 = string_7[1]
        string_7 = &string_7[1]

int32_t rdx_31 = *(i_10 + 0x24)

if (rdx_31 == 1 && string_3 != 0)
    int16_t i_4 = *string_3
    int16_t* string_6 = string_3
    
    while (i_4 != 0)
        if (i_4 == 0x5c || i_4 == 0x2f)
            int16_t rax_26 = string_6[1] - 0x2f
            
            if (rax_26 u<= 0x2d && test_bit(0x200000010001, zx.q(rax_26)))
                *(i_10 + 0x24) = 0
                rdx_31 = 0
                break
        
        i_4 = string_6[1]
        string_6 = &string_6[1]

int16_t* _String_32 = nullptr
int16_t* const string_2 = &data_142d40450
int64_t var_100 = 0
int16_t* string_8 = &data_142d40450
int16_t* _String_47 = nullptr

if (rdx_31 == 1)
    string_8 = string_3

if (string_8 != 0 && *string_8 != 0)
    int64_t rbx_8 = -1
    
    do
        rbx_8 += 1
    while (string_8[rbx_8] != 0)
    
    if (rbx_8.d + 1 s> 0)
        sub_1405947f0(&_String_32, rbx_8.d + 1)
        _String_47 = _String_32
    
    int32_t rax_28 = rbx_8.d + 1 + var_100.d
    var_100.d = rax_28
    
    if (rax_28 s> 0)
        sub_140594770(&_String_32)
        _String_47 = _String_32
    
    UnDecorator::getReferenceType(_String_47, string_8, (rbx_8.d + 1) * 2)
    _String_47 = _String_32

int64_t* result = i_5
int32_t var_128
int16_t* _String_2
int32_t var_f0
int32_t var_ec
void* _String_31
int16_t** _String_39

if (*(result + 0x24) != 1)
    _String_31 = &result[5]
    _String_39 = &result[0xb]
else
    int32_t rsi_6 = var_100.d
    
    if (rsi_6 == 0 || rsi_6 - 1 s<= 2)
    label_1423fc422:
        int16_t* _String_50 = _String_47
        void* rbx_12 = &_String_47[sx.q(var_100.d)]
        int32_t rsi_11
        
        if (_String_47 == rbx_12)
        label_1423fc44a:
            rsi_11 = -1
        else
            while (*_String_50 != 0x3a)
                _String_50 = &_String_50[1]
                
                if (_String_50 == rbx_12)
                    goto label_1423fc44a
            
            rsi_11 = ((_String_50 - _String_47) s>> 1).d
        
        int16_t* _String_52 = _String_47
        int32_t r14_6
        
        if (_String_47 == rbx_12)
        label_1423fc468:
            r14_6 = -1
        else
            while (*_String_52 != 0x2e)
                _String_52 = &_String_52[1]
                
                if (_String_52 == rbx_12)
                    goto label_1423fc468
            
            r14_6 = ((_String_52 - _String_47) s>> 1).d
        
        int16_t* _String_51 = _String_47
        int32_t r12_1
        
        if (_String_47 == rbx_12)
        label_1423fc484:
            r12_1 = -1
        else
            while (*_String_51 != 0x5b)
                _String_51 = &_String_51[1]
                
                if (_String_51 == rbx_12)
                    goto label_1423fc484
            
            r12_1 = ((_String_51 - _String_47) s>> 1).d
        
        int32_t rbx_13
        
        if (rbx_12 == _String_47)
        label_1423fc49f:
            rbx_13 = -1
        else
            while (true)
                rbx_12 -= 2
                
                if (*rbx_12 == 0x3a)
                    rbx_13 = ((rbx_12 - _String_47) s>> 1).d
                    break
                
                if (rbx_12 == _String_47)
                    goto label_1423fc49f
        
        int32_t rax_33
        
        if (rsi_11 == 0xffffffff || rbx_13 == 0xffffffff || rsi_11 == rbx_13
                || sub_140a23cf0(&_String_32, &data_142d84ee0, 0, 0, rsi_11 + 1) == rbx_13)
            rax_33.b = 0
        else
            rax_33.b = 1
        
        int16_t* _String_27 = _String_32
        arg_20.b = rax_33.b
        int32_t var_110
        int32_t var_10c
        
        if (r15_2 == 0 && rsi_11 s>= 2)
            if ((r12_1 == 0xffffffff && rax_33.b == 0) || rsi_11 s< r12_1)
            label_1423fc546:
                
                if (r14_6 == 0xffffffff || rsi_11 s< r14_6)
                    int32_t r9 = var_100.d
                    int32_t rbx_15
                    int16_t* _String_40
                    
                    if (r9 == 0)
                        _String_40 = &data_142d40450
                        rbx_15 = 0
                    else
                        _String_40 = _String_27
                        rbx_15 = r9 - 1
                    
                    if (rsi_11 s< 0)
                        rbx_15 = 0
                    else if (rsi_11 s< rbx_15)
                        rbx_15 = rsi_11
                    
                    _String_2 = nullptr
                    int16_t* _String_9 = nullptr
                    var_110.q = 0
                    int32_t rdi_6 = 0
                    int32_t r14_8 = 0
                    
                    if (_String_40 != 0 && *_String_40 != 0 && rbx_15 s> 0)
                        if (rbx_15 + 1 s> 0)
                            sub_1405947f0(&_String_2, rbx_15 + 1)
                            r14_8 = var_10c
                            rdi_6 = var_110
                            _String_9 = _String_2
                        
                        rdi_6 = rdi_6 + 1 + rbx_15
                        
                        if (rdi_6 s> r14_8)
                            sub_140594770(&_String_2)
                            r14_8 = var_10c
                            _String_9 = _String_2
                        
                        UnDecorator::getReferenceType(_String_9, _String_40, rbx_15 * 2)
                        _String_9[sx.q(rdi_6) - 1] = 0
                        r9 = var_100.d
                        _String_27 = _String_32
                    
                    int16_t** i_8 = i_5
                    
                    if (i_8 != &_String_2)
                        int16_t* rcx_66 = *i_8
                        
                        if (rcx_66 != 0)
                            sub_140a74f90(rcx_66)
                            r9 = var_100.d
                            _String_27 = _String_32
                        
                        *i_8 = _String_9
                        i_8[1].d = rdi_6
                        *(i_8 + 0xc) = r14_8
                    else if (_String_9 != 0)
                        sub_140a74f90(_String_9)
                        r9 = var_100.d
                        _String_27 = _String_32
                    
                    int32_t rbx_16 = r9 - 1
                    
                    if (r9 == 0)
                        rbx_16 = 0
                    
                    int32_t rcx_68
                    
                    if (rsi_11 + 1 s>= 0)
                        rcx_68 = rbx_16
                        
                        if (rsi_11 + 1 s< rbx_16)
                            rcx_68 = rsi_11 + 1
                    else
                        rcx_68 = 0
                    
                    int64_t r10_1 = sx.q(rcx_68)
                    
                    if (sx.q(rsi_11 + 1) + 0x7fffffff s< r10_1)
                        rbx_16 = rcx_68
                    else if (sx.q(rsi_11 + 1) + 0x7fffffff s< sx.q(rbx_16))
                        rbx_16 = rsi_11 - -0x80000000
                    
                    _String_2 = nullptr
                    var_110.q = 0
                    int16_t* _String_33 = &data_142d40450
                    int16_t* _String_10 = nullptr
                    
                    if (r9 != 0)
                        _String_33 = _String_27
                    
                    int32_t rdi_8 = 0
                    int32_t rbx_17 = rbx_16 - rcx_68
                    int32_t r14_9 = 0
                    void* r15_3 = &_String_33[r10_1]
                    
                    if (r15_3 != 0 && *r15_3 != 0 && rbx_17 s> 0)
                        if (rbx_17 + 1 s> 0)
                            sub_1405947f0(&_String_2, rbx_17 + 1)
                            r14_9 = var_10c
                            rdi_8 = var_110
                            _String_10 = _String_2
                        
                        rdi_8 = rdi_8 + 1 + rbx_17
                        
                        if (rdi_8 s> r14_9)
                            sub_140594770(&_String_2)
                            r14_9 = var_10c
                            _String_10 = _String_2
                        
                        UnDecorator::getReferenceType(_String_10, r15_3, rbx_17 * 2)
                        _String_10[sx.q(rdi_8) - 1] = 0
                        _String_27 = _String_32
                    
                    if (_String_27 != 0)
                        sub_140a74f90(_String_27)
                    
                    _String_27 = _String_10
                    var_100.d = rdi_8
                    _String_32 = _String_27
                    var_100:4.d = r14_9
            else if (rax_33.b != 0 && _String_27[sx.q(rsi_11) + 1] == 0x2f)
                goto label_1423fc546
        
        int32_t rbx_18 = var_100.d
        
        if (rbx_18 != 0 && rbx_18 - 1 s> 1 && *_String_27 == 0x2f && _String_27[1] == 0x2f)
            int32_t rcx_73 = rbx_18 - 1
            
            if (rbx_18 - 1 s> 2)
                rcx_73 = 2
            
            int32_t rbx_20 = rbx_18 - 1 - rcx_73
            void* r15_4 = &_String_27[sx.q(rcx_73)]
            _String_2 = nullptr
            int16_t* _String_11 = nullptr
            var_110.q = 0
            int32_t rdi_10 = 0
            int32_t r14_10 = 0
            
            if (r15_4 != 0 && *r15_4 != 0 && rbx_20 s> 0)
                if (rbx_20 + 1 s> 0)
                    sub_1405947f0(&_String_2, rbx_20 + 1)
                    r14_10 = var_10c
                    rdi_10 = var_110
                    _String_11 = _String_2
                
                rdi_10 += rbx_20 + 1
                
                if (rdi_10 s> r14_10)
                    sub_140594770(&_String_2)
                    r14_10 = var_10c
                    _String_11 = _String_2
                
                UnDecorator::getReferenceType(_String_11, r15_4, rbx_20 * 2)
                _String_11[sx.q(rdi_10) - 1] = 0
                _String_27 = _String_32
            
            if (_String_27 != 0)
                sub_140a74f90(_String_27)
            
            _String_27 = _String_11
            _String_32 = _String_27
            var_100.d = rdi_10
            var_100:4.d = r14_10
            
            if (*r14 != &data_142d40450)
                bool cond:7_1 = *(r14 + 0xc) == 0
                int32_t rax_40 = 0
                *(r14 + 8) = 0
                
                if (not(cond:7_1))
                    sub_1405947f0(r14, 0)
                    rax_40 = *(r14 + 8)
                    _String_27 = _String_32
                
                *(r14 + 8) = rax_40
                
                if (rax_40 s> *(r14 + 0xc))
                    sub_140594770(r14)
                    _String_27 = _String_32
        
        int16_t* _String_37 = _String_27
        void* rcx_80 = &_String_27[sx.q(var_100.d)]
        int32_t rbx_22
        
        if (_String_27 == rcx_80)
        label_1423fc8bd:
            rbx_22 = -1
        else
            while (*_String_37 != 0x2e)
                _String_37 = &_String_37[1]
                
                if (_String_37 == rcx_80)
                    goto label_1423fc8bd
            
            rbx_22 = ((_String_37 - _String_27) s>> 1).d
        
        int16_t* _String_38 = _String_27
        int32_t rsi_13
        
        if (_String_27 == rcx_80)
        label_1423fc8d6:
            rsi_13 = -1
        else
            while (*_String_38 != 0x3a)
                _String_38 = &_String_38[1]
                
                if (_String_38 == rcx_80)
                    goto label_1423fc8d6
            
            rsi_13 = ((_String_38 - _String_27) s>> 1).d
        
        int16_t* rdx_53 = &data_142d40450
        
        if (data_143e1a428 != 0)
            rdx_53 = data_143e1a420
        
        int32_t rax_42 = sub_140a23cf0(&_String_32, rdx_53, 1, 0, 0xffffffff)
        int32_t rcx_82 = (data_143e1a428.q).d
        string_4.d = rax_42
        int32_t r15_5
        
        if (rcx_82 == 0)
            r15_5 = 0
        else
            r15_5 = rcx_82 - 1
        
        int16_t* rdx_54 = &data_142d40450
        
        if (data_143f5bca8 != 0)
            rdx_54 = data_143f5bca0
        
        int32_t rax_43 = sub_140a23cf0(&_String_32, rdx_54, 1, 0, 0xffffffff)
        int32_t rcx_84 = data_143f5bca8
        int32_t r13_2
        
        if (rcx_84 == 0)
            r13_2 = 0
        else
            r13_2 = rcx_84 - 1
        
        var_128 = 0xffffffff
        int32_t rax_44 = sub_140a23cf0(&_String_32, u"demo", 1, 0, 0xffffffff)
        _String_47 = _String_32
        void* r14_11 = &_String_47[sx.q(var_100.d)]
        int32_t r14_12
        
        if (r14_11 == _String_47)
        label_1423fc9c4:
            r14_12 = -1
        else
            while (true)
                r14_11 -= 2
                
                if (*r14_11 == 0x3a)
                    r14_12 = ((r14_11 - _String_47) s>> 1).d
                    break
                
                if (r14_11 == _String_47)
                    goto label_1423fc9c4
        
        if (rbx_22 s<= 0)
            goto label_1423fca31
        
        if (rbx_22 != string_4.d)
            goto label_1423fc9f6
        
        if (iswalnum(_String_47[sx.q(rbx_22 + r15_5)]) == 0)
        label_1423fca2c:
            _String_47 = _String_32
        label_1423fca31:
            
            if (r12_1 != 0xffffffff || (rsi_13 != r12_1 && rsi_13 == r14_12) || arg_20.b != 0)
                goto label_1423fca50
            
            result = i_5
            string_2 = &data_142d40450
            _String_39 = _String_18
            _String_31 = _String_3
        else
            _String_47 = _String_32
        label_1423fc9f6:
            
            if (rbx_22 + 1 == rax_43)
                if (iswalnum(_String_47[sx.q(rbx_22 + r13_2) + 1]) == 0)
                    goto label_1423fca2c
                
                _String_47 = _String_32
            
            if (rbx_22 + 1 != rax_44)
                goto label_1423fca50
            
            if (iswalnum(_String_47[sx.q(rbx_22) + 5]) == 0)
                goto label_1423fca2c
            
            _String_47 = _String_32
        label_1423fca50:
            int16_t* _String_49 = _String_47
            void* rcx_92 = &_String_47[sx.q(var_100.d)]
            int32_t rbx_24
            
            if (_String_47 == rcx_92)
            label_1423fca6f:
                rbx_24 = -1
            else
                while (*_String_49 != 0x2f)
                    _String_49 = &_String_49[1]
                    
                    if (_String_49 == rcx_92)
                        goto label_1423fca6f
                
                rbx_24 = ((_String_49 - _String_47) s>> 1).d
            
            int64_t var_e0
            int16_t** rcx_97
            int32_t r14_14
            int16_t* _String_17
            
            if (rbx_24 == 0xffffffff)
                int32_t rsi_17 = var_100.d
                _String_17 = nullptr
                _String_18 = nullptr
                var_e0.d = rsi_17
                
                if (rsi_17 != 0)
                    sub_1405a4c70(&_String_18, var_100.d, 0)
                    memcpy(_String_18, _String_47, rsi_17 * 2)
                    _String_47 = _String_32
                else
                    var_e0:4.d = 0
                
                rcx_97 = &_String_18
                r14_14 = 2
            else
                int32_t rsi_15 = var_100.d
                int32_t rax_52
                int32_t rsi_16
                int16_t* _String_53
                
                if (rsi_15 == 0)
                    rax_52 = 0
                    _String_53 = &data_142d40450
                    rsi_16 = 0
                else
                    rsi_16 = rsi_15 - 1
                    _String_53 = _String_47
                    rax_52 = 0
                
                if (rbx_24 s< 0)
                    rsi_16 = 0
                else if (rbx_24 s< rsi_16)
                    rsi_16 = rbx_24
                
                _String_2 = nullptr
                int16_t* _String_15 = nullptr
                var_110.q = 0
                int32_t rdx_55 = 0
                
                if (_String_53 == 0 || *_String_53 == 0 || rsi_16 s<= 0)
                    _String_17 = nullptr
                    rcx_97 = &_String_2
                    r14_14 = 1
                else
                    if (rsi_16 + 1 s> 0)
                        sub_1405947f0(&_String_2, rsi_16 + 1)
                        rax_52 = var_10c
                        rdx_55 = var_110
                        _String_15 = _String_2
                    
                    int32_t rdi_13 = rsi_16 + 1 + rdx_55
                    
                    if (rdi_13 s> rax_52)
                        sub_140594770(&_String_2)
                        _String_15 = _String_2
                    
                    UnDecorator::getReferenceType(_String_15, _String_53, rsi_16 * 2)
                    rcx_97 = &_String_2
                    _String_17 = nullptr
                    _String_15[sx.q(rdi_13) - 1] = 0
                    _String_47 = _String_32
                    r14_14 = 1
            
            int16_t* _String_19 = *rcx_97
            *rcx_97 = nullptr
            _String_3 = _String_19
            var_f0 = rcx_97[1].d
            var_ec = *(rcx_97 + 0xc)
            rcx_97[1] = 0
            
            if ((r14_14.b & 2) != 0)
                void* _String_34 = _String_18
                r14_14 &= 0xfffffffd
                
                if (_String_34 != 0)
                    sub_140a74f90(_String_34)
                    _String_47 = _String_32
            
            if ((r14_14.b & 1) != 0)
                int16_t* _String_4 = _String_2
                r14_14 &= 0xfffffffe
                
                if (_String_4 != 0)
                    sub_140a74f90(_String_4)
                    _String_47 = _String_32
            
            int32_t rax_58
            void** rbx_28
            
            if (rbx_24 == 0xffffffff)
                _String_2 = nullptr
                rbx_28 = &_String_2
                var_110.q = 0
                rax_58 = 8
            else
                int32_t rsi_18 = var_100.d
                int32_t rsi_19
                
                if (rsi_18 == 0)
                    rsi_19 = 0
                else
                    rsi_19 = rsi_18 - 1
                
                int32_t rcx_100
                
                if (rbx_24 s>= 0)
                    rcx_100 = rsi_19
                    
                    if (rbx_24 s< rsi_19)
                        rcx_100 = rbx_24
                else
                    rcx_100 = 0
                
                int64_t r8_45 = sx.q(rcx_100)
                
                if (sx.q(rbx_24) + 0x7fffffff s< r8_45)
                    rsi_19 = rcx_100
                else if (sx.q(rbx_24) + 0x7fffffff s< sx.q(rsi_19))
                    rsi_19 = rbx_24 + 0x7fffffff
                
                int16_t* _String_48 = &data_142d40450
                _String_2 = nullptr
                
                if (var_100.d != 0)
                    _String_48 = _String_47
                
                int32_t rsi_20 = rsi_19 - rcx_100
                void* r13_3 = &_String_48[r8_45]
                var_110.q = 0
                int32_t rbx_26 = 0
                int32_t r12_3 = 0
                
                if (r13_3 != 0 && *r13_3 != 0 && rsi_20 s> 0)
                    if (rsi_20 + 1 s> 0)
                        sub_1405947f0(&_String_2, rsi_20 + 1)
                        r12_3 = var_10c
                        rbx_26 = var_110
                        _String_17 = _String_2
                    
                    rbx_26 += rsi_20 + 1
                    
                    if (rbx_26 s> r12_3)
                        sub_140594770(&_String_2)
                        r12_3 = var_10c
                        _String_17 = _String_2
                    
                    UnDecorator::getReferenceType(_String_17, r13_3, rsi_20 * 2)
                    _String_17[sx.q(rbx_26) - 1] = 0
                    _String_47 = _String_32
                
                _String_18 = _String_17
                rax_58 = 4
                var_e0.d = rbx_26
                _String_17 = nullptr
                rbx_28 = &_String_18
                var_e0:4.d = r12_3
            
            char r14_15 = r14_14.b | rax_58.b
            
            if (_String_47 != 0)
                sub_140a74f90(_String_47)
            
            int16_t* _String_42 = *rbx_28
            *rbx_28 = nullptr
            _String_32 = _String_42
            var_100.d = rbx_28[1].d
            var_100:4.d = *(rbx_28 + 0xc)
            rbx_28[1] = 0
            
            if ((r14_15 & 8) != 0)
                int16_t* _String_5 = _String_2
                r14_15 = (r14_14.b | rax_58.b) & 0xf7
                
                if (_String_5 != 0)
                    sub_140a74f90(_String_5)
            
            if ((r14_15 & 4) != 0)
                void* _String_35 = _String_18
                
                if (_String_35 != 0)
                    sub_140a74f90(_String_35)
            
            void* _String_30 = _String_3
            void* rcx_106 = _String_30 + (sx.q(var_f0) << 1)
            int32_t rbx_29
            
            if (_String_30 == rcx_106)
            label_1423fcdb5:
                rbx_29 = -1
            else
                while (*_String_30 != 0x5d)
                    _String_30 += 2
                    
                    if (_String_30 == rcx_106)
                        goto label_1423fcdb5
                
                rbx_29 = ((_String_30 - _String_3) s>> 1).d
            
            _String_2 = nullptr
            var_110.q = 0
            sub_1405947f0(&_String_2, 2)
            int32_t rdi_14 = var_110 + 2
            
            if (rdi_14 s> var_10c)
                sub_140594770(&_String_2)
            
            int16_t* _String_12 = _String_2
            sub_1405a7220(_String_12, 2, &data_142d6bc34, 2, 0x3f)
            int32_t rax_62 = 0
            int16_t* _String_28 = &data_142d40450
            
            if (rdi_14 != 0)
                _String_28 = _String_12
            
            if (rbx_29 s>= 0)
                rax_62 = rbx_29
            
            int32_t rax_63 = sub_140a23cf0(&_String_3, _String_28, 0, 0, rax_62)
            
            if (_String_12 != 0)
                sub_140a74f90(_String_12)
            
            _String_2 = nullptr
            int32_t var_110_1
            var_110_1.q = 0
            sub_1405947f0(&_String_2, 2)
            int32_t rdi_15 = var_110_1 + 2
            
            if (rdi_15 s> var_10c)
                sub_140594770(&_String_2)
            
            int16_t* _String_16 = _String_2
            sub_1405a7220(_String_16, 2, &data_142d6bc34, 2, 0x3f)
            int16_t* _String_29 = &data_142d40450
            var_128 = rax_63 + 1
            
            if (rdi_15 != 0)
                _String_29 = _String_16
            
            int32_t rax_64 = sub_140a23cf0(&_String_3, _String_29, 0, 0, var_128)
            
            if (_String_16 != 0)
                sub_140a74f90(_String_16)
            
            int32_t var_110_2
            int32_t rsi_26
            int16_t* _String_14
            
            if (rax_63 == 0xffffffff || (rbx_29 == 0xffffffff && rax_64 != rbx_29))
                rsi_26 = var_f0
                _String_14 = _String_3
            else
                int32_t rdi_17 = var_f0 - 1
                
                if (var_f0 == 0)
                    rdi_17 = 0
                
                int32_t rcx_117
                
                if (rax_63 + 1 s>= 0)
                    rcx_117 = rdi_17
                    
                    if (rax_63 + 1 s< rdi_17)
                        rcx_117 = rax_63 + 1
                else
                    rcx_117 = 0
                
                int64_t r9_1 = sx.q(rcx_117)
                
                if (sx.q(rax_63 + 1) + 0x7fffffff s< r9_1)
                    rdi_17 = rcx_117
                else if (sx.q(rax_63 + 1) + 0x7fffffff s< sx.q(rdi_17))
                    rdi_17 = rax_63 - -0x80000000
                
                void* _String_20 = &data_142d40450
                
                if (var_f0 != 0)
                    _String_20 = _String_3
                
                int32_t rdi_18 = rdi_17 - rcx_117
                void* r15_7 = _String_20 + (r9_1 << 1)
                int32_t rax_66 = 0
                _String_2 = nullptr
                int16_t* _String_1 = nullptr
                var_110_2.q = 0
                int32_t rsi_24 = 0
                
                if (r15_7 != 0 && *r15_7 != 0 && rdi_18 s> 0)
                    if (rdi_18 + 1 s> 0)
                        sub_1405947f0(&_String_2, rdi_18 + 1)
                        rax_66 = var_10c
                        rsi_24 = var_110_2
                        _String_1 = _String_2
                    
                    rsi_24 = rsi_24 + 1 + rdi_18
                    
                    if (rsi_24 s> rax_66)
                        sub_140594770(&_String_2)
                        _String_1 = _String_2
                    
                    UnDecorator::getReferenceType(_String_1, r15_7, rdi_18 * 2)
                    _String_1[sx.q(rsi_24) - 1] = 0
                
                int16_t* _String = &data_142d40450
                
                if (rsi_24 != 0)
                    _String = _String_1
                
                i_5[4].d = _wtoi(_String)
                
                if (_String_1 != 0)
                    sub_140a74f90(_String_1)
                
                void* _String_22 = _String_3
                int32_t rdi_20
                void* _String_41
                
                if (var_f0 == 0)
                    _String_41 = &data_142d40450
                    rdi_20 = 0
                else
                    rdi_20 = var_f0 - 1
                    _String_41 = _String_22
                
                if (rax_63 s< 0)
                    rdi_20 = 0
                else if (rax_63 s< rdi_20)
                    rdi_20 = rax_63
                
                _String_2 = nullptr
                _String_14 = nullptr
                var_110_2.q = 0
                rsi_26 = 0
                int32_t r14_17 = 0
                
                if (_String_41 == 0 || *_String_41 == 0 || rdi_20 s<= 0)
                    _String_17 = nullptr
                else
                    if (rdi_20 + 1 s> 0)
                        sub_1405947f0(&_String_2, rdi_20 + 1)
                        r14_17 = var_10c
                        rsi_26 = var_110_2
                        _String_14 = _String_2
                    
                    rsi_26 += rdi_20 + 1
                    
                    if (rsi_26 s> r14_17)
                        sub_140594770(&_String_2)
                        r14_17 = var_10c
                        _String_14 = _String_2
                    
                    UnDecorator::getReferenceType(_String_14, _String_41, rdi_20 * 2)
                    _String_17 = nullptr
                    _String_14[sx.q(rsi_26) - 1] = 0
                    _String_22 = _String_3
                
                if (_String_22 != 0)
                    sub_140a74f90(_String_22)
                
                _String_3 = _String_14
                var_f0 = rsi_26
                var_ec = r14_17
            
            int16_t* _String_23 = _String_14
            void* rdx_75 = &_String_14[sx.q(rsi_26)]
            int32_t rcx_129
            
            if (_String_14 != rdx_75)
                while (*_String_23 != 0x5b)
                    _String_23 = &_String_23[1]
                    
                    if (_String_23 == rdx_75)
                        goto label_1423fd10c
                
                rcx_129 = ((_String_23 - _String_14) s>> 1).d
            
            if (_String_14 == rdx_75 || rcx_129 == 0xffffffff || rbx_29 == 0xffffffff)
            label_1423fd10c:
                sub_140597df0(r14, &_String_3)
            else
                int32_t rbx_31 = rbx_29 - rcx_129
                int32_t r14_18 = 0
                int32_t r13_5 = 0
                
                if (rbx_31 - 1 s>= 0)
                    int32_t rdi_21 = rsi_26 - 1
                    
                    if (rsi_26 == 0)
                        rdi_21 = 0
                    
                    int32_t rcx_130
                    
                    if (rcx_129 + 1 s>= 0)
                        rcx_130 = rdi_21
                        
                        if (rcx_129 + 1 s< rdi_21)
                            rcx_130 = rcx_129 + 1
                    else
                        rcx_130 = 0
                    
                    int64_t rdx_79 = sx.q(rcx_129 + 1) + sx.q(rbx_31 - 1)
                    int64_t r8_53 = sx.q(rcx_130)
                    
                    if (rdx_79 s< r8_53)
                        rdi_21 = rcx_130
                    else if (rdx_79 s< sx.q(rdi_21))
                        rdi_21 = rdx_79.d
                    
                    _String_2 = nullptr
                    int16_t* _String_21 = &data_142d40450
                    var_110_2.q = 0
                    
                    if (rsi_26 != 0)
                        _String_21 = _String_14
                    
                    _String_17 = nullptr
                    int32_t rdi_22 = rdi_21 - rcx_130
                    void* rbx_33 = &_String_21[r8_53]
                    
                    if (rbx_33 != 0 && *rbx_33 != 0 && rdi_22 s> 0)
                        if (rdi_22 + 1 s> 0)
                            sub_1405947f0(&_String_2, rdi_22 + 1)
                            r13_5 = var_10c
                            r14_18 = var_110_2
                            _String_17 = _String_2
                        
                        r14_18 += rdi_22 + 1
                        
                        if (r14_18 s> r13_5)
                            sub_140594770(&_String_2)
                            r13_5 = var_10c
                            _String_17 = _String_2
                        
                        UnDecorator::getReferenceType(_String_17, rbx_33, rdi_22 * 2)
                        _String_17[sx.q(r14_18) - 1] = 0
                
                if (r14 != &_String_2)
                    int64_t rcx_134 = *r14
                    
                    if (rcx_134 != 0)
                        sub_140a74f90(rcx_134)
                    
                    *r14 = _String_17
                    *(r14 + 8) = r14_18
                    *(r14 + 0xc) = r13_5
                else if (_String_17 != 0)
                    sub_140a74f90(_String_17)
            
            string_2 = &data_142d40450
            result = i_5
            int16_t* const rdx_77 = &data_142d40450
            
            if (data_143f5bc68 != 0)
                rdx_77 = data_143f5bc60
            
            int16_t* const rcx_127
            
            if (result[1].d == 0)
                rcx_127 = &data_142d40450
            else
                rcx_127 = *result
            
            if (sub_140a54510(rcx_127, rdx_77) != 0)
                _String_31 = &result[5]
                
                if (result[5] != &data_142d40450)
                    int32_t rdx_84 = 0
                    *(_String_31 + 8) = 0
                    
                    if (*(_String_31 + 0xc) != 0)
                        sub_1405947f0(_String_31, 0)
                        rdx_84 = *(_String_31 + 8)
                    
                    *(_String_31 + 8) = rdx_84
                    
                    if (rdx_84 s> *(_String_31 + 0xc))
                        sub_140594770(_String_31)
            else
                _String_31 = &result[5]
                sub_140597da0(_String_31, sub_14151ffb0(&_String_2))
                int16_t* _String_6 = _String_2
                
                if (_String_6 != 0)
                    sub_140a74f90(_String_6)
            
            void* _String_24 = _String_3
            
            if (_String_24 != 0)
                sub_140a74f90(_String_24)
            
            _String_47 = _String_32
            _String_39 = &result[0xb]
    else
        int16_t rax_30 = *_String_47
        
        if (rax_30 == 0x5b || rax_30 == 0x3a || _String_47[1] != 0x3a)
            if (rax_30 != 0x2f)
                goto label_1423fc422
            
            rdx_31.b = 1
            char rax_31 = sub_140bacf70(&_String_32, rdx_31.b, nullptr)
            _String_47 = _String_32
            
            if (rax_31 != 0)
                goto label_1423fc422
        
        if (r15_2 == 0 && result != &data_143f5bc60)
            int32_t rbx_10 = (data_143f5bc68.q).d
            int64_t rsi_7 = data_143f5bc60
            int32_t r8_24 = *(result + 0xc)
            result[1].d = rbx_10
            
            if (rbx_10 != 0 || r8_24 != 0)
                sub_1405a4c70(result, rbx_10, r8_24)
                memcpy(*result, rsi_7, rbx_10 * 2)
                _String_47 = _String_32
            else
                *(result + 0xc) = 0
        
        _String_31 = &result[5]
        
        if (_String_31 != &_String_32)
            int32_t rsi_8 = var_100.d
            int32_t r8_27 = *(_String_31 + 0xc)
            *(_String_31 + 8) = rsi_8
            
            if (rsi_8 != 0 || r8_27 != 0)
                sub_1405a4c70(_String_31, var_100.d, r8_27)
                memcpy(*_String_31, _String_47, rsi_8 * 2)
                _String_47 = _String_32
            else
                *(_String_31 + 0xc) = 0
        
        _String_39 = &result[0xb]
        
        if (_String_39 != &data_143f5bc90)
            int32_t rbx_11 = (data_143f5bc98).d
            int64_t rsi_9 = data_143f5bc90
            int32_t r8_30 = *(_String_39 + 0xc)
            _String_39[1].d = rbx_11
            
            if (rbx_11 != 0 || r8_30 != 0)
                sub_1405a4c70(_String_39, rbx_11, r8_30)
                memcpy(*_String_39, rsi_9, rbx_11 * 2)
                _String_47 = _String_32
            else
                *(_String_39 + 0xc) = 0
        
        if (_String_47 != &data_142d40450)
            var_100.d = 0
            
            if (var_100:4.d != 0)
                sub_1405947f0(&_String_32, 0)
                _String_47 = _String_32
            
            if (var_100.d s> var_100:4.d)
                sub_140594770(&_String_32)
                _String_47 = _String_32
        
        if (result[2] != &data_142d40450)
            int32_t rdx_42 = 0
            result[3].d = 0
            
            if (*(result + 0x1c) != 0)
                sub_1405947f0(&result[2], 0)
                rdx_42 = result[3].d
                _String_47 = _String_32
            
            result[3].d = rdx_42
            
            if (rdx_42 s> *(result + 0x1c))
                sub_140594770(&result[2])
                _String_47 = _String_32

if (*(result + 0x24) == 1)
    int32_t rsi_28 = var_100.d
    
    if (rsi_28 != 0 && rsi_28 - 1 s> 0)
        if (*_String_47 == 0x2f)
            sub_140597df0(_String_31, &_String_32)
        else
            _String_18 = nullptr
            int64_t var_e0_1 = 0
            void var_c0
            sub_140a96170(&var_c0)
            _String_31.b = 0
            _String_2 = nullptr
            int16_t* const _String_46 = &data_142d40450
            int32_t i_13 = 0
            int32_t rcx_141 = 0
            
            if (var_100.d != 0)
                _String_46 = _String_32
            
            int32_t i_11 = 0
            int32_t var_10c_1 = 0
            
            if (_String_46 != 0 && *_String_46 != 0)
                int64_t rdi_23 = -1
                
                do
                    rdi_23 += 1
                while (_String_46[rdi_23] != 0)
                
                if (rdi_23.d + 1 s> 0)
                    sub_1405947f0(&_String_2, rdi_23.d + 1)
                    rcx_141 = var_10c_1
                    i_13 = i_11
                
                int32_t i_12 = rdi_23.d + 1 + i_13
                i_11 = i_12
                
                if (i_12 s> rcx_141)
                    sub_140594770(&_String_2)
                
                UnDecorator::getReferenceType(_String_2, _String_46, (rdi_23.d + 1) * 2)
            
            char rax_78 = sub_140b16090(&_String_2)
            char rax_79
            
            if (rax_78 != 0)
                rax_79 = sub_140bbcf00(&_String_32, &_String_18, nullptr)
            
            if (rax_78 == 0 || rax_79 == 0)
                _String_46.b = 0
            else
                _String_46.b = 1
            
            int16_t* _String_7 = _String_2
            
            if (_String_7 != 0)
                sub_140a74f90(_String_7)
            
            if (_String_46.b == 0)
                if (sub_140ba1610(&_String_32, &var_c0) != 0)
                label_1423fd6f4:
                    sub_14215dc20(result, sub_1423fd810(&var_a8, nullptr))
                    sub_14094c030(&var_a8)
                    *(result + 0x24) = 0
                else
                    int32_t rdi_25 = 1
                    int64_t* rax_81
                    int512_t zmm1_1
                    rax_81, zmm1_1 = sub_140b58170(&i_5, "AssetRegistry", 1)
                    j_sub_140b3db50()
                    
                    if (sub_140b404d0(&data_143de7d78, *rax_81, zmm1_1) == 0)
                    label_1423fd5e3:
                        int32_t r8_59 = var_100.d
                        
                        if (r8_59 s> 1)
                            int32_t rax_94 = (data_143e1a428.q).d
                            int32_t rbx_40 = rax_94 - 1
                            
                            if (rax_94 == 0)
                                rbx_40 = 0
                            
                            if (r8_59 != 0 || rbx_40 == 0)
                                rdi_25 = 0
                            
                            int16_t* _String_45 = _String_32
                            _String_3 = nullptr
                            sub_140596860(&_String_3, _String_45, r8_59, 0, rdi_25 + rbx_40)
                            sub_140a20ba0(&_String_3, data_143e1a420, rbx_40)
                            _String_2 = _String_3
                            int32_t var_110_5 = var_f0
                            int32_t var_10c_3 = var_ec
                            var_f0.q = 0
                            _String_3 = nullptr
                        else
                            int32_t rbx_39 = (data_143e1a428.q).d
                            int64_t rdi_27 = data_143e1a420
                            _String_2 = nullptr
                            int32_t var_110_4 = rbx_39
                            
                            if (rbx_39 != 0)
                                sub_1405a4c70(&_String_2, rbx_39, 0)
                                memcpy(_String_2, rdi_27, rbx_39 * 2)
                            else
                                int32_t var_10c_2 = 0
                        
                        char rax_99 = sub_140bb93b0(&_String_2, &_String_18, nullptr)
                        int16_t* _String_8 = _String_2
                        
                        if (_String_8 != 0)
                            sub_140a74f90(_String_8)
                        
                        if (rax_99 == 0)
                            goto label_1423fd6f4
                        
                        sub_140597df0(&result[5], &_String_18)
                    else
                        j_sub_140b3db50()
                        int64_t rbx_36 = *sub_140b58170(&i_5, "AssetRegistry", 1)
                        j_sub_140b3db50()
                        int64_t* rax_84 = j_sub_140b407e0(&data_143de7d78, rbx_36)
                        int64_t rdx_92 = *rax_84
                        int64_t* rax_85 = (*(rdx_92 + 0x48))(rax_84, rdx_92)
                        int64_t rdx_93 = *rax_85
                        
                        if ((*(rdx_93 + 0x1e0))(rax_85, rdx_93) != 0)
                            goto label_1423fd5e3
                        
                        _String_2 = nullptr
                        i_11.q = 0
                        int16_t* _String_13
                        
                        if ((*(*rax_85 + 0x28))(rax_85, *(sub_1425be5e0() + 0x18), &_String_2, 0, 
                                var_128) == 0)
                            _String_13 = _String_2
                        else
                            int16_t* _String_44 = &data_142d40450
                            
                            if (var_100.d != 0)
                                _String_44 = _String_32
                            
                            sub_140b58260(&i_5, _String_44, 1)
                            _String_13 = _String_2
                            int16_t* _String_25 = _String_13
                            void* rdx_97 = &_String_13[sx.q(i_11) * 0x28]
                            
                            if (_String_13 != rdx_97)
                                while (*(_String_25 + 0x18) != i_5)
                                    _String_25 = &_String_25[0x28]
                                    
                                    if (_String_25 == rdx_97)
                                        goto label_1423fd56b
                                
                                sub_140597da0(&result[5], sub_140b63b70(&_String_25[4], &_String_3))
                                void* _String_26 = _String_3
                                
                                if (_String_26 != 0)
                                    sub_140a74f90(_String_26)
                                
                                _String_31 = 1
                                _String_13 = _String_2
                        
                    label_1423fd56b:
                        int32_t i_9 = i_11
                        
                        if (i_9 != 0)
                            void* rdi_26 = &_String_13[0x18]
                            int32_t i_6
                            
                            do
                                int64_t rcx_157 = *(rdi_26 + 8)
                                
                                if (rcx_157 != 0)
                                    sub_140a74f90(rcx_157)
                                
                                int64_t* rbx_38 = *rdi_26
                                
                                if (rbx_38 != 0)
                                    rbx_38[1].d -= 1
                                    
                                    if (rbx_38[1].d == 1)
                                        (**rbx_38)(rbx_38)
                                        int32_t temp6_1 = *(rbx_38 + 0xc)
                                        *(rbx_38 + 0xc) -= 1
                                        
                                        if (temp6_1 == 1)
                                            (*(*rbx_38 + 8))(rbx_38, 1)
                                
                                rdi_26 += 0x50
                                i_6 = i_9
                                i_9 -= 1
                            while (i_6 != 1)
                            _String_13 = _String_2
                            _String_39 = &result[0xb]
                            rdi_25 = i_9 + 1
                        
                        if (_String_13 != 0)
                            sub_140a74f90(_String_13)
                        
                        if (_String_31.b == 0)
                            goto label_1423fd5e3
            else
                sub_140597df0(&result[5], &_String_18)
            
            sub_1405970a0(&var_c0)
            void* _String_36 = _String_18
            
            if (_String_36 != 0)
                sub_140a74f90(_String_36)
    
    if (*(result + 0x24) == 1)
        int16_t* rdx_107
        
        if (result[1].d == 0)
            rdx_107 = &data_142d40450
        else
            rdx_107 = *result
        
        if (sub_1423ffe00(&arg_20, rdx_107) == 0)
        label_1423fd7c2:
            sub_14215dc20(result, sub_1423fd810(&var_a8, nullptr))
            sub_14094c030(&var_a8)
            *(result + 0x24) = 0
        else
            wchar16* string
            
            if (result[3].d == 0)
                string = &data_142d40450
            else
                string = result[2]
            
            if (wcschr(string, 0x3f) != 0)
                goto label_1423fd7c2
            
            wchar16* rax_103 = wcschr(string, 0x23)
            
            if (rax_103 != 0)
                goto label_1423fd7c2
            
            if (_String_39[1].d != rax_103.d)
                string_2 = *_String_39
            
            wchar16* rax_104 = wcschr(string_2, 0x3f)
            
            if (rax_104 != 0)
                goto label_1423fd7c2
            
            if (wcschr(string_2, (rax_104 + 0x23).w) != 0)
                goto label_1423fd7c2

j_sub_140a74f90(string_5)
int16_t* _String_43 = _String_32

if (_String_43 != 0)
    sub_140a74f90(_String_43)

return result
