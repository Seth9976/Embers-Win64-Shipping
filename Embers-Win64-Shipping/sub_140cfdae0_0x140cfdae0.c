// 函数: sub_140cfdae0
// 地址: 0x140cfdae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg3
int32_t rdi = 0
int64_t var_48
__builtin_memset(&var_48, 0, 0x18)
uint64_t rax = sub_140d3c6e0(arg3)
uint64_t var_40
int32_t r8

if (rax != 0)
label_140cfdb99:
    void var_30
    int64_t* rax_4
    rax_4, r8 = sub_140d15b50(&var_30, rax)
    var_48 = *rax_4
    
    if (&var_40 != &rax_4[1])
        uint64_t rcx_7 = var_40
        
        if (rcx_7 != 0)
            r8 = sub_140a74f90(rcx_7)
        
        var_40 = rax_4[1]
        rax_4[1] = 0
        int64_t var_38
        var_38.d = rax_4[2].d
        var_38:4.d = *(rax_4 + 0x14)
        rax_4[2] = 0
    
    int64_t var_28
    
    if (var_28 != 0)
        r8 = sub_140a74f90(var_28)
else if (*(rsi + 0x10) == 0)
    var_48 = *(rsi + 0x10)
    r8 = sub_140597df0(&var_40, &rsi[6])
else
    if (rax.d == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax = zx.q(data_1439aaa30)
    
    if (rax.d != rsi[2] || *rsi != 0xffffffff)
        void* rax_1 = sub_140d2bce0(&rsi[4])
        sub_140d3a3a0(rsi, rax_1)
        
        if (rax_1 != 0 || data_143e1d7b4 == 0)
            int32_t rax_2 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_2 = data_1439aaa30
            
            rsi[2] = rax_2
        
        rax = sub_140d3c6e0(rsi)
        
        if (rax != 0)
            goto label_140cfdb99
        
        var_48 = *(rsi + 0x10)
        r8 = sub_140597df0(&var_40, &rsi[6])
    else
        var_48 = *(rsi + 0x10)
        r8 = sub_140597df0(&var_40, &rsi[6])

int64_t result

if (not(test_bit(arg5, 0x1c)))
    int64_t var_80_1 = arg6
    int32_t var_88_1 = arg5
    result = sub_140d1fa10(&var_48, arg2, r8)
else
    int64_t var_68
    int64_t var_58
    int64_t* rax_9 = sub_140a30480(sub_140d30800(&var_48, &var_58), &var_68, nullptr)
    int16_t* const r8_1
    
    if (rax_9[1].d == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *rax_9
    
    int64_t var_78
    sub_140a2e390(&var_78, u"FSoftObjectPath(TEXT("%s"))", r8_1)
    int32_t var_70
    
    if (var_70 != 0)
        rdi = var_70 - 1
    
    result = sub_140a20ba0(arg2, var_78, rdi)
    int64_t rcx_14 = var_78
    
    if (rcx_14 != 0)
        result = sub_140a74f90(rcx_14)
    
    int64_t rcx_15 = var_68
    
    if (rcx_15 != 0)
        result = sub_140a74f90(rcx_15)
    
    int64_t rcx_16 = var_58
    
    if (rcx_16 != 0)
        result = sub_140a74f90(rcx_16)

uint64_t rcx_18 = var_40

if (rcx_18 == 0)
    return result

return sub_140a74f90(rcx_18)
