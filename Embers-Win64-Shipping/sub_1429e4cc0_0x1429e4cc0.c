// 函数: sub_1429e4cc0
// 地址: 0x1429e4cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x47e8)
*(arg1 + 0x5a4) = *(arg1 + 0x5a8)
int32_t rsi = 0
*(arg1 + 0x5b9) = *(arg1 + 0x5b8)
int32_t rax_2
int64_t r9
rax_2, r9 = sub_1429e0bd0(arg2, 2)

if (rax_2 != 2)
    sub_1429da010(arg1 + 0x270, 5, "Invalid frame marker", r9)

int32_t rax_3 = sub_1429e0b80(arg2, arg3)
int32_t rax_4
int64_t r9_1
rax_4, r9_1 = sub_1429e0b80(arg2, arg3)
int32_t rbp_1 = rax_3 | (rax_4 * 2)

if (rbp_1 s> 2)
    int32_t rax_6
    rax_6, r9_1 = sub_1429e0b80(arg2, arg3)
    rbp_1 += rax_6

*(arg1 + 0x4798) = rbp_1

if (rbp_1 s>= 2)
    sub_1429da010(arg1 + 0x270, 5, "Unsupported bitstream profile", r9_1)

int32_t rax_7 = sub_1429e0b80(arg2, arg3)
*(arg1 + 0x5b4) = rax_7

if (rax_7 != 0)
    int64_t rdi_1 = sx.q(*(arg1 + 0x270 + (sx.q(sub_1429e0bd0(arg2, 3)) << 2) + 0x1a0))
    EnterCriticalSection(lpCriticalSection)
    
    if (rdi_1.d s< 0 || *(rdi_1 * 0xd0 + lpCriticalSection + 0x40) s< 1)
        LeaveCriticalSection(lpCriticalSection)
        sub_1429da010(arg1 + 0x270, 5, "Buffer %d does not contain a decoded frame", zx.q(rdi_1.d))
    
    int64_t rax_9 = sx.q(*(arg1 + 0x5a0))
    
    if (rax_9.d s>= 0)
        int64_t rdx = rax_9 * 0xd0
        int32_t rax_10 = *(rdx + lpCriticalSection + 0x40)
        
        if (rax_10 s> 0)
            *(rdx + lpCriticalSection + 0x40) = rax_10 - 1
    
    int64_t rdx_1 = rdi_1 * 0xd0
    *(arg1 + 0x5a0) = rdi_1.d
    *(rdx_1 + lpCriticalSection + 0x40) += 1
    LeaveCriticalSection(lpCriticalSection)
    *(arg1 + 0x4814) = 0
    *(arg1 + 0x1328) = 0
    *(arg1 + 0x5ac) = 1
    
    if (*(arg1 + 0x4818) != 0)
        *(arg1 + 0x430) = *(arg1 + 0x410)
        *(arg1 + 0x434) = *(arg1 + 0x414)
        *(arg1 + 0x438) = *(arg1 + 0x418)
        *(arg1 + 0x43c) = *(arg1 + 0x41c)
        *(arg1 + 0x440) = *(arg1 + 0x420)
        *(arg1 + 0x444) = *(arg1 + 0x424)
        *(arg1 + 0x448) = *(arg1 + 0x428)
        *(arg1 + 0x44c) = *(arg1 + 0x42c)
    
    return 0

*(arg1 + 0x5a8) = sub_1429e0b80(arg2, arg3)
*(arg1 + 0x5ac) = sub_1429e0b80(arg2, arg3)
int32_t rax_23
int64_t r9_3
rax_23, r9_3 = sub_1429e0b80(arg2, arg3)
*(arg1 + 0x47a4) = rax_23

