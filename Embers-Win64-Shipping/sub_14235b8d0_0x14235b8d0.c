// 函数: sub_14235b8d0
// 地址: 0x14235b8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x260)

if (rbx == 0)
    int64_t rax
    rax.b = 1
    return rax

bool z

if (0 == *(rbx + 0x20))
    *(rbx + 0x20) = 0
    z = true
else
    *(rbx + 0x20)
    z = false

if (z)
label_14235b95f:
    
    if (*(rbx + 0x30) != 0)
        int64_t* rcx_4 = *(rbx + 0x28)
        (*(*rcx_4 + 0x20))(rcx_4, 0xffffffff, 0)
        *(rbx + 0x30) = 0
else
    if (arg2 == 0)
        uint64_t rax_1
        rax_1.b = 0
        return rax_1
    
    rbx = *(arg1 + 0x260)
    int64_t* rcx = *(rbx + 0x30)
    
    if (rcx == 0)
        bool z_1
        
        if (0 == *(rbx + 0x20))
            *(rbx + 0x20) = 0
            z_1 = true
        else
            *(rbx + 0x20)
            z_1 = false
        
        if (not(z_1))
            sub_141e59870(rbx + 8)
            *(rbx + 0x20) -= 1
        
        goto label_14235b95f
    
    if ((*(*rcx + 0x18))(rcx, rbx) == 0)
        goto label_14235b95f
    
    sub_141e59870(rbx + 8)
    *(rbx + 0x20) -= 1
    int64_t* rcx_2 = *(rbx + 0x28)
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x10))(rcx_2)
    
    *(rbx + 0x30) = 0

int64_t* rcx_5 = *(arg1 + 0x260)

if (rcx_5 != 0)
    (*(*rcx_5 + 0x10))(rcx_5, 1)

*(arg1 + 0x260) = 0
*(arg1 + 0x1a4)
*(arg1 + 0x1a4) = 2
uint64_t rax_8
rax_8.b = 1
return rax_8
