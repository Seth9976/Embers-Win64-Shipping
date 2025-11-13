// 函数: sub_1421ca9b0
// 地址: 0x1421ca9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = (arg1[0x1c].d).b
int32_t i_2 = 0
uint128_t* rsi
uint128_t* var_20 = rsi
uint128_t zmm9 = arg2
char r15 = arg3
uint128_t zmm6
uint128_t var_58 = zmm6
char rax = rcx

if ((rcx & 1) != 0 && arg1[0x3c].d != 0)
    int32_t i = 0
    
    if (arg1[0x23].d s> 0)
        void* r10_1 = nullptr
        
        do
            void* r8_1 = sx.q(zx.d(*(r10_1 + arg1[0x1f])) * *(arg1 + 0x114)) + arg1[0x1e]
            int64_t rcx_3 = sx.q(*(arg1 + 0x1dc))
            uint64_t* rdx_2 = sx.q(arg1[0x3c].d) + r8_1
            rdx_2[6].d = *(r8_1 + 0x2c)
            *rdx_2 = *(r8_1 + 0x30)
            rdx_2[1].d = *(r8_1 + 0x38)
            *(rdx_2 + 0xc) = *(r8_1 + 0x50)
            *(rdx_2 + 0x14) = *(r8_1 + 0x58)
            rdx_2[3] = *(rcx_3 + r8_1 + 0x18)
            rdx_2[4].d = *(rcx_3 + r8_1 + 0x20)
            int64_t rax_6 = sx.q(*(arg1 + 0x4c))
            
            if (rax_6.d == 0)
                arg4 = zx.o(0)
            else
                arg4 = *(rax_6 + r8_1 + 4)
            
            *(rdx_2 + 0x34) = arg4.d
            int64_t rax_7 = sx.q(arg1[9].d)
            int32_t rax_8
            
            if (rax_7.d == 0)
                arg4 = zx.o(data_143dbb1f8.q)
                *(rdx_2 + 0x24) = arg4.q
                rax_8 = data_143dbb200
            else
                arg4 = zx.o(*(rax_7 + r8_1 + 0xc))
                *(rdx_2 + 0x24) = arg4.q
                rax_8 = *(rax_7 + r8_1 + 0x14)
            
            i += 1
            *(rdx_2 + 0x2c) = rax_8
            r10_1 += 2
        while (i s< arg1[0x23].d)
        
        rax = (arg1[0x1c].d).b

void* r8_2 = arg1[5]
void* arg_20 = r8_2
uint128_t zmm2

