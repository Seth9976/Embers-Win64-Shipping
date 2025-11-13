// 函数: sub_140b811d0
// 地址: 0x140b811d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1
sub_140926e00(arg1 + 8, &i_1, arg2)
int64_t i = sx.q(i_1)
int64_t rcx_1

if (i.d == 0xffffffff)
    rcx_1 = 0
else
    int64_t r8_1 = i * 5
    i = *(arg1 + 8)
    rcx_1 = i + (r8_1 << 3)

int64_t* rbx = rcx_1 + 0x10

if (rcx_1 == 0)
    rbx = nullptr

if (rbx != 0)
    int64_t rsi_1 = *rbx
    int64_t* rbx_1 = rbx[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (rsi_1 != 0)
        int64_t var_18 = rsi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        sub_140b81310(arg1, &var_18)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        i = *(arg1 + 0xd0)
        
        for (int64_t rcx_7 = (sx.q(*(arg1 + 0xd8)) << 4) + i; i != rcx_7; i += 0x10)
            if (*(i + 8) != 0 && *i != 0)
                i = sub_140920c10(arg1 + 0xd0, rsi_1)
                break
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            i = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, 1)

return i
