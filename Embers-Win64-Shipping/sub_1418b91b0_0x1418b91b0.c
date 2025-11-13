// 函数: sub_1418b91b0
// 地址: 0x1418b91b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = &data_142fec170
arg1[3] = 0
*(arg1 + 0x14) = arg3
uint64_t count_1 = zx.q(arg4)
arg1[2].d = arg5
__builtin_memset(&arg1[4], 0, 0x5c)

if (count_1.d == 0)
    return arg1

uint32_t rbp = zx.d((arg5 u>> 2).b) & 1
int32_t r8_1

if (((arg5 u>> 9).b & 1) != 0)
    r8_1 = 4

if (((arg5 u>> 9).b & 1) == 0 || ((arg3 u>> 4).b & 1) != 0)
    r8_1 = 0

int32_t rax_5 = (arg5 u>> 3 & 1) << 3
int32_t rcx_7 = (arg5 u>> 8 & 1) << 8 | rax_5
    | (sbb.d(rax_5, rax_5, ((arg5 u>> 0xa).b & 1) != 0) & 3) | (arg5 u>> 6 & 1) | ((rbp ^ 1) * 2)
    | arg3
*(arg1 + 0x14) = rcx_7 | r8_1

if (rbp.b != 0)
    char rax_8 = sub_140a80f40()
    memset(sub_1418c25a0(arg1, zx.q(rax_8), 1, count_1.d, 0), 0, count_1)
    sub_1418c8f10(arg1, rax_8)
    return arg1

int32_t rsi_5 = 7

if (*(arg2 + 0x220) == 0)
    rsi_5 = 1

int32_t i = 0
arg1[3].d = (((zx.q(arg5 u>> 1) & 1) << 1) + 1).d

do
    int32_t var_38
    var_38.q = "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanIndexBuffer.cpp"
    void* rax_12 = sub_1418bb790(arg2 + 0x248, count_1.d, *(arg1 + 0x14), rsi_5, 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanIndexBuffer.cpp", 0x74)
    uint64_t i_1 = zx.q(i)
    int64_t* r8_4 = arg1[i_1 + 4]
    arg1[i_1 + 4] = rax_12
    
    if (rax_12 != 0)
        *(rax_12 + 8) += 1
    
    if (r8_4 != 0)
        r8_4[1].d -= 1
        
        if (r8_4[1].d == 1)
            (**r8_4)(r8_4, 1)
    
    i += 1
while (i u< arg1[3].d)

void* rcx_14 = arg1[zx.q(*(arg1 + 0x1c)) + 4]
arg1[7] = rcx_14
arg1[8] = *(rcx_14 + 0x20)
arg1[9] = *(rcx_14 + 0x28)
arg1[0xa] = zx.q(*(rcx_14 + 0x14))
bool cond:2_1 = arg7 == 0
arg1[0xb] = count_1

if (arg7 == 0)
    sub_140a80f40()

int64_t* rcx_15 = *(arg6 + 8)

if (rcx_15 != 0)
    uint32_t count_2 = (*(*rcx_15 + 0x18))(rcx_15)
    uint32_t count = count_2
    
    if (count_1.d u<= count_2)
        count = count_1.d
    
    int64_t rax_21 = sub_1418c25a0(arg1, zx.q(cond:2_1), 1, count, 0)
    int64_t* rcx_17 = *(arg6 + 8)
    memcpy(rax_21, (*(*rcx_17 + 0x10))(rcx_17), count)
    sub_1418c8f10(arg1, cond:2_1)
    int64_t* rcx_20 = *(arg6 + 8)
    (*(*rcx_20 + 0x20))(rcx_20)

return arg1
