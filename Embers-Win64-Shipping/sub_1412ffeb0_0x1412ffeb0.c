// 函数: sub_1412ffeb0
// 地址: 0x1412ffeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142f59b30
int64_t rcx = arg1[0x2a]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t i_2 = 2
void* r14 = &arg1[0x29]

for (int64_t i = 2; i != 0; )
    int64_t* rbx_1 = *(r14 - 0x10)
    r14 -= 0x10
    i -= 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_3 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_3 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t i_1 = 2
void* rsi = &arg1[0x24]

do
    int64_t rcx_3 = *(rsi - 0x10)
    rsi -= 0x10
    i_1 -= 1
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
while (i_1 != 0)

void* rbx_2 = &arg1[0x2a]

do
    int64_t* rcx_4 = *(rbx_2 - 0x60)
    rbx_2 -= 0x60
    i_2 -= 1
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x38))(rcx_4)
while (i_2 != 0)

*arg1 = &data_142f11e28
return &data_142f11e28
