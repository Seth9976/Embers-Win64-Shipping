// 函数: sub_140e59450
// 地址: 0x140e59450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d9a5d0(arg1 + 0x180, arg3)
int64_t var_28 = *arg3
int64_t* rax_1 = arg3[1]

if (rax_1 != 0)
    rax_1[1].d += 1

void*** var_18
int512_t zmm0 = sub_140e71510(arg1, &var_18, &var_28, arg4, arg5)

if (arg4 != 0)
    sub_140e25670(*arg3, zmm0)
    int64_t* rcx_3 = *arg3
    
    if ((*(*rcx_3 + 0x198))(rcx_3) != 0)
        void* rcx_4 = *arg3
        
        if (*(rcx_4 + 0x778) s< 0)
            int64_t* rcx_5 = *sub_140e152a0(rcx_4, &var_28)
            (*(*rcx_5 + 0x90))(rcx_5)
            
            if (rax_1 != 0)
                rax_1[1].d -= 1
                
                if (rax_1[1].d == 1)
                    (**rax_1)(rax_1)
                    int32_t temp5_1 = *(rax_1 + 0xc)
                    *(rax_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rax_1 + 8))(rax_1, 1)

*arg2 = *arg3
void* rax_9 = arg3[1]
arg2[1] = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp2_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

int64_t* rbx_3 = arg3[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp4_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

return arg2
