// 函数: sub_1425fbb70
// 地址: 0x1425fbb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x274) & 1) != 0)
    int64_t* rcx_8 = *(arg1 + 0x200)
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0x10))(rcx_8)
        *(arg1 + 0x200) = 0
    
    HMODULE hLibModule = *(arg1 + 0x1f0)
    
    if (hLibModule != 0 && data_143de5432 != 0)
        FreeLibrary(hLibModule)
        *(arg1 + 0x1f0) = 0
    
    *(arg1 + 0x274) &= 0xfffffffe
    int64_t rax
    rax.b = 1
    return rax

int64_t var_18 = 0
int32_t var_10 = 0
sub_1405947f0(&var_18, 0x1f)
int32_t rax_1 = var_10 + 0x1f
var_10 = rax_1

if (rax_1 s> 0)
    sub_140594770(&var_18)

int64_t rbx_1 = var_18
UnDecorator::getReferenceType(rbx_1, u"XAudio2 was already tore down.", 0x3e)
var_18 = 0
int32_t var_10_1 = 0
sub_1405947f0(&var_18, 0x6a)
int32_t rax_2 = var_10_1 + 0x6a
var_10_1 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_18)

int64_t rdi = var_18
sub_1405a7220(rdi, 0x6a, 
    "D:"
"/Build/++UE4/Sync/Engine/Source/Runtime/Windows/AudioMixerXAudio2/Private/AudioMixerPlatformXAudio2."
"cpp", 
    0x6a, 0x3f)

if (rdi != 0)
    sub_140a74f90(rdi)

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t rax_3
rax_3.b = 0
return rax_3
