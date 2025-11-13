// 函数: sub_1425cebc0
// 地址: 0x1425cebc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0x28)
char* rax = sub_140a752e0()
int64_t* rbx = *(rax + 0x30)

if (rbx != 0)
    rbx[1].d += 1

int64_t* var_28
sub_140a7c300(rax, &var_28, sub_140903440(*(rax + 0x28)))

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

int64_t* rbx_1 = var_28
int32_t i_2
void* rdi_2 = &rbx_1[sx.q(i_2) * 2]

if (rbx_1 != rdi_2)
    do
        void arg_10
        
        if (*sub_1408f1b50(arg1 + 0x30, &arg_10, rbx_1) != 0xffffffff)
            int32_t arg_8
            sub_1408f1b50(arg1 + 0x30, &arg_8, rbx_1)
            int64_t rax_6 = sx.q(arg_8)
            void* const rcx_8
            
            if (rax_6.d == 0xffffffff)
                rcx_8 = nullptr
            else
                rcx_8 = (rax_6 << 5) + *(arg1 + 0x30)
            
            int64_t* rax_7 = rcx_8 + 0x10
            
            if (rcx_8 == 0)
                rax_7 = nullptr
            
            result = *rax_7
            break
        
        rbx_1 = &rbx_1[2]
    while (rbx_1 != rdi_2)
    
    rbx_1 = var_28

int32_t i_1 = i_2

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_9 = *rbx_1
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_28

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

return result
