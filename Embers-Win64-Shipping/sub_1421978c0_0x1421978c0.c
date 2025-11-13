// 函数: sub_1421978c0
// 地址: 0x1421978c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f25180(arg1[0x44], 1)
sub_141dd1570(arg1)

if (arg1[0x44] != 0)
    wchar16* i_1 = nullptr
    
    for (wchar16* i = wcsstr(&AEmitter::OnParticleSystemFinished", ::"); i != 0; 
            i = wcsstr(&i[1], ::"))
        i_1 = i
    
    int64_t arg_8
    sub_140b58260(&arg_8, &i_1[2], 1)
    sub_140741f70(arg1[0x44] + 0x590, arg1, sub_14094eacc, arg_8)
    void* rcx_7 = arg1[0x44]
    int32_t rdx_6 = (zx.d(*(rcx_7 + 0x89)) u>> 5 & 0x7fffffc) | (arg1[0x45].d & 0xfffffffb)
    arg1[0x45].d = rdx_6
    
    if (rcx_7 != 0 && (rdx_6.b & 2) != 0)
        sub_141ef7250(rcx_7, 5)

jump(*(*arg1 + 0x650))
