// 函数: sub_1428bd030
// 地址: 0x1428bd030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x130)
int32_t rdi = arg3
void* rbx = arg2

if (arg3 != 0xffffffff)
    goto label_1428bd061

if (arg1 == 0)
    return nullptr

rdi = *arg1
label_1428bd061:

if (arg2 != 0)
label_1428bd0a6:
    int32_t rax_3 = sub_1428af800(rbx)
    
    if (rax_3 == 0)
        sub_1428a5670(rax_3 + 6, 0x9d, rax_3 + 0x26, "crypto\evp\pmeth_lib.c", 0x77)
        return nullptr
else if (arg1 == 0)
    rbx = sub_1428d6510(rdi)
else
    rbx = *(arg1 + 0x20)
    
    if (rbx != 0)
        goto label_1428bd0a6
    
    rbx = *(arg1 + 0x18)
    
    if (rbx != 0)
        goto label_1428bd0a6
    
    rbx = sub_1428d6510(rdi)

void* rbp_1

if (rbx == 0)
    int32_t* rcx_4 = data_143fecb30
    int32_t var_108
    int32_t* arg_20 = &var_108
    var_108 = rdi
    int32_t rax_4
    
    if (rcx_4 != 0)
        rax_4 = sub_1428989f0(rcx_4, &var_108)
    
    if (rcx_4 == 0 || rax_4 s< 0)
        void** rax_6 = sub_1428a8f00(&arg_20, &data_143b85750, 0x12, 8, sub_142859050)
        
        if (rax_6 == 0)
            goto label_1428bd1cc
        
        rbp_1 = *rax_6
        
        if (rbp_1 == 0 || rbp_1 == 0)
            goto label_1428bd1cc
        
        goto label_1428bd165
    
    rbp_1 = sub_142898ea0(data_143fecb30, rax_4)
else
    rbp_1 = sub_1428d64b0(rbx, rdi)

if (rbp_1 == 0)
label_1428bd1cc:
    sub_1428af710(rbx)
    sub_1428a5670(6, 0x9d, 0x9c, "crypto\evp\pmeth_lib.c", 0x8c)
else
label_1428bd165:
    int64_t* result = sub_1428a6a70(0x50)
    
    if (result != 0)
        result[1] = rbx
        *result = rbp_1
        result[4].d = 0
        result[2] = arg1
        
        if (arg1 != 0)
            sub_142896e70(arg1)
        
        int64_t rax_7 = *(rbp_1 + 8)
        int32_t rax_8
        
        if (rax_7 != 0)
            rax_8 = rax_7(result)
        
        if (rax_7 == 0 || rax_8 s> 0)
            return result
        
        *result = 0
        sub_1428bcda0(result)
    else
        sub_1428af710(rbx)
        sub_1428a5670(6, 0x9d, (result + 0x41).d, "crypto\evp\pmeth_lib.c", 0x95)

return nullptr
