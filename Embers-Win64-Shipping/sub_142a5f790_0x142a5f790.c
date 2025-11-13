// 函数: sub_142a5f790
// 地址: 0x142a5f790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char** rcx = *(arg1 + 8)
char* result = nullptr
int64_t rbx = 0

if (rcx != 0)
    int32_t rax_2
    rax_2.b = *(rcx + 0xbc) s< rcx[0x18].d - 1
    
    if (rax_2.b != 0)
        char** rax_3 = sub_142a63800(rcx, &rcx[0x19], arg3)
        
        if (rax_3 != 0)
            result = *rax_3
            rbx = -1
            
            do
                rbx += 1
            while (result[rbx] != 0)

if (arg2 != 0)
    *arg2 = rbx.d

return result
