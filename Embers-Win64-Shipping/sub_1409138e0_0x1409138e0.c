// 函数: sub_1409138e0
// 地址: 0x1409138e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x24) = 1
int64_t* rcx = *(arg1 + 0x30)

if (rcx != 0)
    (*(*rcx + 0x28))(rcx, 1)
    *(arg1 + 0x30) = 0

int64_t* rsi = *(arg1 + 0x38)
uint64_t rbp = sx.q(*(arg1 + 0x40))
void* r14_2 = &rsi[rbp * 2]

if (rsi != r14_2)
    do
        void* rbx_1 = *rsi
        int64_t* rcx_1 = *(rbx_1 + 0x90)
        
        if (rcx_1 != 0)
            *(rbx_1 + 0xa8) = 0
            (*(*rcx_1 + 0x18))(rcx_1)
            int64_t* rcx_2 = *(rbx_1 + 0x90)
            
            if (rcx_2 != 0)
                (*(*rcx_2 + 0x20))(rcx_2, 1)
            
            *(rbx_1 + 0x90) = 0
        
        int64_t* rcx_3 = *(rbx_1 + 0x88)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x10))(rcx_3)
        
        rsi = &rsi[2]
    while (rsi != r14_2)
    
    rbp = zx.q(*(arg1 + 0x40))

if (rbp.d != 0)
    int64_t* rsi_2 = *(arg1 + 0x38) + 8
    int32_t i
    
    do
        int64_t* rbx_2 = *rsi_2
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp2_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        rsi_2 = &rsi_2[2]
        i = rbp.d
        rbp = zx.q(rbp.d - 1)
    while (i != 1)

*(arg1 + 0x40) = 0

if (*(arg1 + 0x44) != 0)
    sub_1405a5410(arg1 + 0x38, 0)

while (true)
    void* rax_8 = **(arg1 + 0xb0)
    
    if (rax_8 == 0)
        break
    
    void* rsi_3 = *(arg1 + 0xb0)
    *(arg1 + 0xb0) = rax_8
    void var_38
    
    if (rax_8 + 8 != &var_38)
        *(rax_8 + 8) = 0
        int64_t* rbx_3 = *(rax_8 + 0x10)
        
        if (rbx_3 != 0)
            *(rax_8 + 0x10) = 0
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp5_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
    
    if (rsi_3 != 0)
        int64_t* rbx_4 = *(rsi_3 + 0x10)
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp6_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        j_sub_140a74f90(rsi_3)

int64_t* result

while (true)
    result = *(arg1 + 0xc0)
    void* rdx_2 = *result
    
    if (rdx_2 == 0)
        break
    
    int64_t rcx_12 = *(arg1 + 0xc0)
    *(arg1 + 0xc0) = rdx_2
    *(rdx_2 + 8) = arg2
    j_sub_140a74f90(rcx_12)

*(arg1 + 0xd0) = 0
return result
