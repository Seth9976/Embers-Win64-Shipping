// 函数: sub_1429e3340
// 地址: 0x1429e3340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r14 = &arg1[0x27]
int64_t r13 = sx.q(*(arg1 + 0x4eb8))
int64_t rsi = 0
int64_t result = 0
int32_t count_1 = (r14[0xd9] + 7) & 0xfffffff8
int32_t _NumOfElements_1 = 1 << (r14[0x114f]).b
int32_t rbp = _NumOfElements_1
int32_t rdx = 1 << (r14[0x1150]).b

if (r13.d s< _NumOfElements_1)
    rbp = r13.d

int32_t arg_8 = rbp

if (arg1[0x4e7].d == 0)
    void* rax_2
    int64_t r9_1
    rax_2, r9_1 = sub_1429dde80(r13 * 0x30)
    arg1[0x486].q = rax_2
    
    if (rax_2 == 0)
        sub_1429da010(r14, 2, "Failed to allocate pbi->tile_workers", r9_1)
    
    int32_t i = 0
    
    if (r13.d s> 0)
        int64_t r14_1 = 0
        
        do
            arg1[0x4e7].d += 1
            int64_t rbp_2 = arg1[0x486].q + r14_1
            data_143cc7018(rbp_2)
            
            if (i s< (r13 - 1).d)
                int32_t rax_3
                int64_t r9_2
                rax_3, r9_2 = data_143cc7020(rbp_2)
                
                if (rax_3 == 0)
                    sub_1429da010(&arg1[0x27], rax_3 + 1, "Tile decoder thread creation failed", 
                        r9_2)
            
            i += 1
            r14_1 += 0x30
        while (i s< r13.d)
        
        rbp = arg_8
        r14 = &arg1[0x27]

int64_t i_9 = sx.q(rbp)
int32_t r13_1 = 0
int64_t i_11 = i_9
int64_t i_6

if (rbp s> 0)
    i_6 = i_9
    int64_t r12_2 = 0
    int64_t i_1
    
    do
        void* rbp_4 = arg1[0x486].q + r12_2
        void* rbx_2 = sx.q(*(arg1 + 0x4e74) + r13_1) * 0x3fd0 + *(arg1 + 0x4868)
        data_143cc7028(rbp_4)
        int128_t* rdx_2 = rbx_2 + 0x3400
        int128_t* rax_7 = arg1
        int64_t j_1 = 4
        int64_t j
        
        do
            rdx_2 = &rdx_2[8]
            int128_t zmm0 = *rax_7
            rax_7 = &rax_7[8]
            rdx_2[-8] = zmm0
            rdx_2[-7] = rax_7[-7]
            rdx_2[-6] = rax_7[-6]
            rdx_2[-5] = rax_7[-5]
            rdx_2[-4] = rax_7[-4]
            rdx_2[-3] = rax_7[-3]
            rdx_2[-2] = rax_7[-2]
            rdx_2[-1] = rax_7[-1]
            j = j_1
            j_1 -= 1
        while (j != 1)
        *rdx_2 = *rax_7
        rdx_2[1] = rax_7[1]
        rdx_2[2] = rax_7[2]
        rdx_2[3] = rax_7[3]
        rdx_2[4] = rax_7[4]
        rdx_2[5] = rax_7[5]
        rdx_2[6].q = rax_7[6].q
        void* rcx_11 = nullptr
        
        if (r14[0x114e] == 0)
            rcx_11 = rbx_2 + 0x50
        
        r13_1 += 1
        *(rbx_2 + 0x3588) = rcx_11
        r12_2 += 0x30
        *(rbp_4 + 0x10) = sub_1429e63b0
        i_1 = i_6
        i_6 -= 1
        *(rbp_4 + 0x18) = rbx_2
        *(rbp_4 + 0x20) = arg1
    while (i_1 != 1)
    i_9 = i_11

int64_t count = sx.q(count_1)
memset(*(r14 + 0x4588), 0, count * 6)
memset(*(r14 + 0x4580), 0, count)
sub_142a26e80(r14)
void* _Base = &arg1[0x487]
int64_t _NumOfElements = sx.q(_NumOfElements_1)
sub_1429e39e0(arg1, arg2, arg3, _NumOfElements.d, rdx, _Base)
qsort(_Base, _NumOfElements, 0x18, sub_1429e1920)

