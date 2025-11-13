// 函数: sub_1420a55c0
// 地址: 0x1420a55c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t rbx = arg2
uint8_t r14 = arg1[0x45].b u>> 2 & 1
char rax = sub_140b5b8a0(rbx.d, 0)

if ((arg_10:4.d == 0 & rax) != 0)
    uint8_t rax_1 = arg1[0x45].b
    arg1[0x45].b = ((not.b(rax_1 u>> 2) << 2 ^ rax_1) & 4) ^ rax_1
else if (rbx != data_143f475b8)
    if (rbx != data_143f475b0)
        if ((arg1[0x45].b & 4) == 0)
            goto label_1420a569f
        
        if (sub_1409d7d20(&arg1[0x4a], &arg_10) == 0)
            rbx = arg_10
        label_1420a569f:
            int64_t rbp_1 = sx.q(arg1[0x4b].d)
            int32_t rax_4 = (rbp_1 + 1).d
            arg1[0x4b].d = rax_4
            
            if (rax_4 s> *(arg1 + 0x25c))
                sub_1405a4d70(&arg1[0x4a])
            
            *(arg1[0x4a] + (rbp_1 << 3)) = rbx
        
        arg1[0x45].b |= 4
    else
        arg1[0x4b].d = 0
        
        if (*(arg1 + 0x25c) s<= 0xffffffff)
            sub_140638c50(&arg1[0x4a], 0)
        
        arg1[0x45].b &= 0xfb
    
    sub_140ce6d40(arg1, 0x4000, nullptr, data_143ddb400)
else
    char rax_2 = arg1[0x46].b
    arg1[0x46].b = ((not.b(rax_2) ^ rax_2) & 1) ^ rax_2

uint8_t result = arg1[0x45].b u>> 2 & 1

if (result != r14)
    arg1[0x53] = 0

return result
