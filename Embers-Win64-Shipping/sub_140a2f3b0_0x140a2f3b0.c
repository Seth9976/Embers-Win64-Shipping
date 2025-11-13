// 函数: sub_140a2f3b0
// 地址: 0x140a2f3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = 0

if (0 == *(arg1 + 0x1a0))
    *(arg1 + 0x1a0) = 0
else
    rax = *(arg1 + 0x1a0)

sub_140a2efc0(zx.q(arg3) * 0xd0 + arg1, arg2)
int128_t zmm6 = 0x3a83126f
int64_t rbx_2 = (zx.q(arg4) & 0x3ffffff) | ((rax & 0xfffffffffc000000) + 0x4000000)

if ((rbx_2 & 0xfffffffffc000000) u< (rax & 0xfffffffffc000000))
    zmm6 = sub_140b73230(0x3a83126f)

int32_t rdx = -1
uint64_t r8_1 = zx.q(rax.d) & 0x3ffffff
uint64_t rax_7 = zx.q(r8_1.d)

if (r8_1 != 0)
    rdx = 0
    
    while ((rax_7.b & 1) == 0)
        rax_7 u>>= 1
        rdx += 1

int64_t rcx_5

if (rdx s< 0)
    rcx_5 = (rbx_2 & 0xfffffffffc000000) | r8_1
else
    rcx_5 =
        (zx.q(r8_1.d) & zx.q((not.q(1 << (sx.q(rdx) u% 0x40))).d)) | (rbx_2 & 0xfffffffffc000000)

bool z

if (rax == *(arg1 + 0x1a0))
    *(arg1 + 0x1a0) = rcx_5
    z = true
else
    *(arg1 + 0x1a0)
    z = false

if (not(z))
    bool z_1
    
    do
        int64_t rax_11 = 0
        
        if (0 == *(arg1 + 0x1a0))
            *(arg1 + 0x1a0) = 0
        else
            rax_11 = *(arg1 + 0x1a0)
        
        int64_t rbx_7 = ((rax_11 & 0xfffffffffc000000) + 0x4000000) | (zx.q(rcx_5.d) & 0x3ffffff)
        
        if ((rbx_7 & 0xfffffffffc000000) u< (rax_11 & 0xfffffffffc000000))
            zmm6 = sub_140b73230(zmm6)
        
        rdx = -1
        uint64_t r8_4 = zx.q(rax_11.d) & 0x3ffffff
        uint64_t rax_14 = zx.q(r8_4.d)
        
        if (r8_4 != 0)
            rdx = 0
            
            while ((rax_14.b & 1) == 0)
                rax_14 u>>= 1
                rdx += 1
        
        if (rdx s< 0)
            rcx_5 = (rbx_7 & 0xfffffffffc000000) | r8_4
        else
            rcx_5 = (zx.q(r8_4.d) & zx.q((not.q(1 << (sx.q(rdx) u% 0x40))).d))
                | (rbx_7 & 0xfffffffffc000000)
        
        if (rax_11 == *(arg1 + 0x1a0))
            *(arg1 + 0x1a0) = rcx_5
            z_1 = true
        else
            *(arg1 + 0x1a0)
            z_1 = false
    while (not(z_1))

return zx.q(rdx)
