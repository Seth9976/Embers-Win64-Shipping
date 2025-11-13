// 函数: sub_1407c4f50
// 地址: 0x1407c4f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg3
int64_t r12 = 0

if (rax != 0)
    int64_t rdx = sx.q(*(rax + 0x10c))
    int64_t rsi_1 = rdx << 3
    int64_t* rdi_1 = *(arg3[1] + 0x10)
    int64_t rax_2 = rdi_1[3]
    
    if (*(rsi_1 + rax_2) == 0)
        sub_1419ccf30(rdi_1, rdx.d)
        rax_2 = rdi_1[3]
    
    r12 = *(rsi_1 + rax_2)

void* r10 = arg3[2]
int64_t arg_8 = r12
int64_t* rcx_6

if (*(r10 + 0xd0) == *(r10 + 0xfc))
label_1407c5032:
    rcx_6 = nullptr
else
    int64_t r11_1 = arg3[3]
    void* r9_1 = r10 + 0x100
    void* r8 = *(r9_1 + 8)
    
    if (r8 != 0)
        r9_1 = r8
    
    int32_t rax_8 =
        *(r9_1 + ((sx.q((r11_1 u>> 0x20).d * 0x17 + r11_1.d) & (sx.q(*(r10 + 0x110)) - 1)) << 2))
    
    if (rax_8 == 0xffffffff)
    label_1407c5032_1:
        rcx_6 = nullptr
    else
        while (true)
            rcx_6 = sx.q(rax_8) * 0x50 + *(r10 + 0xc8)
            
            if (*rcx_6 == r11_1)
                break
            
            rax_8 = rcx_6[9].d
            
            if (rax_8 == 0xffffffff)
                goto label_1407c5032_2
        
        if (rax_8 == 0xffffffff)
        label_1407c5032_2:
            rcx_6 = nullptr

void* r15 = &rcx_6[1]

if (rcx_6 == 0)
    r15 = nullptr

int32_t arg_18 = *r15
int32_t arg_1c = *(r15 + 4)
sub_14077c4b0(arg2, &arg_8, arg1 + 8, &arg_18, 0)
int32_t arg_20 = *(r15 + 8)
int32_t arg_24 = *(r15 + 0xc)
sub_14077c4b0(arg2, &arg_8, arg1 + 0xe, &arg_20, 0)
sub_14077c4b0(arg2, &arg_8, arg1 + 0x14, r15 + 0x10, 0)
uint64_t result = sub_14077c4b0(arg2, &arg_8, arg1 + 0x1a, r15 + 0x18, 0)
int64_t* rsi_2 = data_14395f4d0

if (*(arg1 + 0x2e) u> 0)
    uint32_t r13_1 = zx.d(*(arg1 + 0x2c))
    result = (*(*rsi_2 + 8))(rsi_2)
    
    if (result.b == 0)
        void*** rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_14 = &rcx_14[5]
        
        if (rax_14 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_14 = &rcx_14[5]
        
        *(arg2 + 0x30) = rax_14
        void**** rax_15 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_15 = rcx_14
        *(arg2 + 8) = &rcx_14[1]
        rcx_14[1] = 0
        result = &data_142da77c8
        *rcx_14 = &data_142da77c8
        rcx_14[2] = r12
        rcx_14[3].d = r13_1
        rcx_14[4] = rsi_2

if (*(arg1 + 0x22) u> 0)
    void* rax_17 = *(r15 + 0x30)
    int64_t rsi_3
    
    if (rax_17 == 0)
        rsi_3 = sub_14082c610()
    else
        int64_t rcx_18 = *(rax_17 + 8)
        int64_t rdi_3 = *(arg2 + 0x30) + 7
        arg_8 = rcx_18
        int64_t* rdi_4 = rdi_3 & 0xfffffffffffffff8
        void* rax_18 = &rdi_4[1]
        
        if (rax_18 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            rcx_18 = arg_8
            rdi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_18 = &rdi_4[1]
        
        *(arg2 + 0x30) = rax_18
        *rdi_4 = rcx_18
        void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_19 = &rcx_22[6]
        
        if (rax_19 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_19 = &rcx_22[6]
        
        *(arg2 + 0x30) = rax_19
        void**** rax_20 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_20 = rcx_22
        *(arg2 + 8) = &rcx_22[1]
        rcx_22[1] = 0
        *rcx_22 = &data_142da7798
        rcx_22[2].d = 1
        rcx_22[3] = rdi_4
        rcx_22[4].d = 0
        *(rcx_22 + 0x24) = 3
        rcx_22[5] = 0
        rsi_3 = *(*(r15 + 0x30) + 0x10)
    
    result = sub_140790e00(arg3)
    uint64_t result_1 = result
    
    if (*(arg1 + 0x22) u> 0)
        void*** rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        arg_8.d = zx.d(*(arg1 + 0x20))
        void* rdx_7 = &rcx_29[5]
        
        if (rdx_7 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rdx_7 = &rcx_29[5]
        
        *(arg2 + 0x30) = rdx_7
        void** rax_25 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_25 = rcx_29
        *(arg2 + 8) = &rcx_29[1]
        rcx_29[1] = 0
        *rcx_29 = &data_142d99560
        result = zx.q(arg_8.d)
        rcx_29[3].d = result.d
        rcx_29[2] = result_1
        rcx_29[4] = rsi_3

if (*(arg1 + 0x2a) u> 0)
    void* rax_27
    
    if (*(arg3 + 0x34) != 0)
        rax_27 = *(r15 + 0x38)
    
    int64_t r14_1
    
    if (*(arg3 + 0x34) == 0 || rax_27 == 0)
        r14_1 = sub_14082f7c0(arg3[4], arg2, 0xd, 1)
    else
        r14_1 = *(rax_27 + 8)
        int64_t* rdi_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        int64_t rax_28 = r14_1
        arg_8 = rax_28
        void* rcx_33 = &rdi_9[1]
        
        if (rcx_33 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            rax_28 = arg_8
            rdi_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_33 = &rdi_9[1]
        
        *(arg2 + 0x30) = rcx_33
        *rdi_9 = rax_28
        void*** rcx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_29 = &rcx_37[6]
        
        if (rax_29 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_29 = &rcx_37[6]
        
        *(arg2 + 0x30) = rax_29
        void**** rax_30 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_30 = rcx_37
        *(arg2 + 8) = &rcx_37[1]
        rcx_37[1] = 0
        *rcx_37 = &data_142da7798
        rcx_37[2].d = 1
        rcx_37[3] = rdi_9
        rcx_37[4].d = 1
        *(rcx_37 + 0x24) = 3
        rcx_37[5] = 0
    
    uint32_t rsi_4 = zx.d(*(arg1 + 0x28))
    void*** rcx_44 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_9 = &rcx_44[5]
    
    if (rdx_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_44 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_9 = &rcx_44[5]
    
    *(arg2 + 0x30) = rdx_9
    void**** rax_33 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_33 = rcx_44
    *(arg2 + 8) = &rcx_44[1]
    rcx_44[1] = 0
    result = &data_142da77d8
    *rcx_44 = &data_142da77d8
    rcx_44[2] = r12
    rcx_44[3].d = rsi_4
    rcx_44[4] = r14_1

return result
