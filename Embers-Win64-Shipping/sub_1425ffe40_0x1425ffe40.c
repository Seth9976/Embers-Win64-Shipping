// 函数: sub_1425ffe40
// 地址: 0x1425ffe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg2
sub_141e636b0(arg1)

if ((arg1[0xf].b & 1) != 0)
    *(arg1 + 0x74) |= 0x10
    int64_t rax
    rax.b = 1
    return 1

if (*(arg1[3] + 0xc) s> 0)
    if (sub_141e81120() == 0)
        arg2.b = *(arg1[0x11] + 0x260) != 0
        sub_141e6bef0(arg1, arg2.b)
    
    char rax_4
    uint128_t zmm0_1
    rax_4, zmm0_1 = sub_1425fdeb0(arg1)
    
    if (rax_4 != 0)
        int64_t* rax_5 = arg1[2]
        float zmm1 = *(rax_5 + 0xfc)
        
        if (not(zmm1 <= 0f) && (*(*rax_5 + 0x16b) & 6) != 2)
            int64_t* rcx_3 = arg1[0x12]
            (*(*rcx_3 + 0x28))(rcx_3, zmm1)
        
        int32_t rax_15
        wchar16 const* const rdx_1
        int64_t rbx_1
        
        switch (*(arg1[0x12] + 0x30) - 1)
            case 0, 1
                __builtin_memset(arg1 + 0xd4, 0, 0x2c)
                void* rax_10 = arg1[0x12]
                *(arg1 + 0x194) = 0
                *(arg1 + 0xdc) = *(rax_10 + 0x50)
                arg1[0x1b].d = *(arg1[0x12] + 0x58)
                arg1[0x1f] = arg1
                
                if (arg1[0x10] != 0 && arg1[0x13] != 0)
                    if (*(arg1[2] + 0xf8) != 0)
                        *(arg1 + 0xf4) = 0xff
                        int64_t* rcx_11 = arg1[0x13]
                        rbx_1 = *arg1[0x10]
                        rax_15 = (*(*rcx_11 + 0xa8))(rcx_11)
                        rdx_1 = u"SubmitSourceBuffer - PCM - LOOP_*"
                    else
                        *(arg1 + 0xd4) = 0x40
                        int64_t* rcx_10 = arg1[0x13]
                        rbx_1 = *arg1[0x10]
                        rax_15 = (*(*rcx_10 + 0xa8))(rcx_10, arg1 + 0xd4, 0)
                        rdx_1 = u"SubmitSourceBuffer - PCM - LOOP_Never"
                    
                    (*(rbx_1 + 0xa8))(arg1[0x10], rdx_1, zx.q(rax_15))
            case 2, 5
                zmm0_1 = sub_1426019a0(arg1)
            case 4
                __builtin_memset(arg1 + 0xd4, 0, 0x2c)
                arg1[0x31] = 0
                arg1[0x32].d = 0
                void* rax_18 = arg1[0x12]
                *(arg1 + 0x194) = 0
                *(arg1 + 0xdc) = *(rax_18 + 0x70)
                arg1[0x1b].d = *(arg1[0x12] + 0x78)
                arg1[0x1f] = arg1
                arg1[0x31] = *(arg1[0x12] + 0x80)
                arg1[0x32].d = *(arg1[0x12] + 0x88) u>> 2
                int32_t rcx_18 = *(arg1[2] + 0xf8)
                *(arg1 + 0xd4) = 0x40
                
                if (rcx_18 != 0)
                    *(arg1 + 0xf4) = 0xff
                    int64_t* rcx_20 = arg1[0x13]
                    rbx_1 = *arg1[0x10]
                    rax_15 = (*(*rcx_20 + 0xa8))(rcx_20)
                    rdx_1 = u"SubmitSourceBuffer - XWMA - LOOP_*"
                else
                    int64_t* rcx_19 = arg1[0x13]
                    rbx_1 = *arg1[0x10]
                    rax_15 = (*(*rcx_19 + 0xa8))(rcx_19)
                    rdx_1 = u"SubmitSourceBuffer - XWMA - LOOP_Never"
                
                (*(rbx_1 + 0xa8))(arg1[0x10], rdx_1, zx.q(rax_15))
        
        *(arg1 + 0x74) |= 0x10
        *(arg1 + 0x1a4)
        *(arg1 + 0x1a4) = 0
        int64_t rdx_3 = *arg1
        (*(rdx_3 + 0x28))(arg1, rdx_3)
        int64_t rdx_4 = 0
        int64_t rcx_24 = sx.q(*(arg1[3] + 0xc)) * 2
        int64_t rax_30 = sx.q(*(*r14 + 0x274))
        arg1[0xd].d = 0
        *(arg1 + 0x64) = divu.dp.q(rdx_4:rax_30, rcx_24)
        
        if (not(0f f>= *(r14 + 0xfc)))
            int64_t* rcx_25 = *r14
            (*(*rcx_25 + 0x288))(rcx_25, modu.dp.q(rdx_4:rax_30, rcx_24))
            zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x64))).d f* 1f f/ zmm0_1.d f* *(r14 + 0xfc)
            arg1[0xd].d = int.d(zmm0_1.d)
        
        int32_t rax_31
        rax_31.b = 1
        return rax_31
    
    void* rcx_26 = *(arg1[0x10] + 0x7b0)
    bool z_1
    
    if (0 == *(rcx_26 + 0x1b0))
        *(rcx_26 + 0x1b0) = 0
        z_1 = true
    else
        *(rcx_26 + 0x1b0)
        z_1 = false
    
    if (z_1)
        arg1[0xf].d |= 1
        uint64_t rax_34
        rax_34.b = 1
        *(arg1 + 0x74) |= 0x10
        return rax_34

sub_1425fe930(arg1)

if ((*(arg1 + 0x1ac) & 1) != 0)
    int64_t* rcx_28 = arg1[3]
    
    if (rcx_28 != 0)
        (**rcx_28)(rcx_28, 1)

arg1[0x12] = 0
void* rax_35
rax_35.b = 0
arg1[3] = 0
*(arg1 + 0x194) = 0
return rax_35
