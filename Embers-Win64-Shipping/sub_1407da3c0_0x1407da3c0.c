// 函数: sub_1407da3c0
// 地址: 0x1407da3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t var_88 = 0
int32_t* r8 = *(arg2 + 0x20)
int16_t rcx = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
uint32_t r9 = zx.d(rcx)
int32_t rax_1 = *r8

if (r9 s>= rax_1)
    int64_t rcx_1 = 0
    
    do
        r9 -= rax_1
        rcx_1 += 1
        rax_1 = r8[rcx_1]
        rdx += 1
    while (r9 s>= rax_1)

int64_t r10 = *(arg2 + 0x18)
void* rbx = *(*(arg2 + 0x38) + (sx.q(*(*(r10 + (sx.q(rdx) << 3)) + sx.q(r9))) << 3))
uint32_t rax_5 = zx.d(rax[1])
uint8_t r12_1 = (rax_5 u>> 0xf).b
*(arg2 + 0x10) = &rax[2]
int32_t rcx_4 = rax_5 & 0x7fff
int32_t* var_e8

if ((not.b(r12_1) & 1) == 0)
    var_e8 = zx.q(*(arg2 + 0x80) * rcx_4) + *(arg2 + 0x70)
else
    int32_t rax_7 = *r8
    int32_t r9_1 = 0
    
    if (rcx_4 s>= rax_7)
        int64_t rdx_2 = 0
        
        do
            rcx_4 -= rax_7
            rdx_2 += 1
            rax_7 = r8[rdx_2]
            r9_1 += 1
        while (rcx_4 s>= rax_7)
    
    var_e8 = sx.q(rcx_4) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_12 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
uint8_t r15_1 = (rax_12 u>> 0xf).b
int32_t rcx_6 = rax_12 & 0x7fff
void* rdx_7

if ((not.b(r15_1) & 1) == 0)
    rdx_7 = zx.q(*(arg2 + 0x80) * rcx_6) + *(arg2 + 0x70)
else
    int32_t rax_14 = *r8
    int32_t r9_2 = 0
    
    if (rcx_6 s>= rax_14)
        int64_t rdx_5 = 0
        
        do
            rcx_6 -= rax_14
            rdx_5 += 1
            rax_14 = r8[rdx_5]
            r9_2 += 1
        while (rcx_6 s>= rax_14)
    
    rdx_7 = sx.q(rcx_6) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rax_16 = zx.d(rax[3])
void* var_d0 = rdx_7
uint8_t r14_1 = (rax_16 u>> 0xf).b
*(arg2 + 0x10) = &rax[4]
int32_t i = rax_16 & 0x7fff
void* rdx_12

if ((not.b(r14_1) & 1) == 0)
    rdx_12 = zx.q(*(arg2 + 0x80) * i) + *(arg2 + 0x70)
else
    int32_t r9_3 = 0
    
    if (i s>= *r8)
        int64_t rax_18 = 0
        int64_t rdx_10 = 0
        
        do
            i -= *(r8 + rdx_10)
            rax_18 += 1
            rdx_10 = rax_18 << 2
            r9_3 += 1
        while (i s>= *(r8 + rdx_10))
    
    rdx_12 = sx.q(i) + *(r10 + (sx.q(r9_3) << 3))

uint32_t rax_20 = zx.d(rax[4])
void* var_c8 = rdx_12
uint8_t rsi_1 = (rax_20 u>> 0xf).b
*(arg2 + 0x10) = &rax[5]
int32_t rcx_9 = rax_20 & 0x7fff
void* rdx_17

if ((not.b(rsi_1) & 1) == 0)
    rdx_17 = zx.q(*(arg2 + 0x80) * rcx_9) + *(arg2 + 0x70)
else
    int32_t rax_22 = *r8
    int32_t r9_4 = 0
    
    if (rcx_9 s>= rax_22)
        int64_t rdx_15 = 0
        
        do
            rcx_9 -= rax_22
            rdx_15 += 1
            rax_22 = r8[rdx_15]
            r9_4 += 1
        while (rcx_9 s>= rax_22)
    
    rdx_17 = sx.q(rcx_9) + *(r10 + (sx.q(r9_4) << 3))

