// 函数: sub_141c48150
// 地址: 0x141c48150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1dc) = 1
int32_t rdx = arg1[0x11].d
int32_t rax = 2
int32_t r15_1 = *(arg1 + 0x84) * arg1[8].d

if (rdx s>= 2)
    rax = rdx

int32_t i_3 = 0
arg1[0x29].d = rax
int32_t rax_1 = *(arg1 + 0xb4)
int64_t* rdi = arg1[0x15]
int32_t i_4 = arg1[0x16].d
int32_t rsi

if (rax_1 s< 0)
    if (i_4 != 0)
        int32_t i
        
        do
            int64_t* rcx_3 = *rdi
            
            if (rcx_3 != 0)
                sub_140a4fc50(rcx_3)
                *rdi = 0
            
            int64_t rcx_4 = rdi[4]
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = rdi[2]
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rdi = &rdi[7]
            i = i_4
            i_4 -= 1
        while (i != 1)
        rax_1 = *(arg1 + 0xb4)
    
    arg1[0x16].d = 0
    rsi = 0
    
    if (rax_1 != 0)
        sub_1408cf3a0(&arg1[0x15], 0)
        rsi = arg1[0x16].d
else
    if (i_4 != 0)
        int32_t i_1
        
        do
            int64_t* rcx = *rdi
            
            if (rcx != 0)
                sub_140a4fc50(rcx)
                *rdi = 0
            
            int64_t rcx_1 = rdi[4]
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            int64_t rcx_2 = rdi[2]
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rdi = &rdi[7]
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    arg1[0x16].d = 0
    rsi = 0

int32_t i_5 = arg1[0x29].d
int32_t rax_2 = rsi + i_5
arg1[0x16].d = rax_2

if (rax_2 s> *(arg1 + 0xb4))
    sub_1407c3b60(&arg1[0x15])

int64_t* rcx_9 = sx.q(rsi) * 0x38 + arg1[0x15]

if (i_5 != 0)
    void* rax_4 = rcx_9 + 0x1c
    int32_t i_2
    
    do
        *rcx_9 = 0
        rcx_9 = &rcx_9[7]
        __builtin_memset(rax_4 - 0x14, 0, 0x18)
        __builtin_memset(rax_4 + 4, 0, 0x18)
        rax_4 += 0x38
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

if (arg1[0x29].d s> 0)
    do
        sub_141c48770(sx.q(i_3) * 0x38 + arg1[0x15], arg1[0xe], r15_1, arg1[9].d)
        i_3 += 1
    while (i_3 s< arg1[0x29].d)

sub_141c48770(&arg1[0x17], arg1[0xe], r15_1, arg1[9].d)
arg1[0xd].d = 4
arg1[0x20] = sub_140a491d0(0)
arg1[0x27] = sub_140a491d0(0)
int32_t r12 = data_143f34ab0
data_143f34ab0 += 1
int16_t* var_28
sub_140a2e390(&var_28, u"AudioMixerRenderThread(%d)", zx.q(r12 + 1))
int16_t* const rdx_4 = &data_142d40450
int32_t var_20

if (var_20 != 0)
    rdx_4 = var_28

void*** result = sub_140a6e140(arg1, rdx_4, 0, data_143a12c00, -1, 0)
int16_t* rcx_15 = var_28
arg1[0x1f] = result

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
