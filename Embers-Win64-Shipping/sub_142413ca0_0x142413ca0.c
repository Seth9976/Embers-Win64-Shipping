// 函数: sub_142413ca0
// 地址: 0x142413ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = *arg3
int64_t var_40 = arg3[1]
void* rax_2 = arg3[2]
void* var_38 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

int128_t zmm6 = arg5
char var_50 = arg6
char result = sub_1424141a0(arg1, arg2, &var_48, arg4, zmm6.b)

if (result == 0)
    int64_t rcx = arg1[0x1b]
    
    if (rcx == data_143f5bc58)
        int64_t* rbx_1 = arg3[2]
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        return 1
    
    if (rcx == data_143f5bcb8)
        var_48 = *arg3
        int64_t var_40_1 = arg3[1]
        void* rax_7 = arg3[2]
        void* var_38_1 = rax_7
        
        if (rax_7 != 0)
            *(rax_7 + 8) += 1
        
        (*(*arg1 + 0x2f0))(arg1, zx.q(arg2.d), &var_48, zx.q(arg4), zmm6.d, arg6)
        sub_140d430a0(arg3)
        return 1

int64_t* rbx_2 = arg3[2]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return result
