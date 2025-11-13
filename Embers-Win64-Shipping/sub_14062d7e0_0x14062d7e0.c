// 函数: sub_14062d7e0
// 地址: 0x14062d7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void* rdi_1 = *(arg1 + 0x298)

if (rdi_1 == 0)
    return 

void* rax_1 = sub_142531230()
void* r10_1 = *(rdi_1 + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(r10_1 + 0x38) || *(*(r10_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

void* rdi_2 = *(rdi_1 + 0x70)

if (rdi_2 == 0)
    return 

void* rax_2 = sub_1424bff10()
void* rdx = *(rdi_2 + 0x10)
rax = sx.q(*(rax_2 + 0x38))

if (rax.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax << 3)) != rax_2 + 0x30)
    return 

int64_t* rbx_1 = *(rdi_2 + 0xd0)

if (rbx_1 == 0)
    return 

rax = zx.q(rbx_1[1].d)

if (rax.d == 0)
    return 

rbx_1[1].d = rax.d + 1
void* rcx_2 = *(rdi_2 + 0xc8)

if (rcx_2 != 0)
    int64_t* var_38
    sub_140e152a0(rcx_2, &var_38)
    int64_t* rcx_3 = var_38
    
    if (rcx_3 != 0)
        FLASHWINFO pfwi
        pfwi.cbSize = 0x20
        int64_t rax_4 = (*(*rcx_3 + 0xc0))(rcx_3)
        pfwi.dwFlags = 3
        pfwi.hwnd = rax_4
        
        if (arg2 == 0)
            pfwi.uCount = arg3
            pfwi.dwTimeout = arg4
        else
            pfwi.dwFlags = 0xf
            pfwi.uCount = 0
            pfwi.dwTimeout = 0
        
        FlashWindowEx(&pfwi)
    
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp3_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_30 + 8))(var_30, 1)

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp1_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)
