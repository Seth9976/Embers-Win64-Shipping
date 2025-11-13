// 函数: sub_140d801b0
// 地址: 0x140d801b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a84c80(0, 0x30, 0)

if (rax != 0)
    rax[1] = arg1
    *rax = &data_142ec16d8
    rax[2] = sub_140d80490
    rax[4] = sub_140a387b0()
    *rax = &data_142ec1730

void* rax_2 = *(arg1 + 0xa0)
int64_t* rbx_1 = *(rax_2 + 0x30)
void* rsi = *(rax_2 + 0x28)

if (rbx_1 != 0)
    rbx_1[1].d += 1

void var_18
void* result = &var_18

if (&var_18 != rsi + 0x10)
    if (rax != 0)
        result = (*rax)[8](rax, rsi + 0x10)
    else if (*(rsi + 0x18) != 0)
        void* rcx_1 = *(rsi + 0x10)
        
        if (rcx_1 != 0)
            result = (*(*rcx_1 + 0x38))(rcx_1, 0)
            void* rcx_2 = *(rsi + 0x10)
            
            if (rcx_2 != 0)
                result = sub_140a84c80(rcx_2, 0, 0)
                *(rsi + 0x10) = result
            
            *(rsi + 0x18) = 0

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

if (rax != 0)
    (*rax)[7](rax, 0)
    result = sub_140a84c80(rax, 0, 0)
    
    if (result != 0)
        return sub_140a74f90(result)

return result
