// 函数: sub_140e680d0
// 地址: 0x140e680d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg2 + 0x28)
char rsi = 0
int64_t rbx = *(arg2 + 0x18)

if (rdi != 0)
    rdi[1].d += 1

*(arg1 + 0x8c)
uint64_t result
void* const rcx_3

if (*(arg1 + 0x60) == *(arg1 + 0x8c))
label_140e68170:
    rcx_3 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = arg1 + 0x90
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    result = zx.q(*(r8_1 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_2)) << 2)))
    
    if (result.d == 0xffffffff)
    label_140e68170_1:
        rcx_3 = nullptr
    else
        int64_t r8_2 = *(arg1 + 0x58)
        
        while (true)
            int64_t rdx_3 = sx.q(result.d) * 5
            rcx_3 = r8_2 + (rdx_3 << 3)
            
            if (*(r8_2 + (rdx_3 << 3)) == rbx)
                break
            
            result = zx.q(*(rcx_3 + 0x20))
            
            if (result.d == 0xffffffff)
                goto label_140e68170_2
        
        if (result.d == 0xffffffff)
        label_140e68170_2:
            rcx_3 = nullptr

void* rbx_1 = rcx_3 + 0x18

if (rcx_3 == 0)
    rbx_1 = nullptr

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_3 = *rdi
            (*(r8_3 + 8))(rdi, 1, r8_3)

if (rbx_1 == 0)
    int64_t* rbx_2
    
    if (*(arg1 + 0x18) == 0)
        rbx_2 = 0.q
        rdi.b = 0
    else
        rbx_2 = *(arg2 + 0x28)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        rsi = 1
        
        if (*(arg2 + 0x18) != data_143e1e098)
            rdi.b = 0
        else
            rdi = 1
    
    if ((rsi & 1) != 0 && rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (rdi.b == 0)
        result.b = 7
    else
        result = zx.q(*(arg2 + 8))
        
        if ((result.b & 0xc) != 0 || (result.b & 0x30) != 0 || (result.b & 0xc0) != 0)
            result.b = 7
        else
            result.b = (result.b & 3) != 0
            result.b += 4
else
    if (*(arg1 + 0x19) != 0)
        return zx.q(*rbx_1)
    
    result.b = 7

return result
