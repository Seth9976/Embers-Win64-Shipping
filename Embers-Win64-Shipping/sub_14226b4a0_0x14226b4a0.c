// 函数: sub_14226b4a0
// 地址: 0x14226b4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x4a]
int64_t* rax = rcx

if (rcx == 0)
    rax = arg1[0xa9]

if (rax != 0)
    if (rcx == 0)
        rcx = arg1[0xa9]
    
    jump(*(*rcx + 0x5f8))

int64_t* rcx_1 = arg1[0x57]
int64_t var_18
int64_t* rax_3

if (rcx_1 == 0)
    int32_t var_10_1 = arg1[0xac].d
    rax_3 = &var_18
    var_18 = arg1[0xab]
else
    rax_3 = (*(*rcx_1 + 0x708))(rcx_1, &var_18)

*arg2 = *rax_3
arg2[1].d = rax_3[1].d
int64_t* rax_7 = (*(*arg1 + 0x660))(arg1, &var_18)
*arg3 = *rax_7
int32_t result = rax_7[1].d
arg3[1].d = result
return result
