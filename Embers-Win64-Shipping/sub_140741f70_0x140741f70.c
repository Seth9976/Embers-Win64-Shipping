// 函数: sub_140741f70
// 地址: 0x140741f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28
sub_140d3a3a0(&var_28, nullptr)
int32_t i = 0
int64_t var_20 = 0
sub_140d3a3a0(&var_28, arg2)
int32_t rcx_2
rcx_2.b = sub_140b5b8a0(arg4.d, 0) == 0

if ((arg4:4.d != 0 | rcx_2.b) != 0)
    void* rax_1 = sub_140d3c6e0(&var_28)
    
    if (rax_1 != 0)
        sub_140d1fd20(rax_1, arg4)

int32_t* r14 = *arg1
int32_t* rbx_1 = r14
void* rdi_3 = &r14[sx.q(arg1[1].d) * 4]
int64_t result

if (r14 == rdi_3)
label_14074204d:
    int64_t rbx_4 = sx.q(arg1[1].d)
    int32_t rax_6 = (rbx_4 + 1).d
    arg1[1].d = rax_6
    
    if (rax_6 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    result = *arg1
    *(result + rbx_4 * 0x10) = var_28
else
    while (true)
        if (*rbx_1 != var_28.d || rbx_1[1] != var_28:4.d)
            if (sub_140d3e110(rbx_1) == 0 && sub_140d3e110(&var_28) == 0)
                goto label_14074202b
        else
        label_14074202b:
            result = arg4
            
            if (*(rbx_1 + 8) == result)
                break
        
        rbx_1 = &rbx_1[4]
        
        if (rbx_1 == rdi_3)
            goto label_14074204d
    
    if (((rbx_1 - r14) s>> 4).d == 0xffffffff)
        goto label_14074204d

if (arg1[1].d s> 0)
    int64_t rdi_4 = 0
    
    do
        int32_t* r14_2 = *arg1 + rdi_4
        int32_t rbx_5 = r14_2[3]
        char rax_7 = sub_140b5b8a0(r14_2[2], 0)
        
        if ((rbx_5 == 0 & rax_7) == 0)
            result = sub_140d3c740(r14_2, 1)
        
        if ((rbx_5 == 0 & rax_7) != 0 || result == 0)
            int32_t rdx_8 = arg1[1].d
            int32_t rcx_14 = rdx_8 - i - 1
            
            if (rcx_14 s>= 1)
                rcx_14 = 1
            
            if (rcx_14 != 0)
                memcpy((sx.q(i) << 4) + *arg1, (sx.q(rdx_8 - rcx_14) << 4) + *arg1, rcx_14 << 4)
                rdx_8 = arg1[1].d
            
            arg1[1].d = rdx_8 - 1
            result = sub_1405a5010(arg1)
        else
            i += 1
            rdi_4 += 0x10
    while (i s< arg1[1].d)

return result
