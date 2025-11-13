// 函数: sub_140a4f670
// 地址: 0x140a4f670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0x88)

if (rbp == 0)
    return 

while (true)
    uint64_t rax = 0
    
    if (0 == *(rbp + 0x40))
        *(rbp + 0x40) = 0
    else
        rax = *(rbp + 0x40)
    
    uint64_t rbx_1 = rax
    int32_t i
    
    for (i = rax.d & 0x3ffffff; i != 0; i = rax.d & 0x3ffffff)
        if ((((rbx_1 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                u< (rbx_1 & 0xfffffffffc000000))
            sub_140a2c900()
        
        void* rdx_1
        
        if (i != 0)
            rdx_1 = *((zx.q(i) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(i) & 0x3fff) * 0x18
        else
            rdx_1 = nullptr
        
        bool z_1
        
        if (rbx_1 == *(rbp + 0x40))
            *(rbp + 0x40) = zx.q(*(rdx_1 + 0x10)) | ((rbx_1 & 0xfffffffffc000000) + 0x4000000)
            z_1 = true
        else
            *(rbp + 0x40)
            z_1 = false
        
        if (z_1)
            *(rdx_1 + 0x10) = 0
            break
        
        rax = 0
        
        if (0 == *(rbp + 0x40))
            *(rbp + 0x40) = 0
        else
            rax = *(rbp + 0x40)
        
        rbx_1 = rax
    
    if (i == 0)
        break
    
    int64_t* rbx_2 = *(*((zx.q(i) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(i) & 0x3fff) * 0x18 + 8)
    sub_140a24050(i)
    
    if (rbx_2 == 0)
        break
    
    (*(*rbx_2 + 0x28))(rbx_2, 1)

*(arg1 + 0x88) = 0
