// 函数: sub_140e83c40
// 地址: 0x140e83c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = *arg2
void* rax_1 = arg2[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_140e841c0(arg1, &var_18)
int64_t* rbx = arg1[0x68]
int64_t rbp = 0

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    
    if (rax_2 != 0)
        rbx[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rbp = arg1[0x67]

int64_t r14 = *arg2

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rbp != r14)
    *arg2
    int64_t rdx_1
    rdx_1.b = 1
    arg1[0x67] = *arg2
    void* rbx_1 = arg2[1]
    int64_t* rcx_3 = arg1[0x68]
    
    if (rbx_1 != rcx_3)
        if (rbx_1 != 0)
            *(rbx_1 + 0xc) += 1
            rcx_3 = arg1[0x68]
        
        if (rcx_3 != 0)
            int32_t temp4_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
        
        arg1[0x68] = rbx_1

uint64_t result = sub_140e58e80(arg1, arg3)
int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
