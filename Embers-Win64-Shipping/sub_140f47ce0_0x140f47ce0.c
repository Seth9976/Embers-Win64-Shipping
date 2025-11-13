// 函数: sub_140f47ce0
// 地址: 0x140f47ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
char rax = 0
int64_t* rbx_1
int64_t rbp

if (*(arg1 + 0x390) == 0)
    rbx_1 = 0.q
    rbp.b = 0
else
    rbx_1 = *(arg1 + 0x398)
    
    if (rbx_1 == 0)
        rbx_1 = 0.q
        rbp.b = 0
    else
        int32_t rdx = rbx_1[1].d
        
        if (rdx s<= 0)
            rbx_1 = 0.q
            rbp.b = 0
        else
            int64_t* rcx = rbx_1
            
            if (rbx_1 != 0)
                if (rdx == 0)
                    rbx_1 = nullptr
                    rcx = nullptr
                else
                    rbx_1[1].d = rdx + 1
            
            void* rax_2 = nullptr
            
            if (rcx != 0)
                rax_2 = *(arg1 + 0x390)
            
            void* rcx_1
            
            if (*(rax_2 + 0x340) != 0 && *(rax_2 + 0x2c0) != 0)
                rcx_1 = *(rax_2 + 0x2c8)
            
            if (*(rax_2 + 0x340) == 0 || *(rax_2 + 0x2c0) == 0 || rcx_1 == 0 || *(rcx_1 + 8) s<= 0)
                rax = 1
                rbp.b = 0
            else
                rbp.b = 1
                rax = 1

if ((rax & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if (rbp.b == 0)
    *arg2 = 0
    arg2[1] = 0
else
    int64_t* rcx_4 = *(arg1 + 0x398)
    int64_t* rbx_2 = rcx_4
    
    if (rcx_4 != 0)
        int32_t rax_5 = rcx_4[1].d
        
        if (rax_5 != 0)
            rcx_4[1].d = rax_5 + 1
            rax_5.b = 1
        
        if (rax_5.b == 0)
            rcx_4 = nullptr
            rbx_2 = nullptr
    
    if (rbx_2 != 0)
        rdi = *(arg1 + 0x390)
    
    *arg2 = rdi
    arg2[1] = rcx_4
    
    if (rcx_4 != 0)
        rcx_4[1].d += 1
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

return arg2
