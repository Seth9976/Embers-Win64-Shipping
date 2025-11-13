// 函数: sub_141d879a0
// 地址: 0x141d879a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140af87b0()
char rdx = data_143f0f1d4
char r8 = data_143f138f5
char r9 = data_143de5426
int64_t rcx

if (result.b == 0 || r9 != 0 || r8 == 0 || rdx != 0)
    rcx = data_143f38720
else
    result = data_143f38708
    rcx = result + 0x10
    
    if (result == 0)
        rcx = 0

if (rcx != 0)
    int64_t* rbx_1
    
    if (r9 != 0 || r8 == 0 || rdx != 0)
        rbx_1 = data_143f38728
        data_143f38720 = 0
        
        if (rbx_1 != 0)
            data_143f38728 = 0
        label_141d87a3e:
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    jump(*(*rbx_1 + 8))
    else
        rbx_1 = data_143f38710
        data_143f38708 = 0
        
        if (rbx_1 != 0)
            data_143f38710 = 0
            goto label_141d87a3e

return result
