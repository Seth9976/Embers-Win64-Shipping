// 函数: sub_141a6f5a0
// 地址: 0x141a6f5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int64_t i_2 = sx.q(arg2[1].d)
sub_140915780(arg1, i_2.d)
int32_t rax = arg1[1].d + i_2.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1412955f0(arg1)

void* rbx = &arg1[2]
arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)

if (rbx != &arg2[2])
    sub_14059a8e0(rbx, arg2[5].d)
    int32_t rax_3 = arg2[5].d
    *(rbx + 0x18) = rax_3
    
    if (rax_3 != 0)
        void* r9_1 = arg2[4]
        void* r10_1 = *(rbx + 0x10)
        void* rdx_3 = &arg2[2]
        
        if (r9_1 != 0)
            rdx_3 = r9_1
        
        if (r10_1 != 0)
            rbx = r10_1
        
        memcpy(rbx, rdx_3, (zx.q(rax_3 + 0x1f) u>> 5 << 2).d)

void* rax_4 = *arg1
int32_t r14 = 0
int64_t i_1 = i_2

if (i_2.d s> 0)
    int32_t rsi = 1
    void* rbp_2 = *arg2 - rax_4
    void* rbx_1 = rax_4 + 0x10
    int64_t i
    
    do
        void* rax_5 = arg2[4]
        void* rcx_3 = &arg2[2]
        
        if (rax_5 != 0)
            rcx_3 = rax_5
        
        int32_t rax_6 = r14
        
        if (r14 s< 0)
            rax_6 = r14 + 0x1f
        
        bool cond:0_1 = (*(rcx_3 + (sx.q(rax_6 s>> 5) << 2)) & rsi) == 0
        *(rbx_1 - 0x10) = *(rbx_1 + rbp_2 - 0x10)
        
        if (cond:0_1)
            *(rbx_1 - 0xc) = *(rbx_1 + rbp_2 - 0xc)
        else
            *(rbx_1 - 8) = *(rbx_1 + rbp_2 - 8)
            sub_140596d10(rbx_1, rbx_1 + rbp_2)
            sub_1405ac190(rbx_1 + 0x10, rbp_2 + 0x10 + rbx_1)
            *(rbx_1 + 0x30) = *(rbx_1 + rbp_2 + 0x30)
            *(rbx_1 + 0x38) = *(rbx_1 + rbp_2 + 0x38)
            *(rbx_1 + 0x3c) = *(rbx_1 + rbp_2 + 0x3c)
            *(rbx_1 + 0x4c) = *(rbx_1 + rbp_2 + 0x4c)
            *(rbx_1 + 0x5c) = *(rbx_1 + rbp_2 + 0x5c)
            *(rbx_1 + 0x6c) = *(rbx_1 + rbp_2 + 0x6c)
            *(rbx_1 + 0x7c) = *(rbx_1 + rbp_2 + 0x7c)
            *(rbx_1 + 0x8c) = *(rbx_1 + rbp_2 + 0x8c)
            sub_141a30b70(rbx_1 + 0x90, rbp_2 + 0x90 + rbx_1)
            *(rbx_1 + 0xa8) = *(rbx_1 + rbp_2 + 0xa8)
            *(rbx_1 + 0xb0) = *(rbx_1 + rbp_2 + 0xb0)
            sub_1405ac190(rbx_1 + 0xc0, rbp_2 + 0xc0 + rbx_1)
            *(rbx_1 + 0xe0) = *(rbx_1 + rbp_2 + 0xe0)
            *(rbx_1 + 0xe4) = *(rbx_1 + rbp_2 + 0xe4)
        
        r14 += 1
        rsi = rol.d(rsi, 1)
        rbx_1 += 0xf8
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg1