if (arg_8 != _NumOfElements.d)
    int32_t rax_12 = (_NumOfElements - 2).d
    int64_t r8_5 = 0
    int64_t rdx_7 = sx.q(rax_12)
    
    if (rax_12 s> 0)
        void* rcx_20 = arg1 + ((rdx_7 + ((rdx_7 + 0x487) << 1)) << 3)
        
        do
            uint128_t zmm0_1 = *rcx_20
            r8_5 += 2
            rdx_7 -= 2
            int64_t zmm3 = *(_Base + 0x10)
            rcx_20 -= 0x30
            int128_t zmm2 = *_Base
            *_Base = zmm0_1
            _Base += 0x30
            *(_Base - 0x20) = *(rcx_20 + 0x40)
            *(rcx_20 + 0x30) = zmm2
            *(rcx_20 + 0x40) = zmm3
        while (r8_5 s< rdx_7)
else
    i_6.o = *_Base
    int32_t arg_20
    arg_20.q = *(_Base + 0x10)
    int64_t rbx_3 = sx.q((_NumOfElements - 1).d) * 0x18
    memmove(_Base, arg1 + 0x4888, rbx_3.d)
    *(rbx_3 + arg1 + 0x4870) = i_6.o
    *(rbx_3 + arg1 + 0x4880) = arg_20.q

if (r14[0x114e] == 0 && i_9 s> 0)
    int64_t rbx_4 = 0
    int64_t i_8 = i_9
    int64_t i_2
    
    do
        memset(*(rbx_4 + arg1[0x486].q + 0x18) + 0x50, 0, 0x33a8)
        rbx_4 += 0x30
        i_2 = i_8
        i_8 -= 1
    while (i_2 != 1)

int32_t r10 = arg_8
int32_t temp3
int32_t temp4
temp3:temp4 = sx.q(_NumOfElements.d)
int32_t rbp_5 = 0
int32_t temp0 = divs.dp.d(temp3:temp4, r10)
int32_t rdx_9 = mods.dp.d(temp3:temp4, r10)
int32_t i_7 = 0
int32_t var_78_1 = rdx_9
int32_t r9_4 = temp0

if (i_9 s> 0)
    int32_t rcx_24 = r10 - 1
    int64_t i_10 = i_9
    int64_t r14_2 = 0
    int64_t i_3
    
    do
        int32_t temp10_1
        int32_t temp11_1
        temp10_1:temp11_1 = sx.q(rdx_9 + i_7)
        void* rcx_26 = arg1[0x486].q + r14_2
        int64_t* r8_6 = *(rcx_26 + 0x18)
        r8_6[1].d = rbp_5
        rbp_5 = rbp_5 + divs.dp.d(temp10_1:temp11_1, r10) + r9_4
        *(r8_6 + 0xc) = rbp_5 - 1
        *r8_6 = arg3
        *(rcx_26 + 0x28) = 0
        
        if (i_7 != rcx_24)
            data_143cc7030()
        else
            data_143cc7038(rcx_26, zx.q(mods.dp.d(temp10_1:temp11_1, r10)))
        
        r9_4 = temp0
        i_7 += 1
        rdx_9 = var_78_1
        r14_2 += 0x30
        r10 = arg_8
        i_3 = i_10
        i_10 -= 1
    while (i_3 != 1)
    i_9 = i_11

int64_t i_4 = sx.q(i_7)

if (i_4 s> 0)
    int64_t result_1 = 0
    int64_t rbp_8 = i_4 * 0x30
    
    do
        void* rcx_29 = arg1[0x486].q - 0x30 + rbp_8
        int64_t* r14_3 = *(rcx_29 + 0x18)
        int32_t rcx_30
        rcx_30.b = data_143cc7028(rcx_29) == 0
        *(arg1 + 0x25c) |= rcx_30
        
        if (result_1 == 0)
            result_1 = *r14_3
        
        i_4 -= 1
        rbp_8 -= 0x30
    while (i_4 s> 0)
    
    result = result_1
    i_9 = i_11

if (*(arg1 + 0x47a8) == 0 && i_9 s> 0)
    int64_t i_5
    
    do
        sub_142a274a0(arg1 + 0x13ec, *(rsi + arg1[0x486].q + 0x18) + 0x50, 1)
        rsi += 0x30
        i_5 = i_9
        i_9 -= 1
    while (i_5 != 1)

return result
