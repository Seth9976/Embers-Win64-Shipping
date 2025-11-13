// 函数: sub_140d848a0
// 地址: 0x140d848a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = arg1
*arg3 = 0
void* rax_2

if (*arg2 != 0x47a2e18e54fcb24b || arg2[1] != -0x5d668a1834132c4c)
    if (*arg2 == 0x469133e636dc7aef && arg2[1] == 0x333d4b27e72be1af)
        rax_2 = &arg1[-5]
        arg1 = &arg1[1]
        goto label_140d84982
    
    if (*arg2 == 0x436763f33589c92c && arg2[1] == -0xd8348ac59524467)
        rax_2 = &arg1[-5]
        arg1 = &arg1[2]
        goto label_140d84982
    
    if (*arg2 == 0x433cc4f456d00bd0 && arg2[1] == -0x6df7815aade5c958)
        rax_2 = &arg1[-5]
        arg1 = &arg1[3]
        goto label_140d84982
    
    if (*arg2 == 0x42016fb3c7935180 && arg2[1] == 0x4af6db3af77d74b1)
        rax_2 = &arg1[-5]
        arg1 = &arg1[5]
        goto label_140d84982
    
    if (*arg2 == 0x4d77db06987df77b && arg2[1] == -0x466f443c56797571)
        rax_2 = &arg1[-5]
        arg1 = &arg1[6]
        goto label_140d84982
else
    rax_2 = &arg1[-5]
label_140d84982:
    
    if (rax_2 == 0)
        arg1 = nullptr
    
    *arg3 = arg1
    
    if (arg1 != 0)
        (*(*r9 + 8))(r9)
        return 0
return 0x80004002
