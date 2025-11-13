// 函数: sub_1429a7500
// 地址: 0x1429a7500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx_1 = (((arg3 - arg2) s/ 0x38) s>> 1) * 0x38 + arg2
sub_1429a70f0(arg2, rbx_1, arg3 - 0x38)
int64_t* i_1 = &rbx_1[7]
int64_t* rcx_1 = rbx_1

if (arg2 u< rbx_1)
    int64_t* rax_3 = rbx_1
    
    do
        int64_t r8_1 = rbx_1[-7]
        rcx_1 = rax_3
        int64_t temp0_1 = *rbx_1
        
        if (r8_1 u< temp0_1)
            break
        
        if (r8_1 u> temp0_1)
            break
        
        rbx_1 = &rax_3[-7]
        rax_3 = rbx_1
        rcx_1 = rbx_1
    while (arg2 u< rbx_1)

if (i_1 u< arg3)
    int64_t r8_2 = *rcx_1
    
    do
        int64_t temp1_1 = *i_1
        
        if (temp1_1 u< r8_2)
            break
        
        if (temp1_1 u> r8_2)
            break
        
        i_1 = &i_1[7]
    while (i_1 u< arg3)

int64_t* i = i_1
int64_t* r9 = rbx_1

while (true)
    uint128_t zmm0_1
    uint128_t zmm1_1
    uint128_t zmm2_1
    uint128_t zmm3_1
    
    for (; i u< arg3; i = &i[7])
        int64_t rcx_2 = *i
        int64_t temp2_1 = *rbx_1
        
        if (temp2_1 u>= rcx_2)
            if (temp2_1 u> rcx_2)
                break
            
            if (i_1 != i)
                zmm1_1 = *i_1
                zmm0_1 = zx.o(i_1[6])
                zmm2_1 = *(i_1 + 0x10)
                zmm3_1 = *(i_1 + 0x20)
                *i_1 = rcx_2
                i_1[1].b = i[1].b
                *(i_1 + 0xa) = *(i + 0xa)
                i_1[2] = i[2]
                i_1[3].d = i[3].d
                i_1[4] = i[4]
                i_1[5] = i[5]
                i_1[6].d = i[6].d
                *(i_1 + 0x34) = *(i + 0x34)
                uint64_t var_168_1 = zmm0_1.q
                *i = zmm1_1.q
                char rcx_11 = _mm_bsrli_si128(zmm1_1, 8).b
                zmm1_1 = _mm_bsrli_si128(zmm1_1, 8)
                i[1].b = rcx_11
                *(i + 0xa) = (zmm1_1.q u>> 0x10).w
                i[2] = zmm2_1.q
                i[4] = zmm3_1.q
                zmm2_1 = _mm_bsrli_si128(zmm2_1, 8)
                zmm3_1 = _mm_bsrli_si128(zmm3_1, 8)
                i[6].d = var_168_1.d
                i[3].d = zmm2_1.d
                i[5] = zmm3_1.q
                *(i + 0x34) = var_168_1:4.d
            
            i_1 = &i_1[7]
    
    bool cond:2_1 = r9 != arg2
    
    if (r9 u> arg2)
        void* r8_3 = r9 - 0x2e
        
        do
            int64_t rcx_16 = *(r8_3 - 0xa)
            int64_t temp3_1 = *rbx_1
            
            if (rcx_16 u>= temp3_1)
                if (rcx_16 u> temp3_1)
                    break
                
                rbx_1 = &rbx_1[-7]
                
                if (rbx_1 != r8_3 - 0xa)
                    zmm1_1 = *rbx_1
                    zmm0_1 = zx.o(rbx_1[6])
                    zmm2_1 = *(rbx_1 + 0x10)
                    zmm3_1 = *(rbx_1 + 0x20)
                    *rbx_1 = rcx_16
                    rbx_1[1].b = *(r8_3 - 2)
                    *(rbx_1 + 0xa) = *r8_3
                    rbx_1[2] = *(r8_3 + 6)
                    rbx_1[3].d = *(r8_3 + 0xe)
                    rbx_1[4] = *(r8_3 + 0x16)
                    rbx_1[5] = *(r8_3 + 0x1e)
                    rbx_1[6].d = *(r8_3 + 0x26)
                    *(rbx_1 + 0x34) = *(r8_3 + 0x2a)
                    uint64_t var_130_1 = zmm0_1.q
                    *(r8_3 - 0xa) = zmm1_1.q
                    char rcx_25 = _mm_bsrli_si128(zmm1_1, 8).b
                    zmm1_1 = _mm_bsrli_si128(zmm1_1, 8)
                    *(r8_3 - 2) = rcx_25
                    *r8_3 = (zmm1_1.q u>> 0x10).w
                    *(r8_3 + 6) = zmm2_1.q
                    *(r8_3 + 0x16) = zmm3_1.q
                    zmm2_1 = _mm_bsrli_si128(zmm2_1, 8)
                    zmm3_1 = _mm_bsrli_si128(zmm3_1, 8)
                    *(r8_3 + 0x26) = var_130_1.d
                    *(r8_3 + 0xe) = zmm2_1.d
                    *(r8_3 + 0x1e) = zmm3_1.q
                    *(r8_3 + 0x2a) = var_130_1:4.d
            
            r9 -= 0x38
            r8_3 -= 0x38
        while (arg2 u< r9)
        
        cond:2_1 = r9 != arg2
    
    if (cond:2_1)
        r9 = &r9[-7]
        
        if (i != arg3)
            zmm1_1 = *i
            zmm0_1 = zx.o(i[6])
            zmm2_1 = *(i + 0x10)
            zmm3_1 = *(i + 0x20)
            *i = *r9
            i[1].b = r9[1].b
            *(i + 0xa) = *(r9 + 0xa)
            i[2] = r9[2]
            i[3].d = r9[3].d
            i[4] = r9[4]
            i[5] = r9[5]
            i[6].d = r9[6].d
            *(i + 0x34) = *(r9 + 0x34)
            uint64_t var_18_1 = zmm0_1.q
            *r9 = zmm1_1.q
            char rcx_95 = _mm_bsrli_si128(zmm1_1, 8).b
            zmm1_1 = _mm_bsrli_si128(zmm1_1, 8)
            r9[1].b = rcx_95
            *(r9 + 0xa) = (zmm1_1.q u>> 0x10).w
            i = &i[7]
            r9[2] = zmm2_1.q
            r9[4] = zmm3_1.q
            zmm2_1 = _mm_bsrli_si128(zmm2_1, 8)
            zmm3_1 = _mm_bsrli_si128(zmm3_1, 8)
            r9[6].d = var_18_1.d
            r9[3].d = zmm2_1.d
            r9[5] = zmm3_1.q
            *(r9 + 0x34) = var_18_1:4.d
        else
            rbx_1 = &rbx_1[-7]
            
            if (r9 != rbx_1)
                zmm1_1 = *r9
                zmm0_1 = zx.o(r9[6])
                zmm2_1 = *(r9 + 0x10)
                zmm3_1 = *(r9 + 0x20)
                *r9 = *rbx_1
                r9[1].b = rbx_1[1].b
                *(r9 + 0xa) = *(rbx_1 + 0xa)
                r9[2] = rbx_1[2]
                r9[3].d = rbx_1[3].d
                r9[4] = rbx_1[4]
                r9[5] = rbx_1[5]
                r9[6].d = rbx_1[6].d
                *(r9 + 0x34) = *(rbx_1 + 0x34)
                uint64_t var_88_1 = zmm0_1.q
                *rbx_1 = zmm1_1.q
                char rcx_67 = _mm_bsrli_si128(zmm1_1, 8).b
                zmm1_1 = _mm_bsrli_si128(zmm1_1, 8)
                rbx_1[1].b = rcx_67
                *(rbx_1 + 0xa) = (zmm1_1.q u>> 0x10).w
                rbx_1[2] = zmm2_1.q
                rbx_1[4] = zmm3_1.q
                zmm2_1 = _mm_bsrli_si128(zmm2_1, 8)
                zmm3_1 = _mm_bsrli_si128(zmm3_1, 8)
                rbx_1[6].d = var_88_1.d
                rbx_1[3].d = zmm2_1.d
                rbx_1[5] = zmm3_1.q
                *(rbx_1 + 0x34) = var_88_1:4.d
            
            zmm1_1 = *rbx_1
            i_1 = &i_1[-7]
            zmm0_1 = zx.o(rbx_1[6])
            zmm2_1 = *(rbx_1 + 0x10)
            zmm3_1 = *(rbx_1 + 0x20)
            *rbx_1 = *i_1
            rbx_1[1].b = i_1[1].b
            *(rbx_1 + 0xa) = *(i_1 + 0xa)
            rbx_1[2] = i_1[2]
            rbx_1[3].d = i_1[3].d
            rbx_1[4] = i_1[4]
            rbx_1[5] = i_1[5]
            rbx_1[6].d = i_1[6].d
            *(rbx_1 + 0x34) = *(i_1 + 0x34)
            uint64_t var_50_1 = zmm0_1.q
            *i_1 = zmm1_1.q
            char rcx_81 = _mm_bsrli_si128(zmm1_1, 8).b
            zmm1_1 = _mm_bsrli_si128(zmm1_1, 8)
            i_1[1].b = rcx_81
            *(i_1 + 0xa) = (zmm1_1.q u>> 0x10).w
            i_1[2] = zmm2_1.q
            i_1[4] = zmm3_1.q
            zmm2_1 = _mm_bsrli_si128(zmm2_1, 8)
            zmm3_1 = _mm_bsrli_si128(zmm3_1, 8)
            i_1[6].d = var_50_1.d
            i_1[3].d = zmm2_1.d
            i_1[5] = zmm3_1.q
            *(i_1 + 0x34) = var_50_1:4.d
    else
        if (i == arg3)
            break
        
        if (i_1 != i)
            zmm1_1 = *rbx_1
            zmm0_1 = zx.o(rbx_1[6])
            zmm2_1 = *(rbx_1 + 0x10)
            zmm3_1 = *(rbx_1 + 0x20)
            *rbx_1 = *i_1
            rbx_1[1].b = i_1[1].b
            *(rbx_1 + 0xa) = *(i_1 + 0xa)
            rbx_1[2] = i_1[2]
            rbx_1[3].d = i_1[3].d
            rbx_1[4] = i_1[4]
            rbx_1[5] = i_1[5]
            rbx_1[6].d = i_1[6].d
            *(rbx_1 + 0x34) = *(i_1 + 0x34)
            uint64_t var_f8_1 = zmm0_1.q
            *i_1 = zmm1_1.q
            char rcx_39 = _mm_bsrli_si128(zmm1_1, 8).b
            zmm1_1 = _mm_bsrli_si128(zmm1_1, 8)
            i_1[1].b = rcx_39
            *(i_1 + 0xa) = (zmm1_1.q u>> 0x10).w
            i_1[2] = zmm2_1.q
            i_1[4] = zmm3_1.q
            zmm2_1 = _mm_bsrli_si128(zmm2_1, 8)
            zmm3_1 = _mm_bsrli_si128(zmm3_1, 8)
            i_1[6].d = var_f8_1.d
            i_1[3].d = zmm2_1.d
            i_1[5] = zmm3_1.q
            *(i_1 + 0x34) = var_f8_1:4.d
        
        zmm1_1 = *rbx_1
        i_1 = &i_1[7]
        zmm0_1 = zx.o(rbx_1[6])
        zmm2_1 = *(rbx_1 + 0x10)
        zmm3_1 = *(rbx_1 + 0x20)
        *rbx_1 = *i
        rbx_1[1].b = i[1].b
        *(rbx_1 + 0xa) = *(i + 0xa)
        rbx_1[2] = i[2]
        rbx_1[3].d = i[3].d
        rbx_1[4] = i[4]
        rbx_1[5] = i[5]
        rbx_1[6].d = i[6].d
        *(rbx_1 + 0x34) = *(i + 0x34)
        rbx_1 = &rbx_1[7]
        uint64_t var_c0_1 = zmm0_1.q
        *i = zmm1_1.q
        char rcx_53 = _mm_bsrli_si128(zmm1_1, 8).b
        zmm1_1 = _mm_bsrli_si128(zmm1_1, 8)
        i[1].b = rcx_53
        *(i + 0xa) = (zmm1_1.q u>> 0x10).w
        i[2] = zmm2_1.q
        i[4] = zmm3_1.q
        i[6].d = var_c0_1.d
        zmm2_1 = _mm_bsrli_si128(zmm2_1, 8)
        zmm3_1 = _mm_bsrli_si128(zmm3_1, 8)
        i[3].d = zmm2_1.d
        i[5] = zmm3_1.q
        *(i + 0x34) = var_c0_1:4.d
        i = &i[7]

*arg1 = rbx_1
arg1[1] = i_1
return arg1
