// 函数: sub_140693270
// 地址: 0x140693270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
sub_140693390(arg1 + 0x20, arg2 + 0x20)
*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x58) = *(arg2 + 0x58)
*(arg1 + 0x68) = *(arg2 + 0x68)
*(arg1 + 0x6c) = *(arg2 + 0x6c)
*(arg1 + 0x6d) = *(arg2 + 0x6d)
*(arg1 + 0x6e) = *(arg2 + 0x6e)
*(arg1 + 0x6f) = *(arg2 + 0x6f)
int64_t* rbx = *(arg2 + 0x78)
int64_t var_18 = *(arg2 + 0x70)

if (rbx != 0)
    rbx[1].d += 1

if (&var_18 != arg1 + 0x70)
    var_18.o = *(arg1 + 0x70)
    *(arg1 + 0x70) = var_18.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

*(arg1 + 0x80) ^= (*(arg1 + 0x80) ^ *(arg2 + 0x80)) & 1
char rcx_5 = *(arg1 + 0x80)
*(arg1 + 0x80) = ((rcx_5 ^ *(arg2 + 0x80)) & 2) ^ rcx_5
return arg1
