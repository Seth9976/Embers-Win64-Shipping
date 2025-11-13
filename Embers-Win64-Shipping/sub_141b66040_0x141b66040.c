// 函数: sub_141b66040
// 地址: 0x141b66040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f30938 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f30938)
    
    if (data_143f30938 == 0xffffffff)
        int64_t* rcx_51 = data_143db18d0
        
        if (rcx_51 == 0)
            sub_140a53c40()
            rcx_51 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_36 = (*(*rcx_51 + 0xb0))(rcx_51, u"r.HDR.Display.OutputDevice", r8_2)
        
        if (rax_36 != 0)
            int64_t rdx_2 = *rax_36
            rax_36 = (*(rdx_2 + 0x58))(rax_36, rdx_2)
        
        data_143f30930 = rax_36
        _Init_thread_footer(&data_143f30938)

int64_t* r14 = data_14395fa10
int64_t rbp = *(arg2 + 0x1a0)

if (*(arg1 + 0x11a) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x118))
    void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_2 = &rcx_2[5]
    
    if (rax_2 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_2 = &rcx_2[5]
    
    *(arg2 + 0x30) = rax_2
    int64_t* rax_3 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_3 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    *rcx_2 = &data_142d5a070
    rcx_2[2] = rbp
    rcx_2[3].d = r15_1
    rcx_2[4] = arg3

if (*(arg1 + 0x122) u> 0)
    uint32_t r15_2 = zx.d(*(arg1 + 0x120))
    
    if ((*(*r14 + 8))(r14) == 0)
        void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_7 = &rcx_9[5]
        
        if (rax_7 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_7 = &rcx_9[5]
        
        *(arg2 + 0x30) = rax_7
        void**** rax_8 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_8 = rcx_9
        *(arg2 + 8) = &rcx_9[1]
        rcx_9[1] = 0
        *rcx_9 = &data_142d5a080
        rcx_9[2] = rbp
        rcx_9[3].d = r15_2
        rcx_9[4] = r14

int64_t* r14_1 = data_14395fa10
int64_t r15_3 = *(arg2 + 0x1a0)

if (*(arg1 + 0x126) u> 0)
    uint32_t rbp_1 = zx.d(*(arg1 + 0x124))
    void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_10 = &rcx_15[5]
    
    if (rax_10 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_15[5]
    
    *(arg2 + 0x30) = rax_10
    void**** rax_11 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_11 = rcx_15
    *(arg2 + 8) = &rcx_15[1]
    rcx_15[1] = 0
    *rcx_15 = &data_142d5a070
    rcx_15[4] = arg5
    rcx_15[2] = r15_3
    rcx_15[3].d = rbp_1

if (*(arg1 + 0x12a) u> 0)
    uint32_t rbp_2 = zx.d(*(arg1 + 0x128))
    
    if ((*(*r14_1 + 8))(r14_1) == 0)
        void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_16 = &rcx_22[5]
        
        if (rax_16 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_16 = &rcx_22[5]
        
        *(arg2 + 0x30) = rax_16
        void**** rax_17 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_17 = rcx_22
        *(arg2 + 8) = &rcx_22[1]
        rcx_22[1] = 0
        *rcx_22 = &data_142d5a080
        rcx_22[2] = r15_3
        rcx_22[3].d = rbp_2
        rcx_22[4] = r14_1

int64_t* r14_2 = data_14395f4d0
int64_t r15_4 = *(arg2 + 0x1a0)

if (*(arg1 + 0x12e) u> 0)
    uint32_t rbp_3 = zx.d(*(arg1 + 0x12c))
    void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_19 = &rcx_28[5]
    
    if (rax_19 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_19 = &rcx_28[5]
    
    *(arg2 + 0x30) = rax_19
    void**** rax_20 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_20 = rcx_28
    *(arg2 + 8) = &rcx_28[1]
    rcx_28[1] = 0
    *rcx_28 = &data_142d5a070
    rcx_28[4] = arg6
    rcx_28[2] = r15_4
    rcx_28[3].d = rbp_3

if (*(arg1 + 0x132) u> 0)
    uint32_t rbp_4 = zx.d(*(arg1 + 0x130))
    
    if ((*(*r14_2 + 8))(r14_2) == 0)
        void*** rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_25 = &rcx_35[5]
        
        if (rax_25 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_25 = &rcx_35[5]
        
        *(arg2 + 0x30) = rax_25
        void**** rax_26 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_26 = rcx_35
        *(arg2 + 8) = &rcx_35[1]
        rcx_35[1] = 0
        *rcx_35 = &data_142d5a080
        rcx_35[2] = r15_4
        rcx_35[3].d = rbp_4
        rcx_35[4] = r14_2

int32_t zmm0 = *(data_143f2d3c8 + 4)
int64_t arg_10 = *(arg2 + 0x1a0)
int32_t arg_8 = zmm0
sub_1405eb490(arg2, &arg_10, arg1 + 0x134, &arg_8, 0)
int64_t rax_31 = *(arg2 + 0x1a0)
arg_8 = *(data_143f30930 + 4)
arg_10 = rax_31
sub_1405eb490(arg2, &arg_10, arg1 + 0x13a, &arg_8, 0)
int64_t result = sx.q(data_143f0f1a0)

if (((result - 2).d & 0xfffffffd) == 0)
label_141b66464:
    int64_t rsi_1 = *(arg2 + 0x1a0)
    
    if (*(arg1 + 0x11e) u> 0)
        uint32_t rbp_5 = zx.d(*(arg1 + 0x11c))
        void*** rcx_47 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_32 = &rcx_47[5]
        
        if (rax_32 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_47 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_32 = &rcx_47[5]
        
        *(arg2 + 0x30) = rax_32
        void**** rax_33 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_33 = rcx_47
        *(arg2 + 8) = &rcx_47[1]
        rcx_47[1] = 0
        result = &data_142d5a070
        *rcx_47 = &data_142d5a070
        rcx_47[2] = rsi_1
        rcx_47[3].d = rbp_5
        rcx_47[4] = arg4
else
    result *= 5
    
    if (((*(&data_143f025fc + (result << 2)) u>> 0x12).b & 1) != 0)
        goto label_141b66464

return result
