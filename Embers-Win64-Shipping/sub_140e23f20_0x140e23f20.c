// 函数: sub_140e23f20
// 地址: 0x140e23f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[-0xa] == 0)
    return 

uint64_t rax = arg1[-9]

if (rax == 0 || *(rax + 8) s<= 0 || (*(*arg1 + 0x28))().d == arg2)
    return 

int64_t* rbx_2

if (arg2 == 0)
    rbx_2 = arg1[-9]
    void* rcx_4 = nullptr
    
    if (rbx_2 != 0)
        rax = zx.q(rbx_2[1].d)
        
        if (rax.d == 0)
            rbx_2 = nullptr
        else
            rbx_2[1].d = rax.d + 1
            
            if (rbx_2 != 0)
                rcx_4 = arg1[-0xa]
                rbx_2[1].d += 1
    
    int64_t* rcx_5 = *(rcx_4 + 0x910)
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x48))(rcx_5)
    
label_140e24022:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
        
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
else
    if (arg2 == 1)
        rbx_2 = arg1[-9]
        void* rcx_2 = nullptr
        
        if (rbx_2 != 0)
            rax = zx.q(rbx_2[1].d)
            
            if (rax.d == 0)
                rbx_2 = nullptr
            else
                rbx_2[1].d = rax.d + 1
                
                if (rbx_2 != 0)
                    rcx_2 = arg1[-0xa]
                    rbx_2[1].d += 1
        
        int64_t* rcx_3 = *(rcx_2 + 0x910)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x38))(rcx_3)
        
        goto label_140e24022
    
    if (arg2 == 2)
        rbx_2 = arg1[-9]
        void* rcx = nullptr
        
        if (rbx_2 != 0)
            rax = zx.q(rbx_2[1].d)
            
            if (rax.d == 0)
                rbx_2 = nullptr
            else
                rbx_2[1].d = rax.d + 1
                
                if (rbx_2 != 0)
                    rcx = arg1[-0xa]
                    rbx_2[1].d += 1
        
        int64_t* rcx_1 = *(rcx + 0x910)
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x40))(rcx_1)
        
        goto label_140e24022
