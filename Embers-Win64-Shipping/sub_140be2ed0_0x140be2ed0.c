// 函数: sub_140be2ed0
// 地址: 0x140be2ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 1
bool r8 = sub_140b5b8a0(*arg1, 0) == 0

if ((arg1[1] != 0 | r8) == 0)
    goto label_140be2f1e

if (*arg1 == *arg2)
    rbx = 9
label_140be2f1e:
    int32_t rcx_1
    rcx_1.b = sub_140b5b8a0(arg1[2], 0) == 0
    
    if ((arg1[3] != 0 | rcx_1.b) == 0)
        goto label_140be2f45
    
    if (*(arg1 + 8) == arg2[1])
        rbx += 4
    label_140be2f45:
        int32_t rcx_2
        rcx_2.b = sub_140b5b8a0(arg1[4], 0) == 0
        
        if ((arg1[5] != 0 | rcx_2.b) == 0)
            return zx.q(rbx)
        
        if (*(arg1 + 0x10) == arg2[2])
            return zx.q(rbx + 2)

return 0
