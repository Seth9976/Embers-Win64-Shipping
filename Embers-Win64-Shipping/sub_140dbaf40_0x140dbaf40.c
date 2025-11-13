// 函数: sub_140dbaf40
// 地址: 0x140dbaf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* r11_1 = *(arg1 + 0x120)
int64_t r15_1 = sx.q(arg2)
void* rdi_1 = arg1

if (r11_1 != 0)
    rdi_1 = r11_1

int32_t i_1 = arg3
int64_t r13_1 = r15_1 * 0x48
void* rdi_3 = rdi_1 + 0x40 + r13_1
int32_t i

do
    int64_t* rbx_1 = *rdi_3
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    rdi_3 += 0x48
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_3 = *(arg1 + 0x128)
int32_t rcx_3 = rax_3 - r15_1.d

if (rcx_3 != arg3)
    void* rax_4 = *(arg1 + 0x120)
    void* r9 = arg1
    
    if (rax_4 != 0)
        r9 = rax_4
    
    memmove(r9 + r13_1, r9 + sx.q(r15_1.d + arg3) * 0x48, (rcx_3 - arg3) * 0x48)
    rax_3 = *(arg1 + 0x128)

*(arg1 + 0x128) = rax_3 - arg3

if (arg4 != 0)
    sub_140dbd0b0(arg1)
