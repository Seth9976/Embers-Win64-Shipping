// 函数: sub_1407382a0
// 地址: 0x1407382a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t* r8 = *(arg2 + 0x20)
int16_t i_8 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
uint32_t i = zx.d(i_8)

if (i s>= *r8)
    int64_t rax_1 = 0
    int32_t* rcx = nullptr
    
    do
        i -= *(rcx + r8)
        rax_1 += 1
        rcx = rax_1 << 2
        rdx += 1
    while (i s>= *(rcx + r8))

int64_t r10 = *(arg2 + 0x18)
int32_t* rdi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r10 + (sx.q(rdx) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t r12_1 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
int32_t* var_e0

if ((not.b(r12_1) & 1) == 0)
    var_e0 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
else
    int32_t r9 = 0
    
    if (i_1 s>= *r8)
        int64_t rax_7 = 0
        int32_t* rdx_2 = nullptr
        
        do
            i_1 -= *(rdx_2 + r8)
            rax_7 += 1
            rdx_2 = rax_7 << 2
            r9 += 1
        while (i_1 s>= *(rdx_2 + r8))
    
    var_e0 = sx.q(i_1) + *(r10 + (sx.q(r9) << 3))

uint32_t rax_12 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
uint8_t r15_1 = (rax_12 u>> 0xf).b
int32_t i_2 = rax_12 & 0x7fff
void* rdx_7

if ((not.b(r15_1) & 1) == 0)
    rdx_7 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
else
    int32_t r9_1 = 0
    
    if (i_2 s>= *r8)
        int64_t rax_14 = 0
        int32_t* rdx_5 = nullptr
        
        do
            i_2 -= *(rdx_5 + r8)
            rax_14 += 1
            rdx_5 = rax_14 << 2
            r9_1 += 1
        while (i_2 s>= *(rdx_5 + r8))
    
    rdx_7 = sx.q(i_2) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_16 = zx.d(rax[3])
void* var_c8 = rdx_7
uint8_t r14_1 = (rax_16 u>> 0xf).b
*(arg2 + 0x10) = &rax[4]
int32_t i_3 = rax_16 & 0x7fff
void* rdx_12

if ((not.b(r14_1) & 1) == 0)
    rdx_12 = zx.q(*(arg2 + 0x80) * i_3) + *(arg2 + 0x70)
else
    int32_t r9_2 = 0
    
    if (i_3 s>= *r8)
        int64_t rax_18 = 0
        int32_t* rdx_10 = nullptr
        
        do
            i_3 -= *(rdx_10 + r8)
            rax_18 += 1
            rdx_10 = rax_18 << 2
            r9_2 += 1
        while (i_3 s>= *(rdx_10 + r8))
    
    rdx_12 = sx.q(i_3) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rax_20 = zx.d(rax[4])
void* var_c0 = rdx_12
uint8_t rbp_1 = (rax_20 u>> 0xf).b
*(arg2 + 0x10) = &rax[5]
int32_t i_4 = rax_20 & 0x7fff
float* rdx_17

if ((not.b(rbp_1) & 1) == 0)
    rdx_17 = zx.q(*(arg2 + 0x80) * i_4) + *(arg2 + 0x70)
else
    int32_t r9_3 = 0
    
    if (i_4 s>= *r8)
        int64_t rax_22 = 0
        int32_t* rdx_15 = nullptr
        
        do
            i_4 -= *(rdx_15 + r8)
            rax_22 += 1
            rdx_15 = rax_22 << 2
            r9_3 += 1
        while (i_4 s>= *(rdx_15 + r8))
    
    rdx_17 = sx.q(i_4) + *(r10 + (sx.q(r9_3) << 3))

uint32_t rax_24 = zx.d(rax[5])
float* var_b8 = rdx_17
uint8_t rsi_1 = (rax_24 u>> 0xf).b
*(arg2 + 0x10) = &rax[6]
int32_t i_5 = rax_24 & 0x7fff
int32_t* var_d8

if ((not.b(rsi_1) & 1) == 0)
    var_d8 = zx.q(*(arg2 + 0x80) * i_5) + *(arg2 + 0x70)
else
    int32_t r9_4 = 0
    
    if (i_5 s>= *r8)
        int64_t rax_26 = 0
        int32_t* rdx_20 = nullptr
        
        do
            i_5 -= *(rdx_20 + r8)
            rax_26 += 1
            rdx_20 = rax_26 << 2
            r9_4 += 1
        while (i_5 s>= *(rdx_20 + r8))
    
    var_d8 = sx.q(i_5) + *(r10 + (sx.q(r9_4) << 3))

uint32_t rcx_7 = zx.d(rax[6])
*(arg2 + 0x10) = &rax[7]
int32_t rcx_8 = rcx_7 & 0x7fff
int32_t var_b0 = rcx_8
int32_t rax_31
rax_31.b = rcx_8 != 0x7fff
int32_t* var_a0
void var_a8

if (rcx_8 == 0x7fff)
    var_a0 = &var_a8
else
    var_a0 = zx.q(rcx_8 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_11 = zx.d(rax[7])
*(arg2 + 0x10) = &rax[8]
int32_t rdx_23 = rcx_11 & 0x7fff
int32_t var_98 = rdx_23
int32_t rax_33
rax_33.b = rdx_23 != 0x7fff
int64_t result_1
void var_90

if (rdx_23 == 0x7fff)
    result_1 = &var_90
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_23) + *(arg2 + 0x70)

if (sub_140d3c6e0(rdi) != 0)
    sub_142591550()

void* rax_35 = *(rdi + 0x58)
void* var_e8 = nullptr

if (rax_35 != 0)
    var_e8 = *(**(rax_35 + 0x58) + (sx.q(rdi[0x1a]) << 3))
    
    if (rdi[0x86].b != 0)
        void* rax_38 = sub_140d3c6e0(rdi)
        
        if (rax_38 != 0)
            void* rax_39 = sub_142591550()
            void* rcx_18 = *(rax_38 + 0x10)
            int64_t rdx_25 = sx.q(*(rax_39 + 0x38))
            
            if (rdx_25.d s<= *(rcx_18 + 0x38)
                    && *(*(rcx_18 + 0x30) + (rdx_25 << 3)) == rax_39 + 0x30
                    && *(rax_38 + 0x430) != 0)
                sub_141f66050(rax_38, rdi[0x1a])

int64_t* rcx_21 = *(var_e8 + 0x18)
int32_t i_7 = 0
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, (*(*rcx_21 + 0x58))(rcx_21))
int32_t rdx_28 = temp0 + (temp0 u>> 0x1f) - 1
uint64_t result = zx.q(*(var_e8 + 0xa8) - 1)
int32_t var_cc = rdx_28
int32_t var_d0 = result.d

