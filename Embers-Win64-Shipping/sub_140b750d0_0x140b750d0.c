// 函数: sub_140b750d0
// 地址: 0x140b750d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_14062d6e0(arg1, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* rcx

if (rax.d == 0xffffffff)
    rcx = nullptr
else
    rcx = *arg1 + rax * 0x28

int64_t* rbx_1 = rcx + 0x10

if (rcx == 0)
    rbx_1 = nullptr

int64_t* rsi_1

if (rbx_1 != 0)
    rsi_1 = *rbx_1

int64_t* rbx_2

if (rbx_1 == 0 || rsi_1 == 0 || rsi_1[1].d != 5)
    int64_t* rax_2 = j_sub_140a82f30(0x20)
    
    if (rax_2 == 0)
        rax_2 = nullptr
    else
        rax_2[1].d = 1
        *rax_2 = &data_142d85518
        *(rax_2 + 0xc) = 1
        rax_2[2] = &data_142d84e10
        rax_2[3].d = 1
    
    rsi_1 = &rax_2[2]
    rbx_2 = rax_2
    
    if (rax_2 != 0)
        rax_2[1].d += 1
        
        if (rax_2 != 0)
            rax_2[1].d -= 1
            
            if (rax_2[1].d == 1)
                (**rax_2)(rax_2)
                int32_t temp3_1 = *(rax_2 + 0xc)
                *(rax_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rax_2 + 8))(rax_2, 1)
else
    rbx_2 = rbx_1[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1

int64_t* result = sub_140b74a70(rsi_1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return result
