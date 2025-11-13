// 函数: sub_142039940
// 地址: 0x142039940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140e0f820(arg1 + 0x1b0, 0)
int64_t* result_1 = *(arg1 + 0xe0)
int64_t* rsi = nullptr
int64_t* result = result_1

if (result_1 != 0)
    int32_t rax = result_1[1].d
    
    if (rax == 0)
        result_1 = nullptr
        result = nullptr
    else
        result_1[1].d = rax + 1
        result = result_1

if (result != 0)
    int64_t* rcx_1 = *(arg1 + 0xd8)
    
    if (rcx_1 != 0)
        result = sub_140de8fc0(rcx_1)

int64_t* rbx = *(arg1 + 0xf0)

if (rbx != 0)
    result = zx.q(rbx[1].d)
    
    if (result.d != 0)
        rbx[1].d = result.d + 1
        result.b = 1
    
    if (result.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rsi = *(arg1 + 0xe8)

if (rsi != 0)
    result = (*(*rsi + 0x50))(rsi)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

if (result_1 != 0)
    result_1[1].d -= 1
    
    if (result_1[1].d == 1)
        result = (**result_1)(result_1)
        int32_t temp3_1 = *(result_1 + 0xc)
        *(result_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*result_1 + 8))(result_1, 1)

return result
