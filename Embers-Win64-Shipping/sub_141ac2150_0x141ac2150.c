// 函数: sub_141ac2150
// 地址: 0x141ac2150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ea5640(arg1 + 0x100, arg2)
int64_t result = sub_141ea5640(arg1 + 0x218, arg2)
*(arg1 + 0x258) = 0

if (*(arg1 + 0x25c) s<= 0xffffffff)
    result = sub_1405dadb0(arg1 + 0x250, 0)

if (*(arg1 + 0x110) s> 1)
    result = sub_141ea6180(arg1 + 0x100, arg2)
    
    if (result.b != 0)
        int64_t rdi_1 = sx.q(*(arg1 + 0x110))
        int64_t rbx_1 = sx.q(*(arg1 + 0x258))
        int32_t rax = (rbx_1 + rdi_1).d
        *(arg1 + 0x258) = rax
        
        if (rax s> *(arg1 + 0x25c))
            sub_1405a4cf0(arg1 + 0x250)
        
        memset(*(arg1 + 0x250) + (rbx_1 << 2), 0, rdi_1 << 2)
        int32_t rdi_2 = 1
        result = *(arg1 + 0x250)
        int32_t rdx_5 = (*(arg1 + 0x108) * 2) s>> 1
        *(result + (sx.q(*(arg1 + 0x110)) << 2) - 4) = rdx_5
        int32_t rbx_2 = *(arg1 + 0x110)
        
        if (rbx_2 s> 1)
            do
                if (rdx_5 + 1 u<= 1)
                    result = *(arg1 + 0x250)
                    *(result + (sx.q(rbx_2 - rdi_2 - 1) << 2)) = 0xffffffff
                else
                    rdx_5 = sub_141ea4040(arg2, rdx_5)
                    result = *(arg1 + 0x250)
                    *(result + (sx.q(rbx_2 - rdi_2 - 1) << 2)) = rdx_5
                
                rbx_2 = *(arg1 + 0x110)
                rdi_2 += 1
            while (rdi_2 s< rbx_2)

int32_t* i = *(arg1 + 0x1f8)

for (void* rdi_5 = &i[sx.q(*(arg1 + 0x200)) * 0x10]; i != rdi_5; i = &i[0x10])
    result = sub_141ea5640(i, arg2)

return result
