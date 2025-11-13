// 函数: sub_140dbb7f0
// 地址: 0x140dbb7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
char r15 = *(rdi + 0x80)

if (r15 != 0)
    sub_140db87d0(arg4 + 0xa8, rdi + 0x40)

void* rcx_1 = *(arg2 + 8)
int32_t r12 = *(rcx_1 + 0xb8)
*(rcx_1 + 0xb8) = sx.d(*(rdi + 0x150))
int64_t rcx_2 = 0
data_143e20cf4 = *(rdi + 0x151)
int64_t* rbx = *(rdi + 0x38)

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    
    if (rax_2 != 0)
        rbx[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx_2 = *(rdi + 0x30)

int128_t zmm1 = arg2[1]
int128_t var_58 = *arg2
int128_t zmm0 = arg2[2]
int128_t var_48 = zmm1
var_48:8.q = rcx_2
int104_t var_38 = zmm0.13

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

char rax_5 = var_38:0xc.b
var_38:0xc.b = rax_5 ^ ((*(rdi + 0x152) u>> 1 ^ rax_5) & 1)

if (data_143e24360 != 0 && (arg1[3].b & 0x40) != 0)
    int64_t* rcx_6 = *arg1
    
    if ((*(rcx_6 + 0x29) & 0x40) != 0)
        sub_140e1a0f0(rcx_6)
        rcx_6 = *arg1
    
    zmm1 = 0x3f800000
    int32_t arg_8 = 0x3f800000
    
    if (*(rcx_6 + 0x17c) != 0)
        zmm1 = rcx_6[0x2f].d
    
    sub_140e25880(rcx_6, zmm1, zmm0)

int32_t result = sub_140e1f680(*arg1, &var_58, rdi + 0x88, rdi + 0xf8, arg4, *(rdi + 0x148), 
    rdi + 0x108, *(rdi + 0x152) & 1)
*(*(arg2 + 8) + 0xb8) = r12

if (r15 != 0)
    int32_t rdx_2 = *(arg4 + 0xb0)
    
    if (rdx_2 != 0)
        *(arg4 + 0xb0) = rdx_2 - 1
        sub_1405dac90(arg4 + 0xa8)

return result
