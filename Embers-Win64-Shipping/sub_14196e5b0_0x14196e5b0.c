// 函数: sub_14196e5b0
// 地址: 0x14196e5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x18)
void* rdi = *(arg1 + 0x28)
int64_t* rsi = *(arg2 + 0x20)
int64_t* rcx = *(rdi + 8)
*(rdi + 8) = 0

if (rax == 0)
    if (rcx != 0)
        rcx[9].d -= 1
        
        if (rcx[9].d == 1)
            sub_140a2f6e0(rcx)
    
    int64_t result = (*(*rsi + 0x2e0))(rsi, *(arg1 + 0x10), zx.q(*(arg1 + 0x1c)), 
        zx.q(*(arg1 + 0x20)), *(arg1 + 0x24), *(rdi + 0x18), *(arg1 + 0x30), *(arg1 + 0x34), 
        *(arg1 + 0x38), *(arg1 + 0x40), *(arg1 + 0x48), *(arg1 + 0x50))
    return result

if (rax == 3)
    if (rcx != 0)
        rcx[9].d -= 1
        
        if (rcx[9].d == 1)
            sub_140a2f6e0(rcx)
    
    int32_t var_48
    var_48.q = *(arg1 + 0x58)
    return (*(*rsi + 0x2d8))(rsi, *(arg1 + 0x10), *(rdi + 0x18), zx.q(*(arg1 + 0x54)), var_48)

int64_t var_40
int32_t var_38

if (rax != 1)
    if (rcx != 0)
        rcx[9].d -= 1
        
        if (rcx[9].d == 1)
            sub_140a2f6e0(rcx)
    
    var_38.q = *(arg1 + 0x38)
    var_40.d = *(arg1 + 0x34)
    return (*(*rsi + 0x2f0))(rsi, *(arg1 + 0x10), zx.q(*(arg1 + 0x24)), *(rdi + 0x18), 
        *(arg1 + 0x30), var_40, var_38, *(arg1 + 0x50))

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

var_38.q = *(arg1 + 0x38)
var_40.d = *(arg1 + 0x34)
return (*(*rsi + 0x2e8))(rsi, *(arg1 + 0x10), zx.q(*(arg1 + 0x24)), *(rdi + 0x18), *(arg1 + 0x30), 
    var_40, var_38, *(arg1 + 0x50))
