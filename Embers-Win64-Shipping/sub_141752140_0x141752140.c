// 函数: sub_141752140
// 地址: 0x141752140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg1
void* i = &arg1[6]

if (arg1 != i)
    do
        (*(*arg2 + 0x1d8))(arg2, &data_1439a9538)
        int32_t rax_2
        rax_2, arg3 = sub_140b4e7c0(arg2, &data_1439a9538)
        
        if (rax_2 s>= 0x19)
            sub_14152dda0(sub_14152dda0(arg2, rbp, arg3), rbp + 0xc, arg3)
        else
            int32_t var_40_1 = 0x1010101
            int128_t var_38
            __builtin_memcpy(&var_38, 
                "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\x"
            "ff\x7f\xff", 
                0x18)
            char var_3c_1 = 1
            void** const var_48 = &data_142fc4870
            arg3 = sub_141753370(&var_48, arg2)
            int32_t rax_3 = var_38:8.d
            *rbp = var_38.q
            rbp[1].d = rax_3
            *(rbp + 0xc) = var_38:0xc.q
            int32_t var_24
            *(rbp + 0x14) = var_24
        
        rbp = &rbp[3]
    while (rbp != i)

for (void* rbx = i + 8; i != rbx; i += 4)
    int64_t* rcx_5 = arg2[1]
    int32_t* rdx_3 = *rcx_5
    
    if (&rdx_3[1] u> rcx_5[1])
        int32_t* i_1 = i
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, i_1, arg3)
        else
            (*(*arg2 + 0x150))(arg2, i_1, 4)
    else
        *i = *rdx_3
        int64_t* rax_8 = arg2[1]
        *rax_8 += 4

int64_t* rcx_7 = arg2[1]
int32_t* rdx_4 = *rcx_7

if (&rdx_4[1] u<= rcx_7[1])
    void* rax_10
    rax_10.b = *rdx_4 != 0
    arg1[7].b = rax_10.b
    int64_t* rax_11 = arg2[1]
    *rax_11 += 4
    return rax_11

int32_t rax_12
rax_12.b = arg1[7].b != 0
int32_t arg_8 = rax_12
(*(*arg2 + 0x150))(arg2, &arg_8, 4)
bool rax_14 = arg_8 != 0
arg1[7].b = rax_14
return rax_14
