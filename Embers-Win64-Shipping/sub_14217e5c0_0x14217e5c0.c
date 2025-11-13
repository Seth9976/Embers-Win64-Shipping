// 函数: sub_14217e5c0
// 地址: 0x14217e5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x368)
void* rdi = nullptr
int32_t* r8_2

if (result == *(arg1 + 0x394))
label_14217e62f:
    r8_2 = nullptr
else
    void* r11_1 = arg1 + 0x398
    void* r9_1 = *(r11_1 + 8)
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    result = *(r11_1 + (((sx.q(*(arg1 + 0x3a8)) - 1) & sx.q(arg2)) << 2))
    
    if (result == 0xffffffff)
    label_14217e62f_1:
        r8_2 = nullptr
    else
        while (true)
            r8_2 = (sx.q(result) << 5) + *(arg1 + 0x360)
            
            if (*r8_2 == arg2)
                break
            
            result = r8_2[6]
            
            if (result == 0xffffffff)
                goto label_14217e62f_2
        
        if (result == 0xffffffff)
        label_14217e62f_2:
            r8_2 = nullptr

void* rcx = &r8_2[2]

if (r8_2 == 0)
    rcx = nullptr

if (rcx != 0)
    int64_t* rbx_1 = *(rcx + 8)
    
    if (rbx_1 != 0)
        result = rbx_1[1].d
        
        if (result != 0)
            rbx_1[1].d = result + 1
            result.b = 1
        
        if (result.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            rdi = *rcx
    
    if (rdi != 0)
        *(rdi + 8) = arg3
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, 1)

return result
