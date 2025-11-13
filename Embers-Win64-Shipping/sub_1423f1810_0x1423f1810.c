// 函数: sub_1423f1810
// 地址: 0x1423f1810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0xb00)

if (rdi != 0)
    rdi[1].d += 1

int64_t* rsi = *(arg1 + 0xb10)

if (rsi != 0)
    rsi[1].d += 1

int64_t* r14 = *(arg1 + 0xb20)

if (r14 != 0)
    r14[1].d += 1

void arg_8
sub_141992c00(&arg_8, 0)
int64_t* var_40 = nullptr
int64_t var_48

if (arg1 + 0xaf8 != &var_48)
    *(arg1 + 0xaf8) = 0
    var_48 = 0
    sub_1405aeff0(arg1 + 0xb00, &var_40)
    int64_t* rcx_2 = var_40
    
    if (rcx_2 != 0)
        rcx_2[1].d -= 1
        
        if (rcx_2[1].d == 1)
            int64_t* rbx_1 = var_40
            (**rbx_1)(rbx_1)
            int32_t rax_3 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_3 == 1)
                int64_t* rcx_4 = var_40
                (*(*rcx_4 + 8))(rcx_4, 1)

int64_t* var_30 = nullptr
int64_t var_38

if (arg1 + 0xb08 != &var_38)
    *(arg1 + 0xb08) = 0
    var_38 = 0
    sub_1405aeff0(arg1 + 0xb10, &var_30)
    int64_t* rcx_6 = var_30
    
    if (rcx_6 != 0)
        rcx_6[1].d -= 1
        
        if (rcx_6[1].d == 1)
            int64_t* rbx_2 = var_30
            (**rbx_2)(rbx_2)
            int32_t rax_7 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_7 == 1)
                int64_t* rcx_8 = var_30
                (*(*rcx_8 + 8))(rcx_8, 1)

int32_t result = sub_141994c70(&arg_8)

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        result = (**r14)(r14)
        int32_t temp2_1 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*r14 + 8))(r14, 1)

if (rsi != 0)
    result = rsi[1].d
    rsi[1].d -= 1
    
    if (result == 1)
        (**rsi)(rsi)
        result = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rsi + 8))(rsi, 1)

if (rdi != 0)
    result = rdi[1].d
    rdi[1].d -= 1
    
    if (result == 1)
        result = (**rdi)(rdi)
        int32_t rbp_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rbp_1 == 1)
            return (*(*rdi + 8))(rdi, zx.q(rbp_1))

return result
