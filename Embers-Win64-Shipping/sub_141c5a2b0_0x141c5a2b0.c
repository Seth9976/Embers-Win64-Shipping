// 函数: sub_141c5a2b0
// 地址: 0x141c5a2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0x68)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    __builtin_memset(&result_1[1], 0, 0x19)
    result_1[5] = arg1
    *result = &data_143209958
    result[6] = 0
    result[7] = 0
    result[8].d = 2
    int32_t rax = int.d(sub_142366f80(arg2))
    result[9].d = 0
    *(result + 0x4c) = 0x10
    result[0xa] = 0
    result[0xb].d = 0
    *(result + 0x44) = rax
    *(result + 0x5c) = 0
    result[0xc].b = 0
    *(result + 0xc) = *(arg2 + 0x204)

void arg_8

if (arg2[0x51] == 0)
    (*(*arg2 + 0x308))(arg2, *(*(*arg1 + 0x80))(arg1, &arg_8, arg2))
int64_t rax_5 = (*(*arg1 + 0xa0))(arg1, arg2)
result[7] = rax_5

if (rax_5 == 0)
    *(arg2 + 0x169) = 1
    *(arg2 + 0x204) = 0
    sub_142372ee0(arg2)
    void** r8_2 = *result
    (*r8_2)(result, 1, r8_2)
    return nullptr

int64_t* var_20_1 = arg2
void*** rax_6 = j_sub_140a82f30(0x10)
void*** r15_1 = rax_6

if (rax_6 == 0)
    r15_1 = nullptr
else
    rax_6[1] = 0
    *r15_1 = &data_143209f58
    void*** rax_7 = j_sub_140a82f30(0x90)
    void*** rbx_2 = rax_7
    
    if (rax_7 == 0)
        rbx_2 = nullptr
    else
        *rbx_2 = &data_143209f40
        *(rbx_2 + 8) = result.o
        rbx_2[3] = 0
        rbx_2[4] = 0
        rbx_2[5] = 4
        rbx_2[6] = 0
        rbx_2[7].w = 0
        *(rbx_2 + 0x3a) = 0
        rbx_2[8].b = 0
        __builtin_memset(&rbx_2[9], 0, 0x19)
        rbx_2[0xd].d = 0
        *(rbx_2 + 0x6c) = 1
        rbx_2[0xe].d = 0
        rbx_2[0xf].d = 0
        rbx_2[0x10] = 0
        rbx_2[0x11] = 0
    
    r15_1[1] = rbx_2
    
    if (data_143f34d94 == 0)
        sub_141c70450(rbx_2, data_143db7ac8)
    else
        rbx_2[0xf].d += 1
        int64_t* rcx_4 = rbx_2[0x10]
        rbx_2[0x11] = 0
        sub_140a4fc50(rcx_4)
        rbx_2[0x10] = 0
        sub_141c5a860(&rbx_2[1])
        rbx_2[0xf].d -= 1

result[6] = r15_1
*(result + 0xc) = *(arg2 + 0x204)
return result
