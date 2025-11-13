// 函数: sub_1420a6c90
// 地址: 0x1420a6c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
int64_t result

if (arg3 == 0 || arg3 == 3)
    rbx.b = 1
    
    if (arg1[0x55].d == 0)
        result.b = 0
        return result
else
    rbx.b = 0
    
    if (arg1[0x57].d == 0)
        result.b = 0
        return result
void arg_20
int32_t* rax = sub_14208caf0(arg1, &arg_20)
int64_t rbp
rbp.b = 0
int64_t var_48
var_48.d = arg2.d f+ *rax
var_48:4.d = arg2:4.d f+ rax[1]

if (rbx.b == 0)
    int64_t* i = arg1[0x56]
    
    for (void* r15_1 = &i[sx.q(arg1[0x57].d)]; i != r15_1; i = &i[1])
        int32_t* rsi_4 = *i
        
        if (sub_141ffdd30(rsi_4, var_48) != 0)
            rbp.b = 1
            
            if (arg3 == 1)
                int64_t r8 = *arg1
                (*(r8 + 0x640))(arg1, *(rsi_4 + 0x10), r8)
            
            if (rsi_4[6].b == 1)
                break
else
    int32_t* i_1 = arg1[0x54]
    
    for (void* rsi_3 = &i_1[sx.q(arg1[0x55].d) * 8]; i_1 != rsi_3; i_1 = &i_1[8])
        if (sub_141ffdd30(i_1, var_48) != 0)
            rbp.b = 1
            (*(*arg1 + 0x638))(arg1, *(i_1 + 0x10))
            
            if (i_1[6].b != 0)
                break

return zx.q(rbp.b)
