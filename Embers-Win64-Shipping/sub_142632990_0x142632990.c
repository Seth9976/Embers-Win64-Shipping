// 函数: sub_142632990
// 地址: 0x142632990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg1[1].d
int32_t j_1 = 0

if (i s<= 0)
    return 

int32_t* rbx_1 = nullptr

while (i s> 1)
    int64_t r9_1 = *arg1
    
    if (*(rbx_1 + r9_1) != *(r9_1 + (sx.q(mods.dp.d(sx.q(j_1 + 1), i)) << 2)))
        j_1 += 1
        rbx_1 = &rbx_1[1]
    else
        int32_t i_1 = i
        int32_t j = j_1
        
        if (j_1 s< i - 1)
            int32_t* rdx_3 = rbx_1
            
            do
                int32_t* rcx_1 = *arg1
                rdx_3 = &rdx_3[1]
                j += 1
                *(rcx_1 + rdx_3 - 4) = *(rcx_1 + rdx_3)
                i_1 = arg1[1].d
            while (j s< i_1 - 1)
        
        i = i_1
        
        if (i_1 s> 0)
            i = i_1 - 1
            arg1[1].d = i
    
    if (j_1 s>= i)
        break
