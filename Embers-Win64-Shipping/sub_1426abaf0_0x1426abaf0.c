// 函数: sub_1426abaf0
// 地址: 0x1426abaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg5
int64_t arg_18 = arg6
int32_t r11 = *(arg1 + 0xd0)
int64_t* rdi = arg2
uint64_t rcx
int64_t rdx_1

if (r11 == 0 || zx.d(arg3) s>= *(arg1 + 0xe0))
    rdx_1 = 0
    rcx = zx.q(arg3)
else
    rcx = zx.q(arg3)
    rdx_1 = zx.q(*(*(arg1 + 0xd8) + (rcx << 1))) + *(arg1 + 0xc8)

int64_t r10 = *(arg1 + 0xe8)
int64_t* rcx_1 = *(r10 + (rcx << 3))
int64_t rbp_2 = (zx.q((sbb.q(arg5, arg5, rcx_1 != 0)).d) & 4) + rdx_1
int64_t rdx_3
uint64_t r8

if (r11 == 0 || zx.d(arg4) s>= *(arg1 + 0xe0))
    rdx_3 = 0
    r8 = zx.q(arg4)
else
    r8 = zx.q(arg4)
    rdx_3 = zx.q(*(*(arg1 + 0xd8) + (r8 << 1))) + *(arg1 + 0xc8)

uint64_t r14 = r8 << 3
int64_t rsi_2 = (zx.q((sbb.q(arg6, arg6, *(r14 + r10) != 0)).d) & 4) + rdx_3

if (rcx_1 == 0)
    if (rdi == 0)
        rdi = nullptr
    else
        void* rax_9 = sub_14272ef20()
        
        if (rax_9 == 0)
            rdi = nullptr
        else
            int64_t rax_10 = sx.q(*(rax_9 + 0x38))
            
            if (rax_10.d s> rdi[7].d || *(rdi[6] + (rax_10 << 3)) != rax_9 + 0x30)
                rdi = nullptr
    
    rcx_1 = rdi[0x23]
    
    if (rcx_1 == 0)
        (*(*rdi + 0x390))(rdi)
        rcx_1 = rdi[0x23]
    
    r10 = *(arg1 + 0xe8)

return (*(*rcx_1 + 0x288))(rcx_1, arg1, rbp_2, *(r14 + r10), rsi_2)
