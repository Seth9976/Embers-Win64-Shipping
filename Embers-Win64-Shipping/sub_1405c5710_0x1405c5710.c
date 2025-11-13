// 函数: sub_1405c5710
// 地址: 0x1405c5710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
sub_141a312b0(&var_48, arg3)
void* rdi = nullptr
int64_t* var_38
void* const rcx_9

if (var_38[1].d == *(var_38 + 0x34))
label_1405c5888:
    rcx_9 = nullptr
else
    int32_t rbx_1 = data_143cd60a0
    int32_t rax_1 = sub_1405be5b0(&data_143cd60a4)
    void* rdx_1 = var_38[8]
    void* r8 = &var_38[7]
    int32_t r10_3 = (rax_1 - rbx_1) ^ rbx_1 u>> 0xd
    int32_t r9_3 = (0x9e3779b9 - r10_3 - rbx_1) ^ r10_3 << 8
    int32_t rbx_4 = (rbx_1 - r9_3 - r10_3) ^ r9_3 u>> 0xd
    int32_t r10_6 = (r10_3 - r9_3 - rbx_4) ^ rbx_4 u>> 0xc
    int32_t r9_6 = (r9_3 - r10_6 - rbx_4) ^ r10_6 << 0x10
    int32_t rbx_7 = (rbx_4 - r9_6 - r10_6) ^ r9_6 u>> 5
    int32_t r10_9 = (r10_6 - r9_6 - rbx_7) ^ rbx_7 u>> 3
    int32_t r9_9 = (r9_6 - r10_9 - rbx_7) ^ r10_9 << 0xa
    
    if (rdx_1 != 0)
        r8 = rdx_1
    
    int32_t rax_18 =
        *(r8 + (((sx.q(rbx_7 - r9_9 - r10_9) ^ zx.q(r9_9) u>> 0xf) & (sx.q(var_38[9].d) - 1)) << 2))
    
    if (rax_18 == 0xffffffff)
    label_1405c5888_1:
        rcx_9 = nullptr
    else
        int64_t r10_10 = *var_38
        
        while (true)
            int64_t rdx_2 = sx.q(rax_18) * 5
            rcx_9 = r10_10 + (rdx_2 << 3)
            
            if (*(r10_10 + (rdx_2 << 3)) == data_143cd60a0 && *(rcx_9 + 0x14) == data_143cd60b4)
                int32_t r8_5 = (*(rcx_9 + 8) ^ data_143cd60a4:4.d)
                    | (*(rcx_9 + 0xc) ^ data_143cd60a4:8.d)
                    | (*(rcx_9 + 0x10) ^ data_143cd60a4:0xc.d) | (*(rcx_9 + 4) ^ data_143cd60a4.d)
                
                if (r8_5 == 0)
                    break
            
            rax_18 = *(rcx_9 + 0x20)
            
            if (rax_18 == 0xffffffff)
                goto label_1405c5888_2
        
        if (rax_18 == 0xffffffff)
        label_1405c5888_2:
            rcx_9 = nullptr

void* result = rcx_9 + 0x18

if (rcx_9 == 0)
    result = nullptr

if (result != 0)
    rdi = *result

if (rdi == 0)
    return result

return sub_1405c66c0(rdi, arg2, *(arg1 + 8))
