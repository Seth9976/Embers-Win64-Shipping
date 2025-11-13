// 函数: sub_141f8def0
// 地址: 0x141f8def0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t var_48 = *arg2
int64_t* rcx = arg2[1]
int64_t* var_40 = rcx

if (rcx != 0)
    rcx[1].d += 1
    rcx = var_40

if (&var_48 != &arg1[0x81])
    int128_t zmm1 = var_48.o
    int128_t var_38_1 = zmm1
    var_48.o = *(arg1 + 0x408)
    rcx = var_40
    *(arg1 + 0x408) = zmm1

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1)
        (**var_40)(var_40)
        int32_t rdi_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_40 + 8))(var_40, zx.q(rdi_1))

arg1[0x83].d = arg2[2].d
uint64_t result = sub_141ee8490(arg1)
__security_check_cookie(rax_1 ^ &var_68)
return result
