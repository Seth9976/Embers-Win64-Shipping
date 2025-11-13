// 函数: sub_140cc3cb0
// 地址: 0x140cc3cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = 0

if (0 == *(arg1 + 8))
    *(arg1 + 8) = 0
else
    rax = *(arg1 + 8)

int64_t rbx = rax
int64_t rax_8
int32_t i

for (i = rax.d & 0x3ffffff; i != 0; i = rax_8.d & 0x3ffffff)
    if ((((rbx & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
            u< (rbx & 0xfffffffffc000000))
        sub_140a2c900()
    
    void* rdx_1
    
    if (i != 0)
        rdx_1 = *((zx.q(i) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(i) & 0x3fff) * 0x18
    else
        rdx_1 = nullptr
    
    bool z_1
    
    if (rbx == *(arg1 + 8))
        *(arg1 + 8) = zx.q(*(rdx_1 + 0x10)) | ((rbx & 0xfffffffffc000000) + 0x4000000)
        z_1 = true
    else
        *(arg1 + 8)
        z_1 = false
    
    if (z_1)
        *(rdx_1 + 0x10) = 0
        break
    
    rax_8 = 0
    
    if (0 == *(arg1 + 8))
        *(arg1 + 8) = 0
    else
        rax_8 = *(arg1 + 8)
    
    rbx = rax_8

if (i == 0)
    return 0

int64_t result = *(*((zx.q(i) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(i) & 0x3fff) * 0x18 + 8)
sub_140a24050(i)
return result
