// 函数: sub_1420e7ae0
// 地址: 0x1420e7ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
void* rdi = nullptr
void* rax_1 = nullptr

if (sub_140d23dc0(arg1, 0x30) == 0)
    rax_1 = arg1[4]

if (*(rax_1 + 0x11a) != 3)
    sub_140d21d80(arg1)

int64_t* result = sub_140d23dc0(arg1, 0x30)

if (result.b == 0)
    rdi = arg1[4]

if (*(rdi + 0x11a) != 3)
    result = sub_140d21d80(arg1)
    
    if (((result[0xa].d u>> 0x14).b & 1) == 0 && arg1[7] != 0)
        int64_t var_18
        sub_1420e4db0(arg1, &var_18)
        result = sub_140ba1330(&var_18, 0, nullptr, 1)
        int64_t rcx_8 = var_18
        char rdi_1 = result.b
        
        if (rcx_8 != 0)
            result = sub_140a74f90(rcx_8)
        
        if (rdi_1 == 0)
            result = sub_1420e4db0(arg1, &var_18)
            int64_t rcx_10 = var_18
            
            if (rcx_10 != 0)
                return sub_140a74f90(rcx_10)

return result
