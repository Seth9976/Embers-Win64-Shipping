// 函数: sub_140cda7e0
// 地址: 0x140cda7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t r8 = rcx[1].d

if (r8 != 0)
    sub_140cd9680(arg1, 0, r8)
    rcx = arg1[1]
label_140cda814:
    int32_t r8_1 = arg1[2].d
    rcx[1].d = 0
    
    if ((not.b(*(arg1 + 0x14)) & 1) != 0)
        if (arg2 != *(rcx + 0xc))
            sub_140ce4fc0(rcx, arg2, r8_1)
    else if (arg2 != *(rcx + 0xc))
        return sub_140ce4f50(rcx, arg2, r8_1) __tailcall
else if (arg2 != 0)
    goto label_140cda814