if (*(arg2 + 0x40) s> 0)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int32_t i_6
    
    do
        int32_t rcx_23 = *var_e0
        uint64_t rax_58
        
        if (rcx_23 s>= 0)
            rax_58 = zx.q(rdx_28)
            
            if (rcx_23 s< rdx_28)
                rax_58 = zx.q(rcx_23)
        else
            rax_58 = 0
        
        int32_t rbx_2 = (rax_58 * 3).d
        int32_t rax_60 = (*(*rcx_21 + 0x68))(rcx_21, zx.q(rbx_2))
        int64_t r8_3 = *rcx_21
        int32_t rax_61 = (*(r8_3 + 0x68))(rcx_21, zx.q(rbx_2 + 1), r8_3)
        int64_t r8_4 = *rcx_21
        int32_t rax_62 = (*(r8_4 + 0x68))(rcx_21, zx.q(rbx_2 + 2), r8_4)
        int32_t rdx_32 = *var_d8
        uint64_t rcx_27
        
        if (rdx_32 s>= 0)
            rcx_27 = zx.q(var_d0)
            
            if (rdx_32 s< rcx_27.d)
                rcx_27 = zx.q(rdx_32)
        else
            rcx_27 = 0
        
        TEB* gsbase
        void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
        uint64_t r14_2 = zx.q(rcx_27.d)
        int64_t rsi_5 = zx.q(rax_60) * (zx.q(*(var_e8 + 0xa8)) << 2) + *(var_e8 + 0x98)
        uint32_t rbx_3 = zx.d(*(rsi_5 + (rcx_27 << 2) + 2))
        int32_t rdi_5 = (rbx_3 & 0xffff8000) << 0x10
        int32_t var_f0_1
        uint64_t r15_2
        
        if ((0x7c00 & rbx_3.w) != 0)
            if ((rbx_3.w & 0x7c00) != 0x7c00)
                var_f0_1 = ((rbx_3 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_3 & 0x3ff) << 0xd | rdi_5
            else
                var_f0_1 = rdi_5 | 0x477fe000
            
            r15_2 = zx.q(data_14401b1a0)
        else
            int32_t rbx_4 = rbx_3 & 0x3ff
            
            if (rbx_4 != 0)
                r15_2 = zx.q(data_14401b1a0)
                
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_2 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                int32_t rdx_34 = 0xa - int.d(logf(float.s(zx.q(rbx_4))) f* data_143cda910)
                var_f0_1 = (rbx_4 << (rdx_34.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_34) << 0x17 & 0x7f800000) | rdi_5
            else
                var_f0_1 = rdi_5
                r15_2 = zx.q(data_14401b1a0)
        
        uint32_t rbx_11 = zx.d(*(rsi_5 + (r14_2 << 2)))
        int32_t rdi_9 = (rbx_11 & 0xffff8000) << 0x10
        int32_t var_f4_1
        
        if ((0x7c00 & rbx_11.w) == 0)
            int32_t rbx_12 = rbx_11 & 0x3ff
            
            if (rbx_12 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_2 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                int32_t rdx_35 = 0xa - int.d(logf(float.s(zx.q(rbx_12))) f* data_143cda910)
                var_f4_1 = (rbx_12 << (rdx_35.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_35) << 0x17 & 0x7f800000) | rdi_9
            else
                var_f4_1 = rdi_9
        else if ((rbx_11.w & 0x7c00) != 0x7c00)
            var_f4_1 = ((rbx_11 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_11 & 0x3ff) << 0xd | rdi_9
        else
            var_f4_1 = rdi_9 | 0x477fe000
        
        int64_t rsi_8 = zx.q(rax_61) * (zx.q(*(var_e8 + 0xa8)) << 2) + *(var_e8 + 0x98)
        uint32_t rbx_19 = zx.d(*(rsi_8 + (r14_2 << 2) + 2))
        int32_t rdi_13 = (rbx_19 & 0xffff8000) << 0x10
        int32_t var_f8_1
        
        if ((0x7c00 & rbx_19.w) == 0)
            int32_t rbx_20 = rbx_19 & 0x3ff
            
            if (rbx_20 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_2 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                int32_t rdx_37 = 0xa - int.d(logf(float.s(zx.q(rbx_20))) f* data_143cda910)
                var_f8_1 = (rbx_20 << (rdx_37.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_37) << 0x17 & 0x7f800000) | rdi_13
            else
                var_f8_1 = rdi_13
        else if ((rbx_19.w & 0x7c00) != 0x7c00)
            var_f8_1 = ((rbx_19 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_19 & 0x3ff) << 0xd | rdi_13
        else
            var_f8_1 = rdi_13 | 0x477fe000
        
        uint32_t rbx_27 = zx.d(*(rsi_8 + (r14_2 << 2)))
        int32_t rdi_17 = (rbx_27 & 0xffff8000) << 0x10
        int32_t arg_20
        
        if ((0x7c00 & rbx_27.w) == 0)
            int32_t rbx_28 = rbx_27 & 0x3ff
            
            if (rbx_28 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_2 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                int32_t rdx_38 = 0xa - int.d(logf(float.s(zx.q(rbx_28))) f* data_143cda910)
                arg_20 = (rbx_28 << (rdx_38.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_38) << 0x17 & 0x7f800000) | rdi_17
            else
                arg_20 = rdi_17
        else if ((rbx_27.w & 0x7c00) != 0x7c00)
            arg_20 = ((rbx_27 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_27 & 0x3ff) << 0xd | rdi_17
        else
            arg_20 = rdi_17 | 0x477fe000
        
        int64_t rsi_11 = zx.q(rax_62) * (zx.q(*(var_e8 + 0xa8)) << 2) + *(var_e8 + 0x98)
        uint32_t rbx_35 = zx.d(*(rsi_11 + (r14_2 << 2) + 2))
        int32_t rdi_21 = (rbx_35 & 0xffff8000) << 0x10
        int32_t arg_18
        
        if ((0x7c00 & rbx_35.w) == 0)
            int32_t rbx_36 = rbx_35 & 0x3ff
            
            if (rbx_36 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_2 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                int32_t rdx_39 = 0xa - int.d(logf(float.s(zx.q(rbx_36))) f* data_143cda910)
                arg_18 = (rbx_36 << (rdx_39.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_39) << 0x17 & 0x7f800000) | rdi_21
            else
                arg_18 = rdi_21
        else if ((rbx_35.w & 0x7c00) != 0x7c00)
            arg_18 = ((rbx_35 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_35 & 0x3ff) << 0xd | rdi_21
        else
            arg_18 = rdi_21 | 0x477fe000
        
        uint32_t rbx_43 = zx.d(*(rsi_11 + (r14_2 << 2)))
        int32_t rdi_25 = (rbx_43 & 0xffff8000) << 0x10
        int32_t arg_10
        
        if ((0x7c00 & rbx_43.w) == 0)
            int32_t rbx_44 = rbx_43 & 0x3ff
            
            if (rbx_44 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_2 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                int32_t rdx_40 = 0xa - int.d(logf(float.s(zx.q(rbx_44))) f* data_143cda910)
                arg_10 = (rbx_44 << (rdx_40.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_40) << 0x17 & 0x7f800000) | rdi_25
            else
                arg_10 = rdi_25
        else if ((rbx_43.w & 0x7c00) != 0x7c00)
            arg_10 = ((rbx_43 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_43 & 0x3ff) << 0xd | rdi_25
        else
            arg_10 = rdi_25 | 0x477fe000
        
        float* rdx_41 = var_c0
        float* r8_5 = var_c8
        zmm6.d = arg_10.d f* *var_b8
        zmm6.d = zmm6.d f+ arg_20 * *rdx_41 f+ var_f4_1 f* *r8_5
        float zmm5_1 = arg_18 * *var_b8
        var_b8 = &var_b8[zx.q(rbp_1)]
        float zmm4_1 = var_f8_1 * *rdx_41 f+ var_f0_1 f* *r8_5
        var_c8 = &r8_5[zx.q(r15_1)]
        *var_a0 = zmm6.d
        i_6 = i_7 + 1
        var_c0 = &rdx_41[zx.q(r14_1)]
        rdx_28 = var_cc
        i_7 = i_6
        *result_1 = zmm5_1 + zmm4_1
        var_e0 = &var_e0[zx.q(r12_1)]
        var_d8 = &var_d8[zx.q(rsi_1)]
        result = result_1
        var_a0 = &var_a0[sx.q(rax_31)]
        result_1 = result + (sx.q(rax_33) << 2)
    while (i_6 s< *(arg2 + 0x40))

return result
