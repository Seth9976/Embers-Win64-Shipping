// 函数: sub_142600270
// 地址: 0x142600270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
void* rbx = arg1->__offset(0x28).q
bool z

if (0 == *(rbx + 0x38))
    *(rbx + 0x38) = 0
    z = true
else
    *(rbx + 0x38)
    z = false

if (z)
    if (*(rbx + 0x48) != 0)
        int64_t* rcx = *(rbx + 0x40)
        (*(*rcx + 0x20))(rcx, 0xffffffff, 0)
        *(rbx + 0x48) = 0
    
    rbx.b = 1
else
    rbx.b = 0

LeaveCriticalSection(arg1)
return zx.q(rbx.b)
