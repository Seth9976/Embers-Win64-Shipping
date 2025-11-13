// 函数: sub_140d9a8b0
// 地址: 0x140d9a8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi
void* arg_20 = rdi
int64_t* rbx = arg2[0x4e]
int64_t* rax = rbx

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
        rax = nullptr
    else
        rbx[1].d = rax_1 + 1
        rax = rbx

if (rax != 0)
    rdi = arg2[0x4d]

char arg_8

if (rax == 0 || rdi == 0)
    rdi.b = 1
else
    if (*(rdi + 0x1b8) != 0)
        int64_t* rcx = *(rdi + 0x1b0)
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (*(rdi + 0x1b8) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(rdi + 0x1b0)
            
            (*(*rcx_1 + 0x48))(rcx_1, &arg_8)
            *(rdi + 0x1a8) = arg_8
    
    rdi.b = (*(rdi + 0x1a8) & 0x19) != 0

arg_8 = 0
char* var_50 = &arg_8
void*** (* var_58)() = j_sub_140597fc0
int64_t* rax_8 = sub_140a756e0(&var_58, &data_143958018) + 0x10
int64_t* var_48 = rax_8
int64_t rcx_3 = *rax_8
int64_t rcx_4 = rax_8[2]
char var_30 = 0
int64_t result_1 = rax_8[3]
rax_8[3] = &var_48
int64_t* rax_9 = var_48
rax_9[4].d += 1
*(arg1 + 0x378) += 1
*(arg1 + 0x1b8) = 0

if (*(arg1 + 0x1bc) != 0)
    sub_140dbd1e0(arg1 + 0x20, 0)

int32_t rax_10 = *(arg1 + 0x18)
var_58 = nullptr
int32_t var_50_1 = 0

if (rax_10 s> 0)
    sub_140dbd450(&var_58, rax_10)

int64_t result

if (rax_10 s<= 0 || *(arg1 + 0x18) s<= 0)
    result = sub_140de8430(arg2, arg1, 0xffffffff, &var_58, rdi.b, 0)
else
    arg_8.d = 1
    char var_70
    var_70.q = arg1 + 0x10
    char var_78
    var_78.q = &arg_8
    result = sub_140d9ab20(arg1, arg1, *(arg1 + 0x10), 0xffffffff, var_78, var_70, &var_58)

int64_t rdi_1 = sx.q(var_50_1)
void*** (* r14_1)() = var_58
int32_t r8_3 = *(arg1 + 0x1c)
*(arg1 + 0x18) = rdi_1.d

if (rdi_1.d != 0 || r8_3 != 0)
    sub_14083a1f0(arg1 + 0x10, rdi_1.d, r8_3)
    result = memcpy(*(arg1 + 0x10), r14_1, (rdi_1 << 5).d)
else
    *(arg1 + 0x1c) = 0

if (var_30 == 0)
    int64_t* rax_12 = var_48
    char var_30_1 = 1
    rax_12[4].d -= 1
    int64_t* rcx_11 = var_48
    
    if (rcx_4 != rcx_11[2])
        sub_140b16b40(rcx_11, rcx_4)
        rcx_11 = var_48
    
    *rcx_11 = rcx_3
    result = result_1
    var_48[3] = result
    int64_t var_40_1 = 0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
