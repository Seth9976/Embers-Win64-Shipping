// 函数: sub_142c08870
// 地址: 0x142c08870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x60)
uint64_t rdi = 0
int64_t r15 = *(arg1 + 0x70)

if (i == 0)
    return 

do
    int32_t* rbx_1 = r15 + rdi * 0x14
    sub_142c069e0(rbx_1, arg1)
    
    if ((rbx_1[4].b & 0x1f) != 0x18 || *rbx_1 - 0x1f3fb u> 4)
        int16_t rcx_2 = rbx_1[4].w
        int32_t rax
        rax.b = rcx_2.b & 0x1f
        
        if (rax.b == 1 && (0x100 & rcx_2) != 0)
            rbx_1[4].w |= 0x80
            uint64_t rbx_2 = zx.q((rdi + 1).d)
            
            if (rbx_2.d u< i)
                uint64_t rcx_3 = rbx_2 * 5
                
                if (sub_142bf2510(*(r15 + (rcx_3 << 2))).b != 0)
                    rdi = zx.q(rbx_2.d)
                    sub_142c069e0(r15 + (rcx_3 << 2), arg1)
                    uint64_t rcx_6 = rbx_2 * 5
                    *(r15 + (rcx_6 << 2) + 0x10) |= 0x80
        else if (*rbx_1 - 0xe0020 u<= 0x5f)
            rbx_1[4].w |= 0x80
    else
        rbx_1[4].w |= 0x80
    
    rdi = zx.q(rdi.d + 1)
while (rdi.d u< i)
