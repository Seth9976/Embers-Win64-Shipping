// 函数: sub_140920fe0
// 地址: 0x140920fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x64]
int32_t rbp = -1

if (rax != 0 && *(rax + 0x18) == 1)
    rbp = 0
    
    if (arg1[0x43].d == 2)
        sub_140944100(&arg1[0x3e])
    
    sub_1409389a0(arg1)
    *(arg1[0x64] + 0x18) = 3
    void var_18
    
    if (&arg1[0x64] != &var_18)
        arg1[0x64] = 0
        int64_t* rbx_1 = arg1[0x65]
        
        if (rbx_1 != 0)
            arg1[0x65] = 0
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

int64_t rdx
rdx.b = 1
(*(*arg1 + 0x1d0))(arg1, rdx)
int64_t result
result.b = rbp == 0
return result
