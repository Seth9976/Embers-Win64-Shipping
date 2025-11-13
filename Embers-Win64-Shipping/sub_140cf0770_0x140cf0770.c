// 函数: sub_140cf0770
// 地址: 0x140cf0770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
void* rax = sub_140a7b0a0()

if (rax != 0)
    sub_140a8dc00(rax, *arg1)

sub_140a751d0()
*(arg1 + 8) = arg2
void* rcx_2 = &arg1[0x30]
int32_t i = 0
__builtin_memset(&arg1[0x10], 0, 0x20)
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

*rcx_2 = 0
*(rcx_2 + 8) = 0
*(arg1 + 0x50) = 0xffffffff
*(arg1 + 0x54) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x68) = 0
void* rax_3 = sub_140a7b0a0()

if (rax_3 != 0)
    sub_140a8dc00(rax_3, 0)

sub_140cfe1a0(arg1)
int64_t* rax_4 = sub_140cfed40(&arg1[0x20], *(arg1 + 8))

if ((not.b((arg3 u>> 3).b) & 1) == 0)
    sub_140cf2b90(rax_4, &arg1[0x10], arg3.b)
else
    sub_140cf2600(rax_4, &arg1[0x10], arg3)

void* rax_5 = sub_140a7b0a0()

if (rax_5 != 0)
    sub_140a89de0(rax_5, 0)

if ((arg3 & 0x30000) != 0 && *(arg1 + 0x18) != 0)
    void* rax_6 = sub_140a7b0a0()
    
    if (rax_6 != 0)
        sub_140a8dc00(rax_6, 0)
    
    int64_t rcx_11 = *(arg1 + 0x10)
    int64_t rdx_3 = rcx_11 + (sx.q(*(arg1 + 0x18)) << 3)
    
    if (rcx_11 != rdx_3)
        while (((arg3 u>> 0x11).b & 1) != 0 || i s< 0x64)
            i += 1
            rcx_11 += 8
            
            if (rcx_11 == rdx_3)
                break
    
    void* rax_8 = sub_140a7b0a0()
    
    if (rax_8 != 0)
        sub_140a89de0(rax_8, 0)

return arg1
