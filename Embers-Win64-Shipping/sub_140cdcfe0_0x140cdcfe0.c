// 函数: sub_140cdcfe0
// 地址: 0x140cdcfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = nullptr
bool cond:0 = data_143e1d7b4 != 0
bool z_1

if (not(cond:0))
    if (0 == data_143e1adfc)
        data_143e1adfc = 0
        z_1 = true
    else
        data_143e1adfc
        z_1 = false

if (cond:0 || not(z_1))
    void** var_28 = nullptr
    void*** arg_18 = &var_28
    int32_t var_20_1 = 0
    void**** var_10_1 = &arg_18
    void* (* var_18)(int64_t* arg1, int64_t* arg2) = sub_140cd7f80
    sub_140d3bfe0(arg1, &var_18, 0, 0, 0)
    void** r8_1 = var_28
    void** rax_6 = r8_1
    void* rdx_2 = &r8_1[sx.q(var_20_1)]
    
    if (r8_1 != rdx_2)
        do
            void* rcx_3 = *rax_6
            
            if (*(rcx_3 + 0x18) == arg2)
                rdi = rcx_3
                break
            
            rax_6 = &rax_6[1]
        while (rax_6 != rdx_2)
    
    if (r8_1 != 0)
        sub_140a74f90(r8_1)
else
    int32_t var_38_1 = 0
    void* rax_3 = sub_140d2f0c0(sub_140d41340(), arg1, arg2, 0, 0, 0)
    
    if (rax_3 == 0)
        return rax_3
    
    if (sub_140d23cf0(rax_3) != 0)
        return rax_3

return rdi
