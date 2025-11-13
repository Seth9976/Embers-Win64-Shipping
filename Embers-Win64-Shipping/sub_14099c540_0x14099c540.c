// 函数: sub_14099c540
// 地址: 0x14099c540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t rbx = arg2
int64_t arg_8
void* const rcx_3

if (arg1[1].d == *(arg1 + 0x34))
    rcx_3 = nullptr
else
    arg_8 = arg2
    int32_t rax_2 = sub_140b5ead0(rbx.d) + arg_8:4.d
    void* r8 = &arg1[7]
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_14099c5c9:
        rbx = arg_10
        rcx_3 = nullptr
    else
        int64_t r8_1 = *arg1
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 3
            rcx_3 = r8_1 + (rdx_3 << 3)
            
            if (*(r8_1 + (rdx_3 << 3)) == rbx)
                break
            
            rax_4 = *(rcx_3 + 0x10)
            
            if (rax_4 == 0xffffffff)
                goto label_14099c5c9
        
        if (rax_4 == 0xffffffff)
            goto label_14099c5c9
        
        rbx = arg_10

void* rsi = rcx_3 + 8

if (rcx_3 == 0)
    rsi = nullptr

if (rsi == 0)
    goto label_14099c61a

void* rcx_4 = *rsi
int32_t result

if (*(rcx_4 + 8) != 3)
    sub_14090c240(arg1, rbx)
label_14099c61a:
    int32_t rsi_1 = arg1[0xa].d
    void*** rax_5 = j_sub_140a82f30(0x30)
    void*** rbx_1 = rax_5
    
    if (rax_5 == 0)
        rbx_1 = nullptr
    else
        rax_5[1].d = 3
        *(rax_5 + 0xc) = rsi_1
        rax_5[2].d = arg5
        *rbx_1 = &data_142e40678
        rbx_1[3] = 0
        rbx_1[4] = 0
        rbx_1[5].d = *arg4
        sub_1409dd050(rbx_1, arg3)
    
    void*** var_48 = rbx_1
    int64_t* var_40 = &arg_10
    void**** var_38_1 = &var_48
    result = sub_14090a810(arg1, &arg_8, &var_40, nullptr)
    void*** rcx_10 = var_48
    
    if (rcx_10 != 0)
        return (**rcx_10)(rcx_10, 1)
else
    sub_1409dd050(rcx_4, arg3)
    result = arg5
    *(*rsi + 0x10) = result

return result
