// 函数: sub_142c56770
// 地址: 0x142c56770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
char* _String_1 = arg1
void* rax = arg4
void* r14 = arg2
char* _String_3 = arg1
int32_t i_12 = 0
int32_t i_4 = 0

if (*arg1 != 0)
    do
        char rax_1 = *_String_3
        _String_3 = &_String_3[1]
        _String_1 = _String_3
        
        if (rax_1 == 0x25)
            char rax_2 = *_String_3
            
            if (rax_2 != 0x25)
                int32_t rdi_1 = 0
                i_12 += 1
                int32_t i_13 = 0
                int32_t rax_3 = isdigit(zx.d(rax_2))
                
                if (rax_3 != 0)
                    int32_t i
                    
                    do
                        int32_t rax_4 = sx.d(*_String_3)
                        _String_3 = &_String_3[1]
                        i_13 = rax_4 + ((i_13 + ((i_13 - 6) << 2)) << 1)
                        i = isdigit(zx.d(*_String_3))
                    while (i != 0)
                
                void* _String_2
                
                if (rax_3 == 0 || i_13 == 0 || *_String_3 != 0x24)
                    _String_2 = _String_1
                    i_13 = 0
                else
                    _String_2 = &_String_3[1]
                    _String_1 = _String_2
                
                int32_t i_11 = i_12
                
                if (i_13 != 0)
                    i_11 = i_13
                
                int32_t i_6 = 0
                int32_t i_5 = i_11
                int32_t i_7 = 0
                
                if (i_11 s<= i_4)
                    i_5 = i_4
                
                i_4 = i_5
                
                if (sub_142c56690(_String_2) != 0)
                    char i_1
                    
                    do
                        char* _String
                        
                        if (strncmp(_String_1, "I32", 3) != 0)
                            int32_t rax_7 = strncmp(_String_1, "I64", 3)
                            char* _String_4 = _String_1
                            
                            if (rax_7 != 0)
                                _String = &_String_4[1]
                                int32_t rax_9 = sx.d(*_String_4) - 0x20
                                _String_1 = _String
                                
                                switch (rax_9)
                                    case 0
                                        rdi_1 |= 1
                                    case 3
                                        rdi_1 |= 8
                                    case 0xa
                                        rdi_1 |= 0x4000
                                        i_12 += 1
                                        i_6 = 0
                                        int32_t rax_13 = isdigit(zx.d(*_String))
                                        
                                        if (rax_13 != 0)
                                            int32_t j
                                            
                                            do
                                                int32_t rax_14 = sx.d(*_String)
                                                _String = &_String[1]
                                                i_6 = rax_14 + ((i_6 + ((i_6 - 6) << 2)) << 1)
                                                j = isdigit(zx.d(*_String))
                                            while (j != 0)
                                        
                                        if (rax_13 == 0 || i_6 == 0 || *_String != 0x24)
                                            _String = _String_1
                                            i_6 = i_12
                                        else
                                            _String = &_String[1]
                                            _String_1 = _String
                                        
                                        if (i_6 s> i_4)
                                            i_4 = i_6
                                    case 0xb
                                        rdi_1 |= 2
                                    case 0xd
                                        rdi_1 = (rdi_1 & 0xfffffeff) | 4
                                    case 0xe
                                        void** _EndPtr = &_String_1
                                        
                                        if (*_String != 0x2a)
                                            int32_t i_9 = strtol(_String, _EndPtr, 0xa)
                                            _String = _String_1
                                            i_7 = i_9
                                            rdi_1 |= 0x8000
                                        else
                                            i_12 += 1
                                            _String_1 = &_String[1]
                                            int32_t i_8 = sub_142c56610(&_String[1], _EndPtr)
                                            _String = _String_1
                                            i_7 = i_12
                                            
                                            if (i_8 != 0)
                                                i_7 = i_8
                                            
                                            if (i_7 s> i_4)
                                                i_4 = i_7
                                            
                                            rdi_1 |= 0x10000
                                    case 0x10
                                        if ((rdi_1.b & 4) == 0)
                                            rdi_1 |= 0x100
                                        
                                        goto label_142c569bc
                                    case 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19
                                    label_142c569bc:
                                        rdi_1 |= 0x2000
                                        int32_t i_10 = strtol(&_String[-1], &_String_1, 0xa)
                                        _String = _String_1
                                        i_6 = i_10
                                    case 0x29, 0x2f, 0x51, 0x5a
                                        rdi_1 |= 0x40
                                    case 0x2c
                                        rdi_1 |= 0x80
                                    case 0x48
                                        rdi_1 |= 0x10
                                    case 0x4c
                                        int32_t rax_12 = 0x20
                                        
                                        if ((rdi_1.b & 0x20) != 0)
                                            rax_12 = 0x40
                                        
                                        rdi_1 |= rax_12
                            else
                                rdi_1 |= 0x40
                                _String = &_String_4[3]
                                _String_1 = _String
                        else
                            rdi_1 |= 0x20
                            _String = &_String_1[3]
                            _String_1 = _String
                        
                        i_1 = sub_142c56690(_String)
                    while (i_1 != 0)
                    r14 = arg2
                
                if (i_11 - 1 u> 0x7f)
                    return 1
                
                _String_3 = _String_1
                void* rdx_2
                
                switch (sx.d(*_String_3) - 0x45)
                    case 0
                        rdi_1 |= 0x41000
                        rdx_2 = r14 + sx.q(i_11 - 1) * 0x18
                        *rdx_2 = 7
                    case 2
                        rdi_1 |= 0x81000
                        rdx_2 = r14 + sx.q(i_11 - 1) * 0x18
                        *rdx_2 = 7
                    case 0xe
                        rdi_1 |= 8
                    label_142c56a9f:
                        rdx_2 = r14 + sx.q(i_11 - 1) * 0x18
                        *rdx_2 = 1
                    case 0x13
                        rdi_1 |= 0x1a00
                        rdx_2 = r14 + sx.q(i_11 - 1) * 0x18
                        *rdx_2 = 3
                    case 0x1e
                        rdi_1 |= 0x20000
                        rdx_2 = r14 + sx.q(i_11 - 1) * 0x18
                        *rdx_2 = 3
                    case 0x1f, 0x24
                        rdx_2 = r14 + sx.q(i_11 - 1) * 0x18
                        *rdx_2 = 3
                    case 0x20
                        rdi_1 |= 0x40000
                        rdx_2 = r14 + sx.q(i_11 - 1) * 0x18
                        *rdx_2 = 7
                    case 0x21
                        rdx_2 = r14 + sx.q(i_11 - 1) * 0x18
                        *rdx_2 = 7
                    case 0x22
                        rdi_1 |= 0x80000
                        rdx_2 = r14 + sx.q(i_11 - 1) * 0x18
                        *rdx_2 = 7
                    case 0x29
                        rdx_2 = r14 + sx.q(i_11 - 1) * 0x18
                        *rdx_2 = 4
                    case 0x2a
                        rdi_1 |= 0x400
                        rdx_2 = r14 + sx.q(i_11 - 1) * 0x18
                        *rdx_2 = 3
                    case 0x2b
                        rdx_2 = r14 + sx.q(i_11 - 1) * 0x18
                        *rdx_2 = 2
                    case 0x2e
                        goto label_142c56a9f
                    case 0x30
                        rdi_1 |= 0x200
                        rdx_2 = r14 + sx.q(i_11 - 1) * 0x18
                        *rdx_2 = 3
                    case 0x33
                        rdi_1 |= 0xa00
                        rdx_2 = r14 + sx.q(i_11 - 1) * 0x18
                        *rdx_2 = 3
                    default
                        rdx_2 = r14 + sx.q(i_11 - 1) * 0x18
                        *rdx_2 = 0
                
                *(rdx_2 + 4) = rdi_1
                *(rdx_2 + 8) = i_6
                *(rdx_2 + 0xc) = i_7
                
                if (test_bit(rdi_1, 0xe))
                    *(rdx_2 + 8) = i_6 - 1
                    int64_t rcx_33 = sx.q(i_6 - 1) * 3
                    *(r14 + (rcx_33 << 3)) = 9
                    *(r14 + (rcx_33 << 3) + 8) = 0
                
                if (test_bit(rdi_1, 0x10))
                    *(rdx_2 + 0xc) = i_7 - 1
                    int64_t rcx_34 = sx.q(i_7 - 1) * 3
                    *(r14 + (rcx_34 << 3)) = 9
                    *(r14 + (rcx_34 << 3) + 8) = 0
                
                void** r8 = arg_18
                *r8 = &_String_3[1]
                arg_18 = &r8[1]
            else
                _String_3 = &_String_3[1]
                _String_1 = _String_3
    while (*_String_3 != 0)
    
    rax = arg4

