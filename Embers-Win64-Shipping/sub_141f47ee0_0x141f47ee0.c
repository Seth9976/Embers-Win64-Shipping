// 函数: sub_141f47ee0
// 地址: 0x141f47ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int64_t arg_10 = arg2
int64_t rbx = arg2
void* const rcx_3

if (*(arg1 + 0x938) == *(arg1 + 0x964))
    rcx_3 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + arg2:4.d
    void* r8_1 = arg1 + 0x968
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_4 = *(r8_1 + (((sx.q(*(arg1 + 0x978)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141f47f69:
        rbx = arg_10
        rcx_3 = nullptr
    else
        int64_t r8_2 = *(arg1 + 0x930)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 5
            rcx_3 = r8_2 + (rdx_3 << 2)
            
            if (*(r8_2 + (rdx_3 << 2)) == rbx)
                break
            
            rax_4 = *(rcx_3 + 0xc)
            
            if (rax_4 == 0xffffffff)
                goto label_141f47f69
        
        if (rax_4 == 0xffffffff)
            goto label_141f47f69
        
        rbx = arg_10

void* result = rcx_3 + 8

if (rcx_3 == 0)
    result = nullptr

if (arg4 != 0 && not(__andps_xmmxud_memxud(arg_18, data_142d3f770)[0] f> 9.99999975e-06f))
    return sub_1405c3480(arg1 + 0x930, rbx)

if (result != 0)
    *result = arg_18[0]
    return result

int64_t* var_38 = &arg_10
int32_t* var_30 = &arg_18
void arg_20
return sub_1405a8200(arg1 + 0x930, &arg_20, &var_38, nullptr)
