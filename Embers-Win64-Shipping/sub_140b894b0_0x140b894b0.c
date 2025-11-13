// 函数: sub_140b894b0
// 地址: 0x140b894b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 8)

if (rax == 0)
    void var_38
    int64_t* rax_1 = _vfprintf_p_l(&var_38, u"No project is currently loaded", u"ProjectManager")
    int64_t rdx = *arg3
    *arg3 = *rax_1
    *rax_1 = rdx
    int64_t rdx_1 = arg3[1]
    arg3[1] = rax_1[1]
    rax_1[1] = rdx_1
    arg3[2].d = rax_1[2].d
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t rdi_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_30 + 8))(var_30, zx.q(rdi_1))
    
    int32_t result
    result.b = 0
    return result

int32_t rdi_2 = *(rax + 0x50)
int64_t r15
r15.b = 0
int32_t rdi_3 = rdi_2 - 1
int64_t rbx_2 = sx.q(rdi_3)

if (rdi_2 - 1 s>= 0)
    int64_t* rsi_1 = rbx_2 * 0xa8
    int64_t temp3_1
    
    do
        int64_t rcx_5 = *(*(arg1 + 8) + 0x48)
        int16_t* rdx_3
        
        if (arg2[1].d == 0)
            rdx_3 = &data_142d40450
        else
            rdx_3 = *arg2
        
        int16_t* const rcx_6
        
        if (*(rsi_1 + rcx_5 + 8) == 0)
            rcx_6 = &data_142d40450
        else
            rcx_6 = *(rsi_1 + rcx_5)
        
        if (sub_140a54510(rcx_6, rdx_3) == 0)
            sub_140b892d0(*(arg1 + 8) + 0x48, rdi_3, 1, 1)
            r15.b = 1
            break
        
        rdi_3 -= 1
        rsi_1 -= 0xa8
        temp3_1 = rbx_2
        rbx_2 -= 1
    while (temp3_1 - 1 s>= 0)

return zx.q(r15.b)
