// 函数: sub_142932500
// 地址: 0x142932500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rcx = 0
uint64_t rbp = 0

if (arg2 == 0)
    sub_1428a5670(0x25, 0x87, 0x43, "crypto\dso\dso_win32.c", 0x136)
    return 0

if (*arg2 != 0)
    rcx = arg2[1].d + 2
    
    if (arg2[4] != 0 || arg2[6] != 0 || arg2[8] != 0)
        rcx += 1
else if (arg2[2] != 0)
    rcx = arg2[3].d + 1

int32_t rcx_2 = rcx + arg2[5].d

if (arg2[4] != 0 && (arg2[6] != 0 || arg2[8] != 0))
    rcx_2 += 1

int32_t rcx_3 = rcx_2 + arg2[7].d

if (arg2[6] != 0 && arg2[8] != 0)
    rcx_3 += 1

int32_t rdx = arg2[9].d

if (rdx == neg.d(rcx_3))
    sub_1428a5670(0x25, 0x87, 0x71, "crypto\dso\dso_win32.c", 0x14b)
    return 0

int16_t* _Destination = sub_1428a6730(sx.q(rdx + rcx_3) + 1)

if (_Destination == 0)
    sub_1428a5670((_Destination + 0x25).d, 0x87, (_Destination + 0x41).d, "crypto\dso\dso_win32.c", 
        0x151)
    return 0

if (*arg2 == 0)
    char* _Source = arg2[2]
    
    if (_Source != 0)
        strncpy(_Destination, _Source, sx.q(arg2[3].d))
        rbp = sx.q(arg2[3].d)
        *(rbp + _Destination) = 0x3a
        rbp = zx.q(rbp.d + 1)
else
    *_Destination = 0x5c5c
    _Destination[1].b = 0
    strncpy(&_Destination[1], *arg2, sx.q(arg2[1].d))
    rbp = zx.q(arg2[1].d + 2)
    
    if (arg2[4] != 0 || arg2[6] != 0 || arg2[8] != 0)
        *(sx.q(rbp.d) + _Destination) = 0x5c
        rbp = zx.q(rbp.d + 1)

int64_t i = sx.q(arg2[5].d)
void* _Source_6 = arg2[4]
void* _Source_1 = _Source_6

if (i.d s> 0)
    void* _Source_7 = _Source_6
    int64_t i_2 = i
    
    do
        char* _Source_4 = _Source_1
        void* rcx_9 = sx.q(i.d) - _Source_1 + _Source_7
        
        if (rcx_9 == 0)
        label_1429326f2:
            _Source_4 = i_2 + _Source_6
        else
            while (true)
                char rax_6 = *_Source_4
                
                if (rax_6 == 0)
                    goto label_1429326f2
                
                if (rax_6 == 0x2f)
                    if (_Source_4 != 0)
                        break
                    
                    goto label_1429326f2
                
                _Source_4 = &_Source_4[1]
                
                if (_Source_4 - _Source_1 u>= rcx_9)
                    goto label_1429326f2
        
        strncpy(sx.q(rbp.d) + _Destination, _Source_1, _Source_4 - _Source_1)
        int32_t rax_10 = _Source_4.d - _Source_1.d
        _Source_1 = &_Source_4[1]
        int32_t rbp_2 = rbp.d + rax_10
        rbp = zx.q(rbp_2 + 1)
        *(sx.q(rbp_2) + _Destination) = 0x5c
        _Source_6 = arg2[4]
        i = sx.q(arg2[5].d)
        i_2 = i
        _Source_7 = _Source_6
    while (i s> _Source_1 - _Source_6)

int64_t i_1 = sx.q(arg2[7].d)
char* _Source_3 = arg2[6]
char* _Source_2 = _Source_3

if (i_1.d s> 0)
    char* _Source_8 = _Source_3
    int64_t i_3 = i_1
    
    do
        char* _Source_5 = _Source_2
        void* rcx_12 = sx.q(i_1.d) - _Source_2 + _Source_8
        
        if (rcx_12 == 0)
        label_142932792:
            _Source_5 = &_Source_3[i_3]
        else
            while (true)
                char rax_16 = *_Source_5
                
                if (rax_16 == 0)
                    goto label_142932792
                
                if (rax_16 == 0x2f)
                    if (_Source_5 != 0)
                        break
                    
                    goto label_142932792
                
                _Source_5 = &_Source_5[1]
                
                if (_Source_5 - _Source_2 u>= rcx_12)
                    goto label_142932792
        
        strncpy(sx.q(rbp.d) + _Destination, _Source_2, _Source_5 - _Source_2)
        int32_t rax_20 = _Source_5.d - _Source_2.d
        _Source_2 = &_Source_5[1]
        int32_t rbp_3 = rbp.d + rax_20
        rbp = zx.q(rbp_3 + 1)
        *(sx.q(rbp_3) + _Destination) = 0x5c
        _Source_3 = arg2[6]
        i_1 = sx.q(arg2[7].d)
        i_3 = i_1
        _Source_8 = _Source_3
    while (i_1 s> _Source_2 - _Source_3)

strncpy(sx.q(rbp.d) + _Destination, arg2[8], sx.q(arg2[9].d))
*(sx.q(arg2[9].d + rbp.d) + _Destination) = 0
return _Destination
