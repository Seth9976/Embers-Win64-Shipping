// 函数: sub_14271c4c0
// 地址: 0x14271c4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* rax_2 = arg1[0x1f]

if (rax_2 != 0)
    *(rax_2 + 0x98) |= 0x100

uint64_t result
int64_t (* var_88)()

if (((arg1[0x16].d u>> 2).b & 1) == 0)
label_14271c690:
    void* rcx_14 = arg1[0x1f]
    arg1[0x1d] = 0
    void* rax_14
    
    if (rcx_14 != 0)
        rax_14 = sub_140d3c6e0(rcx_14 + 0x9c)
    
    if (rcx_14 == 0 || rax_14 == 0)
        result = sub_14271cf20(arg1, 3)
    else
        var_88 = arg1[0x1f]
        void* rcx_17 = arg1[0x20]
        void* var_80_1 = rcx_17
        
        if (rcx_17 != 0)
            *(rcx_17 + 8) += 1
        
        result = sub_142666c80(rax_14, &var_88, 1)
else
    void* rcx = arg1[0xd]
    
    if (rcx == 0)
        goto label_14271c690
    
    if ((*(*(rcx + 0x220) + 0x40))(rcx + 0x220) == 0)
        goto label_14271c690
    
    int64_t* rcx_2 = arg1[0xd]
    var_88 = sub_14271c4c0
    int64_t var_80
    var_80.d = 0
    void* rax_7 = sub_141dcc7f0(rcx_2)
    void*** rax_8 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_8 != 0)
        *rax_8 = &data_142e33ea8
        sub_140d3a3a0(&rax_8[1], arg1)
        *(rax_8 + 0x10) = var_88.o
        rax_8[5] = sub_140a387b0()
        *rax_8 = &data_142e33f00
    
    int64_t var_78 = 0
    int32_t var_70_1 = 0
    
    if (rax_8 != 0)
        (*rax_8)[8](rax_8, &var_78)
    
    void var_68
    sub_140d3a3a0(&var_68, nullptr)
    int64_t var_60_1 = 0
    int64_t var_58_1 = 0
    void* var_48_1 = nullptr
    sub_1423e6200(rax_7, &arg1[0x1d], &var_78, 0x3e4ccccd, 0, 0xbf800000)
    
    if (var_58_1 != 0)
        void var_38
        void* rcx_7 = &var_38
        
        if (var_48_1 != 0)
            rcx_7 = var_48_1
        
        (*(*rcx_7 + 0x10))(rcx_7)
    
    result = sub_140745b20(&var_78)
    
    if (rax_8 != 0)
        (*rax_8)[7](rax_8, 0)
        result = sub_140a84c80(rax_8, 0, 0)
        
        if (result != 0)
            result = sub_140a74f90(result)
__security_check_cookie(rax_1 ^ &var_b8)
return result
