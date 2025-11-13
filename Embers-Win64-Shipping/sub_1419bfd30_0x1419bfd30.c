// 函数: sub_1419bfd30
// 地址: 0x1419bfd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = data_1439c7a78
int32_t r10 = data_1439c861c

if (r9 s>= 0xffff)
    r9 = 0xffff

int32_t r8 = zx.d((r9 s/ 0x23).w) * 0x23
int32_t rcx_1 = r8 << 4
uint32_t temp0 = divu.dp.d(0:(arg3 - 1 + rcx_1), rcx_1)
int32_t rcx_2 = arg2[3].d

if (rcx_2 == 0)
    sub_1407b4e80(arg2, r10, r8, temp0, 1, 0x10001)
else if (temp0 * r10 * r8 != rcx_2)
    int128_t var_28
    __builtin_memset(&var_28, 0, 0x1c)
    sub_1407b4e80(&var_28, r10, r8, temp0, 1, 0x10001)
    sub_1419bf8e0(arg1, &var_28, arg2, 0, 0, arg3)
    void* rbx_1 = var_28.q
    sub_1405d16e0(arg2, rbx_1)
    sub_1405d16e0(&arg2[1], var_28:8.q)
    void* var_18
    sub_1405d16e0(&arg2[2], var_18)
    int32_t var_10
    arg2[3].d = var_10
    
    if (rbx_1 != 0)
        int32_t rax_9 = 0
        
        if (0 == *(rbx_1 + 8))
            *(rbx_1 + 8) = 0
        else
            rax_9 = *(rbx_1 + 8)
        
        if (rax_9 == 1)
            void* rbx_2 = var_28.q
            
            if (*(rbx_2 + 0x11) != 0)
                if (data_143f0f1c7 != 0)
                    int64_t* rcx_9 = data_143f0f180
                    (*(*rcx_9 + 0x638))(rcx_9, rbx_2)
                
                *(rbx_2 + 0x11) = 0
    
    int32_t var_10_1 = 0
    sub_1405d16e0(&var_28, nullptr)
    sub_1405d16e0(&var_28:8, nullptr)
    sub_1405d16e0(&var_18, nullptr)
    sub_1405ec8a0(&var_18)
    sub_1405d1550(&var_28:8)
    sub_1405d1550(&var_28)
    int64_t rax_11
    rax_11.b = 1
    return rax_11

int32_t rax_6
rax_6.b = 0
return rax_6
