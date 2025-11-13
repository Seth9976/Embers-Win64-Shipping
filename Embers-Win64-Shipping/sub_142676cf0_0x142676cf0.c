// 函数: sub_142676cf0
// 地址: 0x142676cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg1 + 0xf8)

if (i_2 != 0)
    int64_t* rbx_1 = *(arg1 + 0xf0) + 0x10
    int32_t i
    
    do
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx_1 = &rbx_1[4]
        i = i_2
        i_2 -= 1
    while (i != 1)

*(arg1 + 0xf8) = 0

if (*(arg1 + 0xfc) != 0)
    sub_1405a51b0(arg1 + 0xf0, 0)

void* i_1 = *(arg1 + 0x100)

for (void* rbp = i_1 + sx.q(*(arg1 + 0x108)) * 0x18; i_1 != rbp; i_1 += 0x18)
    void* rbx_2 = *(i_1 + 0x10)
    
    if (rbx_2 != 0)
        int64_t* rcx_3 = *(rbx_2 + 0x28)
        
        if (rcx_3 == 0)
            bool z_1
            
            if (0 == *(rbx_2 + 0x18))
                *(rbx_2 + 0x18) = 0
                z_1 = true
            else
                *(rbx_2 + 0x18)
                z_1 = false
            
            if (not(z_1))
                sub_1426788a0(rbx_2)
            
            goto label_142676dc3
        
        if ((*(*rcx_3 + 0x18))(rcx_3, rbx_2) == 0)
        label_142676dc3:
            
            if (*(rbx_2 + 0x28) != 0)
                int64_t* rcx_7 = *(rbx_2 + 0x20)
                (*(*rcx_7 + 0x20))(rcx_7, 0xffffffff, 0)
                *(rbx_2 + 0x28) = 0
        else
            sub_1426788a0(rbx_2)
            int64_t* rcx_5 = *(rbx_2 + 0x20)
            
            if (rcx_5 != 0)
                (*(*rcx_5 + 0x10))(rcx_5)
            
            *(rbx_2 + 0x28) = 0
        
        int64_t* rcx_8 = *(i_1 + 0x10)
        
        if (rcx_8 != 0)
            (*(*rcx_8 + 0x10))(rcx_8, 1)
        
        *(i_1 + 0x10) = 0

int64_t result = sub_142692b60(arg1)
*(arg1 + 0x108) = 0

if (*(arg1 + 0x10c) == 0)
    return result

return sub_1405a5130(arg1 + 0x100, 0)
