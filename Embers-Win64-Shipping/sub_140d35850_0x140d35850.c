// 函数: sub_140d35850
// 地址: 0x140d35850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg2 + 0x18)
char* rax = *(arg2 + 0x20)
*(arg2 + 0x38) = 0
uint32_t r8 = zx.d(*rax)
*(arg2 + 0x20) = &rax[1]
(&data_143e1cd60)[zx.q(r8)](rcx, arg3, 0)

if (*(arg2 + 0x38) == 0)
    void var_58
    int64_t* rax_3 = _vfprintf_p_l(&var_58, 
        Accessed None attempting to assign variable on a weakly referenced object", ScriptCore")
    int32_t var_40 = 3
    int64_t var_38_1 = *rax_3
    int64_t* rcx_3 = rax_3[1]
    
    if (rcx_3 != 0)
        rcx_3[1].d += 1
    
    int32_t var_28_1 = rax_3[2].d
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t rax_7 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (rax_7 == 1)
                (*(*var_50 + 8))(var_50, 1)
    
    sub_140d30680(arg1, arg2, &var_40)
    
    if (rcx_3 != 0)
        rcx_3[1].d -= 1
        
        if (rcx_3[1].d == 1)
            (**rcx_3)(rcx_3)
            int32_t rdi_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, zx.q(rdi_1))

int64_t* rsi_1 = *(arg2 + 0x30)
int64_t r14 = *(arg2 + 0x38)
int64_t* rdi_2

if (rsi_1 == 0 || ((zx.q(*(rsi_1[1] + 0x10)) u>> 0x1a).b & 1) == 0)
    rdi_2 = nullptr
    
    if (rsi_1 != 0)
        int64_t rbx_3 = rsi_1[1]
        sub_140cea1e0()
        
        if (rbx_3 == &data_143e1b870)
            rdi_2 = rsi_1[0xf]
            
            if (rdi_2 == 0 || ((zx.q(*(rdi_2[1] + 0x10)) u>> 0x1a).b & 1) == 0)
                rdi_2 = nullptr
else
    rdi_2 = rsi_1

char* rax_14 = *(arg2 + 0x20)
int64_t rcx_13 = *(arg2 + 0x18)
int64_t arg_10 = 0
uint32_t r8_2 = zx.d(*rax_14)
*(arg2 + 0x20) = &rax_14[1]
int64_t result = (&data_143e1cd60)[zx.q(r8_2)](rcx_13, arg2, &arg_10)

if (r14 == 0)
    return result

return (*(*rdi_2 + 0x148))(rdi_2, r14, arg_10)
