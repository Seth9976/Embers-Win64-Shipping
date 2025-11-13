// 函数: sub_1423f55f0
// 地址: 0x1423f55f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi
uint64_t var_18 = rsi
void arg_10
sub_141992c00(&arg_10, 1)
*(arg1 + 0xb4) = arg5
arg1[0x15].d = arg3
*(arg1 + 0xac) = arg4
sub_141997f50(&arg1[2])
int64_t rbx_1 = arg1[0x13]
int32_t rbp = 0

if (arg2 == 0)
    char rax_2 = (*(*arg1 + 0xf0))(arg1)
    
    if (rbx_1 == 0)
        int64_t rdx_2 = *arg1
        int32_t rdi_1 = *(arg1 + 0xac)
        rsi = zx.q(arg1[0x15].d)
        int64_t rax_3 = (*(rdx_2 + 0x40))(arg1, rdx_2)
        int64_t* rcx_6 = data_143f0f180
        void arg_8
        (*(*rcx_6 + 0x3b0))(rcx_6, &arg_8, rax_3, zx.q(rsi.d), rdi_1, rax_2, 0)
        sub_1405d1600(&arg1[0x13], &arg_8)
        sub_1405d1550(&arg_8)
    else
        int64_t* rcx_4 = data_143f0f180
        char var_50
        var_50.d = arg6
        int32_t var_58
        var_58.b = rax_2
        (*(*rcx_4 + 0x3b8))(rcx_4, rbx_1, zx.q(arg1[0x15].d), zx.q(*(arg1 + 0xac)), var_58, var_50)
    
    sub_141997e80(&arg1[2])
else if (rbx_1 != 0)
    sub_1405d16e0(&arg1[0x13], nullptr)

uint64_t result = sub_141994c70(&arg_10)

if (arg2 == 0)
    rsi.b = 0
    int32_t rdx_5 = data_143a302f0
    int32_t rcx_12 = data_143a302fc + 1
    data_143a302fc = rcx_12
    result = zx.q(rdx_5 - 1)
    int64_t rbx_3 = sx.q(result.d)
    
    if (result.d s>= 0)
        int64_t rdi_3 = rbx_3 << 4
        int64_t temp0_1
        
        do
            result = data_143a302e8
            
            if (*(rdi_3 + result + 8) == 0)
                rsi.b = 1
            else
                int64_t* rcx_13 = *(rdi_3 + result)
                
                if (rcx_13 == 0)
                    rsi.b = 1
                else
                    result = (*(*rcx_13 + 0x50))(rcx_13, arg1, 0)
                    
                    if (result.b == 0)
                        rsi.b = 1
            
            rdi_3 -= 0x10
            temp0_1 = rbx_3
            rbx_3 -= 1
        while (temp0_1 - 1 s>= 0)
        rcx_12 = data_143a302fc
        rdx_5 = data_143a302f0
    
    data_143a302fc = rcx_12 - 1
    
    if (rsi.b != 0 && rcx_12 - 1 s<= 0)
        int32_t rdi_4 = rdx_5
        
        if (rdx_5 s> 0)
            int64_t* rbx_4 = nullptr
            
            do
                int64_t rax_5 = data_143a302e8
                
                if (*(rbx_4 + rax_5 + 8) == 0)
                    sub_1405a4880(&data_143a302e8, rbp, 1, 1)
                else
                    int64_t* rcx_15 = *(rbx_4 + rax_5)
                    
                    if (rcx_15 == 0)
                        sub_1405a4880(&data_143a302e8, rbp, 1, 1)
                    else if ((*(*rcx_15 + 0x20))(rcx_15) != 0)
                        sub_1405a4880(&data_143a302e8, rbp, 1, 1)
                    else
                        rbp += 1
                        rbx_4 = &rbx_4[2]
                
                rdx_5 = data_143a302f0
            while (rbp s< rdx_5)
        
        result = zx.q(rdx_5 * 2)
        
        if (result.d s<= 2)
            result = 2
        
        data_143a302f8 = result.d
        
        if (rdi_4 s> result.d && data_143a302f4 != rdx_5)
            return sub_1405a5410(&data_143a302e8, rdx_5)

return result
