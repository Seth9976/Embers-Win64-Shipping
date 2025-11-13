// 函数: sub_140d10800
// 地址: 0x140d10800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = arg2[5].b

if ((rax & 1) == 0)
    int64_t* rcx_13
    
    if (*arg3 == 0)
        rcx_13 = arg2
    else
        void* rbx_3 = *(arg1 + 0x78)
        *(rbx_3 + 0xe8)
        int64_t* rax_7 = sub_140d21b20(sub_140d2be40(arg3, *(rbx_3 + 0xe0)), *(rbx_3 + 0xe8))
        rcx_13 = arg2
        
        if (rax_7 != 0)
            return sub_140cf0da0(rcx_13, rax_7, arg4) __tailcall
    
    return sub_140cf0bc0(rcx_13, &data_143e1b908, arg4)

uint64_t var_28 = 0
int64_t var_20_1 = 0

if ((rax & 2) != 0)
    sub_1408f4c10(&var_28)

int64_t* rax_1 = sub_140cf0bc0(arg2, &var_28, arg4)

if ((arg2[5].b & 1) != 0)
    rax_1 = sub_1408f4c10(&var_28)

int32_t rdi_1 = var_20_1.d

if (rdi_1 s> 0)
    void* rbx_1 = *(arg1 + 0x78)
    *(rbx_1 + 0xe8)
    int64_t* rax_2 = sub_140d2be40(arg3, *(rbx_1 + 0xe0))
    int64_t rdx_2 = *(rbx_1 + 0xe8)
    uint64_t var_18 = var_28
    int32_t var_c = var_20_1:4.d
    int32_t var_10 = rdi_1
    int64_t rax_3 = sub_140d2c230(rax_2, rdx_2, &var_18)
    *arg3 = 1
    return rax_3

if (*arg3 != 0)
    void* rbx_2 = *(arg1 + 0x78)
    *(rbx_2 + 0xe8)
    rax_1 = sub_140d1a460(sub_140d2be40(arg3, *(rbx_2 + 0xe0)), *(rbx_2 + 0xe8))
    *arg3 = 0

uint64_t rcx_9 = var_28

if (rcx_9 == 0)
    return rax_1

return sub_140a74f90(rcx_9) __tailcall
