// 函数: sub_140858cf0
// 地址: 0x140858cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0x10) == 0xffffffff)
    return 

void* rax_1 = *(arg1 + 0x28)

if (rax_1 != 0)
    *(rax_1 + 0x60) -= 1

int64_t* r9_1 = *(arg1 + 0xcf0)
int64_t r10_1 = sx.q(*(arg1 + 0xcf8))
int64_t* rcx = r9_1
void* rdx = &r9_1[r10_1]

if (r9_1 != rdx)
    do
        if (*rcx == arg2)
            int32_t rcx_2 = ((rcx - r9_1) s>> 3).d
            
            if (rcx_2 != 0xffffffff)
                int32_t rax_4 = r10_1.d - rcx_2 - 1
                
                if (rax_4 s>= 1)
                    rax_4 = 1
                
                if (rax_4 != 0)
                    memcpy(&r9_1[sx.q(rcx_2)], &r9_1[sx.q(r10_1.d - rax_4)], rax_4 << 3)
                    r10_1 = zx.q(*(arg1 + 0xcf8))
                
                *(arg1 + 0xcf8) = (r10_1 - 1).d
                sub_1405c53d0(arg1 + 0xcf0)
            
            break
        
        rcx = &rcx[1]
    while (rcx != rdx)

int64_t rax = sub_140d3c6e0(arg1 + 0x20)
int32_t rdx_2 = *(arg2 + 0x6b8)
int64_t var_28
int64_t rsi_1
void** r14_1
bool cond:1_1

if ((1 & (rdx_2 u>> 2).b) != 0)
    if (data_143ce42c4 != 0)
    label_140858de5:
        var_28 = 0
        int32_t var_20_1 = 0
        sub_1405947f0(&var_28, 0x1b)
        int32_t rax_8 = var_20_1 + 0x1b
        var_20_1 = rax_8
        
        if (rax_8 s> 0)
            sub_140594770(&var_28)
        
        UnDecorator::getReferenceType(var_28, u"System data being removed.", 0x36)
        sub_1407ebce0(*(arg1 + 0xd8), *(arg2 + 0x10), 1)
        int64_t rcx_12 = var_28
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
    else if (rax != 0 && *(rax + 0x31) != 0)
        goto label_140858de5
    
    int32_t rcx_13 = *(arg1 + 0xd68)
    rsi_1 = sx.q(*(arg2 + 0x10))
    r14_1 = arg1 + (((zx.q(not.d(rcx_13)) & 4) | 0x198) << 3)
    
    if ((rcx_13.b & 4) != 0)
        sub_140804ba0(*(arg1 + 0x1a8), rsi_1.d)
    
    int32_t rdx_8 = r14_1[1].d
    int32_t rax_15 = rdx_8 - rsi_1.d - 1
    
    if (rax_15 s>= 1)
        rax_15 = 1
    
    if (rax_15 != 0)
        void* rcx_15 = *r14_1
        memcpy(rcx_15 + (rsi_1 << 3), rcx_15 + (sx.q(rdx_8 - rax_15) << 3), rax_15 << 3)
        rdx_8 = r14_1[1].d
    
    r14_1[1].d = rdx_8 - 1
    sub_1405c53d0(r14_1)
    *(arg2 + 0x6b8) &= 0xfffffffb
    *(arg2 + 0x10) = 0xffffffff
    
    if (rsi_1.d s>= 0)
        cond:1_1 = rsi_1.d s>= r14_1[1].d
        goto label_1408590ee
else if ((1 & (rdx_2 u>> 4).b) == 0)
    int32_t rcx_27 = *(arg2 + 0x10)
    
    if (rcx_27 s>= 0 && rcx_27 s< *(arg1 + 0xcb8))
        if (data_143ce42c4 != 0)
        label_140859006:
            var_28 = 0
            int32_t var_20_3 = 0
            sub_1405947f0(&var_28, 0x1b)
            int32_t rax_24 = var_20_3 + 0x1b
            var_20_3 = rax_24
            
            if (rax_24 s> 0)
                sub_140594770(&var_28)
            
            UnDecorator::getReferenceType(var_28, u"System data being removed.", 0x36)
            sub_1407ebce0(*(arg1 + 0xd8), *(arg2 + 0x10), 1)
            int64_t rcx_32 = var_28
            
            if (rcx_32 != 0)
                sub_140a74f90(rcx_32)
        else if (rax != 0 && *(rax + 0x31) != 0)
            goto label_140859006
        
        sub_140862460(arg1)
        sub_1408622c0(arg2)
        rsi_1 = sx.q(*(arg2 + 0x10))
        
        if (rsi_1.d != 0xffffffff)
            sub_140804ba0(*(arg1 + 0xd8), rsi_1.d)
            r14_1 = arg1 + 0xcb0
            int32_t rdx_21 = r14_1[1].d
            int32_t rax_27 = rdx_21 - rsi_1.d - 1
            
            if (rax_27 s>= 1)
                rax_27 = 1
            
            if (rax_27 != 0)
                void* rcx_36 = *r14_1
                memcpy(rcx_36 + (rsi_1 << 3), rcx_36 + (sx.q(rdx_21 - rax_27) << 3), rax_27 << 3)
                rdx_21 = r14_1[1].d
            
            r14_1[1].d = rdx_21 - 1
            sub_1405c53d0(r14_1)
            *(arg2 + 0x10) = 0xffffffff
            
            if (rsi_1.d s>= 0)
                cond:1_1 = rsi_1.d s>= *(arg1 + 0xcb8)
                goto label_1408590ee
else
    if (data_143ce42c4 != 0)
    label_140858efd:
        var_28 = 0
        int32_t var_20_2 = 0
        sub_1405947f0(&var_28, 0x1b)
        int32_t rax_18 = var_20_2 + 0x1b
        var_20_2 = rax_18
        
        if (rax_18 s> 0)
            sub_140594770(&var_28)
        
        UnDecorator::getReferenceType(var_28, u"System data being removed.", 0x36)
        sub_1407ebce0(*(arg1 + 0xd8), *(arg2 + 0x10), 1)
        int64_t rcx_22 = var_28
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
    else if (rax != 0 && *(rax + 0x31) != 0)
        goto label_140858efd
    
    rsi_1 = sx.q(*(arg2 + 0x10))
    sub_140804ba0(*(arg1 + 0x278), rsi_1.d)
    r14_1 = arg1 + 0xcd0
    int32_t rdx_13 = r14_1[1].d
    int32_t rax_21 = rdx_13 - rsi_1.d - 1
    
    if (rax_21 s>= 1)
        rax_21 = 1
    
    if (rax_21 != 0)
        void* rcx_24 = *r14_1
        memcpy(rcx_24 + (rsi_1 << 3), rcx_24 + (sx.q(rdx_13 - rax_21) << 3), rax_21 << 3)
        rdx_13 = r14_1[1].d
    
    r14_1[1].d = rdx_13 - 1
    sub_1405c53d0(r14_1)
    *(arg2 + 0x10) = 0xffffffff
    
    if (rsi_1.d s>= 0)
        cond:1_1 = rsi_1.d s>= *(arg1 + 0xcd8)
    label_1408590ee:
        
        if (not(cond:1_1))
            *(*(*r14_1 + (rsi_1 << 3)) + 0x10) = rsi_1.d
