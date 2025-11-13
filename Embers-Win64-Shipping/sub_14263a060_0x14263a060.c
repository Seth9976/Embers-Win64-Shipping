// 函数: sub_14263a060
// 地址: 0x14263a060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp_1

if (*arg1 != 0)
    rbp_1 = *(arg1 + 8)

void* result

if (*arg1 == 0 || rbp_1 == 0 || arg2[1].d == 0)
    result = nullptr
else
    void* rax_1 = sub_140cde0b0()
    sub_140d19010(rax_1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    int64_t arg_8 = 0
    void* result_1 = sub_140d2dfc0(sub_14263d250(), rax_1, 0, 0, 0, 0, 0, 0, 0)
    result = result_1
    
    if (result_1 != 0)
        sub_14263aa00(result_1, rbp_1, arg3)
        *(result + 0x30) = arg4
        int64_t** i = *arg2
        
        for (void* rdi_2 = &i[sx.q(arg2[1].d)]; i != rdi_2; i = &i[1])
            sub_142639ae0(result, *i)

int64_t rcx_5 = *arg2

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return result