if (arg1[0x3b].b != 0 && (rax & 1) != 0)
    int32_t i_1 = 0
    
    if (arg1[0x23].d s> 0)
        int64_t r13_1 = 0
        uint128_t zmm7
        uint128_t var_68_1 = zmm7
        uint128_t zmm8
        uint128_t var_78_1 = zmm8
        
        do
            rsi = sx.q(zx.d(*(arg1[0x1f] + r13_1)) * *(arg1 + 0x114)) + arg1[0x1e]
            void* rdi_2 = sx.q(*(arg1 + 0x1dc)) + rsi
            int32_t rax_10 = *(rdi_2 + 0x44)
            arg4 = zx.o(*(rdi_2 + 0x3c))
            *(rdi_2 + 0x30) = arg4.q
            *(rdi_2 + 0x38) = rax_10
            void* rdx_3 = *(r8_2 + 0x30)
            char rcx_6 = *(rdx_3 + 0x58)
            
            if (rcx_6 - 3 u<= 1)
                int32_t rax_13 = *(rsi + 0x38)
                uint64_t var_118 = rsi[3].q
                
                if (rcx_6 == 3)
                    if ((*(rdx_3 + 0xaf) & 1) == 0)
                        goto label_1421cad1e
                    
                    int64_t rcx_7 = sx.q(*(r8_2 + 0x98))
                    
                    if (rcx_7.d s<= 0)
                        goto label_1421cad1e
                    
                    void* rax_14 = arg1[2]
                    int32_t arg_10
                    sub_140865c40(rax_14 + 0x60, &arg_10, 
                        *(*(**(rax_14 + 0x40) + 0x90) + (rcx_7 << 3) - 8))
                    int64_t rax_16 = sx.q(arg_10)
                    void* const rcx_9
                    
                    if (rax_16.d == 0xffffffff)
                        rcx_9 = nullptr
                    else
                        rcx_9 = *(rax_14 + 0x60) + rax_16 * 0x18
                    
                    int32_t* rax_18 = rcx_9 + 8
                    
                    if (rcx_9 == 0)
                        rax_18 = nullptr
                    
                    uint64_t rcx_10 = zx.q(*rax_18)
                    
                    if (rcx_10.d == 0)
                        goto label_1421cad1e
                    
                    void* rax_19 = rsi + rcx_10
                    arg4.d = (*rsi).d f+ *(rax_19 + 0x3c)
                    zmm6.d = (*(rsi + rcx_10 + 0xc)).d f+ rsi[1].d
                    zmm7.d = (*(rax_19 + 0x10)).d f+ *(rsi + 0x14)
                    zmm8.d = (*(rax_19 + 0x14)).d f+ *(rsi + 0x18)
                    zmm6.d = zmm6.d f- arg4.d
                    arg4.d = (*(rax_19 + 0x40)).d f+ *(rsi + 4)
                    zmm7.d = zmm7.d f- arg4.d
                    arg4.d = (*(rax_19 + 0x44)).d f+ *(rsi + 8)
                    var_118.d = zmm6.d
                    var_118:4.d = zmm7.d
                    zmm8.d = zmm8.d f- arg4.d
                    int32_t var_110_2 = zmm8.d
                else if (rcx_6 != 4)
                label_1421cad1e:
                    zmm7 = var_118:4.d
                    zmm6 = var_118.d
                    zmm8 = rax_13
                else
                    arg2 = zx.o(rsi[1].q)
                    int32_t rax_20 = *(rsi + 0x18)
                    zmm7 = _mm_shuffle_ps(arg2, arg2, 0x55)
                    var_118 = arg2.q
                    zmm6 = var_118.d
                    zmm8 = rax_20
                
                zmm2.d = zmm7.d f* zmm7.d
                arg4.d = zmm6.d f* zmm6.d
                arg2.d = zmm8.d f* zmm8.d
                zmm2.d = zmm2.d f+ arg4.d
                zmm2.d = zmm2.d f+ arg2.d
                
                if (not(zmm2.d f<= 9.99999994e-09f))
                    uint128_t zmm4
                    zmm4.d = 0x3f000000
                    uint128_t zmm3
                    zmm3.d = zmm2.d
                    float temp0_3[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    arg4.d = temp0_3.d f* temp0_3[0]
                    arg2.d = zmm3.d f* arg4.d
                    zmm2.d = zmm4.d f- arg2.d
                    arg4.d = temp0_3.d f* zmm2.d
                    temp0_3[0] = temp0_3[0] f+ arg4.d
                    arg2.d = temp0_3.d f* temp0_3[0]
                    zmm3.d = zmm3.d f* arg2.d
                    zmm4.d = 0.5f f- zmm3.d
                    arg4.d = temp0_3.d f* zmm4.d
                    temp0_3[0] = temp0_3[0] f+ arg4.d
                    zmm6.d = zmm6.d f* temp0_3[0]
                    zmm7.d = zmm7.d f* temp0_3[0]
                    zmm8.d = zmm8.d f* temp0_3[0]
                    var_118.d = zmm6.d
                    var_118:4.d = zmm7.d
                    int32_t var_110_3 = zmm8.d
                    float arg_8 = temp0_3[0]
                
                int64_t var_108 = 0x3f800000
                int32_t var_100_1 = 0
                void var_c8
                sub_140ad6660(&var_c8, &var_108, &var_118)
                int32_t var_f8
                zmm9 = sub_140ad3d90(&var_c8, &var_f8)
                int32_t var_f0
                arg4.d = var_f0.d f+ *(rdi_2 + 0x14)
                zmm2.d = var_f8.d f+ *(rdi_2 + 0xc)
                int32_t var_f4
                arg2.d = var_f4.d f+ *(rdi_2 + 0x10)
                r8_2 = arg_20
                int32_t var_d4_1 = arg4.d
                *(rdi_2 + 0x18) = (_mm_unpacklo_ps(zmm2, arg2.q)).q
                *(rdi_2 + 0x20) = var_d4_1
                arg4.d = (*(rdi_2 + 0x18)).d f+ *(rdi_2 + 0x24)
                *(rdi_2 + 0x18) = arg4.d
                arg2.d = (*(rdi_2 + 0x28)).d f+ *(rdi_2 + 0x1c)
                *(rdi_2 + 0x1c) = arg2.d
                arg4.d = (*(rdi_2 + 0x2c)).d f+ *(rdi_2 + 0x20)
                *(rdi_2 + 0x20) = arg4.d
            else if ((*(rsi + 0x5c) & 0x20000000) == 0)
                arg2.d = (*(rdi_2 + 0xc)).d f+ *(rdi_2 + 0x24)
                zmm2.d = (*(rdi_2 + 0x28)).d f+ *(rdi_2 + 0x10)
                arg4.d = (*(rdi_2 + 0x2c)).d f+ *(rdi_2 + 0x14)
                int32_t var_e0_1 = arg4.d
                *(rdi_2 + 0x18) = (_mm_unpacklo_ps(arg2, zmm2.q)).q
                *(rdi_2 + 0x20) = var_e0_1
            
            i_1 += 1
            r13_1 += 2
        while (i_1 s< arg1[0x23].d)
        
        r15 = arg3

void* rdi_3 = arg1[5]
rsi.b = 0f f>= arg1[0x25].d
(*(*arg1 + 0x28))(arg1, zmm9, rdi_3)

if ((arg1[0x1c].b & 1) == 0)
    sub_1421b34f0(arg1)
else
    (*(*arg1 + 0xe0))(arg1)
    (*(*arg1 + 0xa0))(arg1, zmm9)
    int64_t rax_26 = *arg1
    arg1[0x34] = *(*(rdi_3 + 0x30) + 0x30)
    (*(rax_26 + 0x38))(arg1, zmm9, rdi_3)
    (*(*arg1 + 0x30))(arg1, zmm9, rdi_3, zx.q(r15), rsi.b)
    int64_t rax_28 = *arg1
    *(arg1 + 0x124) = arg4.d
    (*(rax_28 + 0x40))(arg1, zmm9, rdi_3)
    
    if (arg1[0x23].d s> 0)
        (*(*arg1 + 0xa8))(arg1, zmm9)
        (*(*arg1 + 0x68))(arg1, zmm9)
    
    (*(*arg1 + 0x48))(arg1, zmm9, rdi_3)
    sub_1421af530(arg1, arg4.d)
    *(arg1 + 0x174) = 1

zmm6.d = arg4.d f+ *(arg1 + 0x12c)
arg1[0x26].d = zmm9.d
*(arg1 + 0x12c) = zmm6.d
arg1[0x35] = data_143dbb1f8.q
int64_t result = zx.q(data_143dbb200)
arg1[0x36].d = result.d

if (arg1[0x3b].b != 0 && (arg1[0x1c].b & 1) != 0 && arg1[0x23].d s> 0)
    void* r8_12 = nullptr
    
    do
        i_2 += 1
        uint32_t rcx_24 = zx.d(*(r8_12 + arg1[0x1f]))
        r8_12 += 2
        result = sx.q(*(arg1 + 0x1dc))
        void* rdx_10 = sx.q(rcx_24 * *(arg1 + 0x114)) + result + arg1[0x1e]
        int64_t zmm0
        zmm0.d = zmm9.q.d f* *(rdx_10 + 0x30)
        arg2.d = (*(rdx_10 + 0x34)).d f* zmm9.d
        zmm0.d = zmm0.d f+ *(rdx_10 + 0x24)
        zmm2.d = (*(rdx_10 + 0x38)).d f* zmm9.d
        arg2.d = arg2.d f+ *(rdx_10 + 0x28)
        zmm2.d = zmm2.d f+ *(rdx_10 + 0x2c)
        *(rdx_10 + 0x24) = zmm0.d
        *(rdx_10 + 0x28) = arg2.d
        *(rdx_10 + 0x2c) = zmm2.d
    while (i_2 s< arg1[0x23].d)

return result
