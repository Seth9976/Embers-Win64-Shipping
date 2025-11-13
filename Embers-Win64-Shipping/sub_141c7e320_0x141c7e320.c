// 函数: sub_141c7e320
// 地址: 0x141c7e320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141c7ef50()
int64_t var_18
int64_t* rax_1 = sub_140b63b70(arg1 + 0x10, &var_18)
int16_t* rbx

if (rax_1[1].d == 0)
    rbx = &data_142d40450
else
    rbx = *rax_1

void* rax_3 = sub_140d2ee50(sub_141c7ef50(), rax, rbx, 0)
int64_t rcx_2 = var_18
void* rsi = rax_3

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

if (rsi == 0)
    uint64_t rbx_1 = *(arg1 + 0x10)
    uint32_t rcx_5
    rcx_5.b = (rbx_1 u>> 0x20).d == 0
    
    if ((rcx_5.b & sub_140b5b8a0(rbx_1.d, 0)) != 0)
        sub_140d19010(rax, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    rsi = sub_140d2dfc0(sub_141c7ef50(), rax, rbx_1, 0, 0, 0, 0, 0, 0)

int64_t result = sub_140aa8b70(arg1 + 0xb8, 0)

if (rsi != 0)
    result = sx.q(*(rsi + 0x30))
    void* i = *(rsi + 0x28)
    
    for (void* rsi_1 = i + result * 0xc; i != rsi_1; i += 0xc)
        result = sub_14093b910(arg1 + 0xb8, i, i + 8)

return result
