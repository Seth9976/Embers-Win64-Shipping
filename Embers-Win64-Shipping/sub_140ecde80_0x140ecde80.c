// 函数: sub_140ecde80
// 地址: 0x140ecde80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
char result = (*(*arg1 + 0x260))(arg1, &var_18)
int32_t i_2
int32_t i_1 = i_2
int32_t rsi = 0
bool cond:0 = i_1 == 0

if (i_1 s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        result = sub_140f073c0(*(rbx_1 + var_18), arg2)
        
        if (result != 0)
            void* rbx_2 = var_18
            sub_140ebd660()
            int64_t r8_1
            r8_1.b = 1
            result = sub_140ede260(data_143e2a070, (sx.q(rsi) << 4) + rbx_2)
            i_1 = i_2
            break
        
        i_1 = i_2
        rsi += 1
        rbx_1 = &rbx_1[2]
    while (rsi s< i_1)
    
    cond:0 = i_1 == 0

if (not(cond:0))
    int64_t* rsi_2 = var_18 + 8
    int32_t i
    
    do
        int64_t* rbx_3 = *rsi_2
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                result = (**rbx_3)(rbx_3)
                int32_t temp3_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*rbx_3 + 8))(rbx_3, 1)
        
        rsi_2 = &rsi_2[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rcx_4 = var_18

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
