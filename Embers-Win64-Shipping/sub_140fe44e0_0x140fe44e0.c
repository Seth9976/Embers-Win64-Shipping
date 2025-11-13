// 函数: sub_140fe44e0
// 地址: 0x140fe44e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t var_60
(*(*arg2 + 0x50))(arg2, &var_60)
int32_t rax_3 = var_60
uint64_t rcx_1 = zx.q(arg5) * 5
int64_t var_68 = 0
int32_t var_74 = 1
int32_t rsi = (&data_1439c85f4)[rcx_1 * 2]

if (arg3 u<= rax_3)
    rax_3 = arg3

uint32_t temp0 = divu.dp.d(0:rax_3, rsi)
uint32_t var_70 = temp0
int32_t var_78 = sub_140fe7330((&data_1439c85fc)[rcx_1 * 2], 0)
uint32_t rax_8 = divu.dp.d(0:var_60, rsi) - temp0

if (arg4 u<= rax_8)
    rax_8 = arg4

uint32_t var_6c = rax_8
int32_t result = (*(*arg1 + 0x38))(arg1, arg2, &var_78, arg6)

if (result s< 0)
    if (result == 0x8007000e)
        result = (*(*arg1 + 0x38))(arg1, arg2, &var_78, arg6)
    
    if (result s< 0)
        int64_t* var_88_1 = arg1
        result = sub_140fff020(result, "Direct3DDevice->CreateShaderResourceView", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11UAV.cpp", 0xee)

__security_check_cookie(rax_1 ^ &var_a8)
return result
