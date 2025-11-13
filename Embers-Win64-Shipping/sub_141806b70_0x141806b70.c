// 函数: sub_141806b70
// 地址: 0x141806b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
*(arg1 + 0x88) = 1
*(arg1 + 0xe0) = 0
int64_t* rdi = *(arg1 + 0x10)

if (rdi != 0)
    int32_t rax_1 = rdi[1].d
    
    if (rax_1 != 0)
        rdi[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rdi = nullptr
    
    if (rdi != 0)
        int32_t rax_2 = rdi[1].d
        rsi = *(arg1 + 8)
        rdi[1].d = rax_2
        
        if (rax_2 == 0)
            (**rdi)(rdi)
            int32_t temp1_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi + 8))(rdi, 1)
        
        rdi[1].d += 1

void* rbx = data_143ef9cf8

if (rbx == 0)
    void arg_8
    int64_t rbx_1 = *sub_140b58170(&arg_8, "HTTP", (rbx + 1).d)
    j_sub_140b3db50()
    j_sub_140b407e0(&data_143de7d78, rbx_1)
    rbx = data_143ef9cf8

void* rbx_2 = *(rbx + 0x10)
EnterCriticalSection(&data_143ef9d10)
int64_t rbp = sx.q(*(rbx_2 + 0x20))
int32_t rax_6 = (rbp + 1).d
*(rbx_2 + 0x20) = rax_6

if (rax_6 s> *(rbx_2 + 0x24))
    sub_1405a4f90(rbx_2 + 0x18)

int64_t* rax_9 = (rbp << 4) + *(rbx_2 + 0x18)
*rax_9 = rsi
rax_9[1] = rdi

if (rdi != 0)
    rdi[1].d += 1

LeaveCriticalSection(&data_143ef9d10)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)
    
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp4_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t result
result.b = 1
return result
