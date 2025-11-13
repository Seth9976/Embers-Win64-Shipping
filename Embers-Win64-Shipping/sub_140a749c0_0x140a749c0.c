// 函数: sub_140a749c0
// 地址: 0x140a749c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0x12
double _Y = arg2.q
int64_t rdi = sx.q(arg4)

if (arg3 s<= 0x12)
    rsi = arg3

uint128_t zmm0

if (rsi != 0)
    zmm0 = arg2
    modf(zmm0.q, &_Y)
else
    zmm0 = zx.o(0)

int64_t var_38 = zmm0.q
int64_t r14 = sx.q(rsi)
int64_t* rbx = &_Y

if (rsi != 0)
    rbx = &var_38

int64_t rax = *((r14 << 3) + &data_142e624a0)
zmm0.q = float.d(rax)

if (rax s< 0)
    zmm0.q = zmm0.q f+ 1.8446744073709552e+19

zmm0.q = zmm0.q f* *rbx
double _Y_1[0x2]
uint64_t zmm6_1
_Y_1, zmm6_1 = sub_140ae3060(zmm0, 0x3e45798ee0000000)
*rbx = _Y_1.q
uint128_t _Y_2

if (rdi.d u<= 6)
    int64_t rcx_2
    int64_t rcx_3
    
    switch (rdi)
        case 0
            _Y_1, zmm6_1 = sub_140adf900(_Y_1)
        case 1
            _Y_1, zmm6_1 = sub_140adf880(_Y_1)
        case 2
            _Y_1, zmm6_1 = sub_140adfa80(_Y_1)
        case 3
            rcx_2 = int.q(_Y_1[0])
            
            if (_Y_1[0] f>= zmm6_1)
                goto label_140a74b15
            
            goto label_140a74aad
        case 4
            rcx_2 = int.q(_Y_1[0])
            
            if (_Y_1[0] f>= zmm6_1)
                goto label_140a74aad
            
            goto label_140a74b15
        case 5
            rcx_2 = int.q(_Y_1[0])
        label_140a74aad:
            
            if (rcx_2 != -0x8000000000000000)
                _Y_2.q = float.d(rcx_2)
                
                if (not(_Y_2.q f== _Y_1[0]))
                    rcx_3 = rcx_2 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(_Y_1, _Y_1[0]))) & 1)
                    _Y_1 = zx.o(0)
                    _Y_1[0] = float.d(rcx_3)
        case 6
            rcx_2 = int.q(_Y_1[0])
        label_140a74b15:
            
            if (rcx_2 != -0x8000000000000000)
                _Y_2.q = float.d(rcx_2)
                
                if (not(_Y_2.q f== _Y_1[0]))
                    rcx_3 =
                        rcx_2 + ((zx.q(_mm_movemask_pd(_mm_unpacklo_pd(_Y_1, _Y_1[0]))) & 1) ^ 1)
                    _Y_1 = zx.o(0)
                    _Y_1[0] = float.d(rcx_3)
    
    *rbx = _Y_1.q

_Y_2 = zx.o(*rbx)
uint64_t* result

if (rsi != 0)
    _Y_1 = _Y_2
    
    if (arg1 != 0)
        _Y_1 ^= data_142d8e3c0
    
    int64_t rax_7 = *((r14 << 3) + &data_142e624a0)
    uint128_t zmm2_1
    zmm2_1.q = float.d(rax_7)
    
    if (rax_7 s< 0)
        zmm2_1.q = zmm2_1.q f+ 1.8446744073709552e+19
    
    if (not(_Y_1[0] f< zmm2_1.q))
        _Y_1 = zx.o(_Y)
        
        if (arg1 == 0)
            _Y_1[0] = _Y_1[0] + 1.0
            _Y = _Y_1.q
            _Y_2.q = *rbx f- zmm2_1.q
        else
            _Y_1[0] = _Y_1[0] + -1.0
            _Y = _Y_1.q
            _Y_2.q = zmm2_1.q f+ *rbx
        
        *rbx = _Y_2.q
    
    *arg5 = _Y
    result = arg6
    *result = _Y_2.q
else
    *arg5 = _Y_2.q
    result = arg6
    *result = zmm6_1

return result
