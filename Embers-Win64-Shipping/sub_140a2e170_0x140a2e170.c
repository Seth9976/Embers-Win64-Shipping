// 函数: sub_140a2e170
// 地址: 0x140a2e170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0

if (0 == *(arg1 + 8))
    *(arg1 + 8) = 0
else
    result = *(arg1 + 8)

uint64_t result_1 = result
int32_t i = result.d & 0x3ffffff

if (i != 0)
    int128_t zmm6 = 0x3a83126f
    
    do
        if ((((result_1 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                u< (result_1 & 0xfffffffffc000000))
            zmm6 = sub_140b73230(zmm6)
        
        result = result_1
        bool z_1
        
        if (result == *(arg1 + 8))
            *(arg1 + 8) = (result_1 & 0xfffffffffc000000) + 0x4000000
            z_1 = true
        else
            result = *(arg1 + 8)
            z_1 = false
        
        if (z_1)
            break
        
        result = 0
        
        if (0 == *(arg1 + 8))
            *(arg1 + 8) = 0
        else
            result = *(arg1 + 8)
        
        result_1 = result
        i = result.d & 0x3ffffff
    while (i != 0)

while (i != 0)
    int64_t rbx = sx.q(arg2[1].d)
    uint64_t rcx_4 = (zx.q(i) & 0x3fff) * 3
    int64_t rax_4 = *(&data_143cf0bf8 + (zx.q(i) u>> 0xe << 3))
    int64_t rbp_1 = *(rax_4 + (rcx_4 << 3) + 8)
    int32_t rax_5 = (rbx + 1).d
    arg2[1].d = rax_5
    
    if (rax_5 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    int32_t i_1 = i
    *(*arg2 + (rbx << 3)) = rbp_1
    i = *(rax_4 + (rcx_4 << 3) + 0x10)
    result = sub_140a24050(i_1)

return result
