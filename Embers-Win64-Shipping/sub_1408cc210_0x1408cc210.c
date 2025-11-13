// 函数: sub_1408cc210
// 地址: 0x1408cc210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(data_143f5b298 + 0x788)

if (rsi == 0)
    int64_t* rbx = arg1[2]
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, zx.q((rsi + 1).d))
    
    void* result
    result.b = 0
    return result

int64_t* rbx_1 = arg1[2]
int64_t rcx_2 = *arg1
int64_t r8 = arg1[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t var_48 = *(rsi + 0xb8)
int32_t var_40 = 0
int64_t var_38 = rcx_2
int64_t var_30 = r8

if (rbx_1 != 0)
    rbx_1[1].d += 1

int32_t var_1c = 0x3f800000
int32_t rdx
int32_t var_20 = rdx
char var_18 = 0

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

char rax_6 = (*(*(rsi + 0x28) + 0x48))(rsi + 0x28, &var_48)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_3 = *rbx_1
        (*rdx_3)(rbx_1, rdx_3)
        int32_t temp6_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_3 = arg1[2]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp7_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

return zx.q(rax_6)
