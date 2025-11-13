// 函数: sub_1418002b0
// 地址: 0x1418002b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
void* rsi = nullptr

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        int32_t rax_2 = rbx[1].d
        rsi = *(arg1 + 8)
        rbx[1].d = rax_2
        
        if (rax_2 == 0)
            (**rbx)(rbx)
            int32_t temp0_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp0_1 == 1)
                (*(*rbx + 8))(rbx, 1)

void* rdi_1 = *(arg1 + 0x150)
char r8 = 0
int32_t i = 0

if (*(rdi_1 + 0x30) s> 0)
    char* rax_5 = nullptr
    
    do
        int64_t rdx_1 = *(rdi_1 + 0x28)
        
        if (*(rax_5 + rdx_1 + 0x18) == rsi)
            rax_5[rdx_1] = 1
            r8 = 1
        
        i += 1
        rax_5 = &rax_5[0x28]
    while (i s< *(rdi_1 + 0x30))

if (*(rdi_1 + 0x30) s<= 0 || r8 == 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int128_t zmm6
    zmm6.q = float.d(performanceCount)
    zmm6.q = zmm6.q f* data_143d796f8
    zmm6.q = zmm6.q f+ 16777216.0
    
    if (rbx != 0)
        rbx[1].d += 1
    
    int64_t rbp_1 = sx.q(*(rdi_1 + 0x30))
    int32_t rax_6 = (rbp_1 + 1).d
    *(rdi_1 + 0x30) = rax_6
    
    if (rax_6 s> *(rdi_1 + 0x34))
        sub_1405c4ec0(rdi_1 + 0x28)
    
    int64_t rax_7 = *(rdi_1 + 0x28)
    int64_t performanceCount_1 = performanceCount
    int64_t rcx_5 = rbp_1 * 5
    *(rax_7 + (rcx_5 << 3) + 8) = zmm6.q
    *(rax_7 + (rcx_5 << 3) + 0x10) = performanceCount_1
    *(rax_7 + (rcx_5 << 3)) = 1
    *(rax_7 + (rcx_5 << 3) + 4) = 0
    *(rax_7 + (rcx_5 << 3) + 0x18) = rsi
    *(rax_7 + (rcx_5 << 3) + 0x20) = rbx
    
    if (rbx != 0)
        int32_t rax_8 = rbx[1].d
        rbx[1].d = rax_8
        
        if (rax_8 == 0)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)

int64_t* rcx_8 = *(rsi + 0x58)
int64_t result = (*(*rcx_8 + 0xb0))(rcx_8)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            jump(*(*rbx + 8))

return result
