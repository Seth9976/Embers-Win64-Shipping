// 函数: sub_14202c090
// 地址: 0x14202c090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int16_t* var_58 = nullptr
int32_t var_50 = 0
sub_1405947f0(&var_58, 2)
int32_t r13 = var_50 + 2

if (r13 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, &data_142e5f8f8, 4)
int32_t rax = arg1[1].d
int16_t* r12

if (rax == 0)
    r12 = &data_142d40450
else
    r12 = *arg1

void* var_48 = nullptr
int32_t rsi = rax - 1
int64_t var_40 = 0

if (rax == 0)
    rsi = 0

void* r14 = nullptr

if (rsi s> 1)
    rsi = 1

int32_t rax_1 = 0
int32_t r12_1

if (r12 == 0 || *r12 == 0 || rsi s<= 0)
    r12_1 = 0
else
    if (rsi + 1 s> 0)
        sub_1405947f0(&var_48, rsi + 1)
        rax_1 = var_40:4.d
        rdi = var_40.d
        r14 = var_48
    
    rdi += rsi + 1
    var_40.d = rdi
    
    if (rdi s> rax_1)
        sub_140594770(&var_48)
        rdi = var_40.d
        r14 = var_48
    
    UnDecorator::getReferenceType(r14, r12, rsi * 2)
    r12_1 = 0
    *(r14 + (sx.q(rdi) << 1) - 2) = 0

int16_t* r8_3 = &data_142d40450
void* rax_3 = &data_142d40450

if (r13 != 0)
    r8_3 = var_58

if (rdi != 0)
    rax_3 = r14

void* r8_4 = r8_3 - rax_3
uint32_t i
uint32_t rdi_2

do
    rdi_2 = zx.d(*rax_3)
    i = zx.d(*(rax_3 + r8_4))
    
    if (rdi_2 != i)
        break
    
    rax_3 += 2
while (i != 0)

if (r14 != 0)
    sub_140a74f90(r14)

int64_t* rbx
int16_t* r14_2

if (rdi_2 - i != 0)
    r14_2 = var_58
    rbx.b = 0
