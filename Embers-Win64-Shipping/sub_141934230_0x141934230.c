// 函数: sub_141934230
// 地址: 0x141934230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38

if (&arg2[8] != &var_38)
    arg2[8].q = 0
    int64_t* rcx = *(arg2 + 0x88)
    *(arg2 + 0x88) = 0
    
    if (rcx != 0)
        int32_t rax_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (rax_1 == 1)
            (*(*rcx + 8))(rcx, 1)

sub_14193d1f0()
int32_t* result

if (data_1439c77d0 == 0)
    if (sub_1419358e0(arg2 + 0xa8, &arg2[9]) == 0)
        void arg_20
        sub_140926420(&data_143f02598, 
            sub_140b58170(&arg_20, "FailedBinaryProgramCreateLoadRequest", 1))
        int64_t* var_48
        int64_t** rax_10 = sub_14194e5d0(arg2, &var_48)
        int64_t* r9_2
        
        if (rax_10[1].d == 0)
            r9_2 = &data_142d40450
        else
            r9_2 = *rax_10
        
        sub_140af98a0("Unknown", 0x13b7, 
            CompleteLoadedGLProgramRequest_internal : Failed to create GL program from binary data! [%s]", 
            r9_2)
        int64_t* rcx_7 = var_48
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        sub_140afbb40()
    
    if (data_143eff5c6 == 0)
        sub_141950290(zx.q(*(arg2 + 0xa8)), 0)
    
    void* rax_11 = j_sub_140a82f30(0x670)
    void* const rdi_2 = rax_11
    
    if (rax_11 == 0)
        rdi_2 = nullptr
    else
        int32_t rbx_3 = *(arg2 + 0xa8)
        sub_14192a1e0(rax_11)
        *(rdi_2 + 0x5e8) = rbx_3
        *(rdi_2 + 0x450) = *arg2
        *(rdi_2 + 0x460) = arg2[1]
        *(rdi_2 + 0x470) = arg2[2]
        *(rdi_2 + 0x480) = arg2[3]
        *(rdi_2 + 0x490) = arg2[4]
        *(rdi_2 + 0x4a0) = arg2[5]
        *(rdi_2 + 0x4b0) = arg2[6]
        *(rdi_2 + 0x4c0) = arg2[7].q
    
    void* const arg_18 = rdi_2
    sub_14193d1f0()
    
    if (data_1439c77d0 == 0)
        result = sub_141926320(&data_1439c7780, arg2, &arg_18)
    else
        result = sub_1419301f0(&data_1439c76c0, arg2, rdi_2)
    
    data_143eff66c += 1
    *(arg2 + 0xa4) = 4
    *(arg2 + 0x98) = 0
    
    if (*(arg2 + 0x9c) != 0)
        return sub_1405c5510(&arg2[9], 0)
else
    sub_14193d1f0()
    void* rax_3 = j_sub_140a82f30(0x670)
    void* const rbx_1 = rax_3
    
    if (rax_3 == 0)
        rbx_1 = nullptr
    else
        sub_14192a1e0(rax_3)
        *(rbx_1 + 0x450) = *arg2
        *(rbx_1 + 0x460) = arg2[1]
        *(rbx_1 + 0x470) = arg2[2]
        *(rbx_1 + 0x480) = arg2[3]
        *(rbx_1 + 0x490) = arg2[4]
        *(rbx_1 + 0x4a0) = arg2[5]
        *(rbx_1 + 0x4b0) = arg2[6]
        *(rbx_1 + 0x4c0) = arg2[7].q
    
    if (rbx_1 + 0x658 != &arg2[9])
        int64_t rcx_2 = *(rbx_1 + 0x658)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        *(rbx_1 + 0x658) = arg2[9].q
        arg2[9].q = 0
        *(rbx_1 + 0x660) = *(arg2 + 0x98)
        *(rbx_1 + 0x664) = *(arg2 + 0x9c)
        *(arg2 + 0x98) = 0
    
    int32_t var_58
    sub_140d99540(&data_1439c7730, &var_58)
    int128_t* var_50
    *var_50 = *arg2
    var_50[1] = arg2[1]
    var_50[2] = arg2[2]
    var_50[3] = arg2[3]
    var_50[4] = arg2[4]
    var_50[5] = arg2[5]
    var_50[6] = arg2[6]
    var_50[7].q = arg2[7].q
    *(var_50 + 0x78) = rbx_1
    var_50[8].d = 0xffffffff
    void arg_10
    result = sub_141937430(&data_1439c7730, &arg_10, sub_140b21160(var_50, 0x78, 0), var_50, 
        var_58, nullptr)
    *(arg2 + 0xa4) = 5

return result
