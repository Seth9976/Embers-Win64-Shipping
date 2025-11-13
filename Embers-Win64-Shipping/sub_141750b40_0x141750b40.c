// 函数: sub_141750b40
// 地址: 0x141750b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax

if ((arg1[5].b & 1) == 0)
    rax = *(arg2 + 8)
else
    rax = 0

int64_t* rcx = arg1[1]
char arg_8 = rax
char* rdx = *rcx

if (&rdx[1] u> rcx[1])
    (*(*arg1 + 0x150))(arg1, &arg_8, 1)
else
    arg_8 = *rdx
    *rcx += 1

(*(*arg1 + 0x1d8))(arg1, &data_1439a9538)
int32_t rax_5 = sub_140b4e7c0(arg1, &data_1439a9538)
char rcx_4 = arg_8
void*** rax_6
void** const rcx_5

if (rax_5 s>= 0xc && rcx_4 s< 0)
    rcx_4 &= 0x3f
    
    if (rcx_4 != 8)
        if (rcx_4 != 0xb || (arg1[5].b & 1) == 0)
            return 0
        
        rax_6 = j_sub_140a82f30(0x60)
        
        if (rax_6 == 0)
            return 0
        
        rax_6[1].d = 0x1008b8b
        rcx_5 = &data_142fc50d8
        goto label_141750c05
    
    if ((arg1[5].b & 1) == 0)
        return 0
    
    rax_6 = j_sub_140a82f30(0x60)
    
    if (rax_6 == 0)
        return 0
    
    rax_6[1].d = 0x1008888
    rcx_5 = &data_142fc4d40
label_141750c05:
    *(rax_6 + 0xc) = 1
    *rax_6 = rcx_5
    __builtin_memset(&rax_6[2], 0, 0x18)
    rax_6[8].d = 0
    __builtin_memcpy(rax_6 + 0x44, 
        "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
        0x18)
    return rax_6

if ((rcx_4 & 0x40) != 0)
    rcx_4 &= 0x3f
    
    if (rcx_4 == 8)
        if ((arg1[5].b & 1) == 0)
            return 0
        
        void*** rax_8 = j_sub_140a82f30(0x20)
        
        if (rax_8 == 0)
            return 0
        
        rax_8[1].d = 0x1004848
        *rax_8 = &data_142fc5190
        *(rax_8 + 0xc) = 1
        rax_8[2] = 0
        rax_8[3] = 0
        return rax_8
    
    if (rcx_4 != 0xb || (arg1[5].b & 1) == 0)
        return 0
    
    void*** rax_7 = j_sub_140a82f30(0x20)
    
    if (rax_7 == 0)
        return 0
    
    rax_7[1].d = 0x1004b4b
    *rax_7 = &data_142fc5248
    *(rax_7 + 0xc) = 1
    rax_7[2] = 0
    rax_7[3] = 0
    return rax_7

uint64_t rax_9 = zx.q(rcx_4)

if (rax_9.d u> 0xf)
    return 0

