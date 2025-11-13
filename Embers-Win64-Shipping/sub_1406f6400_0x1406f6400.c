// 函数: sub_1406f6400
// 地址: 0x1406f6400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t rbx = 0
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
int32_t* r15 = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(r9) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t r12_1 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
int32_t* rsi_1

if ((not.b(r12_1) & 1) == 0)
    rsi_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
else
    int32_t r9_1 = 0
    
    if (i_1 s>= *r8)
        int64_t rax_7 = 0
        int64_t rdx_1 = 0
        
        do
            i_1 -= *(r8 + rdx_1)
            rax_7 += 1
            rdx_1 = rax_7 << 2
            r9_1 += 1
        while (i_1 s>= *(r8 + rdx_1))
    
    rsi_1 = sx.q(i_1) + *(r11 + (sx.q(r9_1) << 3))

int32_t rcx_4 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
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
int32_t rcx_12 = zx.d(rax[4]) & 0x7fff
*(arg2 + 0x10) = &rax[5]
int32_t var_58 = rcx_12
int32_t rax_11
rax_11.b = rcx_12 != 0x7fff
void* var_48
void var_50

if (rcx_12 == 0x7fff)
    var_48 = &var_50
else
    var_48 = zx.q(rcx_12 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_15 = zx.d(rax[5])
*(arg2 + 0x10) = &rax[6]
int32_t rdx_6 = rcx_15 & 0x7fff
int32_t var_40 = rdx_6
int32_t result_1
result_1.b = rdx_6 != 0x7fff
void* var_30
void var_38

if (rdx_6 == 0x7fff)
    var_30 = &var_38
else
    var_30 = zx.q(*(arg2 + 0x80) * rdx_6) + *(arg2 + 0x70)

if (sub_140d3c6e0(r15) != 0)
    sub_142591550()

void* rax_14 = *(r15 + 0x58)
int64_t* r14 = nullptr
void* rdx_7 = nullptr

if (rax_14 != 0)
    r14 = *(**(rax_14 + 0x58) + (sx.q(r15[0x1a]) << 3))
    
    if (r15[0x86].b != 0)
        void* rax_17 = sub_140d3c6e0(r15)
        void* rax_18
        void* rcx_22
        int64_t rdx_8
        
        if (rax_17 != 0)
            rax_18 = sub_142591550()
            rcx_22 = *(rax_17 + 0x10)
            rdx_8 = sx.q(*(rax_18 + 0x38))
        
        if (rax_17 == 0 || rdx_8.d s> *(rcx_22 + 0x38)
                || *(*(rcx_22 + 0x30) + (rdx_8 << 3)) != rax_18 + 0x30 || *(rax_17 + 0x430) == 0)
            rdx_7 = &r14[0x27]
        else
            rdx_7 = sub_141f66050(rax_17, r15[0x1a])
        
        rbx = 0

int64_t* r15_1

if (rax_14 == 0 || r14 == 0)
    r15_1 = nullptr
else
    r15_1 = r14[3]

uint64_t result = zx.q(*(arg2 + 0x40))

if (rdx_7 == 0)
    int32_t i_2 = 0
    
    if (result.d s> 0)
        do
            void* rdx_16 = var_78
            i_2 += 1
            var_78 = rdx_16 + (sx.q(rax_9) << 2)
            *rdx_16 = 0xffffffff
            void* rdx_17 = var_60
            var_60 = rdx_17 + (sx.q(rax_10) << 2)
            *rdx_17 = 0
            void* rdx_18 = var_48
            var_48 = rdx_18 + (sx.q(rax_11) << 2)
            *rdx_18 = 0
            void* rdx_19 = var_30
            result = sx.q(result_1)
            var_30 = rdx_19 + (result << 2)
            *rdx_19 = 0
        while (i_2 s< *(arg2 + 0x40))
else
    int32_t i_3 = 0
    
    if (result.d s> 0)
        do
            int32_t rdx_10 = *rsi_1
            int64_t rax_21 = 0
            int64_t r9_2 = sx.q(r14[1].d)
            rsi_1 = &rsi_1[zx.q(r12_1)]
            
            if (r9_2 s> 0)
                void* r10_2 = *r14
                int32_t* rcx_25 = r10_2 + 8
                
                do
                    int32_t r8_1 = *rcx_25
                    
                    if (r8_1 u> rdx_10)
                        rbx = *(rax_21 * 0xe8 + r10_2 + 4) + rdx_10
                        break
                    
                    rdx_10 -= r8_1
                    rax_21 += 1
                    rcx_25 = &rcx_25[0x3a]
                while (rax_21 s< r9_2)
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = muls.dp.d(0x55555556, (*(*r15_1 + 0x58))(r15_1))
            int32_t r8_5 = (temp0_1 u>> 0x1f) - 1 + temp0_1
            
            if (rbx s>= 0)
                if (rbx s< r8_5)
                    r8_5 = rbx
                
                rbx = 0
            else
                rbx = 0
                r8_5 = 0
            
            int32_t* rdx_12 = var_78
            i_3 += 1
            var_78 = &rdx_12[sx.q(rax_9)]
            *rdx_12 = r8_5
            int32_t* rdx_13 = var_60
            var_60 = &rdx_13[sx.q(rax_10)]
            *rdx_13 = 0x3eaaaaab
            int32_t* rdx_14 = var_48
            var_48 = &rdx_14[sx.q(rax_11)]
            *rdx_14 = 0x3eaaaaab
            int32_t* rdx_15 = var_30
            result = sx.q(result_1)
            var_30 = &rdx_15[result]
            *rdx_15 = 0x3eaaaaab
        while (i_3 s< *(arg2 + 0x40))

return result
