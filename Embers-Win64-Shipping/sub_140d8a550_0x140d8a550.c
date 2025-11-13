// 函数: sub_140d8a550
// 地址: 0x140d8a550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 - 0x18)

if ((*(*rcx + 0x10))(rcx) == 0)
    return 0x80040201

int64_t* rcx_1 = *(arg1 - 0x18)
int64_t* rax_3 = (*(*rcx_1 + 0x98))(rcx_1)
int64_t r8 = *rax_3
int64_t* var_18
(*r8)(rax_3, &var_18, r8)
int64_t* rcx_3 = var_18
HWND hwnd

if (rcx_3 != 0)
    hwnd = (*(*rcx_3 + 0xc0))(rcx_3)

HRESULT rdi_1

if (rcx_3 == 0 || hwnd == 0)
    rdi_1 = 0x80131509
else
    rdi_1 = UiaHostProviderFromHwnd(hwnd, arg2)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return zx.q(rdi_1)
