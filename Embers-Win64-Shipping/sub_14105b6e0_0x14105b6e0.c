// 函数: sub_14105b6e0
// 地址: 0x14105b6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1
void* r12 = arg3
int64_t r10 = sx.q(*(arg1 + 0x3c)) * 5
uint32_t rdx = *((r10 << 3) + 0x1439c85e8)
int32_t r14_2 = *(arg1 + 0x34) * arg6 + arg4
uint32_t r9 = *((r10 << 3) + &data_1439c85ec)
char rcx = arg4.b
uint32_t rax_2 = *(arg1 + 0x60) u>> rcx

if (rax_2 u>= rdx)
    rdx = rax_2

uint32_t rax_4 = *(rdi + 0x64) u>> rcx

if (rax_4 u>= r9)
    r9 = rax_4

if (arg3 == 0)
    r12 = rdi

void* const rcx_3

if (*(r12 + 0x1b8) == *(r12 + 0x1e4))
label_14105b7c0:
    rcx_3 = nullptr
else
    void* rcx_1 = *(r12 + 0x1f0)
    void* r8 = r12 + 0x1e8
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_7 = *(r8 + (((sx.q(*(r12 + 0x1f8)) - 1) & sx.q(r14_2)) << 2))
    
    if (rax_7 == 0xffffffff)
    label_14105b7c0_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *(r12 + 0x1b0)
        
        while (true)
            int64_t rdx_4 = sx.q(rax_7) * 3
            rcx_3 = r8_1 + (rdx_4 << 3)
            
            if (*(r8_1 + (rdx_4 << 3)) == r14_2)
                break
            
            rax_7 = *(rcx_3 + 0x10)
            
            if (rax_7 == 0xffffffff)
                goto label_14105b7c0_2
        
        if (rax_7 == 0xffffffff)
        label_14105b7c0_2:
            rcx_3 = nullptr

void* rsi = *(rcx_3 + 8)
int64_t* rbx = *(rdi + 0x100)
int64_t* rax_8 = sub_141023a10(*(rdi + 0x78))
int64_t* var_e0 = rbx
char result =
    (*(*rax_8 + 0x760))(rax_8, arg2, zx.q(arg4), zx.q(*(rdi + 0x40)), rdi + 0x210, var_e0, rdx)
void* rbx_2

if (result != 0 || (*(rsi + 0x78) & 2) != 0)
    rbx_2 = arg3
else
    void* r15_1 = rsi + 8
    void* rdx_6 = *(rdi + 0xc8)
    int32_t rcx_7 = *(rsi + 0x74)
    uint32_t var_c8_1 = r9
    uint32_t var_cc_1 = rdx
    int32_t rax_11 = *(rdx_6 + 0xa8)
    int64_t rax_12 = *(r15_1 + 0x50)
    int64_t var_68 = *(rdx_6 + 0x20)
    int32_t var_a0_1 = rcx_7
    int32_t var_c4_1 = 1
    int32_t var_9c_1 = 0
    int32_t var_60_1 = 0
    int64_t var_98 = *(*(r15_1 + 0x10) + 0x20)
    int32_t var_90_1 = 1
    arg5.o = rax_11.o
    int128_t var_b0_1 = arg5.o
    arg5.o = rax_12.o
    int128_t var_88_1 = arg5.o
    void* var_e8
    
    if (arg2 == 0 || data_143f01c92 == 0)
        var_e0 = &var_98
        var_e8.d = 0
        result, arg5 = sub_14105c9a0(rdi + 0x70, &var_68, 0, 0, 0, var_e0)
    else
        if (*(rdi + 0x128) != 0)
            r15_1 = nullptr
        
        void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_15 = &rcx_11[0x1e]
        
        if (rax_15 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0xf8)
            rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_15 = &rcx_11[0x1e]
        
        *(arg2 + 0x30) = rax_15
        void** rax_16 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_16 = rcx_11
        *(arg2 + 8) = &rcx_11[1]
        rcx_11[1] = 0
        *rcx_11 = &data_142f01af8
        rcx_11[2] = rdi + 0x70
        arg5.o = var_68.o
        *(rcx_11 + 0x18) = arg5.o
        *(rcx_11 + 0x28) = r14_2.o
        int128_t var_48
        arg5.o = var_48
        rcx_11[9] = 0
        rcx_11[0xa].d = 0
        *(rcx_11 + 0x38) = arg5.o
        arg5.o = var_98.o
        *(rcx_11 + 0x58) = arg5.o
        *(rcx_11 + 0x68) = var_88_1
        arg5.o = var_b0_1
        *(rcx_11 + 0x78) = arg5.o
        rcx_11[0x11] = 0
        rcx_11[0x12].d = 0
        __builtin_memset(&rcx_11[0x13], 0, 0x50)
        rcx_11[0x1d].w = 0xff00
        int64_t* rcx_15 = rcx_11[3]
        result = (*(*rcx_15 + 8))(rcx_15)
        
        if (r15_1 != 0)
            result, arg5 = sub_14105b290(&rcx_11[0x11], r15_1, arg5)
    
    int64_t rcx_18 = *(rdi + 0x128)
    rbx_2 = arg3
    
    if (rcx_18 != 0)
        if (rbx_2 != 0)
            rdi = rbx_2
        
        var_e8.d = arg6
        result, arg5 = sub_14105b6e0(rcx_18 - 0x70, arg2, rdi, zx.q(arg4), var_e8, var_e0)

if (rbx_2 != 0)
    return result

if (rsi != 0)
    sub_141059a80(rsi + 8, arg5)
    j_sub_140a74f90(rsi)

return sub_140bb5c10(r12 + 0x1b0, r14_2)