else
    int32_t rax_4 = arg1[1].d
    int32_t rdi_4 = rax_4 - 1
    
    if (rax_4 == 0)
        rdi_4 = 0
    
    int32_t rcx_7 = rdi_4
    
    if (rdi_4 s> 1)
        rcx_7 = 1
    
    int64_t rdx_4 = sx.q(rcx_7)
    int16_t* const rax_5
    
    if (rax_4 == 0)
        rax_5 = &data_142d40450
    else
        rax_5 = *arg1
    
    int32_t rdi_5 = rdi_4 - rcx_7
    int16_t* rax_6 = &rax_5[rdx_4]
    var_48 = nullptr
    int64_t var_40_1 = 0
    void* r14_1 = nullptr
    int32_t rsi_1 = 0
    
    if (rax_6 != 0 && *rax_6 != 0 && rdi_5 s> 0)
        if (rdi_5 + 1 s> 0)
            sub_1405947f0(&var_48, rdi_5 + 1)
            r12_1 = var_40_1:4.d
            rsi_1 = var_40_1.d
            r14_1 = var_48
        
        rsi_1 = rsi_1 + 1 + rdi_5
        var_40_1.d = rsi_1
        
        if (rsi_1 s> r12_1)
            sub_140594770(&var_48)
            r12_1 = var_40_1:4.d
            rsi_1 = var_40_1.d
            r14_1 = var_48
        
        UnDecorator::getReferenceType(r14_1, &rax_5[rdx_4], rdi_5 * 2)
        *(r14_1 + (sx.q(rsi_1) << 1) - 2) = 0
    
    if (arg2 != &var_48)
        int64_t rcx_12 = *arg2
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        *arg2 = r14_1
        arg2[1].d = rsi_1
        *(arg2 + 0xc) = r12_1
    else if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    r14_2 = var_58
    int16_t* rsi_3 = &data_142d40450
    int16_t* rdx_8 = &data_142d40450
    
    if (r13 != 0)
        rdx_8 = r14_2
    
    int32_t rax_9 = sub_140a23cf0(arg2, rdx_8, 0, 0, 0xffffffff)
    
    if (rax_9 != 0xffffffff)
        int32_t rcx_15 = arg2[1].d
        int32_t rdi_6 = rcx_15 - 1
        
        if (rcx_15 == 0)
            rdi_6 = -1
        
        int32_t rax_10 = rcx_15 - 1
        
        if (rcx_15 == 0)
            rax_10 = -1
        
        if (rcx_15 == 0)
            rax_10 = 0
        
        int32_t r10_1
        
        if (rax_9 s>= 0)
            r10_1 = rax_10
            
            if (rax_9 s< rax_10)
                r10_1 = rax_9
        else
            r10_1 = 0
        
        if (rcx_15 == 0)
            rdi_6 = 0
        
        int32_t rdi_7 = rdi_6 - r10_1
        int32_t rax_11 = rax_10 - r10_1
        
        if (rax_10 - r10_1 s>= 0)
            if (rax_11 s< rdi_7)
                rdi_7 = rax_11
            
            if (rdi_7 != 0)
                int32_t rax_13 = rcx_15 - rdi_7
                
                if (rax_13 != r10_1)
                    int64_t r9_1 = *arg2
                    memmove(r9_1 + (sx.q(r10_1) << 1), r9_1 + (sx.q(rdi_7 + r10_1) << 1), 
                        (rax_13 - r10_1) * 2)
                    rcx_15 = arg2[1].d
                
                arg2[1].d = rcx_15 - rdi_7
    
    int32_t rax_19 = arg1[1].d
    int32_t r10_2 = rax_19 - 1
    
    if (rax_19 == 0)
        r10_2 = -1
    
    int32_t rdi_8 = rax_19 - 1
    
    if (rax_19 == 0)
        rdi_8 = -1
    
    if (rax_19 == 0)
        r10_2 = 0
    
    if (rax_19 == 0)
        rdi_8 = 0
    
    int32_t rdi_9 = rdi_8 - r10_2
    
    if (rdi_9 s> 0)
        rdi_9 = 0
    
    if (rdi_9 != 0)
        int32_t rcx_20 = rax_19 - rdi_9
        
        if (rcx_20 != r10_2)
            int64_t r9_2 = *arg1
            memmove(r9_2 + (sx.q(r10_2) << 1), r9_2 + (sx.q(rdi_9 + r10_2) << 1), 
                (rcx_20 - r10_2) * 2)
            rax_19 = arg1[1].d
        
        rax_19 -= rdi_9
        arg1[1].d = rax_19
    
    int32_t rdi_10 = rax_19 - 1
    
    if (rax_19 == 0)
        rdi_10 = 0
    
    if (rdi_10 s> 1)
        rdi_10 = 1
    
    if (rdi_10 != 0)
        if (rax_19 != rdi_10)
            int64_t rcx_24 = *arg1
            memmove(rcx_24, rcx_24 + (sx.q(rdi_10) << 1), (rax_19 - rdi_10) * 2)
            rax_19 = arg1[1].d
        
        arg1[1].d = rax_19 - rdi_10
    
    int16_t* rdx_15 = &data_142d40450
    
    if (r13 != 0)
        rdx_15 = r14_2
    
    if (sub_140a23cf0(arg1, rdx_15, 0, 0, 0xffffffff) == 0xffffffff)
        if (arg1 != &var_48)
            int64_t rcx_33 = *arg1
            
            if (rcx_33 != 0)
                sub_140a74f90(rcx_33)
            
            *arg1 = 0
            arg1[1] = 0
        
        rbx.b = 1
    else
        if (r13 != 0)
            rsi_3 = r14_2
        
        int64_t rsi_4 = sx.q(sub_140a23cf0(arg1, rsi_3, 0, 0, 0xffffffff))
        int32_t rdx_17 = 0x7fffffff
        
        if (0x7fffffff + rsi_4 s<= 0x7fffffff)
            rdx_17 = (0x7fffffff + rsi_4).d
        
        int32_t rcx_28 = arg1[1].d
        int32_t rax_24 = rcx_28 - 1
        
        if (rcx_28 == 0)
            rax_24 = -1
        
        int32_t rdi_11 = rcx_28 - 1
        
        if (rcx_28 == 0)
            rax_24 = 0
        
        if (rcx_28 == 0)
            rdi_11 = -1
        
        int32_t r10_3
        
        if (rdx_17 s>= 0)
            r10_3 = rax_24
            
            if (rdx_17 s< rax_24)
                r10_3 = rdx_17
        else
            r10_3 = 0
        
        if (rcx_28 == 0)
            rdi_11 = 0
        
        int32_t rdi_12 = rdi_11 - r10_3
        int32_t rax_25 = rax_24 - r10_3
        
        if (rax_24 - r10_3 s>= 0)
            if (rax_25 s< rdi_12)
                rdi_12 = rax_25
            
            if (rdi_12 != 0)
                int32_t rax_27 = rcx_28 - rdi_12
                
                if (rax_27 != r10_3)
                    int64_t r9_3 = *arg1
                    memmove(r9_3 + (sx.q(r10_3) << 1), r9_3 + (sx.q(rdi_12 + r10_3) << 1), 
                        (rax_27 - r10_3) * 2)
                    rcx_28 = arg1[1].d
                
                rcx_28 -= rdi_12
                arg1[1].d = rcx_28
        
        int32_t rdi_13 = rcx_28 - 1
        
        if (rcx_28 == 0)
            rdi_13 = 0
        
        if (rsi_4.d s< 0)
            rbx.b = 1
        else
            if (rsi_4.d s< rdi_13)
                rdi_13 = rsi_4.d
            
            if (rdi_13 == 0)
                rbx.b = 1
            else
                if (rcx_28 != rdi_13)
                    int64_t rcx_31 = *arg1
                    memmove(rcx_31, rcx_31 + (sx.q(rdi_13) << 1), (rcx_28 - rdi_13) * 2)
                    rcx_28 = arg1[1].d
                
                arg1[1].d = rcx_28 - rdi_13
                rbx.b = 1

if (r14_2 != 0)
    sub_140a74f90(r14_2)

return zx.q(rbx.b)
