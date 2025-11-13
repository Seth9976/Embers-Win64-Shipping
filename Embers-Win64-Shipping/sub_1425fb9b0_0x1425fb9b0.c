// 函数: sub_1425fb9b0
// 地址: 0x1425fb9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x274) & 1) != 0)
    int32_t rax_3 = *(arg1 + 0x68)
    
    if ((rax_3 & 0xfffffffd) != 0)
        if (rax_3 == 4)
            sub_141c493f0(arg1)
        
        if (*(arg1 + 0x210) != 0)
            EnterCriticalSection(arg1 + 0x108)
            int64_t* rcx_9 = *(arg1 + 0x210)
            (*(*rcx_9 + 0x90))(rcx_9)
            *(arg1 + 0x210) = 0
            
            if (arg1 != -0x108)
                LeaveCriticalSection(arg1 + 0x108)
    
    rax_3.b = 1
    return rax_3

int64_t var_18 = 0
int32_t var_10 = 0
sub_1405947f0(&var_18, 0x1d)
int32_t rax = var_10 + 0x1d
var_10 = rax

if (rax s> 0)
    sub_140594770(&var_18)

int64_t rbx_1 = var_18
UnDecorator::getReferenceType(rbx_1, u"XAudio2 was not initialized.", 0x3a)
var_18 = 0
int32_t var_10_1 = 0
sub_1405947f0(&var_18, 0x6a)
int32_t rax_1 = var_10_1 + 0x6a
var_10_1 = rax_1

if (rax_1 s> 0)
    sub_140594770(&var_18)

int64_t rdi_1 = var_18
sub_1405a7220(rdi_1, 0x6a, 
    "D:"
"/Build/++UE4/Sync/Engine/Source/Runtime/Windows/AudioMixerXAudio2/Private/AudioMixerPlatformXAudio2."
"cpp", 
    0x6a, 0x3f)

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t rax_2
rax_2.b = 0
return rax_2
