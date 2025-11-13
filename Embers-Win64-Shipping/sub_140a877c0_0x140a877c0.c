// 函数: sub_140a877c0
// 地址: 0x140a877c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r12_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t rcx = r12_1 * 0xc8
void* rsi_2 = *arg1 + rcx
void* rbx_1 = rsi_2 + 0xb8
int32_t i

do
    *(rbx_1 + 8) = 0
    int64_t rdi_1 = *rbx_1
    
    if (rdi_1 != 0)
        int64_t* rcx_1 = data_143ddb3f0
        
        if (rcx_1 == 0)
            sub_140a750a0()
            rcx_1 = data_143ddb3f0
        
        (*(*rcx_1 + 0x30))(rcx_1, rdi_1)
    
    sub_140a62650(rbx_1 - 0x40)
    *(rbx_1 - 0x48) = 0
    int64_t rdi_2 = *(rbx_1 - 0x50)
    
    if (rdi_2 != 0)
        int64_t* rcx_3 = data_143ddb3f0
        
        if (rcx_3 == 0)
            sub_140a750a0()
            rcx_3 = data_143ddb3f0
        
        (*(*rcx_3 + 0x30))(rcx_3, rdi_2)
    
    sub_140a62650(rbx_1 - 0x90)
    int64_t rdi_3 = *(rbx_1 - 0xa8)
    
    if (rdi_3 != 0)
        int64_t* rcx_5 = data_143ddb3f0
        
        if (rcx_5 == 0)
            sub_140a750a0()
            rcx_5 = data_143ddb3f0
        
        (*(*rcx_5 + 0x30))(rcx_5, rdi_3)
    
    int64_t rdi_4 = *rsi_2
    
    if (rdi_4 != 0)
        int64_t* rcx_6 = data_143ddb3f0
        
        if (rcx_6 == 0)
            sub_140a750a0()
            rcx_6 = data_143ddb3f0
        
        (*(*rcx_6 + 0x30))(rcx_6, rdi_4)
    
    rsi_2 += 0xc8
    rbx_1 += 0xc8
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_5 = arg1[1].d
int32_t rcx_8 = rax_5 - r12_1.d

if (rcx_8 != arg3)
    memmove(rcx + *arg1, sx.q(r12_1.d + arg3) * 0xc8 + *arg1, (rcx_8 - arg3) * 0xc8)
    rax_5 = arg1[1].d

arg1[1].d = rax_5 - arg3

if (arg4 != 0)
    sub_140a89600(arg1)
