// 函数: sub_141fe5ce0
// 地址: 0x141fe5ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0 = *(arg1 + 0x44)
uint128_t zmm9 = zx.o(*(arg1 + 0x38))
char rax_2 = *(arg1 + 0x55)
uint128_t zmm6

if (rax_2 == 1)
    zmm6 = zmm0.d
else
    zmm6 = zmm9
    
    if (rax_2 == 2)
        zmm6 ^= 0x80000000

char rax_3 = *(arg1 + 0x56)
uint128_t zmm10 = zmm9.q:4.d
uint128_t zmm7

if (rax_3 == 1)
    zmm7 = zmm0:4.d
else
    zmm7 = zmm10
    
    if (rax_3 == 2)
        zmm7 ^= 0x80000000

char rax_4 = *(arg1 + 0x57)
uint128_t zmm11 = *(arg1 + 0x40)
uint128_t zmm8

if (rax_4 == 1)
    zmm8 = *(arg1 + 0x4c)
else
    zmm8 = zmm11
    
    if (rax_4 == 2)
        zmm8 ^= 0x80000000

int32_t rax_5 = *(arg1 + 0x58)
int64_t rdi
rdi.b = 1
int32_t rcx = rax_5

if ((1 & rax_5.b) != 0)
    if (arg3 == 0)
        if (arg4 != 0)
            int32_t rax_7 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
            *(arg4 + 4) = rax_7
            zmm0.d = (rax_7 u>> 9 | 0x3f800000).d f- 1f
        else
            zmm0, zmm6 = sub_140a50670()
        
        rcx = *(arg1 + 0x58)
        rdi = 1
        
        if (zmm0.d f> 0.5f)
            rdi = 0
    else if (arg3 s> 0)
        rdi.b = 0

uint32_t rdx_1 = zx.d(*(arg1 + 0x54))
int32_t rcx_1 = rcx & 1

if (rdx_1 == 1)
    if (rcx_1 == 0)
        if (arg4 != 0)
            int32_t rax_43 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
            *(arg4 + 4) = rax_43
            zmm0.d = (rax_43 u>> 9 | 0x3f800000).d f- 1f
        else
            zmm0, zmm6 = sub_140a50670()
        
        zmm6.d = zmm6.d f- zmm9.d
        zmm6.d = zmm6.d f* zmm0.d
        zmm6.d = zmm6.d f+ zmm9.d
        
        if (arg4 != 0)
            int32_t rax_47 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
            *(arg4 + 4) = rax_47
            zmm0.d = (rax_47 u>> 9 | 0x3f800000).d f- 1f
        else
            zmm0, zmm6 = sub_140a50670()
        
        zmm8.d = zmm8.d f- zmm11.d
        zmm8.d = zmm8.d f* zmm0.d
        zmm8.d = zmm8.d f+ zmm11.d
    else if (rdi.b == 0)
        zmm6 = zmm9
        zmm8 = zmm11
    
    zmm7 = zmm6
else if (rdx_1 == 2)
    if (rcx_1 == 0)
        if (arg4 != 0)
            int32_t rax_35 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
            *(arg4 + 4) = rax_35
            zmm0.d = (rax_35 u>> 9 | 0x3f800000).d f- 1f
        else
            zmm0, zmm6 = sub_140a50670()
        
        zmm6.d = zmm6.d f- zmm9.d
        zmm6.d = zmm6.d f* zmm0.d
        zmm6.d = zmm6.d f+ zmm9.d
        
        if (arg4 != 0)
            int32_t rax_39 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
            *(arg4 + 4) = rax_39
            zmm0.d = (rax_39 u>> 9 | 0x3f800000).d f- 1f
        else
            zmm0, zmm6 = sub_140a50670()
        
        zmm7.d = zmm7.d f- zmm10.d
        zmm7.d = zmm7.d f* zmm0.d
        zmm7.d = zmm7.d f+ zmm10.d
        zmm8 = zmm6
    else if (rdi.b != 0)
        zmm8 = zmm6
    else
        zmm6 = zmm9
        zmm7 = zmm10
        zmm8 = zmm6
else if (rdx_1 == 3)
    if (rcx_1 == 0)
        if (arg4 != 0)
            int32_t rax_27 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
            *(arg4 + 4) = rax_27
            zmm0.d = (rax_27 u>> 9 | 0x3f800000).d f- 1f
        else
            zmm0, zmm6 = sub_140a50670()
        
        zmm6.d = zmm6.d f- zmm9.d
        zmm6.d = zmm6.d f* zmm0.d
        zmm6.d = zmm6.d f+ zmm9.d
        
        if (arg4 != 0)
            int32_t rax_31 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
            *(arg4 + 4) = rax_31
            zmm0.d = (rax_31 u>> 9 | 0x3f800000).d f- 1f
        else
            zmm0, zmm6 = sub_140a50670()
        
        zmm7.d = zmm7.d f- zmm10.d
        zmm7.d = zmm7.d f* zmm0.d
        zmm7.d = zmm7.d f+ zmm10.d
        zmm8 = zmm7
    else if (rdi.b != 0)
        zmm8 = zmm7
    else
        zmm7 = zmm10
        zmm6 = zmm9
        zmm8 = zmm7
else if (rdx_1 == 4)
    if (rcx_1 == 0)
        if (arg4 != 0)
            int32_t rax_23 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
            *(arg4 + 4) = rax_23
            zmm0.d = (rax_23 u>> 9 | 0x3f800000).d f- 1f
        else
            zmm0, zmm6 = sub_140a50670()
        
        zmm6.d = zmm6.d f- zmm9.d
        zmm6.d = zmm6.d f* zmm0.d
        zmm6.d = zmm6.d f+ zmm9.d
        zmm8 = zmm6
    else if (rdi.b != 0)
        zmm8 = zmm6
    else
        zmm6 = zmm9
        zmm8 = zmm6
    
    zmm7 = zmm6
else if (rcx_1 == 0)
    if (arg4 != 0)
        int32_t rax_11 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
        *(arg4 + 4) = rax_11
        zmm0.d = (rax_11 u>> 9 | 0x3f800000).d f- 1f
    else
        zmm0, zmm6 = sub_140a50670()
    
    zmm6.d = zmm6.d f- zmm9.d
    zmm6.d = zmm6.d f* zmm0.d
    zmm6.d = zmm6.d f+ zmm9.d
    
    if (arg4 != 0)
        int32_t rax_15 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
        *(arg4 + 4) = rax_15
        zmm0.d = (rax_15 u>> 9 | 0x3f800000).d f- 1f
    else
        zmm0, zmm6 = sub_140a50670()
    
    zmm7.d = zmm7.d f- zmm10.d
    zmm7.d = zmm7.d f* zmm0.d
    zmm7.d = zmm7.d f+ zmm10.d
    
    if (arg4 != 0)
        zmm8.d = zmm8.d f- zmm11.d
        int32_t rax_19 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
        *(arg4 + 4) = rax_19
        zmm0.d = (rax_19 u>> 9 | 0x3f800000).d f- 1f
        zmm8.d = zmm8.d f* zmm0.d
        zmm8.d = zmm8.d f+ zmm11.d
    else
        float zmm0_1
        zmm0_1, zmm6 = sub_140a50670()
        zmm8.d = zmm8.d f- zmm11.d
        zmm8.d = zmm8.d f* zmm0_1
        zmm8.d = zmm8.d f+ zmm11.d
else if (rdi.b == 0)
    zmm6 = zmm9
    zmm7 = zmm10
    zmm8 = zmm11

*arg2 = zmm6.d
arg2[1] = zmm7.d
arg2[2] = zmm8.d
return arg2