switch (rax_9)
    case 0
        if ((arg1[5].b & 1) == 0)
            return 0
        
        void*** rax_10 = j_sub_140a82f30(0x20)
        
        if (rax_10 == 0)
            return 0
        
        rax_10[1].d = 0x1010000
        *(rax_10 + 0xc) = 1
        *rax_10 = &data_142fc46f0
        return rax_10
    case 1
        if ((arg1[5].b & 1) == 0)
            return 0
        
        void*** rax_13 = j_sub_140a82f30(0x28)
        
        if (rax_13 == 0)
            return 0
        
        rax_13[1].d = 0x1010101
        *(rax_13 + 0xc) = 1
        *rax_13 = &data_142fc4870
        __builtin_memcpy(&rax_13[2], 
            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x"
        "7f\xff", 
            0x18)
        return rax_13
    case 2
        if ((arg1[5].b & 1) == 0)
            return 0
        
        void*** rax_15 = j_sub_140a82f30(0x28)
        
        if (rax_15 == 0)
            return 0
        
        rax_15[1].d = 0x1000202
        *(rax_15 + 0xc) = 0
        *rax_15 = &data_142fc47b8
        return rax_15
    case 3
        if ((arg1[5].b & 1) == 0)
            return 0
        
        void*** rax_17 = j_sub_140a82f30(0x30)
        
        if (rax_17 == 0)
            return 0
        
        rax_17[1].d = 0x1010303
        *(rax_17 + 0xc) = 1
        *rax_17 = &data_142fc4eb0
        return rax_17
    case 4
        if ((arg1[5].b & 1) == 0)
            return 0
        
        void*** rax_19 = j_sub_140a82f30(0x70)
        
        if (rax_19 == 0)
            return 0
        
        rax_19[1].d = 0x1000404
        *rax_19 = &data_142fc4c88
        *(rax_19 + 0xc) = 1
        rax_19[2] = 0
        rax_19[3] = 0
        float zmm1[0x4] = data_143ef72f0
        *(rax_19 + 0x30) = zx.o(0)
        zmm1[0].q = zx.o(0) u>> 0x40
        *(rax_19 + 0x20) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
        *(rax_19 + 0x40) = __andps_xmmxud_memxud(data_143ef72f0, data_143ef7300)
        __builtin_memcpy(&rax_19[0xa], 
            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x"
        "7f\xff", 
            0x18)
        return rax_19
    case 5
        if ((arg1[5].b & 1) == 0)
            return 0
        
        void*** rax_20 = j_sub_140a82f30(0x40)
        
        if (rax_20 == 0)
            return 0
        
        rax_20[1].d = 0x1000505
        *rax_20 = &data_142fc4328
        *(rax_20 + 0xc) = 1
        rax_20[2] = 0
        rax_20[3] = 0
        __builtin_memcpy(&rax_20[4], 
            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x"
        "7f\xff", 
            0x18)
        rax_20[7] = 0
        return rax_20
    case 6
        if ((arg1[5].b & 1) == 0)
            return 0
        
        void*** rax_25 = j_sub_140a82f30(0xb8)
        
        if (rax_25 != 0)
            return sub_141703f10(rax_25)
        
        return 0
    case 7, 0xe
        return 0
    case 8
        if ((arg1[5].b & 1) == 0)
            return 0
        
        void*** rax_27 = j_sub_140a82f30(0x88)
        
        if (rax_27 == 0)
            return 0
        
        rax_27[1].d = 0x1010808
        *(rax_27 + 0xc) = 1
        *rax_27 = &data_142fc4638
        rax_27[2] = 0
        rax_27[3] = 0
        rax_27[5] = 0
        rax_27[6] = 0
        rax_27[4] = &data_142fc4250
        rax_27[7].d = 0
        __builtin_memset(&rax_27[9], 0, 0x11)
        rax_27[8] = &data_142fc4220
        sub_14172eb30(&rax_27[4], &rax_27[8])
        __builtin_memcpy(&rax_27[0xc], 
            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x"
        "7f\xff", 
            0x18)
        rax_27[0xf] = 0
        rax_27[0x10] = 0
        return rax_27
    case 9
        if ((arg1[5].b & 1) == 0)
            return 0
        
        void*** rax_30 = j_sub_140a82f30(0x88)
        
        if (rax_30 == 0)
            return 0
        
        rax_30[1].w = 0x909
        *(rax_30 + 0xb) = 0x101
        *rax_30 = &data_142fc55f0
        rax_30[2] = &data_142fc47b8
        rax_30[3].d = 0x1000202
        *(rax_30 + 0x1c) = 0
        rax_30[7] = &data_142fc47b8
        rax_30[8].d = 0x1000202
        *(rax_30 + 0x44) = 0
        __builtin_memcpy(rax_30 + 0x6c, 
            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x"
        "7f\xff", 
            0x18)
        *(rax_30 + 0xa) = 1
        return rax_30
    case 0xa
        if ((arg1[5].b & 1) == 0)
            return 0
        
        void*** rax_35 = j_sub_140a82f30(0x80)
        
        if (rax_35 == 0)
            return 0
        
        rax_35[1].d = 0x1000a0a
        *(rax_35 + 0xc) = 1
        *rax_35 = &data_142fc5760
        rax_35[2] = &data_142fc47b8
        rax_35[3].d = 0x1000202
        *(rax_35 + 0x1c) = 0
        rax_35[7] = &data_142fc47b8
        rax_35[8].d = 0x1000202
        *(rax_35 + 0x44) = 0
        __builtin_memcpy(&rax_35[0xd], 
            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x"
        "7f\xff", 
            0x18)
        return rax_35
    case 0xb
        if ((arg1[5].b & 1) == 0)
            return 0
        
        void*** rax_32 = j_sub_140a82f30(0x170)
        
        if (rax_32 != 0)
            return sub_141705120(rax_32)
        
        return 0
    case 0xc
        if ((arg1[5].b & 1) == 0)
            return 0
        
        void*** rax_34 = j_sub_140a82f30(0xb0)
        
        if (rax_34 == 0)
            return 0
        
        rax_34[1].d = 0x1000c0c
        *rax_34 = &data_142fc5300
        *(rax_34 + 0xc) = 1
        __builtin_memset(&rax_34[2], 0, 0x20)
        rax_34[0xe] = 0
        rax_34[0xf] = 0
        __builtin_memcpy(&rax_34[0x10], 
            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x"
        "7f\xff\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff"
        "ff\x7f\xff", 
            0x30)
        return rax_34
    case 0xd
        if ((arg1[5].b & 1) != 0)
            sub_140b4e7c0(arg1, &data_1439a9538)
        
        rax_6 = j_sub_140a82f30(0x60)
        
        if (rax_6 == 0)
            return 0
        
        rax_6[1].d = 0x1008787
        rcx_5 = &data_142fc56a8
        goto label_141750c05
    case 0xf
        if ((arg1[5].b & 1) == 0)
            return 0
        
        void*** rax_21 = j_sub_140a82f30(0xa0)
        
        if (rax_21 == 0)
            return 0
        
        rax_21[1].d = 0x1000505
        void* rcx_8 = &rax_21[0xc]
        *(rax_21 + 0xc) = 1
        rax_21[2] = 0
        rax_21[3] = 0
        __builtin_memset(&rax_21[7], 0, 0x28)
        __builtin_memcpy(&rax_21[4], 
            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x"
        "7f\xff", 
            0x18)
        *rax_21 = &data_142fc43e8
        *(rcx_8 + 0x1c) = 0x80
        void* rax_22 = *(rcx_8 + 0x10)
        
        if (rax_22 != 0)
            rcx_8 = rax_22
        
        __builtin_memset(rcx_8, 0, 0x1c)
        rax_21[0x10].d = 0xffffffff
        *(rax_21 + 0x84) = 0
        rax_21[0x12] = 0
        rax_21[0x13].d = 0
        rax_21[1].b = 0xf
        return rax_21
