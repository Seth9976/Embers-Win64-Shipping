// 函数: sub_1423d09b0
// 地址: 0x1423d09b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
uint32_t rcx_2
rcx_2.b = (arg2 u>> 0x20).d == 0

if ((rcx_2.b & sub_140b5b8a0(arg2.d, 0)) != 0)
    sub_140d19010(rax, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* result = sub_140d2dfc0(sub_1424ada00(), rax, arg2, 0x40, 0, 0, 0, 0, 0)
*(result + 0x30) = 1
*(result + 0x140) = arg3
*(result + 0x13c) = arg4
int64_t var_18
void** rsi_1 = *sub_140e13c10(&var_18)
sub_140e294f0(result + 0x148, rsi_1)
sub_140e294f0(result + 0x158, &rsi_1[2])
*(result + 0x168) = rsi_1[4].d
sub_140e291a0(result + 0x170, &rsi_1[5])
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return result
