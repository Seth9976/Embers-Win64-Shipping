// 函数: sub_140737cf0
// 地址: 0x140737cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t r9 = 0
int32_t* r8 = *(arg2 + 0x20)
int16_t i_8 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
uint32_t i = zx.d(i_8)

if (i s>= *r8)
    int64_t rax_1 = 0
    int32_t* rcx = nullptr
    
    do
        i -= *(rcx + r8)
        rax_1 += 1
        rcx = rax_1 << 2
        r9 += 1
    while (i s>= *(rcx + r8))

int64_t r10 = *(arg2 + 0x18)
int32_t* rsi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r10 + (sx.q(r9) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint32_t rax_6 = rax_5 u>> 0xf
int32_t i_1 = rax_5 & 0x7fff
uint32_t arg_18 = rax_6
rax_6.b = not.b(rax_6.b)
int32_t* r15_1

if ((rax_6.b & 1) == 0)
    r15_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
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
    
    r15_1 = sx.q(i_1) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_9 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
uint32_t rax_10 = rax_9 u>> 0xf
int32_t i_2 = rax_9 & 0x7fff
uint32_t arg_20 = rax_10
rax_10.b = not.b(rax_10.b)
void* rdx_4

if ((rax_10.b & 1) == 0)
    rdx_4 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
else
    int32_t r9_2 = 0
    
    if (i_2 s>= *r8)
        int64_t rax_11 = 0
        int32_t* rdx_2 = nullptr
        
        do
            i_2 -= *(rdx_2 + r8)
            rax_11 += 1
            rdx_2 = rax_11 << 2
            r9_2 += 1
        while (i_2 s>= *(rdx_2 + r8))
    
    rdx_4 = sx.q(i_2) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rax_13 = zx.d(rax[3])
void* var_98 = rdx_4
uint32_t rax_14 = rax_13 u>> 0xf
int32_t i_3 = rax_13 & 0x7fff
uint32_t var_a8 = rax_14
rax_14.b = not.b(rax_14.b)
*(arg2 + 0x10) = &rax[4]
int32_t* rdx_9

if ((rax_14.b & 1) == 0)
    rdx_9 = zx.q(*(arg2 + 0x80) * i_3) + *(arg2 + 0x70)
else
    int32_t r9_3 = 0
    
    if (i_3 s>= *r8)
        int64_t rax_15 = 0
        int32_t* rdx_7 = nullptr
        
        do
            i_3 -= *(rdx_7 + r8)
            rax_15 += 1
            rdx_7 = rax_15 << 2
            r9_3 += 1
        while (i_3 s>= *(rdx_7 + r8))
    
    rdx_9 = sx.q(i_3) + *(r10 + (sx.q(r9_3) << 3))

uint32_t rax_17 = zx.d(rax[4])
int32_t* var_90 = rdx_9
uint32_t rax_18 = rax_17 u>> 0xf
int32_t i_4 = rax_17 & 0x7fff
uint32_t var_a0 = rax_18
rax_18.b = not.b(rax_18.b)
*(arg2 + 0x10) = &rax[5]
int32_t* r13_1

if ((rax_18.b & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * i_4) + *(arg2 + 0x70)
else
    int32_t r9_4 = 0
    
    if (i_4 s>= *r8)
        int64_t rax_19 = 0
        int32_t* rdx_12 = nullptr
        
        do
            i_4 -= *(rdx_12 + r8)
            rax_19 += 1
            rdx_12 = rax_19 << 2
            r9_4 += 1
        while (i_4 s>= *(rdx_12 + r8))
    
    r13_1 = sx.q(i_4) + *(r10 + (sx.q(r9_4) << 3))

uint32_t rax_21 = zx.d(rax[5])
uint32_t rbx_1 = rax_21 u>> 0xf
*(arg2 + 0x10) = &rax[6]
int32_t i_5 = rax_21 & 0x7fff
int32_t* r14_1

if ((not.b(rbx_1.b) & 1) == 0)
    r14_1 = zx.q(*(arg2 + 0x80) * i_5) + *(arg2 + 0x70)
else
    int32_t r9_5 = 0
    
    if (i_5 s>= *r8)
        int64_t rax_23 = 0
        int32_t* rdx_13 = nullptr
        
        do
            i_5 -= *(rdx_13 + r8)
            rax_23 += 1
            rdx_13 = rax_23 << 2
            r9_5 += 1
        while (i_5 s>= *(rdx_13 + r8))
    
    r14_1 = sx.q(i_5) + *(r10 + (sx.q(r9_5) << 3))

uint32_t rcx_7 = zx.d(rax[6])
*(arg2 + 0x10) = &rax[7]
int32_t rcx_8 = rcx_7 & 0x7fff
int32_t var_80 = rcx_8
int32_t rax_25
rax_25.b = rcx_8 != 0x7fff
float* var_70
void var_78

if (rcx_8 == 0x7fff)
    var_70 = &var_78
else
    var_70 = zx.q(rcx_8 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_11 = zx.d(rax[7])
*(arg2 + 0x10) = &rax[8]
int32_t rdx_16 = rcx_11 & 0x7fff
int32_t var_68 = rdx_16
int32_t rax_27
rax_27.b = rdx_16 != 0x7fff
int64_t result_1
void var_60

if (rdx_16 == 0x7fff)
    result_1 = &var_60
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_16) + *(arg2 + 0x70)

if (sub_140d3c6e0(rsi) != 0)
    sub_142591550()

void* rax_29 = *(rsi + 0x58)
void* rbp = nullptr
void* var_88 = nullptr

if (rax_29 != 0)
    rbp = *(**(rax_29 + 0x58) + (sx.q(rsi[0x1a]) << 3))
    var_88 = rbp
    
    if (rsi[0x86].b != 0)
        void* rax_32 = sub_140d3c6e0(rsi)
        
        if (rax_32 != 0)
            void* rax_33 = sub_142591550()
            void* rcx_18 = *(rax_32 + 0x10)
            int64_t rdx_17 = sx.q(*(rax_33 + 0x38))
            
            if (rdx_17.d s<= *(rcx_18 + 0x38)
                    && *(*(rcx_18 + 0x30) + (rdx_17 << 3)) == rax_33 + 0x30
                    && *(rax_32 + 0x430) != 0)
                sub_141f66050(rax_32, rsi[0x1a])

int64_t* rsi_1 = *(rbp + 0x18)
uint32_t i_7 = 0
int32_t temp0
int32_t result_2
temp0:result_2 = muls.dp.d(0x55555556, (*(*rsi_1 + 0x58))(rsi_1))
uint64_t result = zx.q(result_2)
int32_t rbp_2 = *(rbp + 0xa8) - 1
int32_t r12_3 = (temp0 u>> 0x1f) - 1 + temp0

if (*(arg2 + 0x40) s> 0)
    var_a8.q = zx.q(var_a8.b) << 2
    var_a0.q = zx.q(var_a0.b) << 2
    uint32_t i_6
    
    do
        int32_t rcx_23 = *r15_1
        uint64_t rax_47
        
        if (rcx_23 s>= 0)
            rax_47 = zx.q(r12_3)
            
            if (rcx_23 s< r12_3)
                rax_47 = zx.q(rcx_23)
        else
            rax_47 = 0
        
        int32_t rbx_3 = (rax_47 * 3).d
        uint32_t rax_49 = (*(*rsi_1 + 0x68))(rsi_1, zx.q(rbx_3))
        int64_t r8_1 = *rsi_1
        uint32_t rax_50 = (*(r8_1 + 0x68))(rsi_1, zx.q(rbx_3 + 1), r8_1)
        int64_t r8_2 = *rsi_1
        int32_t rax_51 = (*(r8_2 + 0x68))(rsi_1, zx.q(rbx_3 + 2), r8_2)
        int32_t rcx_27 = *r14_1
        uint64_t rdx_23
        
        if (rcx_27 s>= 0)
            rdx_23 = zx.q(rbp_2)
            
            if (rcx_27 s< rbp_2)
                rdx_23 = zx.q(rcx_27)
        else
            rdx_23 = 0
        
        float zmm5_1 = *r13_1
        r15_1 = &r15_1[zx.q(arg_18.b)]
        int64_t r10_1 = *(var_88 + 0x98)
        uint64_t rcx_28 = zx.q(*(var_88 + 0xa8))
        r13_1 += var_a0.q
        r14_1 = &r14_1[zx.q(rbx_1.b)]
        int64_t rax_55 = zx.q(rax_51) * rcx_28 + rdx_23
        int64_t r9_8 = zx.q(rax_49) * rcx_28 + rdx_23
        float zmm3 = *var_90
        float zmm4_1 = zmm5_1 f* *(r10_1 + (rax_55 << 3))
        int64_t r8_5 = zx.q(rax_50) * rcx_28 + rdx_23
        int32_t* rdx_24 = var_98
        var_90 += var_a8.q
        float zmm2 = *rdx_24
        var_98 = &rdx_24[zx.q(arg_20.b)]
        i_6 = i_7 + 1
        i_7 = i_6
        zmm5_1 = zmm5_1 f* *(r10_1 + (rax_55 << 3) + 4) + zmm3 f* *(r10_1 + (r8_5 << 3) + 4)
            + zmm2 f* *(r10_1 + (r9_8 << 3) + 4)
        *var_70 = zmm4_1 + zmm3 f* *(r10_1 + (r8_5 << 3)) + zmm2 f* *(r10_1 + (r9_8 << 3))
        *result_1 = zmm5_1
        result = result_1
        var_70 = &var_70[sx.q(rax_25)]
        result_1 = result + (sx.q(rax_27) << 2)
    while (i_6 s< *(arg2 + 0x40))

return result
