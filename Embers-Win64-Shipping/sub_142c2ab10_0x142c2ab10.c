// 函数: sub_142c2ab10
// 地址: 0x142c2ab10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const rdi
int32_t** rax_1

if (arg2 == 0x47504f53)
    rax_1 = sub_142c1f7b0(arg1 + 0xc8)
label_142c2ab57:
    int32_t* rcx_2 = *rax_1
    int32_t* rdi_1 = &data_14369a5d0
    
    if (rcx_2 != 0)
        rdi_1 = rcx_2
    
    if (rdi_1[6] u>= 0xa)
        rdi = *(rdi_1 + 0x10)
    else
        rdi = &data_14369a5d0
else
    if (arg2 == 0x47535542)
        rax_1 = sub_142c1f860(arg1 + 0xc0)
        goto label_142c2ab57
    
    rdi = &data_14369a5d0
void* rax_3 = sub_142c1f430(sub_142c1f570(rdi, arg3), arg4)
uint32_t rax_4 = zx.d(*(rax_3 + 5))
uint32_t rsi_2 = zx.d(*(rax_3 + 4)) << 8
int32_t i = 0

if (rsi_2 != neg.d(rax_4))
    do
        void* rax_6
        
        if (i u< (zx.d(*(rax_3 + 4)) << 8) + zx.d(*(rax_3 + 5)))
            rax_6 = rax_3 + 4 + ((zx.q(i) + 1) << 1)
        else
            rax_6 = &data_14369a5c4
        
        uint64_t rdx_4 = zx.q((zx.d(*rax_6) << 8) + zx.d(*(rax_6 + 1)))
        uint32_t rcx_5
        
        if (rdx_4.d != 0xffff)
            uint16_t r8 = zx.w(*(rdi + 6))
            uint64_t r10_1 = zx.q(*(rdi + 7))
            void* r8_1
            
            if (0 != r8 * 0x100 + r10_1.w)
                r8_1 = &rdi[zx.q(r8.b) * 0x10] + r10_1
            else
                r8_1 = &data_14369a5d0
            
            void* r8_5
            
            if (rdx_4.d u< (zx.d(*r8_1) << 8) + zx.d(*(r8_1 + 1)))
                r8_5 = r8_1 + rdx_4 * 6 + 2
            else
                r8_5 = &data_14369a5d0
            
            rcx_5 = (zx.d(*(r8_5 + 1)) << 0x10) + (zx.d(*(r8_5 + 2)) << 8) + (zx.d(*r8_5) << 0x18)
                + zx.d(*(r8_5 + 3))
        else
            rcx_5 = 0
        
        if (arg5 == rcx_5)
            if (arg6 != 0)
                *arg6 = rdx_4.d
            
            return 1
        
        i += 1
    while (i u< rsi_2 + rax_4)

if (arg6 != 0)
    *arg6 = 0xffff

return 0
