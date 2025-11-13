// 函数: sub_140e1abc0
// 地址: 0x140e1abc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* entry_rdx
int64_t* rbx = *(entry_rdx + 0x918)
int32_t rbp = 0
int64_t* rcx = *(entry_rdx + 0x910)

if (rbx != 0)
    rbx[1].d += 1

char rax_1 = (*(*rcx + 0xd0))(rcx)
int32_t rax_3

if (rax_1 != 0)
    int64_t* rcx_1 = *(entry_rdx + 0x910)
    rax_3 = (*(*rcx_1 + 0x68))(rcx_1)

int64_t rdi

if (rax_1 == 0 || rax_3 != 0)
    rdi.b = 0
else
    rdi.b = 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1

if (rdi.b == 0)
    rbx_1 = 0.q
    rdi.b = 0
else
    rbx_1 = *(entry_rdx + 0x918)
    rbp = 2
    int64_t* rcx_4 = *(entry_rdx + 0x910)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if ((*(*rcx_4 + 0xc8))(rcx_4) == 0)
        rdi.b = 0
    else
        rdi.b = 1

if (rbp != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t r8_1 = *rbx_1
        int512_t entry_zmm1
        (*r8_1)(rbx_1, entry_zmm1, r8_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_2 = *rbx_1
            (*(r8_2 + 8))(rbx_1, 1, r8_2)

return zx.q(rdi.b)
