// 函数: sub_141d05810
// 地址: 0x141d05810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int32_t var_48 = 0
void* var_38 = nullptr
var_48.q = 0
sub_141d02260(arg1, arg2, &var_38, nullptr)
sub_141d02260(arg1, arg3, &var_48, nullptr)
void* rax = var_38
void* rcx_1 = var_48.q
int64_t* result
int64_t rax_5

if (rax != 0)
    rax_5 = *(rax + 0x138)
label_141d059e4:
    *arg4 = rax_5
    
    if (rcx_1 != 0)
        rbx = *(rcx_1 + 0x138)
    
    result = arg5
else
    if (rcx_1 != 0)
        rax_5 = 0
        goto label_141d059e4
    
    int32_t rdx_1 = 0
    uint64_t rdi_1 = -1
    var_48.q = 0
    int32_t rcx_2 = 0
    int64_t var_40_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rsi_1 = -1
        
        do
            rsi_1 += 1
        while (arg2[rsi_1] != 0)
        
        if (rsi_1.d + 1 s> 0)
            sub_1405947f0(&var_48, rsi_1.d + 1)
            rcx_2 = var_40_1:4.d
            rdx_1 = var_40_1.d
        
        int32_t rax_1 = rsi_1.d + 1 + rdx_1
        var_40_1.d = rax_1
        
        if (rax_1 s> rcx_2)
            sub_140594770(&var_48)
        
        UnDecorator::getReferenceType(var_48.q, arg2, (rsi_1.d + 1) * 2)
    
    char rsi_3 = 1
    char rax_2 = sub_141d06c80(arg1, &var_48)
    char rax_4
    
    if (rax_2 != 0)
        var_38 = nullptr
        int32_t rdx_5 = 0
        int64_t var_30_1 = 0
        int32_t rcx_7 = 0
        
        if (arg3 != 0 && *arg3 != 0)
            do
                rdi_1 += 1
            while (arg3[rdi_1] != 0)
            
            rdi_1 = zx.q(rdi_1.d + 1)
            
            if (rdi_1.d s> 0)
                sub_1405947f0(&var_38, rdi_1.d)
                rcx_7 = var_30_1:4.d
                rdx_5 = var_30_1.d
            
            int32_t rax_3 = rdi_1.d + rdx_5
            var_30_1.d = rax_3
            
            if (rax_3 s> rcx_7)
                sub_140594770(&var_38)
            
            UnDecorator::getReferenceType(var_38, arg3, rdi_1.d * 2)
        
        rsi_3 = 3
        rax_4 = sub_141d06c80(arg1, &var_38)
    
    if (rax_2 == 0 || rax_4 == 0)
        rdi_1.b = 0
    else
        rdi_1.b = 1
    
    if ((rsi_3 & 2) != 0)
        void* rcx_12 = var_38
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
    
    int64_t rcx_13 = var_48.q
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    result = arg5
    
    if (rdi_1.b != 0)
        int64_t* rcx_14 = *(arg1 + 8)
        return (*(*rcx_14 + 0x130))(rcx_14, arg2, arg3, arg4, result)
    
    *arg4 = 0
*result = rbx
return result
