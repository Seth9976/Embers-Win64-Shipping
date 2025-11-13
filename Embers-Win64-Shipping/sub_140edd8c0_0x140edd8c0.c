// 函数: sub_140edd8c0
// 地址: 0x140edd8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x4c8)
int64_t* rdi = nullptr

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rdi = *(arg1 + 0x4c0)

int64_t* result = (*(*rdi + 0x68))(rdi, zx.q(*(arg1 + 0x4d0)))

if (result.b != 0)
    result = (*(*rdi + 0x48))(rdi, arg1)
    
    if (result != 0)
        int64_t r8_1 = *rdi
        char rax_4
        int64_t r8_2
        rax_4, r8_2 = (*(r8_1 + 0x60))(rdi, result, r8_1)
        void* rax_5 = result[1]
        r8_2.b = rax_4 == 0
        int64_t var_18 = *result
        void* var_10_1 = rax_5
        
        if (rax_5 != 0)
            *(rax_5 + 8) += 1
        
        result = (*(*rdi + 0x50))(rdi, &var_18, r8_2)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
