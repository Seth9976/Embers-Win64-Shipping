// 函数: sub_1427f60a0
// 地址: 0x1427f60a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
arg1[1] = 0
*arg1 = &data_1434d0798
char* r8 = arg2
char _FileName[0x130]

do
    char rcx = *r8
    
    if (rcx == 0)
        break
    
    char rax_1 = rcx
    
    if (rcx == 0x2f)
        rax_1 = 0x5c
    
    i += 1
    *(&_FileName - arg2 + r8) = rax_1
    r8 = &r8[1]
while (i u< 0x12c)

_FileName[zx.q(i)] = 0

if (i != 0x12c)
    fopen_s(&arg1[1], &_FileName, "wb")

if (arg1[1] == 0)
    class physx::shdfnd::Foundation* rax_3 = physx::shdfnd::Foundation::getInstance()
    int32_t var_148_1 = *_errno()
    char* var_150_1 = arg2
    physx::shdfnd::Foundation::error(rax_3, 0x20, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\E"
    "xtDefaultStreams.cpp", 
        0x79, "Unable to open file %s, errno 0x%x\n")

return arg1