uint32_t rax_24 = zx.d(rax[5])
void* var_c0 = rdx_17
uint8_t rdi_1 = (rax_24 u>> 0xf).b
*(arg2 + 0x10) = &rax[6]
int32_t rcx_11 = rax_24 & 0x7fff
int32_t* var_e0

if ((not.b(rdi_1) & 1) == 0)
    var_e0 = zx.q(*(arg2 + 0x80) * rcx_11) + *(arg2 + 0x70)
else
    int32_t rax_26 = *r8
    int64_t rdx_20 = 0
    int32_t r9_5 = 0
    
    while (rcx_11 s>= rax_26)
        rcx_11 -= rax_26
        rdx_20 += 1
        rax_26 = r8[rdx_20]
        r9_5 += 1
    
    var_e0 = sx.q(rcx_11) + *(r10 + (sx.q(r9_5) << 3))

uint32_t rcx_12 = zx.d(rax[6])
*(arg2 + 0x10) = &rax[7]
int32_t rcx_13 = rcx_12 & 0x7fff
int32_t var_b8 = rcx_13
int32_t r9_6
r9_6.b = rcx_13 != 0x7fff
int32_t var_b4 = r9_6
int32_t* rdx_25
void var_b0

if (rcx_13 == 0x7fff)
    rdx_25 = &var_b0
else
    rdx_25 = zx.q(*(arg2 + 0x80) * rcx_13) + *(arg2 + 0x70)
int32_t* var_a8 = rdx_25
uint32_t rcx_14 = zx.d(rax[7])
*(arg2 + 0x10) = &rax[8]
int32_t r8_3 = rcx_14 & 0x7fff
int32_t var_a0 = r8_3
int64_t result
result.b = r8_3 != 0x7fff
int32_t result_1 = result.d
void* var_90

if (r8_3 == 0x7fff)
    void var_98
    result = &var_98
    var_90 = &var_98
else
    var_90 = zx.q(*(arg2 + 0x80) * r8_3) + *(arg2 + 0x70)

void* rbx_1 = *(rbx + 8)

