// 函数: sub_140cc3fa0
// 地址: 0x140cc3fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = 0

if (0 == *(arg1 + 8))
    *(arg1 + 8) = 0
else
    rax = *(arg1 + 8)

int64_t rbx = rax
int32_t i = rax.d & 0x3ffffff

if (i == 0)
    return zx.q(i)

do
    if ((((rbx & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
            u< (rbx & 0xfffffffffc000000))
        sub_140a2c900()
    
    bool z_1
    
    if (rbx == *(arg1 + 8))
        *(arg1 + 8) = (rbx & 0xfffffffffc000000) + 0x4000000
        z_1 = true
    else
        *(arg1 + 8)
        z_1 = false
    
    if (z_1)
        break
    
    int64_t rax_5 = 0
    
    if (0 == *(arg1 + 8))
        *(arg1 + 8) = 0
    else
        rax_5 = *(arg1 + 8)
    
    rbx = rax_5
    i = rax_5.d & 0x3ffffff
while (i != 0)

return zx.q(i)
