// 函数: sub_142152980
// 地址: 0x142152980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int64_t* rcx = *(arg1 + 0x13c0)

if (rcx != 0)
    (*(*rcx + 0x290))(rcx)
else if (*(arg1 + 0x13d0) != *(arg1 + 0x13fc))
    int32_t rax_2 = *(arg1 + 0x13d4)
    *(arg1 + 0x13d0) = 0
    
    if (rax_2 s< 0 && rax_2 != 0)
        sub_140638cc0(arg1 + 0x13c8, 0)
    
    *(arg1 + 0x13f8) = 0xffffffff
    *(arg1 + 0x13fc) = 0
    sub_140774790(arg1 + 0x13d8)
    int64_t rcx_3 = sx.q(*(arg1 + 0x1410))
    void* rdi_1 = arg1 + 0x1400
    void* rax_3 = *(rdi_1 + 8)
    
    if (rcx_3 s> 0)
        if (rax_3 != 0)
            rdi_1 = rax_3
        
        __builtin_memset(rdi_1, 0xffffffff, rcx_3 << 2)

*(arg1 + 0x14c0) = 0

if (*(arg1 + 0x14c4) != 0)
    sub_1405a5410(arg1 + 0x14b8, 0)

*(arg1 + 0x14e8) = 0xffffffff
*(arg1 + 0x14ec) = 0
sub_14059a8e0(arg1 + 0x14c8, 0)
int32_t i_2 = *(arg1 + 0x1500)

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rcx_6 = *(arg1 + 0x14f8)
        void* rax_4 = arg1 + 0x14f0
        int64_t rdx_3 = (sx.q(*(arg1 + 0x1500)) - 1) & rbx
        
        if (rcx_6 != 0)
            rax_4 = rcx_6
        
        rbx += 1
        *(rax_4 + (rdx_3 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_1417ad930(arg1 + 0x1418, 0)
sub_140d9e780(arg1 + 0x1468, 0)
return sub_140d9e780(arg1 + 0x1468, 0) __tailcall
