// 函数: sub_14131fb20
// 地址: 0x14131fb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t var_48 = *arg3
int128_t* r9_3 = ((sx.q(arg2) + 0x18) << 4) + arg1
int64_t* rcx = arg3[1]
int64_t* var_40 = rcx

if (rcx != 0)
    rcx[1].d += 1
    rcx = var_40

int32_t result = &var_48

if (&var_48 != r9_3)
    int128_t zmm1 = var_48.o
    int128_t var_38_1 = zmm1
    var_48.o = *r9_3
    rcx = var_40
    *r9_3 = zmm1

if (rcx != 0)
    result = rcx[1].d
    rcx[1].d -= 1
    
    if (result == 1)
        (**var_40)(var_40)
        result = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_40 + 8))(var_40, 1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        result = (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_68)
return result