if (*(arg1 + 0x5a8) != 0)
    char rax_27
    
    if (*(arg1 + 0x5ac) == 0)
        rax_27, r9_3 = sub_1429e0b80(arg2, arg3)
    else
        rax_27 = 0
    
    *(arg1 + 0x5b8) = rax_27
    int32_t rax_28
    
    if (*(arg1 + 0x47a4) == 0)
        rax_28, r9_3 = sub_1429e0bd0(arg2, 2)
    else
        rax_28 = 0
    
    *(arg1 + 0x5c0) = rax_28
    
    if (*(arg1 + 0x5b8) != 0)
        int32_t rax_29
        int64_t r9_5
        rax_29, r9_5 = sub_1429e7010(arg2)
        
        if (rax_29 == 0)
            sub_1429da010(arg1 + 0x270, rax_29 + 5, "Invalid frame sync code", r9_5)
        
        if (*(arg1 + 0x4798) s<= 0)
            *(arg1 + 0x3d0) = 1
            *(arg1 + 0x3f0) = 1
            *(arg1 + 0x3f4) = 1
            *(arg1 + 0x479c) = 8
        else
            sub_1429e4000(arg1 + 0x270, arg2, arg3)
        
        *(arg1 + 0x4814) = sub_1429e0bd0(arg2, 8)
        goto label_1429e501b
    
    if (*(arg1 + 0x4ec0) != 1)
        void* r12_1 = arg1 + 0x1318
        int64_t i_4 = 3
        *(arg1 + 0x4814) = sub_1429e0bd0(arg2, 8)
        int64_t i_6 = 3
        void* r14 = arg1 + 0x450
        int64_t i
        
        do
            int64_t rax_33 = sx.q(*(arg1 + 0x270 + (sx.q(sub_1429e0bd0(arg2, 3)) << 2) + 0x1a0))
            *r14 = rax_33.d
            *(r14 + 8) = lpCriticalSection + 0x70 + rax_33 * 0xd0
            *r12_1 = sub_1429e0b80(arg2, arg3)
            r12_1 += 4
            r14 += 0x70
            i = i_6
            i_6 -= 1
        while (i != 1)
        sub_1429e5ad0(arg1 + 0x270, arg2, arg3)
        *(arg1 + 0x5bc) = sub_1429e0b80(arg2, arg3)
        int32_t arg_8 = 0x3020001
        char rax_39
        
        if (sub_1429e0b80(arg2, arg3) == 0)
            rax_39 = *(&arg_8 + sx.q(sub_1429e0bd0(arg2, 2)))
        else
            rax_39 = 4
        
        *(arg1 + 0x6c4) = rax_39
        void* r14_1 = arg1 + 0x458
        rsi = 0
        int64_t i_1
        
        do
            void* rdx_7 = *r14_1
            r9_3 = sub_142a24d30(r14_1 + 8, *(rdx_7 + 8), *(rdx_7 + 0xc), *(arg1 + 0x3d8), 
                *(arg1 + 0x3dc))
            r14_1 += 0x70
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
else
    int32_t rax_24
    int64_t r9_4
    rax_24, r9_4 = sub_1429e0bd0(arg2, 8)
    
    if (rax_24 != 0x49)
        sub_1429da010(arg1 + 0x270, 5, "Invalid frame sync code", r9_4)
    else
        int32_t rax_25
        rax_25, r9_4 = sub_1429e0bd0(arg2, 8)
        
        if (rax_25 != 0x83)
            sub_1429da010(arg1 + 0x270, 5, "Invalid frame sync code", r9_4)
        else
            int32_t rax_26
            rax_26, r9_4 = sub_1429e0bd0(arg2, 8)
            
            if (rax_26 != 0x42)
                sub_1429da010(arg1 + 0x270, 5, "Invalid frame sync code", r9_4)
    
    sub_1429e4000(arg1 + 0x270, arg2, arg3)
    *(arg1 + 0x4814) = 0xff
    *(arg1 + 0x450) = 0xffffffff
    *(arg1 + 0x458) = 0
    *(arg1 + 0x4c0) = 0xffffffff
    *(arg1 + 0x4c8) = 0
    *(arg1 + 0x530) = 0xffffffff
    *(arg1 + 0x538) = 0
label_1429e501b:
    r9_3 = sub_1429e58c0(arg1 + 0x270, arg2, arg3)
    
    if (*(arg1 + 0x4ec0) != 0)
        __builtin_memset(arg1 + 0x410, 0xff, 0x20)
        *(arg1 + 0x4ec0) = 0

