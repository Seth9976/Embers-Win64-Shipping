// 函数: sub_140b0f5f0
// 地址: 0x140b0f5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)
int32_t rdx = 0

if (arg3 s> 0)
    int64_t r9_1 = 0
    
    do
        int64_t rax_1 = -1
        
        do
            rax_1 += 1
        while (*(arg2[r9_1] + (rax_1 << 1)) != 0)
        
        r9_1 += 1
        rdx = rdx + 1 + rax_1.d
    while (r9_1 s< rsi)

arg1[1].d = 0

if (*(arg1 + 0xc) != rdx)
    sub_1405947f0(arg1, rdx)

int64_t rdx_2 = *arg2
int64_t r8_1 = -1

do
    r8_1 += 1
while (*(rdx_2 + (r8_1 << 1)) != 0)

int64_t result = sub_140a20ba0(arg1, rdx_2, r8_1.d)

if (rsi s> 1)
    int64_t rbx_1 = 1
    
    do
        int16_t* rdx_3 = arg2[rbx_1]
        int64_t r8_2 = -1
        
        do
            r8_2 += 1
        while (rdx_3[r8_2] != 0)
        
        result = sub_140a2cf70(arg1, rdx_3, r8_2.d)
        rbx_1 += 1
    while (rbx_1 s< rsi)

return result
