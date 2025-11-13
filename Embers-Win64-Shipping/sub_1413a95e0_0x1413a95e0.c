// 函数: sub_1413a95e0
// 地址: 0x1413a95e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi
void* r14
float zmm2

if (*(arg1 + 0x3dc) == 0)
    void* rax_1 = sub_14139d8d0(arg1, arg2, *(arg1 + 0x38c))
    zmm2 = *(arg1 + 0x39c)
    rsi = rax_1
    
    if (zmm2 >= 1f)
        r14 = arg1 + 0x40
    else
        void* rax_2 = sub_14139c770(arg1, arg2, *(arg1 + 0x38c))
        zmm2 = *(arg1 + 0x39c)
        r14 = rax_2
else
    zmm2 = *(arg1 + 0x39c)
    r14 = arg1 + 0x1c8
    rsi = arg1 + 0x1b8
    
    if (zmm2 >= 1f)
        r14 = arg1 + 0x40

uint128_t zmm1 = zx.o(*(arg3 + 0x159c))
int32_t var_70 = 0
int64_t var_4c = 0
int32_t var_44 = 0
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x1598))).d f* zmm2
zmm1.d = _mm_cvtepi32_ps(zmm1).d f* zmm2
int32_t r12 = int.d(zmm0.d)
int32_t r13 = int.d(zmm1.d)
zmm1 = zx.o(*(arg3 + 0x15a4))
void*** rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
zmm0.d = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x15a0))).d f* zmm2
zmm1.d = _mm_cvtepi32_ps(zmm1).d f* zmm2
int32_t rax_3 = int.d(zmm0.d)
zmm0 = data_142d3f800
int32_t rcx_1 = int.d(zmm1.d)
void* rax_4 = *rsi
int64_t rcx_2 = *(rax_4 + 0x10)
int64_t* rcx_3 = *(rax_4 + 8)
void* rax_5 = &rbx_3[0xa]

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rbx_3[0xa]

*(arg2 + 0x30) = rax_5
void** rax_6 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_6 = rbx_3
*(arg2 + 8) = &rbx_3[1]
rbx_3[1] = 0
*rbx_3 = &data_142d56628
rbx_3[2].d = 0
*(rbx_3 + 0x14) = r12
rbx_3[3].d = r13
*(rbx_3 + 0x1c) = rax_3
rbx_3[4].d = rcx_1
*(rbx_3 + 0x24) = zmm0.d
rbx_3[5].d = zmm0:4.d
*(rbx_3 + 0x2c) = zmm0:8.d
rbx_3[6].d = zmm0:0xc.d
*(rbx_3 + 0x34) = 0
rbx_3[7].d = 0
*(rbx_3 + 0x3c) = 0
rbx_3[9] = rcx_2
rbx_3[8] = rcx_3

if ((*(*rcx_3 + 8))() == 0)
    int64_t* rcx_5 = rbx_3[8]
    
    if ((*(*rcx_5 + 0x18))(rcx_5) == 0)
        int64_t* rcx_6 = rbx_3[8]
        
        if ((*(*rcx_6 + 0x20))(rcx_6) == 0)
            int64_t* rcx_7 = rbx_3[8]
            (*(*rcx_7 + 0x10))(rcx_7)

int64_t* rcx_8 = rbx_3[9]

if ((*(*rcx_8 + 8))(rcx_8) == 0)
    int64_t* rcx_9 = rbx_3[9]
    
    if ((*(*rcx_9 + 0x18))(rcx_9) == 0)
        int64_t* rcx_10 = rbx_3[9]
        
        if ((*(*rcx_10 + 0x20))(rcx_10) == 0)
            int64_t* rcx_11 = rbx_3[9]
            (*(*rcx_11 + 0x10))(rcx_11)

zmm0 = data_142d3f800
void*** rbx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_33 = *r14
int32_t var_70_1 = 0
int64_t var_4c_1 = 0
int32_t var_44_1 = 0
int64_t r12_1 = *(rax_33 + 0x10)
int64_t* r14_1 = *(rax_33 + 8)
void* rax_34 = &rbx_8[0xa]

if (rax_34 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rbx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_34 = &rbx_8[0xa]

*(arg2 + 0x30) = rax_34
void**** rax_35 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_35 = rbx_8
*(arg2 + 8) = &rbx_8[1]
rbx_8[1] = 0
*rbx_8 = &data_142d56628
rbx_8[2].d = 0
*(rbx_8 + 0x14) = r12
rbx_8[3].d = r13
*(rbx_8 + 0x1c) = rax_3
rbx_8[4].d = rcx_1
*(rbx_8 + 0x24) = zmm0.d
rbx_8[5].d = zmm0:4.d
*(rbx_8 + 0x2c) = zmm0:8.d
rbx_8[6].d = zmm0:0xc.d
*(rbx_8 + 0x34) = 0
rbx_8[7].d = 0
*(rbx_8 + 0x3c) = 0
rbx_8[8] = r14_1
rbx_8[9] = r12_1

if ((*(*r14_1 + 8))(r14_1) == 0)
    int64_t* rcx_14 = rbx_8[8]
    
    if ((*(*rcx_14 + 0x18))(rcx_14) == 0)
        int64_t* rcx_15 = rbx_8[8]
        
        if ((*(*rcx_15 + 0x20))(rcx_15) == 0)
            int64_t* rcx_16 = rbx_8[8]
            (*(*rcx_16 + 0x10))(rcx_16)

int64_t* rcx_17 = rbx_8[9]
int64_t result = (*(*rcx_17 + 8))(rcx_17)

if (result == 0)
    int64_t* rcx_18 = rbx_8[9]
    result = (*(*rcx_18 + 0x18))(rcx_18)
    
    if (result == 0)
        int64_t* rcx_19 = rbx_8[9]
        result = (*(*rcx_19 + 0x20))(rcx_19)
        
        if (result == 0)
            int64_t* rcx_20 = rbx_8[9]
            result = (*(*rcx_20 + 0x10))(rcx_20)

*(arg1 + 0x379) = 0
return result
