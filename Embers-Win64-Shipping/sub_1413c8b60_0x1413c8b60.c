// 函数: sub_1413c8b60
// 地址: 0x1413c8b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1[1] + 8)
(*(*rcx + 0xb0))(rcx)
int64_t* rbx = arg1[1]
void* rsi = *arg1
int64_t* arg_18 = rbx
void arg_8

if (sub_1409740e0(rsi + 0x64c8, rbx) == 0)
    sub_141113900(rsi + 0x6518, &arg_8, &arg_18, nullptr)
else
    sub_1413f0d50(rsi + 0x6428, rbx[1])
    sub_1408fa6d0(rsi + 0x63d8, rbx[1])
    sub_1413f0be0(rsi + 0x6478, rbx)
    sub_1409740e0(rsi + 0x6568, rbx)
    sub_140868c90(rsi + 0x6388, rbx)
    void*** rax_3 = j_sub_140a82f30(0x18)
    void*** rdx_6 = rax_3
    
    if (rax_3 == 0)
        rdx_6 = nullptr
    else
        *rdx_6 = &data_142f788e0
        rdx_6[1] = 0
        rdx_6[1] = rbx[0x18]
        rbx[0x18] = 0
        rdx_6[2].d = rbx[0x19].d
        *(rdx_6 + 0x14) = *(rbx + 0xcc)
        rbx[0x19] = 0
    
    sub_141997870(rdx_6)
    int64_t* rcx_10 = rbx[1]
    
    if (rcx_10 != 0)
        (**rcx_10)(rcx_10, 1)
    
    if (rbx != 0)
        (**rbx)(rbx, 1)
int32_t* result = arg1[2]
*result -= 1
return result
