// 函数: sub_140ec7070
// 地址: 0x140ec7070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
void var_18
int64_t* result = (*(*rcx + 0x278))(rcx, &var_18)
int64_t* rbx = result[1]
int64_t rbp = *result

if (rbx != 0)
    rbx[1].d += 1

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*var_10 + 8))(var_10, 1)

if (rbp == 0)
label_140ec7149:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            result = (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                return (*(*rbx + 8))(rbx, 1)
else
    if (rbx != 0)
        rbx[1].d += 1
    
    void* rdi_1 = *arg1
    int64_t rsi_1 = sx.q(*(rdi_1 + 0x90))
    int32_t rax_3 = (rsi_1 + 1).d
    *(rdi_1 + 0x90) = rax_3
    
    if (rax_3 s> *(rdi_1 + 0x94))
        sub_1405a4f90(rdi_1 + 0x88)
    
    result = (rsi_1 << 4) + *(rdi_1 + 0x88)
    *result = rbp
    result[1] = rbx
    
    if (rbx != 0)
        result = zx.q(rbx[1].d)
        rbx[1].d = result.d
        
        if (result.d == 0)
            result = (**rbx)(rbx)
            int32_t temp4_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp4_1 == 1)
                result = (*(*rbx + 8))(rbx, 1)
        
        goto label_140ec7149

return result