if (rbx_1 != 0)
    int64_t* rbx_2 = *(rbx_1 + 0x50)
    int32_t rdx_27 = *(rbx + 0x17c)
    uint32_t rax_34 = zx.d(*(rbx_2 + 0x5f))
    
    if (rax_34 s>= rdx_27)
        rdx_27 = rax_34
    
    int32_t rax_35 = sub_1423647f0(rbx_2, rdx_27)
    int64_t* rbx_4 = *(*rbx_2 + (sx.q(rax_35) << 3))
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    void* var_80
    sub_14229e7e0(&rbx_4[0x2f], &var_80)
    int32_t var_78
    int32_t temp2_1
    int32_t result_2
    temp2_1:result_2 = muls.dp.d(0x55555556, var_78)
    result = zx.q(result_2)
    int32_t rcx_25 = var_78 s/ 3
    int32_t var_d8_1 = rcx_25
    
    if (*(arg2 + 0x40) s> 0)
        uint64_t r8_5 = zx.q(data_14401b1a0)
        TEB* gsbase
        void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
        int128_t zmm6
        int128_t var_48_1 = zmm6
        
        do
            int64_t rcx_26 = sx.q(mods.dp.d(sx.q(*var_e8), rcx_25) * 3)
            void* rax_50 = var_80
            char var_74
            uint32_t r10_1
            
            if (var_74 == 0)
                r10_1 = zx.d(*(rax_50 + (rcx_26 << 1)))
            else
                r10_1 = *(rax_50 + (rcx_26 << 2))
            
            void* arg_10
            arg_10.d = r10_1
            uint32_t r15_2
            
            if (var_74 == 0)
                r15_2 = zx.d(*(rax_50 + (rcx_26 << 1) + 2))
            else
                r15_2 = *(rax_50 + (rcx_26 << 2) + 4)
            
            uint32_t rdx_33
            
            if (var_74 == 0)
                rdx_33 = zx.d(*(rax_50 + (rcx_26 << 1) + 4))
            else
                rdx_33 = *(rax_50 + (rcx_26 << 2) + 8)
            
            int64_t r14_4 = zx.q(rdx_33) * (zx.q(rbx_4[0x1d].d) << 2) + rbx_4[0x1b]
            uint64_t r12_2 = zx.q(*var_e0)
            uint32_t rdi_2 = zx.d(*(r14_4 + (r12_2 << 2) + 2))
            int32_t rsi_4 = (rdi_2 & 0xffff8000) << 0x10
            int16_t rax_54 = rdi_2.w & 0x7c00
            int32_t var_f0_1
            
            if (rax_54 == 0)
                int32_t rdi_3 = rdi_2 & 0x3ff
                
                if (rdi_3 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r8_5 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    float zmm0 = logf(float.s(zx.q(rdi_3))) f* data_143cda910
                    ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                    var_f0_1 = (rdi_3 << ((0xa - int.d(zmm0)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0))) << 0x17 & 0x7f800000) | rsi_4
                else
                    var_f0_1 = rsi_4
            else if (rax_54 != 0x7c00)
                var_f0_1 = ((rdi_2 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_2 & 0x3ff) << 0xd | rsi_4
            else
                var_f0_1 = rsi_4 | 0x477fe000
            
            uint32_t rdi_10 = zx.d(*(r14_4 + (r12_2 << 2)))
            int32_t rsi_8 = (rdi_10 & 0xffff8000) << 0x10
            int16_t rax_69 = rdi_10.w & 0x7c00
            int32_t arg_20
            
            if (rax_69 == 0)
                int32_t rdi_11 = rdi_10 & 0x3ff
                
                if (rdi_11 != 0)
                    if (data_143cda914 s>
                            *(0x14 + *(ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    int32_t rdx_35 = 0xa - int.d(logf(float.s(zx.q(rdi_11))) f* data_143cda910)
                    arg_20 = (rdi_11 << (rdx_35.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_35) << 0x17 & 0x7f800000) | rsi_8
                else
                    arg_20 = rsi_8
            else if (rax_69 != 0x7c00)
                arg_20 = ((rdi_10 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_10 & 0x3ff) << 0xd | rsi_8
            else
                arg_20 = rsi_8 | 0x477fe000
            
            uint64_t r15_3 = zx.q(data_14401b1a0)
            int64_t r14_7 = zx.q(r15_2) * (zx.q(rbx_4[0x1d].d) << 2) + rbx_4[0x1b]
            uint32_t rdi_18 = zx.d(*(r14_7 + (r12_2 << 2) + 2))
            int32_t rsi_12 = (rdi_18 & 0xffff8000) << 0x10
            int16_t rax_87 = rdi_18.w & 0x7c00
            int32_t var_f4_1
            
            if (rax_87 == 0)
                int32_t rdi_19 = rdi_18 & 0x3ff
                
                if (rdi_19 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r15_3 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    int32_t rdx_36 = 0xa - int.d(logf(float.s(zx.q(rdi_19))) f* data_143cda910)
                    var_f4_1 = (rdi_19 << (rdx_36.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_36) << 0x17 & 0x7f800000) | rsi_12
                else
                    var_f4_1 = rsi_12
            else if (rax_87 != 0x7c00)
                var_f4_1 =
                    ((rdi_18 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_18 & 0x3ff) << 0xd | rsi_12
            else
                var_f4_1 = rsi_12 | 0x477fe000
            
            uint32_t rdi_26 = zx.d(*(r14_7 + (r12_2 << 2)))
            int32_t rsi_16 = (rdi_26 & 0xffff8000) << 0x10
            int16_t rax_103 = rdi_26.w & 0x7c00
            int32_t arg_18
            
            if (rax_103 == 0)
                int32_t rdi_27 = rdi_26 & 0x3ff
                
                if (rdi_27 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r15_3 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    int32_t rdx_37 = 0xa - int.d(logf(float.s(zx.q(rdi_27))) f* data_143cda910)
                    arg_18 = (rdi_27 << (rdx_37.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_37) << 0x17 & 0x7f800000) | rsi_16
                else
                    arg_18 = rsi_16
            else if (rax_103 != 0x7c00)
                arg_18 = ((rdi_26 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_26 & 0x3ff) << 0xd | rsi_16
            else
                arg_18 = rsi_16 | 0x477fe000
            
            int64_t r14_10 = zx.q(arg_10.d) * (zx.q(rbx_4[0x1d].d) << 2) + rbx_4[0x1b]
            uint32_t rdi_34 = zx.d(*(r14_10 + (r12_2 << 2) + 2))
            int32_t rsi_20 = (rdi_34 & 0xffff8000) << 0x10
            int16_t rax_121 = rdi_34.w & 0x7c00
            int32_t var_f8_1
            
            if (rax_121 == 0)
                int32_t rdi_35 = rdi_34 & 0x3ff
                
                if (rdi_35 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r15_3 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    int32_t rdx_38 = 0xa - int.d(logf(float.s(zx.q(rdi_35))) f* data_143cda910)
                    var_f8_1 = (rdi_35 << (rdx_38.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_38) << 0x17 & 0x7f800000) | rsi_20
                else
                    var_f8_1 = rsi_20
            else if (rax_121 != 0x7c00)
                var_f8_1 =
                    ((rdi_34 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_34 & 0x3ff) << 0xd | rsi_20
            else
                var_f8_1 = rsi_20 | 0x477fe000
            
            uint32_t rdi_42 = zx.d(*(r14_10 + (r12_2 << 2)))
            int32_t rsi_24 = (rdi_42 & 0xffff8000) << 0x10
            int16_t rax_137 = rdi_42.w & 0x7c00
            
            if (rax_137 == 0)
                int32_t rdi_43 = rdi_42 & 0x3ff
                
                if (rdi_43 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r15_3 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    int32_t rdx_39 = 0xa - int.d(logf(float.s(zx.q(rdi_43))) f* data_143cda910)
                    arg_10.d = (rdi_43 << (rdx_39.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_39) << 0x17 & 0x7f800000) | rsi_24
                else
                    arg_10.d = rsi_24
            else if (rax_137 != 0x7c00)
                arg_10.d =
                    ((rdi_42 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_42 & 0x3ff) << 0xd | rsi_24
            else
                arg_10.d = rsi_24 | 0x477fe000
            
            float* rdx_40 = var_c8
            int32_t* r8_6 = var_d0
            float* rcx_33 = var_c0
            ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
            zmm6.d = arg_10.d.d f* *r8_6
            zmm6.d = zmm6.d f+ arg_18 * *rdx_40
            var_d0 = &r8_6[zx.q(r15_1)]
            r8_5 = zx.q(data_14401b1a0)
            zmm6.d = zmm6.d f+ arg_20 f* *rcx_33
            var_c8 = &rdx_40[zx.q(r14_1)]
            float zmm3 = var_f8_1 f* *r8_6 + var_f4_1 * *rdx_40
            int32_t zmm1 = var_f0_1 f* *rcx_33
            var_c0 = &rcx_33[zx.q(rsi_1)]
            *var_a8 = zmm6.d
            *var_90 = zmm3 f+ zmm1
            var_e8 = &var_e8[zx.q(r12_1)]
            var_e0 = &var_e0[zx.q(rdi_1)]
            var_a8 = &var_a8[sx.q(var_b4)]
            result = zx.q(var_88 + 1)
            var_90 += sx.q(result_1) << 2
            rcx_25 = var_d8_1
            var_88 = result.d
        while (result.d s< *(arg2 + 0x40))
    
    if (rbx_4 != 0)
        result = zx.q(rbx_4[1].d)
        rbx_4[1].d -= 1
        
        if (result.d == 1)
            return (**rbx_4)(rbx_4, 1)
else
    int32_t r8_4 = 0
    
    if (*(arg2 + 0x40) s> 0)
        while (true)
            r8_4 += 1
            int32_t* var_a8_1 = &rdx_25[sx.q(r9_6)]
            *rdx_25 = 0
            int32_t* rdx_26 = var_90
            result = sx.q(result_1)
            var_90 = &rdx_26[result]
            *rdx_26 = 0
            
            if (r8_4 s>= *(arg2 + 0x40))
                break
            
            rdx_25 = var_a8_1
            r9_6 = var_b4

return result
