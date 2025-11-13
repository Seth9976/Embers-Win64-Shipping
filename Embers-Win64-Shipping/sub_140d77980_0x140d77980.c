// 函数: sub_140d77980
// 地址: 0x140d77980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t result_1 = 0x80040201
int32_t* var_68 = &result_1
void** const var_38 = &data_142d42ed8
void (* var_58)(int64_t* arg1) = sub_140d76c30
void*** var_48 = nullptr
int128_t var_30 = (arg1 - 0x58).o
void* rcx = *(*(arg1 - 0x50) + 0xa0)
int64_t* rbx = *(rcx + 0x30)
int64_t* r10 = *(rcx + 0x28)

if (rbx != 0)
    rbx[1].d += 1

int64_t r8
r8.b = 1
(*(*r10 + 0x20))(r10, &var_58, r8, 2)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (var_58 != 0)
    void** const* rcx_4 = &var_38
    
    if (var_48 != 0)
        rcx_4 = var_48
    
    (*rcx_4)[2](rcx_4)

uint64_t result = zx.q(result_1)
__security_check_cookie(rax_1 ^ &var_98)
return result
