// 函数: ?SendCoreNotification@SchedulerProxy@details@Concurrency@@QEAAXPEAUSchedulerCore@23@_N@Z
// 地址: 0x140ff7000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void* rax_2

if (arg2 != 0)
    rax_2 = (*(*arg2 + 0x48))(arg2)
else
    rax_2 = nullptr

int64_t* rbx = *(rax_2 + 0x38)
void var_68
(*(*rbx + 0x50))(rbx, &var_68)
int32_t var_58
int32_t rax_5 = sub_140fdf270(var_58)
int64_t* rcx_3 = *(arg1 + 0x150)
int64_t var_78
int32_t rax_6 = (*(*rcx_3 + 0x70))(rcx_3, rbx, 0, 1, 0, &var_78)

if (rax_6 s< 0)
    int32_t var_88
    var_88.q = *(arg1 + 0x168)
    sub_140fff020(rax_6, "Direct3DDeviceIMContext->Map(Texture,0,D3D11_MAP_READ,0,&LockedRect)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp", 
        0x32e)

*arg4 = var_78
int32_t var_70
*arg5 = divu.dp.d(0:var_70, rax_5)
int32_t var_6c
uint32_t result = divu.dp.d(0:var_6c, var_70)
*arg6 = result
__security_check_cookie(rax_1 ^ &var_a8)
return result
