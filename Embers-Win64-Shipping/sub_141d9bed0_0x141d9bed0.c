// 函数: sub_141d9bed0
// 地址: 0x141d9bed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x190)
int32_t rax

if (rdx != 0)
    *(rdx + 0x1c) = 1
    int64_t* var_20 = nullptr
    int64_t var_28
    
    if (arg1 + 0x190 != &var_28)
        *(arg1 + 0x190) = 0
        var_28 = 0
        sub_1405aeff0(arg1 + 0x198, &var_20)
        int64_t* rcx_2 = var_20
        
        if (rcx_2 != 0)
            rcx_2[1].d -= 1
            
            if (rcx_2[1].d == 1)
                int64_t* rbx_1 = var_20
                (**rbx_1)(rbx_1)
                rax = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax == 1)
                    int64_t* rcx_4 = var_20
                    (*(*rcx_4 + 8))(rcx_4, 1)

int32_t i_1 = *(arg1 + 0x188)

if (i_1 != 0)
    int64_t* rdi_1 = *(arg1 + 0x180) + 8
    int32_t i
    
    do
        int64_t* rbx_2 = *rdi_1
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                rax = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdi_1 = &rdi_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x188) = 0

if (*(arg1 + 0x18c) != 0)
    sub_1405a5410(arg1 + 0x180, 0)

*(arg1 + 0x170) = 0
*(arg1 + 0x398) = 0