int64_t i_3 = sx.q(i_4)

if (i_4 s> 0)
    int32_t* r8_2 = rax - 8
    int64_t* r9 = r14 + 0x10
    int64_t i_2
    
    do
        if ((*(r9 - 0xc) & 0x4000) != 0)
            r8_2 = &r8_2[2]
            *(r14 + sx.q(r9[-1].d) * 0x18 + 0x10) = sx.q(*r8_2)
        
        if ((*(r9 - 0xc) & 0x10000) != 0)
            r8_2 = &r8_2[2]
            *(r14 + sx.q(*(r9 - 4)) * 0x18 + 0x10) = sx.q(*r8_2)
        
        int64_t rax_41 = sx.q(r9[-2].d)
        
        if (rax_41.d u<= 9)
            switch (rax_41)
                case 0, 1, 2, 4, 7
                    int64_t rax_43 = *(r8_2 + 8)
                    r8_2 = &r8_2[2]
                    *r9 = rax_43
                case 3
                    int32_t rcx_39 = *(r9 - 0xc)
                    r8_2 = &r8_2[2]
                    
                    if ((rcx_39 & 0x240) == 0x240)
                        *r9 = *r8_2
                    else if ((rcx_39.b & 0x40) != 0)
                        *r9 = *r8_2
                    else if ((rcx_39 & 0x220) == 0x220)
                        *r9 = zx.q(*r8_2)
                    else if ((rcx_39.b & 0x20) == 0 && test_bit(rcx_39, 9))
                        *r9 = zx.q(*r8_2)
                    else
                        *r9 = sx.q(*r8_2)
                case 9
                    r9[-2].d = 3
        
        r9 = &r9[3]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

return 0
