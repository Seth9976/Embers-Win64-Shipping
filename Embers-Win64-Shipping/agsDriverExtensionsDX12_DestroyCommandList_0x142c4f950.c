// 函数: agsDriverExtensionsDX12_DestroyCommandList
// 地址: 0x142c4f950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 2

int64_t rax = *arg2
int64_t* arg_8 = nullptr
(*rax)(arg2, &data_142efede0, &arg_8)
int64_t* rdx = arg_8

if (rdx != 0)
    void** r8_1 = *(arg1 + 0x1e0)
    void** rax_1 = r8_1
    void** rcx_1 = r8_1[1]
    
    if (*(rcx_1 + 0x19) != 0)
        rax_1 = r8_1
    else
        do
            if (rcx_1[4] u>= rdx)
                rax_1 = rcx_1
                rcx_1 = *rcx_1
            else
                rcx_1 = rcx_1[2]
        while (*(rcx_1 + 0x19) == 0)
        
        if (rax_1 == r8_1 || rdx u< rax_1[4])
            rax_1 = r8_1
    
    if (rax_1 != r8_1)
        int64_t* rcx_2 = rax_1[5]
        (*(*rcx_2 + 0x10))(rcx_2)
        sub_142c4f2c0(arg1 + 0x1e0, &arg_8)
        rdx = arg_8
    
    (*(*rdx + 0x10))(rdx)

(*(*arg2 + 0x10))(arg2)
return 0
