// 函数: sub_142c2b200
// 地址: 0x142c2b200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const rbx
int128_t* const rdi
void** rax_1

if (arg2 == 0x47504f53)
    rax_1 = sub_142c1f7b0(arg1 + 0xc8)
label_142c2b252:
    int128_t* rcx_2 = *rax_1
    rbx = &data_14369a5d0
    int128_t* const rdi_1 = &data_14369a5d0
    
    if (rcx_2 != 0)
        rdi_1 = rcx_2
    
    if (*(rdi_1 + 0x18) u>= 0xa)
        rdi = rdi_1[1].q
    else
        rdi = &data_14369a5d0
else
    if (arg2 == 0x47535542)
        rax_1 = sub_142c1f860(arg1 + 0xc0)
        goto label_142c2b252
    
    rbx = &data_14369a5d0
    rdi = &data_14369a5d0
int32_t rsi = 0

if (arg3 != 0)
    int32_t* r14_1 = arg4
    
    do
        uint16_t rdx = zx.w(*(rdi + 4))
        uint64_t r8 = zx.q(*(rdi + 5))
        int128_t* const rcx_5
        
        if (0 != rdx * 0x100 + r8.w)
            rcx_5 = &rdi[zx.q(rdx.b) * 0x10] + r8
        else
            rcx_5 = &data_14369a5d0
        
        if (sub_142c1dd70(rcx_5, *r14_1, arg5) != 0)
            if (arg6 != 0)
                *arg6 = arg4[zx.q(rsi)]
            
            return 1
        
        rsi += 1
        r14_1 = &r14_1[1]
    while (rsi u< arg3)

uint16_t rdx_2 = zx.w(*(rdi + 4))
uint64_t r8_2 = zx.q(*(rdi + 5))
int128_t* const rcx_11

if (0 != rdx_2 * 0x100 + r8_2.w)
    rcx_11 = &rdi[zx.q(rdx_2.b) * 0x10] + r8_2
else
    rcx_11 = &data_14369a5d0

if (sub_142c1dd70(rcx_11, 0x44464c54, arg5) == 0)
    uint16_t rdx_4 = zx.w(*(rdi + 4))
    uint64_t r8_4 = zx.q(*(rdi + 5))
    void* rcx_18
    
    if (0 != rdx_4 * 0x100 + r8_4.w)
        rcx_18 = &rdi[zx.q(rdx_4.b) * 0x10] + r8_4
    else
        rcx_18 = &data_14369a5d0
    
    if (sub_142c1dd70(rcx_18, 0x64666c74, arg5) == 0)
        uint16_t rdx_5 = zx.w(*(rdi + 4))
        uint64_t r8_6 = zx.q(*(rdi + 5))
        
        if (0 != rdx_5 * 0x100 + r8_6.w)
            rbx = &rdi[zx.q(rdx_5.b) * 0x10] + r8_6
        
        if (sub_142c1dd70(rbx, 0x6c61746e, arg5) == 0)
            if (arg5 != 0)
                *arg5 = 0xffff
            
            if (arg6 != 0)
                *arg6 = 0xffff
        else if (arg6 != 0)
            __builtin_strncpy(arg6, "ntal", 4)
    else if (arg6 != 0)
        __builtin_strncpy(arg6, "tlfd", 4)
else if (arg6 != 0)
    __builtin_strncpy(arg6, "TLFD", 4)

return 0
