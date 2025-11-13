// 函数: sub_1410e8fd0
// 地址: 0x1410e8fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = *(arg2 + 0x1a0)
int64_t rbx = sx.q(*(arg1 + 0xe0))
int64_t r15 = arg3
int64_t arg_8 = r13
int32_t r10 = 0

if (rbx s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143e510b0)
            break
        
        r10 += 1
        rdx += 1
        
        if (rdx s>= rbx)
            goto label_1410e9073

int16_t* r8_1

if (rbx s<= 0 || r10 == 0xffffffff)
label_1410e9073:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    r8_1 = &data_143ce8560
else
    void* rcx_24 = *(arg1 + 0xe8)
    
    if ((rcx_24.b & 1) != 0)
        rcx_24 = (rcx_24 s>> 1) + arg1 + 0xe8
    
    r8_1 = rcx_24 + (sx.q(r10) << 1)

sub_1410e9550(arg2, &arg_8, r8_1, arg5)
int64_t i = 0
void* rsi = arg1 + 0x210

do
    if (*(rsi + 2) u> 0)
        int64_t r15_1 = *(r15 + (i << 3))
        uint32_t r12_1 = zx.d(*rsi)
        void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_3 = &rcx_7[5]
        
        if (rax_3 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_3 = &rcx_7[5]
        
        *(arg2 + 0x30) = rax_3
        *(arg2 + 0x14) += 1
        **(arg2 + 8) = rcx_7
        *(arg2 + 8) = &rcx_7[1]
        rcx_7[4] = r15_1
        r15 = arg3
        rcx_7[1] = 0
        *rcx_7 = &data_142d5a070
        rcx_7[2] = r13
        rcx_7[3].d = r12_1
        int64_t r13_1 = *(r15 + (i << 3))
        int64_t* r12_2 = data_1439b5bb0
        
        if (*(rsi + 2) u> 0)
            uint32_t r15_2 = zx.d(*rsi)
            void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_6 = &rcx_13[5]
            
            if (rax_6 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_6 = &rcx_13[5]
            
            *(arg2 + 0x30) = rax_6
            void**** rax_7 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_7 = rcx_13
            *(arg2 + 8) = &rcx_13[1]
            rcx_13[1] = 0
            *rcx_13 = &data_142d5a070
            rcx_13[3].d = r15_2
            r15 = arg3
            rcx_13[2] = arg_8
            rcx_13[4] = r13_1
        
        if (*(arg1 + 0x22e) u<= 0)
            r13 = arg_8
        else
            uint32_t r15_3 = zx.d(*(arg1 + 0x22c))
            
            if ((*(*r12_2 + 8))(r12_2) != 0)
                r13 = arg_8
            else
                void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_12 = &rcx_20[5]
                
                if (rax_12 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_12 = &rcx_20[5]
                
                *(arg2 + 0x30) = rax_12
                void**** rax_13 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                r13 = arg_8
                *rax_13 = rcx_20
                *(arg2 + 8) = &rcx_20[1]
                rcx_20[1] = 0
                *rcx_20 = &data_142d5a080
                rcx_20[2] = r13
                rcx_20[3].d = r15_3
                rcx_20[4] = r12_2
            
            r15 = arg3
    
    i += 1
    rsi += 4
while (i s< 7)

if (*(arg1 + 0x232) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x230))
    void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_17 = &rcx_28[5]
    
    if (rax_17 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_17 = &rcx_28[5]
    
    *(arg2 + 0x30) = rax_17
    void**** rax_18 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_18 = rcx_28
    *(arg2 + 8) = &rcx_28[1]
    rcx_28[1] = 0
    *rcx_28 = &data_142d5a070
    rcx_28[4] = arg4
    rcx_28[2] = r13
    rcx_28[3].d = rsi_1

int64_t* arg_30
int64_t* rbx_1 = arg_30
sub_141080ac0(arg1, arg2, r13, *(*rbx_1 + 0x10))
j_sub_14137eb70(arg1 + 0x118, arg2, r13, rbx_1, data_14395f4d0, 0, nullptr)
int32_t r8_4 = *(*rbx_1 + 0x1548)

if (*(arg1 + 0x234) != 0xffff)
    int64_t* rcx_34 = &arg_30
    
    if (r8_4 s< 3)
        sub_14137b650(rcx_34)
    else
        sub_14137b9a0(rcx_34, arg2, 0xf, r8_4)
    
    sub_141083500(arg2, &arg_8, arg1 + 0x234, arg_30)
    sub_1405d1550(&arg_30)

int64_t* rsi_2 = data_14395f4d0
int64_t rbp = *(data_1439b7100 + 0x10)

if (*(arg1 + 0x238) u> 0)
    uint32_t r15_4 = zx.d(*(arg1 + 0x236))
    void*** rcx_39 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_24 = &rcx_39[5]
    
    if (rax_24 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_39 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_24 = &rcx_39[5]
    
    *(arg2 + 0x30) = rax_24
    void**** rax_25 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_25 = rcx_39
    *(arg2 + 8) = &rcx_39[1]
    rcx_39[1] = 0
    *rcx_39 = &data_142d5a070
    rcx_39[2] = r13
    rcx_39[3].d = r15_4
    rcx_39[4] = rbp

if (*(arg1 + 0x23c) u> 0)
    uint32_t rbp_1 = zx.d(*(arg1 + 0x23a))
    
    if ((*(*rsi_2 + 8))(rsi_2) == 0)
        void*** rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_29 = &rcx_46[5]
        
        if (rax_29 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_29 = &rcx_46[5]
        
        *(arg2 + 0x30) = rax_29
        void**** rax_30 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_30 = rcx_46
        *(arg2 + 8) = &rcx_46[1]
        rcx_46[1] = 0
        *rcx_46 = &data_142d5a080
        rcx_46[2] = r13
        rcx_46[3].d = rbp_1
        rcx_46[4] = rsi_2

return sub_1405d1550(arg5) __tailcall
