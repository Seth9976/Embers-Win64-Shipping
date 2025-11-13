// 函数: sub_141a6f930
// 地址: 0x141a6f930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1

if (arg1 == arg2)
    return result

int64_t i_1 = sx.q(arg2[1].d)
sub_140aeeb60(arg1, i_1.d)
int32_t rax = result[1].d + i_1.d
result[1].d = rax

if (rax s> *(result + 0xc))
    sub_1405c4e40(result)

void* rsi = &result[2]
result[6].d = arg2[6].d
*(result + 0x34) = *(arg2 + 0x34)

if (rsi != &arg2[2])
    sub_14059a8e0(rsi, arg2[5].d)
    int32_t rax_3 = arg2[5].d
    *(rsi + 0x18) = rax_3
    
    if (rax_3 != 0)
        void* r9_1 = arg2[4]
        void* r10_1 = *(rsi + 0x10)
        void* rdx_3 = &arg2[2]
        
        if (r9_1 != 0)
            rdx_3 = r9_1
        
        if (r10_1 != 0)
            rsi = r10_1
        
        memcpy(rsi, rdx_3, (zx.q(rax_3 + 0x1f) u>> 5 << 2).d)

void* rax_4 = *result
int32_t rbp = 0

if (i_1 s> 0)
    int32_t rsi_1 = 1
    char* r12_1 = *arg2 - rax_4
    char* rbx_1 = rax_4 + 0x10
    int64_t i
    
    do
        void* rax_5 = arg2[4]
        int64_t* rdx_5 = &r12_1[-0x10] + rbx_1
        void* r8_4 = &arg2[2]
        
        if (rax_5 != 0)
            r8_4 = rax_5
        
        int32_t rax_6 = rbp
        
        if (rbp s< 0)
            rax_6 = rbp + 0x1f
        
        if ((*(r8_4 + (sx.q(rax_6 s>> 5) << 2)) & rsi_1) == 0)
            *(rbx_1 - 0x10) = *rdx_5
            *(rbx_1 - 0xc) = *(r12_1 + rbx_1 - 0xc)
        else
            sub_140596d10(&rbx_1[-0x10], rdx_5)
            *rbx_1 = *(r12_1 + rbx_1)
            *(rbx_1 + 8) = *(r12_1 + rbx_1 + 8)
            *(rbx_1 + 0xc) = *(r12_1 + rbx_1 + 0xc)
        
        rbp += 1
        rsi_1 = rol.d(rsi_1, 1)
        rbx_1 = &rbx_1[0x20]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
