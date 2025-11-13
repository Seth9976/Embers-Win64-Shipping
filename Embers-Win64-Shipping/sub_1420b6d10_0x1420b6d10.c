// 函数: sub_1420b6d10
// 地址: 0x1420b6d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(arg2)
int32_t arg_10 = 0
int32_t rbp_2 = (rax ^ 1) + 1
wchar16 const* const rdx = u"true"
char temp1 = rax.b

if (temp1 == 0)
    rdx = u"false"

void var_38
int64_t* rcx = &var_38
void var_20

if (temp1 != 0)
    rcx = &var_20
int64_t* rax_1 = _vfprintf_p_l(rcx, rdx, u"Kismet")
*arg1 = *rax_1
void* rcx_2 = rax_1[1]
arg1[1] = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

arg1[2].d = rax_1[2].d

if ((rbp_2.b & 2) != 0)
    rbp_2 &= 0xfffffffd
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t rax_5 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (rax_5 == 1)
                (*(*var_30 + 8))(var_30, 1)

int64_t* var_18

if ((rbp_2.b & 1) != 0 && var_18 != 0)
    var_18[1].d -= 1
    
    if (var_18[1].d == 1)
        (**var_18)(var_18)
        int32_t rdi_1 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_18 + 8))(var_18, zx.q(rdi_1))

return arg1
