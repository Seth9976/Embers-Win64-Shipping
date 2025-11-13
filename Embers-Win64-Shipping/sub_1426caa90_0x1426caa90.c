// 函数: sub_1426caa90
// 地址: 0x1426caa90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int64_t i_1 = sx.q(arg2[1].d)
sub_1426d50b0(arg1, i_1.d)
int32_t rax = arg1[1].d + i_1.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c4f50(arg1)

void* rsi = &arg1[2]
arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)

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

void* rax_4 = *arg1
int32_t rbp = 0

if (i_1 s> 0)
    int32_t rsi_1 = 1
    void* r12_1 = *arg2 - rax_4
    void* rbx_1 = rax_4 + 8
    int64_t i
    
    do
        void* rax_5 = arg2[4]
        void* rcx_3 = &arg2[2]
        
        if (rax_5 != 0)
            rcx_3 = rax_5
        
        int32_t rax_6 = rbp
        
        if (rbp s< 0)
            rax_6 = rbp + 0x1f
        
        if ((*(rcx_3 + (sx.q(rax_6 s>> 5) << 2)) & rsi_1) == 0)
            *(rbx_1 - 8) = *(rbx_1 + r12_1 - 8)
            *(rbx_1 - 4) = *(r12_1 + rbx_1 - 4)
        else
            *(rbx_1 - 8) = *(rbx_1 + r12_1 - 8)
            sub_1426c5650(rbx_1, r12_1 + rbx_1)
            *(rbx_1 + 0x20) = *(r12_1 + rbx_1 + 0x20)
            *(rbx_1 + 0x24) = *(r12_1 + rbx_1 + 0x24)
        
        rbp += 1
        rsi_1 = rol.d(rsi_1, 1)
        rbx_1 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg1
