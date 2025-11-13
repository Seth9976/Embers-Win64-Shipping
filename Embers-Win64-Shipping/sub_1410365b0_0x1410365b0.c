// 函数: sub_1410365b0
// 地址: 0x1410365b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x10)

if (data_143f0f161 == 0 || *(arg1 + 0x48) != 0)
    return 

int64_t rbx
rbx.b = data_143e2c1b4 != 0
int64_t var_28
int64_t* var_20

if (*(arg1 + 0x49) != rbx.b)
    int64_t* rcx = *(rsi + 0x18)
    int16_t* var_18
    int32_t var_10
    
    if ((*(*rcx + 0x140))(rcx, zx.q(rbx.b)) s< 0)
        int64_t* rbx_1 = data_143e2c2c8
        sub_140a2e390(&var_18, u"%d", 0)
        int16_t* const rdx_2 = &data_142d40450
        
        if (var_10 != 0)
            rdx_2 = var_18
        
        (*(*rbx_1 + 0x80))(rbx_1, rdx_2, 0x9000000)
        int16_t* rcx_6 = var_18
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
    else
        int64_t* rcx_2 = *(*(*(rsi + 0x9d8) + 0x38) + 0x28)
        int32_t rax_5 = (*(*rcx_2 + 0x80))(rcx_2, &data_143f0f168)
        
        if (rax_5 s< 0)
            var_20 = &var_18
            var_28 = 0
            var_18 = nullptr
            var_10.q = 0
            sub_14106a020(rax_5, 
                "Adapter->GetDevice(0)->GetCommandListManager().GetTimestampFrequency(&GTimingFrequency)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Query.cpp", 0x348, 
                nullptr)
        
        *(arg1 + 0x49) = rbx.b

int32_t temp1_1 = mods.dp.d(sx.q(*(arg1 + 0x1c) + 1), *(arg1 + 0x18))
*(arg1 + 0x1c) = temp1_1
int32_t rbp_1 = temp1_1 * 2
void* rsi_1 = **(*(rsi + 0x9d8) + 0x6d8)
*(rsi_1 + 0x3b94) += 1
int64_t* rbx_2 = *(arg1 + 0x28)

if (rbx_2 != 0 && data_1439c7a34 u> 1)
    while (*rbx_2 != *(rsi_1 + 0x138))
        rbx_2 = rbx_2[1]
        
        if (rbx_2 == 0)
            break

int64_t* rcx_8 = *(*(rsi_1 + 0x1c8) + 0x30)
(*(*rcx_8 + 0x1a8))(rcx_8, rbx_2[3], 2, zx.q(rbp_1), var_28, var_20)

if (data_1439b4ad4 != 0 && rbx_2 != -0x20 && rbx_2[5] != 0)
    sub_141026da0(*(*(rsi_1 + 0x1c8) + 0x118), &rbx_2[4])

sub_1410101f0(*(arg1 + 0x30) + sx.q(rbp_1) * 0x18, rsi_1 + 0x1c0)
*(arg1 + 0x48) = 1
