// 函数: sub_1419a2d10
// 地址: 0x1419a2d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = j_sub_140a82f30(0x10)

if (result == 0)
    return 0

*result = 0
result[1] = 0
int64_t rax = 0

if (0 == data_143f107c8)
    data_143f107c8 = 0
else
    rax = data_143f107c8

int64_t rbx = rax
int64_t rax_5
int32_t i

for (i = rax.d & 0x3ffffff; i != 0; i = rax_5.d & 0x3ffffff)
    if ((((rbx & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
            u< (rbx & 0xfffffffffc000000))
        sub_140a2c900()
    
    bool z_1
    
    if (rbx == data_143f107c8)
        data_143f107c8 = (rbx & 0xfffffffffc000000) + 0x4000000
        z_1 = true
    else
        data_143f107c8
        z_1 = false
    
    if (z_1)
        break
    
    rax_5 = 0
    
    if (0 == data_143f107c8)
        data_143f107c8 = 0
    else
        rax_5 = data_143f107c8
    
    rbx = rax_5

while (i != 0)
    int64_t rbx_1 = sx.q(result[1].d)
    uint64_t rcx_5 = (zx.q(i) & 0x3fff) * 3
    int64_t rax_8 = *(&data_143cf0bf8 + (zx.q(i) u>> 0xe << 3))
    int64_t r15_1 = *(rax_8 + (rcx_5 << 3) + 8)
    int32_t rax_9 = (rbx_1 + 1).d
    result[1].d = rax_9
    
    if (rax_9 s> *(result + 0xc))
        sub_1405a4d70(result)
    
    int32_t i_1 = i
    *(*result + (rbx_1 << 3)) = r15_1
    i = *(rax_8 + (rcx_5 << 3) + 0x10)
    sub_140a24050(i_1)

return result
