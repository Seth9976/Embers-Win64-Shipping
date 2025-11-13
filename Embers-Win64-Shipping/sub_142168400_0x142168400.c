// 函数: sub_142168400
// 地址: 0x142168400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = data_143f4d270

if (result != 0)
    return result

void* rdi_1 = nullptr
void* rax_1 =
    sub_140d2f240(sub_14254f680(), 0, /Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl", 0, 
    0x2000, 0)
void* rsi_1 = rax_1

if (rax_1 == 0)
    rsi_1 = sub_14254f680()

void* rax_3 = sub_140cde0b0()

if ((1 & sub_140b5b8a0(0, 0)) != 0)
    sub_140d19010(rax_3, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* rax_5 = sub_140d2dfc0(rsi_1, rax_3, 0, 0, 0, 0, 0, 0, 0)
data_143f4d270 = rax_5
int32_t rax_6 = *(rax_5 + 0xc)

if (rax_6 s< data_143e1d9b4)
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_6)
    uint32_t rdx_3 = zx.d(temp0_1)
    int32_t rax_8 = temp1_1 + rdx_3
    rdi_1 = *(data_143e1d9a0 + (sx.q(rax_8 s>> 0x10) << 3)) + sx.q(zx.d(rax_8.w) - rdx_3) * 0x18

*(rdi_1 + 8) |= 0x40000000
return data_143f4d270
