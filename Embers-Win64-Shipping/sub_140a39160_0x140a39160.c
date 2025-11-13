// 函数: sub_140a39160
// 地址: 0x140a39160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140a20af0()
uint64_t rdx = zx.q(rax)
void* rax_1

if (rax != 0)
    rax_1 = *(&data_143cf0bf8 + (rdx u>> 0xe << 3)) + (zx.q(rdx.d) & 0x3fff) * 0x18
else
    rax_1 = nullptr

*(rax_1 + 8) = arg2
sub_1405a42f0(arg1 + 0x40, rdx.d)
int32_t rax_5 = *(arg1 + 0xc8)
*(arg1 + 0xc8) += 1
int32_t result = rax_5 + 1

if ((result.b & 0x1f) == 0)
    void*** var_38_1 = nullptr
    void** const var_28 = &data_142e52180
    void* var_20_1 = arg1
    int64_t (* var_48_1)(int64_t* arg1) = j_sub_140a37410
    void var_68
    int64_t* rax_6 = sub_140958c20(&var_68, nullptr, 0xff)
    void* rdx_1 = *rax_6
    *(rdx_1 + 0x10) = var_48_1
    *(rdx_1 + 0x20) = var_38_1
    *(rdx_1 + 0x30) = var_28.o
    int128_t var_18
    *(rdx_1 + 0x40) = var_18
    int64_t (* rcx_7)(int64_t* arg1) = var_48_1
    
    if (*(rdx_1 + 0x10) != 0)
        rcx_7 = nullptr
    
    *(rdx_1 + 0x50) = 0xff
    void* rcx_8 = *rax_6
    int64_t* rbx_1 = *(rcx_8 + 0x68)
    int64_t* arg_10 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[9].d += 1
        rbx_1 = arg_10
    
    result = sub_1409787e0(rcx_8, rax_6[1], rax_6[2].d, 1)
    
    if (rcx_7 != 0)
        void** const* rcx_9 = &var_28
        
        if (var_38_1 != 0)
            rcx_9 = var_38_1
        
        result = (*rcx_9)[2](rcx_9)
    
    if (rbx_1 != 0)
        result = rbx_1[9].d
        rbx_1[9].d -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_10)

return result
