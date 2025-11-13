// 函数: sub_140bc9540
// 地址: 0x140bc9540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || ((*(arg1 + 0x50) u>> 4).b & 1) == 0)
    return 0

int64_t rbx = *(arg1 + 0x18)
sub_140d212c0()
int32_t i

if (data_1439aace8 != data_1439aad14)
    int32_t rax_3 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = &data_1439aad18
    void* rcx_2 = data_1439aad20
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    i = *(r8_1 + (((sx.q(data_1439aad28) - 1) & sx.q(rax_3)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = data_1439aace0
        
        do
            int64_t rdx_4 = sx.q(i) * 3
            
            if (*(r8_2 + (rdx_4 << 3)) == rbx)
                goto label_140bc95d9
            
            i = *(r8_2 + (rdx_4 << 3) + 0x10)
        while (i != 0xffffffff)

i = -1
label_140bc95d9:
i.b = i == 0xffffffff
return i
