// 函数: sub_14207a4c0
// 地址: 0x14207a4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t* rdx = arg1[1]
int128_t* r8_1 = arg1[2] + 0x10
int64_t var_38 = *arg1
int64_t* var_30 = rdx

if (rdx != 0)
    rdx[1].d += 1
    rdx = var_30

if (&var_38 != r8_1)
    arg2 = var_38.o
    int128_t var_28_1 = arg2
    var_38.o = *r8_1
    rdx = var_30
    *r8_1 = arg2

if (rdx != 0)
    rdx[1].d -= 1
    
    if (rdx[1].d == 1)
        (**var_30)(var_30, rdx)
        int32_t rdi_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_30 + 8))(var_30, zx.q(rdi_1))

int64_t result = sub_1419ba620(arg1[2], arg2)
__security_check_cookie(rax_1 ^ &var_58)
return result
