// 函数: sub_140ec0750
// 地址: 0x140ec0750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x68)
char rbp = 0

if (rdi != 0)
    rdi[1].d += 1

int128_t* rax_3
int64_t* rbx

if (*(arg1 + 0x60) == 0)
    void var_28
    rax_3 = sub_140dda8f0(&var_28)
    rbx = 0.q
else
    rbx = *(arg1 + 0x68)
    void* rax_1 = *(arg1 + 0x60)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rbp = 1
    int64_t zmm1 = *(rax_1 + 0x60)
    int32_t var_50_1 = *(rax_1 + 0x68)
    int128_t var_68
    rax_3 = &var_68
    var_68 = *(rax_1 + 0x50)
    int64_t var_58_1 = zmm1

int128_t var_48 = *rax_3
int64_t var_38 = rax_3[1].q
int32_t var_30 = *(rax_3 + 0x18)

if ((rbp & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

void* rcx_5 = &var_48

if (*(arg1 + 0x110) != 0)
    rcx_5 = arg1 + 0xf8

if (*(rcx_5 + 0x18) == 0)
    int32_t result
    result.b = 0
    return result

void* rax_8 = sub_140e14f50(rcx_5)
bool rdx = sub_140b5b8a0(*(rax_8 + 0x50), 0) == 0
int32_t rcx_6
rcx_6.b = *(rax_8 + 0x54) != 0
rcx_6.b |= rdx
void* rbx_1

if (rcx_6.b == 0)
    rbx_1 = *(rax_8 + 0x48)

int64_t rbx_2

if (rcx_6.b != 0 || rbx_1 == 0)
    rbx_2 = *(rax_8 + 0x50)
else
    rbx_2 = *(rbx_1 + 0x18)

int32_t rcx_7
rcx_7.b = (rbx_2 u>> 0x20).d != 0
return sub_140b5b8a0(rbx_2.d, 0) == 0 | rcx_7.b
