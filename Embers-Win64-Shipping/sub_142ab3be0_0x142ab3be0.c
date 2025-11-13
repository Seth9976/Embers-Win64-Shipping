// 函数: sub_142ab3be0
// 地址: 0x142ab3be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *arg2
uint64_t i_3 = zx.q(*rbx)

if (i_3.d s<= 0x10)
    int64_t rdx_1 = 0
    
    if (i_3.d s> 0)
        int32_t rcx_1 = 0
        void* r8_2 = rbx + 9
        uint64_t i_2 = i_3
        uint64_t i
        
        do
            uint64_t rax_1 = zx.q(*r8_2)
            r8_2 += 1
            uint64_t rax_2 = rax_1 << rcx_1.b
            rcx_1 += 4
            rdx_1 |= rax_2
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    *(arg1 + 0x30) = rdx_1
else
    sub_142ab3600(arg1, i_3.d)
    int32_t i_1 = 0
    
    if (*rbx s> 0)
        int64_t r8_1 = 0
        
        do
            char rax = *(rbx + r8_1 + 9)
            r8_1 += 1
            i_1 += 1
            *(r8_1 + *(arg1 + 0x30) - 1) = rax
        while (i_1 s< *rbx)

*(arg1 + 0xc) = rbx[1]
int32_t result = *rbx
*(arg1 + 0x10) = result
return result
