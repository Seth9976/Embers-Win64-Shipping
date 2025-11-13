// 函数: sub_140739170
// 地址: 0x140739170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t r9 = 0
int32_t* r8 = *(arg2 + 0x20)
int16_t i_4 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
uint32_t i = zx.d(i_4)

if (i s>= *r8)
    int64_t rax_1 = 0
    int32_t* rcx = nullptr
    
    do
        i -= *(rcx + r8)
        rax_1 += 1
        rcx = rax_1 << 2
        r9 += 1
    while (i s>= *(rcx + r8))

int64_t r11 = *(arg2 + 0x18)
int32_t* rbx = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(r9) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t rsi_1 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
int32_t* r14_1

if ((not.b(rsi_1) & 1) == 0)
    r14_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
else
    int32_t r9_1 = 0
    
    if (i_1 s>= *r8)
        int64_t rax_7 = 0
        int32_t* rdx_1 = nullptr
        
        do
            i_1 -= *(rdx_1 + r8)
            rax_7 += 1
            rdx_1 = rax_7 << 2
            r9_1 += 1
        while (i_1 s>= *(rdx_1 + r8))
    
    r14_1 = sx.q(i_1) + *(r11 + (sx.q(r9_1) << 3))

uint32_t rcx_3 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
int32_t rcx_4 = rcx_3 & 0x7fff
int32_t var_88 = rcx_4
int32_t rax_9
rax_9.b = rcx_4 != 0x7fff
void* var_78
void var_80

if (rcx_4 == 0x7fff)
    var_78 = &var_80
else
    var_78 = zx.q(rcx_4 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_8 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_70 = rcx_8
int32_t rax_10
rax_10.b = rcx_8 != 0x7fff
void* var_60
void var_68

if (rcx_8 == 0x7fff)
    var_60 = &var_68
else
    var_60 = zx.q(rcx_8 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_11 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t rdx_5 = rcx_11 & 0x7fff
int32_t var_58 = rdx_5
int32_t rax_12
rax_12.b = rdx_5 != 0x7fff
void* var_48
void var_50

if (rdx_5 == 0x7fff)
    var_48 = &var_50
else
    var_48 = zx.q(*(arg2 + 0x80) * rdx_5) + *(arg2 + 0x70)

if (sub_140d3c6e0(rbx) != 0)
    sub_142591550()

int64_t result = *(rbx + 0x58)
int64_t result_1 = 0
int64_t* r13_2

if (result == 0)
    r13_2 = nullptr
else
    int64_t rcx_16 = **(result + 0x58)
    result = sx.q(rbx[0x1a])
    void* r13_1 = *(rcx_16 + (result << 3))
    
    if (rbx[0x86].b != 0)
        result = sub_140d3c6e0(rbx)
        int64_t result_2 = result
        
        if (result == 0)
            result_1 = r13_1 + 0x138
        else
            int64_t rax_15 = sub_142591550()
            void* rcx_18 = *(result_2 + 0x10)
            result = rax_15 + 0x30
            int64_t rdx_6 = sx.q(*(result + 8))
            
            if (rdx_6.d s> *(rcx_18 + 0x38) || *(*(rcx_18 + 0x30) + (rdx_6 << 3)) != result
                    || *(result_2 + 0x430) == 0)
                result_1 = r13_1 + 0x138
            else
                result = sub_141f66050(result_2, rbx[0x1a])
                result_1 = result
    
    if (r13_1 == 0)
        r13_2 = nullptr
    else
        r13_2 = *(r13_1 + 0x18)

int32_t r12_3

if (result_1 == 0)
    r12_3 = 0
else
    int32_t temp0_1
    int32_t result_3
    temp0_1:result_3 = muls.dp.d(0x55555556, (*(*r13_2 + 0x58))(r13_2, result_1))
    result = zx.q(result_3)
    r12_3 = (temp0_1 u>> 0x1f) - 1 + temp0_1

int32_t i_3 = 0

if (*(arg2 + 0x40) s> 0)
    uint64_t rcx_24 = zx.q(rsi_1) << 2
    uint64_t arg_18 = rcx_24
    int32_t i_2
    
    do
        int32_t* rax_18 = r14_1
        r14_1 += rcx_24
        int32_t rcx_25 = *rax_18
        uint64_t rax_19
        
        if (rcx_25 s>= 0)
            rax_19 = zx.q(r12_3)
            
            if (rcx_25 s< r12_3)
                rax_19 = zx.q(rcx_25)
        else
            rax_19 = 0
        
        int32_t rbx_1 = (rax_19 * 3).d
        int32_t rax_21 = (*(*r13_2 + 0x68))(r13_2, zx.q(rbx_1))
        int64_t r8_1 = *r13_2
        int32_t rax_22 = (*(r8_1 + 0x68))(r13_2, zx.q(rbx_1 + 1), r8_1)
        int64_t r8_2 = *r13_2
        result = (*(r8_2 + 0x68))(r13_2, zx.q(rbx_1 + 2), r8_2)
        int32_t* r8_3 = var_78
        var_78 = &r8_3[sx.q(rax_9)]
        *r8_3 = rax_21
        int32_t* r8_4 = var_60
        var_60 = &r8_4[sx.q(rax_10)]
        *r8_4 = rax_22
        int32_t* r8_5 = var_48
        rcx_24 = arg_18
        var_48 = &r8_5[sx.q(rax_12)]
        i_2 = i_3 + 1
        *r8_5 = result.d
        i_3 = i_2
    while (i_2 s< *(arg2 + 0x40))

return result