*(sx.q(*(arg1 + 0x5a0)) * 0xd0 + *(arg1 + 0x47e8) + 0xe8) = *(arg1 + 0x3d0)
*(sx.q(*(arg1 + 0x5a0)) * 0xd0 + *(arg1 + 0x47e8) + 0xec) = *(arg1 + 0x3d4)
*(sx.q(*(arg1 + 0x5a0)) * 0xd0 + *(arg1 + 0x47e8) + 0xf0) = *(arg1 + 0x3e0)
*(sx.q(*(arg1 + 0x5a0)) * 0xd0 + *(arg1 + 0x47e8) + 0xf4) = *(arg1 + 0x3e4)

if (*(arg1 + 0x4ec0) != 0)
    sub_1429da010(arg1 + 0x270, 7, "Keyframe / intra-only frame required to reset decoder state", 
        r9_3)

if (*(arg1 + 0x47a4) != 0)
    *(arg1 + 0x1310) = 0
    *(arg1 + 0x47a8) = 1
else
    *(arg1 + 0x1310) = sub_1429e0b80(arg2, arg3)
    int32_t rax_51 = sub_1429e0b80(arg2, arg3)
    *(arg1 + 0x47a8) = rax_51
    
    if (rax_51 == 0)
        memset(arg1 + 0x13ec, 0, 0x33a8)

*(arg1 + 0x13e8) = sub_1429e0bd0(arg2, 2)
EnterCriticalSection(lpCriticalSection)
int32_t i_3 = *(arg1 + 0x4814)

if (i_3 == 0)
label_1429e5315:
    uint64_t i_5 = zx.q(8 - rsi)
    void* rdx_16 = arg1 + 0x270 + ((sx.q(rsi) + 0x70) << 2)
    uint64_t i_2
    
    do
        int64_t rax_57 = sx.q(*(rdx_16 - 0x20))
        *rdx_16 = rax_57.d
        
        if (rax_57.d s>= 0)
            int64_t rcx_51 = rax_57 * 0xd0
            *(rcx_51 + lpCriticalSection + 0x40) += 1
        
        rdx_16 += 4
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
else
    void* rdx_13 = arg1 + 0x410
    
    do
        if ((i_3.b & 1) == 0)
            *(rdx_13 + 0x20) = *rdx_13
        else
            *(rdx_13 + 0x20) = *(arg1 + 0x5a0)
            int64_t rcx_49 = sx.q(*(arg1 + 0x5a0)) * 0xd0
            *(rcx_49 + lpCriticalSection + 0x40) += 1
        
        int64_t rax_56 = sx.q(*rdx_13)
        
        if (rax_56.d s>= 0)
            int64_t rcx_50 = rax_56 * 0xd0
            *(rcx_50 + lpCriticalSection + 0x40) += 1
        
        rsi += 1
        rdx_13 += 4
        i_3 s>>= 1
    while (i_3 != 0)
    
    if (rsi s< 8)
        goto label_1429e5315

LeaveCriticalSection(lpCriticalSection)
*(arg1 + 0x4ec4) = 1

if (*(arg1 + 0x5a8) == 0 || *(arg1 + 0x5b8) != 0 || *(arg1 + 0x47a4) != 0)
    arg3 = sub_142a24660(arg1 + 0x270)

sub_1429e5e30(arg1 + 0x1328, arg2, arg3)
sub_1429e5f00(arg1 + 0x270, arg1, arg2, arg3)
sub_1429e6000(arg1 + 0x1358, arg2, arg3)
sub_1429e61a0(arg1 + 0x270)
sub_1429e6300(arg1 + 0x270, arg2, arg3)
int32_t rax_58
int64_t r9_7
rax_58, r9_7 = sub_1429e0bd0(arg2, 0x10)

if (rax_58 == 0)
    sub_1429da010(arg1 + 0x270, rax_58 + 7, "Invalid header size", r9_7)

return sx.q(rax_58)
