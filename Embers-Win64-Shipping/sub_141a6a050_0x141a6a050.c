// 函数: sub_141a6a050
// 地址: 0x141a6a050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* arg_10 = arg2
int32_t rbx = *arg2
int128_t var_48 = *(arg1 + 0x90)
int64_t rdi = var_48.q
int32_t rax

if (rdi.b == 2)
    rax.b = 1
else
    rax = (var_48:4.q).d
    int32_t rcx
    
    if (rax s< rbx)
    label_141a6a094:
        rcx = rax
    label_141a6a096:
        
        if (rcx == rax)
            rax.b = 1
        else
            rax.b = 0
    else if (rax s> rbx)
        if (rdi.b == 1)
            rcx = rbx
            goto label_141a6a096
        
        rax.b = 0
    else
        if (rdi.b == 1)
            goto label_141a6a094
        
        rax.b = 0

if (rax.b == 0)
    rax.b = 0
else
    char rcx_1 = var_48:8.b
    
    if (rcx_1 == 2)
        rax.b = 1
    else
        rax = var_48:0xc.d
        int32_t rcx_2
        
        if (rax s> rbx)
        label_141a6a0c5:
            rcx_2 = rax
        label_141a6a0c7:
            
            if (rcx_2 == rax)
                rax.b = 1
            else
                rax.b = 0
        else if (rax s< rbx)
            if (rcx_1 == 1)
                rcx_2 = rbx
                goto label_141a6a0c7
            
            rax.b = 0
        else
            if (rcx_1 == 1)
                goto label_141a6a0c5
            
            rax.b = 0
    
    if (rax.b == 0)
        rax.b = 0
    else
        rax.b = 1

if (rax.b == 0)
    return 0

char rdx = arg1[0x12].b
int32_t rsi = arg1[0x1c].d
var_48 = *arg2
uint32_t rax_2 = var_48.d
uint32_t arg_c = rax_2
char arg_8 = 1
uint32_t rcx_3
int128_t* r8

if (rdx != 2)
    rcx_3 = *(arg1 + 0x94)
    
    if (rcx_3 s< rax_2)
        r8 = &arg1[0x12]
        rcx_3 = zx.d(rdx)
    else if (rcx_3 s> rax_2 || rdx != 1)
        rcx_3.b = 1
        r8 = &arg_8
    else
        r8 = &arg1[0x12]
        rcx_3 = zx.d(rdx)
else
    r8 = &arg1[0x12]
    rcx_3 = zx.d(rdx)

if (rcx_3.b != rdx || (rcx_3.b != 2 && *(r8 + 4) != *(arg1 + 0x94)))
    rcx_3.b = 0
else
    rcx_3.b = 1

if (rcx_3.b != 0)
    char rcx_4 = arg1[0x13].b
    arg_8 = 1
    arg_c = rax_2
    void* rdx_1
    
    if (rcx_4 != 2)
        int32_t temp0_1 = *(arg1 + 0x9c)
        
        if (temp0_1 s> rax_2)
            rax_2 = zx.d(rcx_4)
            rdx_1 = arg1 + 0x9c
        else if (temp0_1 s< rax_2 || rcx_4 != 1)
            rdx_1 = &arg_c
            rax_2.b = 1
        else
            rax_2 = zx.d(rcx_4)
            rdx_1 = arg1 + 0x9c
    else
        rax_2 = zx.d(rcx_4)
        rdx_1 = arg1 + 0x9c
    
    if (rax_2.b != rcx_4 || (rax_2.b != 2 && *rdx_1 != *(arg1 + 0x9c)))
        rax_2.b = 0
    else
        rax_2.b = 1

if (rcx_3.b == 0 || rax_2.b == 0)
    rax_2.b = 0
else
    rax_2.b = 1

if (rax_2.b != 0)
    arg1[1].d |= 8
    
    if (((arg1[0x16].d u>> 1).b & 1) == 0)
        int64_t* r12_1 = arg1[4]
        int64_t r15_1 = 0
        arg_8.q = 0
        int64_t* rdx_2 = r12_1
        
        if (((r12_1 + 1) & 0xfffffffffffffffe) == 0)
            rdx_2 = sub_140cde0b0()
        
        int32_t var_58_1 = 0x7f800000
        void* result = sub_140d2e1f0(arg1, rdx_2, arg_8.q, 0xfffffff, 0, 0)
        int64_t r8_2 = *r12_1
        (*(r8_2 + 0x2d0))(r12_1, result, r8_2)
        int128_t* r12_2 = arg_10
        int64_t r10_1 = *arg1
        var_48 = *r12_2
        (*(r10_1 + 0x288))(arg1, &var_48, 0, zx.q(arg3))
        int64_t rax_7 = *result
        int64_t r8_3
        r8_3.b = 1
        var_48 = *r12_2
        (*(rax_7 + 0x288))(result, &var_48, r8_3, zx.q(arg3))
        void* rax_8 = sub_141a79ff0()
        void* rdx_6 = *(result + 0x10)
        int64_t rax_9 = sx.q(*(rax_8 + 0x38))
        
        if (rax_9.d s<= *(rdx_6 + 0x38) && *(*(rdx_6 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
            if (rdi.b != 2)
                arg_10.d = 0xea60
                arg_10:4.d = 1
                int128_t* r9_3
                
                if (sub_141a52670() == arg1 || arg1[0x22] == 0)
                    void* rax_16 = sub_140d226f0(arg1, sub_141a6e000())
                    
                    if (rax_16 == 0)
                        r9_3 = arg_10
                    else
                        r9_3 = *(rax_16 + 0x108)
                else
                    int64_t* rcx_10 = nullptr
                    
                    if (sub_141a52670() != arg1)
                        rcx_10 = arg1[0x22]
                    
                    r9_3 = *((*(*rcx_10 + 0x280))(rcx_10) + 0x108)
                
                if (rdi.b == 0)
                    r15_1 = 4
                
                arg_10:4.d = (zx.o(0)).d
                arg_10.d = rbx - *(r15_1 + &data_14302eb88) - (rdi u>> 0x20).d
                sub_1408ec700(&arg_10, arg_10, *(r12_2 + 8), r9_3)
                double zmm1_1[0x2] = arg1[0x1e].d
                uint64_t zmm0_3 = _mm_cvtepi32_pd(zx.q(arg_10.d)).q
                zmm1_1 = _mm_cvtps_pd(zmm1_1[0])
                zmm1_1[0] = zmm1_1[0] f* zmm0_3
                int64_t rcx_13 = int.q(zmm1_1[0])
                
                if (rcx_13 != -0x8000000000000000 && not(float.d(rcx_13) f== zmm1_1[0]))
                    uint32_t temp0_5 = _mm_movemask_pd(_mm_unpacklo_pd(zmm1_1, zmm1_1[0]))
                    zmm1_1 = zx.o(0)
                    zmm1_1[0] = float.d(rcx_13 - (zx.q(temp0_5) & 1))
                
                int32_t rax_19 = int.d(zmm1_1[0])
                
                if (rax_19 + rsi s>= 0)
                    *(result + 0xe0) = rax_19 + rsi
            
            return result

arg1[0x1c].d = rsi
return nullptr
