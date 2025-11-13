// 函数: sub_141e5fc50
// 地址: 0x141e5fc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
int32_t rax = arg1[0x7c].d
int64_t arg_8 = rbx
int64_t* rdx_5

if (rax == *(arg1 + 0x40c))
label_141e5fcdf:
    rdx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + arg_8:4.d
    void* r8 = &arg1[0x82]
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(arg1[0x84].d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141e5fcdf_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_4) << 5) + arg1[0x7b]
            
            if (*rdx_5 == rbx)
                break
            
            rax_4 = rdx_5[3].d
            
            if (rax_4 == 0xffffffff)
                goto label_141e5fcdf_2
        
        if (rax_4 == 0xffffffff)
        label_141e5fcdf_2:
            rdx_5 = nullptr

void* rax_5 = &rdx_5[1]

if (rdx_5 == 0)
    rax_5 = nullptr

if (rax_5 != 0)
    void* rbx_1 = *rax_5
    sub_141e5d130(rbx_1 + 0x88, &arg_8, arg2[1])
    int64_t rax_6 = sx.q(arg_8.d)
    int64_t rax_9
    
    if (rax_6.d == 0xffffffff)
        rax_9 = 0
    else
        rax_9 = rax_6 * 0x90 + *(rbx_1 + 0x88)
    
    int64_t result = rax_9 + 8
    
    if (rax_9 == 0)
        result = 0
    
    if (result != 0)
        return result

if (arg3 != 0)
    int64_t var_28
    (*(*arg1 + 0x3d8))(arg1, &var_28, arg2)
    arg_8 = 0
    
    if (var_28 != 0)
        int32_t var_20
        int32_t rcx_4
        rcx_4.b = sub_140b5b8a0(var_20, 0) == 0
        int32_t var_1c
        
        if ((var_1c != 0 | rcx_4.b) != 0)
            return sub_141e5fc50(arg1, &var_28, 0)

return 0
