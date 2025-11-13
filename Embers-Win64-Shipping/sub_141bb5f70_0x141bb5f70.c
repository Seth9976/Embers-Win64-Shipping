// 函数: sub_141bb5f70
// 地址: 0x141bb5f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x1b4)

if ((rax & 0x20) != 0)
    return 0

*(arg1 + 0x1b4) = rax | 0x20
void* rax_2 = sub_140d226f0(arg1, sub_141c122a0())

if (rax_2 != 0)
    sub_141be56f0(arg1, rax_2 + 0x218)

int64_t (* rbx)(int64_t* arg1, int64_t* arg2) = *(arg1 + 0x10)

if (rbx == 0)
    (*(*arg1 + 0x2d0))(arg1)
else
    void* rax_3 = sub_141c1b420()
    void* rdx_2 = *(rbx + 0x10)
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
        (*(*arg1 + 0x2d0))(arg1)
    else
        if (((*(rbx + 0x330)).b & 6) != 6)
            rbx = sub_141bb2670(arg1)
        
        if (rbx == 0)
            (*(*arg1 + 0x2d0))(arg1)
        else
            sub_141bb6b10(rbx, arg1)

if (*(arg1 + 0x1a8) == 0)
    void arg_8
    uint64_t rbx_1 = *sub_140b58260(&arg_8, u"WidgetTree", 1)
    uint32_t rcx_9
    rcx_9.b = (rbx_1 u>> 0x20).d == 0
    
    if ((rcx_9.b & sub_140b5b8a0(rbx_1.d, 0)) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    *(arg1 + 0x1a8) = sub_140d2dfc0(sub_141c243c0(), arg1, rbx_1, 0x40, 0, 0, 0, 0, 0)

if (*(arg1 + 0x1b4) s>= 0)
    void* rax_14 = *(arg1 + 0x1a8)
    *(rax_14 + 8) |= 0x40
    sub_141bb6870(arg1)

if (sub_1420fea90(arg1 + 0x218) != 0)
    (*(*arg1 + 0x308))(arg1)

return 1
