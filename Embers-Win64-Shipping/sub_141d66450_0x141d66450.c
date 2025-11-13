// 函数: sub_141d66450
// 地址: 0x141d66450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* entry_rdx
int64_t* rcx = *entry_rdx
int64_t* entry_r8
int64_t* rdi = *entry_r8
char rax_1 = (*(*rcx + 0x18))(rcx)
int64_t r9 = *rdi
int512_t entry_zmm1
int512_t entry_zmm2
bool cond:0 = rax_1 u> (*(r9 + 0x18))(rdi, entry_zmm1, entry_zmm2, r9)
int64_t* rbx_1 = entry_rdx[1]
rdi.b = cond:0

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = entry_r8[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        int64_t r8 = *rbx_2
        (*r8)(rbx_2, entry_zmm1, r8)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_1 = *rbx_2
            (*(r8_1 + 8))(rbx_2, 1, r8_1)

return zx.q(rdi.b)
