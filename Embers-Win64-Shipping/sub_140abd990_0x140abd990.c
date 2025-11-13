// 函数: sub_140abd990
// 地址: 0x140abd990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
int64_t* rax_1 = (*(*rcx + 0x30))(rcx)
int64_t rdx = *rax_1
uint64_t result = (*(rdx + 0x48))(rax_1, rdx)

if (result.b != 0)
    int64_t* rcx_2 = *arg1
    int64_t rdx_1 = *rcx_2
    (*(rdx_1 + 0x38))(rcx_2, rdx_1)
    int64_t* rcx_3 = *arg1
    int64_t r8_1 = *rcx_3
    void var_18
    int64_t* rax_2 = (*(r8_1 + 0x18))(rcx_3, &var_18, r8_1)
    int64_t* rsi_1 = *rax_2
    int64_t* rbx_1 = rax_2[1]
    rax_2[1] = 0
    *rax_2 = 0
    result = (*(*rax_1 + 0x48))(rax_1)
    
    if (result.b != 0)
        rax_1[1].w = *(sub_140aae970() + 0x120)
        result = (*(*rax_1 + 0x68))(rax_1)
        
        if (result.b != 0)
            int64_t var_28
            result = (*(*rax_1 + 0x10))(rax_1, &var_28)
            int64_t* result_1 = result
            
            if (rsi_1 != result)
                int64_t rcx_8 = *rsi_1
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                *rsi_1 = *result_1
                *result_1 = 0
                rsi_1[1].d = result_1[1].d
                result = zx.q(*(result_1 + 0xc))
                *(rsi_1 + 0xc) = result.d
                result_1[1] = 0
            
            int64_t rcx_10 = var_28
            
            if (rcx_10 != 0)
                result = sub_140a74f90(rcx_10)
    
    if (rbx_1 != 0)
        result = zx.q(rbx_1[1].d)
        rbx_1[1].d -= 1
        
        if (result.d == 1)
            (**rbx_1)(rbx_1)
            result = zx.q(*(rbx_1 + 0xc))
            *(rbx_1 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* var_10
    
    if (var_10 != 0)
        result = zx.q(var_10[1].d)
        var_10[1].d -= 1
        
        if (result.d == 1)
            result = (**var_10)(var_10)
            int32_t rdi_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (rdi_1 == 1)
                return (*(*var_10 + 8))(var_10, zx.q(rdi_1))

return result
