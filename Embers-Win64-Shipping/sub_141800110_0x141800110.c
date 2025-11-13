// 函数: sub_141800110
// 地址: 0x141800110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
int64_t var_8 = rbx
arg1[0x11].b = 1
void* rax = data_143ef9cf8

if (rax == 0)
    void arg_8
    rbx = *sub_140b58170(&arg_8, "HTTP", (rax + 1).d)
    j_sub_140b3db50()
    j_sub_140b407e0(&data_143de7d78, rbx)
    rax = data_143ef9cf8

void* rbp = *(rax + 0x10)
EnterCriticalSection(&data_143ef9d10)
int64_t* i = *(rbp + 0x18)
rbx.b = 0

for (; i != &i[sx.q(*(rbp + 0x20)) * 2]; i = &i[2])
    if (*i == arg1)
        rbx.b = 1
        break

LeaveCriticalSection(&data_143ef9d10)

if (rbx.b == 0)
    return sub_141801c00(arg1) __tailcall

int64_t* rbx_1 = arg1[2]
int64_t rsi = 0

if (rbx_1 != 0)
    int32_t rax_2 = rbx_1[1].d
    
    if (rax_2 != 0)
        rbx_1[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        int32_t rax_3 = rbx_1[1].d
        rsi = arg1[1]
        rbx_1[1].d = rax_3
        
        if (rax_3 == 0)
            (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
        
        rbx_1[1].d += 1

void* rdi_1 = *(rbp + 0x28)
int64_t* result = j_sub_140a82f30(0x10)

if (result != 0)
    *result = 0
    result[1] = rsi
    int64_t* temp0_1 = *(rdi_1 + 0x50)
    *(rdi_1 + 0x50) = result
    int64_t* result_1 = *temp0_1
    *temp0_1 = result
    result = result_1

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)
    
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            jump(*(*rbx_1 + 8))

return result
