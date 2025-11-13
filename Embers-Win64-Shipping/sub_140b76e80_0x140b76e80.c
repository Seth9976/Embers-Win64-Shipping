// 函数: sub_140b76e80
// 地址: 0x140b76e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
int64_t var_8 = rsi
int64_t* var_18 = nullptr
int32_t i_2 = 0
int64_t* rbx

if (sub_140b76400(arg1, arg2, &var_18) != 0)
    arg3[1].d = 0
    
    if (*(arg3 + 0xc) != 0)
        sub_1405c5510(arg3, 0)
    
    rbx = var_18
    void* rbp_3 = &rbx[sx.q(i_2) * 2]
    
    if (rbx != rbp_3)
        do
            int16_t* const rdx
            
            if (rbx[1].d == 0)
                rdx = &data_142d40450
            else
                rdx = *rbx
            
            char arg_20
            
            if (sub_140a4b040(&arg_20, rdx) != 0)
                rsi = sx.q(arg3[1].d)
                int32_t rax_2 = (rsi + 1).d
                arg3[1].d = rax_2
                
                if (rax_2 s> *(arg3 + 0xc))
                    sub_1405daba0(arg3)
                
                *(rsi + *arg3) = arg_20
            
            rbx = &rbx[2]
        while (rbx != rbp_3)
        
        rbx = var_18
    
    rsi.b = 1
else
    rbx = var_18
    rsi.b = 0

int32_t i_1 = i_2

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_4 = *rbx
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = var_18

if (rbx != 0)
    sub_140a74f90(rbx)

return zx.q(rsi.b)
