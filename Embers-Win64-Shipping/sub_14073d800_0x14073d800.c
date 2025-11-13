// 函数: sub_14073d800
// 地址: 0x14073d800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_3 = 0
int32_t* r8 = *(arg2 + 0x20)
int16_t i_4 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
uint32_t i = zx.d(i_4)

if (i s>= *r8)
    int64_t rax_1 = 0
    int32_t* rcx = nullptr
    
    do
        i -= *(rcx + r8)
        rax_1 += 1
        rcx = rax_1 << 2
        rdx += 1
    while (i s>= *(rcx + r8))

int64_t r11 = *(arg2 + 0x18)
int32_t* rbx = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(rdx) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t r15_1 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
int32_t* r13_1

if ((not.b(r15_1) & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
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
    
    r13_1 = sx.q(i_1) + *(r11 + (sx.q(r9) << 3))

uint32_t rax_9 = zx.d(rax[2])
uint8_t r14_1 = (rax_9 u>> 0xf).b
*(arg2 + 0x10) = &rax[3]
int32_t i_2 = rax_9 & 0x7fff
int32_t* r12_1

if ((not.b(r14_1) & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
else
    int32_t r9_1 = 0
    
    if (i_2 s>= *r8)
        int64_t rax_11 = 0
        int32_t* rdx_3 = nullptr
        
        do
            i_2 -= *(rdx_3 + r8)
            rax_11 += 1
            rdx_3 = rax_11 << 2
            r9_1 += 1
        while (i_2 s>= *(rdx_3 + r8))
    
    r12_1 = sx.q(i_2) + *(r11 + (sx.q(r9_1) << 3))

int32_t rcx_5 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_70 = rcx_5
int32_t rax_13
rax_13.b = rcx_5 != 0x7fff
void* var_60
void var_68

if (rcx_5 == 0x7fff)
    var_60 = &var_68
else
    var_60 = zx.q(rcx_5 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_8 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t rdx_6 = rcx_8 & 0x7fff
int32_t var_58 = rdx_6
int32_t result_2
result_2.b = rdx_6 != 0x7fff
void* var_48
void var_50

if (rdx_6 == 0x7fff)
    var_48 = &var_50
else
    var_48 = zx.q(*(arg2 + 0x80) * rdx_6) + *(arg2 + 0x70)

if (sub_140d3c6e0(rbx) != 0)
    sub_142591550()

void* result = *(rbx + 0x58)
void* result_1 = nullptr

if (result != 0)
    result = *(**(result + 0x58) + (sx.q(rbx[0x1a]) << 3))
    result_1 = result
    
    if (rbx[0x86].b != 0)
        result = sub_140d3c6e0(rbx)
        void* result_3 = result
        
        if (result != 0)
            void* rax_18 = sub_142591550()
            void* rcx_15 = *(result_3 + 0x10)
            result = rax_18 + 0x30
            int64_t rdx_7 = sx.q(*(result + 8))
            
            if (rdx_7.d s<= *(rcx_15 + 0x38) && *(*(rcx_15 + 0x30) + (rdx_7 << 3)) == result
                    && *(result_3 + 0x430) != 0)
                result = sub_141f66050(result_3, rbx[0x1a])

void* result_4 = result_1
int32_t r11_2 = *(result_4 + 0xec) - 1
int32_t arg_20 = r11_2

if (*(arg2 + 0x40) s> 0)
    uint64_t r8_1 = zx.q(data_14401b1a0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    uint64_t rcx_19 = zx.q(r15_1) << 2
    uint64_t r10_4 = zx.q(r14_1) << 2
    uint64_t var_78_1 = r10_4
    uint64_t var_80_1 = rcx_19
    
    do
        int32_t* rax_19 = r13_1
        uint64_t r14_2 = zx.q(r11_2)
        r13_1 += rcx_19
        uint64_t rcx_20 = zx.q(*r12_1)
        
        if (*rax_19 s<= r11_2)
            r14_2 = zx.q(*rax_19)
        
        r12_1 += r10_4
        int64_t r14_4 = r14_2 * (zx.q(*(result_4 + 0xa8)) << 2) + *(result_4 + 0x98)
        uint32_t rbx_1 = zx.d(*(r14_4 + (rcx_20 << 2) + 2))
        int32_t rdi_3 = (rbx_1 & 0xffff8000) << 0x10
        int32_t arg_18
        
        if ((0x7c00 & rbx_1.w) == 0)
            int32_t rbx_2 = rbx_1 & 0x3ff
            
            if (rbx_2 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r8_1 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                int32_t zmm0 = logf(float.s(zx.q(rbx_2))) f* data_143cda910
                r8_1 = zx.q(data_14401b1a0)
                ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                arg_18 = (rbx_2 << ((0xa - int.d(zmm0)).b + 0xd) & 0x7fffff)
                    | ((0x71 - (0xa - int.d(zmm0))) << 0x17 & 0x7f800000) | rdi_3
            else
                arg_18 = rdi_3
        else if ((rbx_1.w & 0x7c00) != 0x7c00)
            arg_18 = ((rbx_1 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_1 & 0x3ff) << 0xd | rdi_3
        else
            arg_18 = rdi_3 | 0x477fe000
        
        uint32_t rbx_9 = zx.d(*(r14_4 + (zx.q(rcx_20.d) << 2)))
        int32_t rdi_7 = (rbx_9 & 0xffff8000) << 0x10
        int32_t arg_10
        
        if ((0x7c00 & rbx_9.w) == 0)
            int32_t rbx_10 = rbx_9 & 0x3ff
            
            if (rbx_10 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r8_1 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                int32_t rdx_10 = 0xa - int.d(logf(float.s(zx.q(rbx_10))) f* data_143cda910)
                arg_10 = (rbx_10 << (rdx_10.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_10) << 0x17 & 0x7f800000) | rdi_7
            else
                arg_10 = rdi_7
        else if ((rbx_9.w & 0x7c00) != 0x7c00)
            arg_10 = ((rbx_9 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_9 & 0x3ff) << 0xd | rdi_7
        else
            arg_10 = rdi_7 | 0x477fe000
        
        int32_t* rdx_11 = var_60
        i_3 += 1
        r8_1 = zx.q(data_14401b1a0)
        ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
        result_4 = result_1
        r10_4 = var_78_1
        r11_2 = arg_20
        var_60 = &rdx_11[sx.q(rax_13)]
        *rdx_11 = arg_10
        int32_t* rdx_12 = var_48
        result = sx.q(result_2)
        var_48 = &rdx_12[result]
        rcx_19 = var_80_1
        *rdx_12 = arg_18
    while (i_3 s< *(arg2 + 0x40))

return result
