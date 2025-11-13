// 函数: sub_142be12a0
// 地址: 0x142be12a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(arg1 + 0x98)
uint32_t r9 = -1
int64_t rsi
rsi.b = 0
int32_t arg_8 = 0
uint32_t rdi = -1
uint32_t r10 = -1
int16_t r8 = *(arg1 + 0x1d0)
uint32_t r11 = -1
int16_t* r15 = *(arg1 + 0x1e8)
int16_t rdx = 0
int16_t* rbx = r15

if (0 u< r8)
    do
        if (rbx[3] == arg2 && rbx[4] u> 0)
            uint32_t rcx = zx.d(*rbx)
            
            if (rcx == 0)
                r11 = zx.d(rdx)
            else if (rcx == 1)
                if (rbx[2] == 0)
                    rdi = zx.d(rdx)
                else if (rbx[1] == 0)
                    r9 = zx.d(rdx)
            else if (rcx == 2)
                r11 = zx.d(rdx)
            else if (rcx == 3 && (r10 == 0xffffffff || (rbx[2] & 0x3ff) == 9))
                uint32_t rax_2 = zx.d(rbx[1])
                
                if (rax_2 u<= 1 || rax_2 == 0xa)
                    r10 = zx.d(rdx)
                    rsi.b = (rbx[2] & 0x3ff) == 9
        
        rdx += 1
        rbx = &rbx[0xc]
    while (rdx u< r8)

if (rdi s>= 0)
    r9 = rdi

char* (* rdi_1)(void* arg1, int64_t arg2) = nullptr

if (r10 s>= 0 && (r9 s< 0 || rsi.b != 0))
    int64_t rcx_3 = sx.q(r10) * 3
    uint32_t rax_5 = zx.d(r15[rcx_3 * 4 + 1])
    rbx = &r15[rcx_3 * 4]
    
    if (rax_5 u<= 1 || rax_5 == 0xa)
        rdi_1 = sub_142bea160
else if (r9 s>= 0)
    rdi_1 = sub_142bea0c0
    rbx = &r15[sx.q(r9) * 0xc]
else if (r11 s>= 0)
    rbx = &r15[sx.q(r11) * 0xc]
    rdi_1 = sub_142bea160

if (rbx == 0 || rdi_1 == 0)
    *arg3 = 0
    return 0

if (*(rbx + 0x10) == 0)
    void* rsi_1 = *(arg1 + 0x200)
    int64_t rax_8
    int512_t zmm0_1
    rax_8, zmm0_1 = sub_142b99a90(r12, 1, 0, zx.d(rbx[4]), 0, &arg_8)
    *(rbx + 0x10) = rax_8
    
    if (arg_8 != 0)
    label_142be147f:
        sub_142b99980(r12, *(rbx + 0x10))
        *(rbx + 0x10) = 0
        rbx[4] = 0
        *arg3 = 0
        return zx.q(arg_8)
    
    int32_t rax_9 = sub_142b97060(rsi_1, *(rbx + 0xc), arg4)
    arg_8 = rax_9
    
    if (rax_9 != 0)
        goto label_142be147f
    
    int32_t rax_10 = sub_142b96990(rsi_1, *(rbx + 0x10), zx.d(rbx[4]), zmm0_1)
    arg_8 = rax_10
    
    if (rax_10 != 0)
        goto label_142be147f

*arg3 = rdi_1(rbx, r12)
return zx.q(arg_8)
