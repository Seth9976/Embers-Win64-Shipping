// 函数: sub_142271fd0
// 地址: 0x142271fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x4050)
void var_4078
int64_t rax_1 = __security_cookie ^ &var_4078

if (arg2 != 0)
    (*(*arg2 + 0x348))(arg2, 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/PhysicsEngine/PhysScene_PhysX.cpp", 
        0x8b3)

int16_t var_4048 = 2
int64_t i = 0
int64_t var_4038[0x800]
int32_t rax_4 = (*(*arg2 + 0x98))(arg2, &var_4048, &var_4038, 0x800, 0)

if (rax_4 s> 0)
    do
        int64_t* rdi_1 = var_4038[i]
        
        if ((*(*rdi_1 + 0x1f0))(rdi_1) == 0)
            char* rax_8
            
            if (arg1 == 0)
                rax_8 = (*(*rdi_1 + 0x178))(rdi_1, &var_4048)
            
            if (arg1 != 0 || *rax_8 != 1)
                *arg3 += 1
        
        i += 1
    while (i s< sx.q(rax_4))

int64_t result = (*(*arg2 + 0x350))(arg2)
__security_check_cookie(rax_1 ^ &var_4078)
return result
