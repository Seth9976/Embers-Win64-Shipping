// 函数: sub_141ee5480
// 地址: 0x141ee5480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x148)
wchar16 const* const rdx_1
uint32_t r8

if (rcx == 0)
label_141ee5547:
    uint64_t rax_6 = zx.q(*(arg1 + 0x168))
    
    if (rax_6.d u> 6)
        *arg2 = 0
        arg2[1] = 0
        sub_1405947f0(arg2, 8)
        int32_t rax_14 = arg2[1].d + 8
        arg2[1].d = rax_14
        
        if (rax_14 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        rdx_1 = u"Unknown"
        r8 = 0x10
    else
        switch (rax_6)
            case 0
                *arg2 = 0
                arg2[1] = 0
                sub_1405947f0(arg2, 5)
                int32_t rax_7 = arg2[1].d + 5
                arg2[1].d = rax_7
                
                if (rax_7 s> *(arg2 + 0xc))
                    sub_140594770(arg2)
                
                r8 = 0xa
                rdx_1 = u"NULL"
            case 1
                *arg2 = 0
                arg2[1] = 0
                sub_1405947f0(arg2, 8)
                int32_t rax_8 = arg2[1].d + 8
                arg2[1].d = rax_8
                
                if (rax_8 s> *(arg2 + 0xc))
                    sub_140594770(arg2)
                
                rdx_1 = u"Walking"
                r8 = 0x10
            case 2
                *arg2 = 0
                arg2[1] = 0
                sub_1405947f0(arg2, 0xb)
                int32_t rax_9 = arg2[1].d + 0xb
                arg2[1].d = rax_9
                
                if (rax_9 s> *(arg2 + 0xc))
                    sub_140594770(arg2)
                
                r8 = 0x16
                rdx_1 = u"NavWalking"
            case 3
                *arg2 = 0
                arg2[1] = 0
                sub_1405947f0(arg2, 8)
                int32_t rax_10 = arg2[1].d + 8
                arg2[1].d = rax_10
                
                if (rax_10 s> *(arg2 + 0xc))
                    sub_140594770(arg2)
                
                rdx_1 = u"Falling"
                r8 = 0x10
            case 4
                *arg2 = 0
                arg2[1] = 0
                sub_1405947f0(arg2, 9)
                int32_t rax_11 = arg2[1].d + 9
                arg2[1].d = rax_11
                
                if (rax_11 s> *(arg2 + 0xc))
                    sub_140594770(arg2)
                
                r8 = 0x12
                rdx_1 = u"Swimming"
            case 5
                *arg2 = 0
                arg2[1] = 0
                sub_1405947f0(arg2, 7)
                int32_t rax_12 = arg2[1].d + 7
                arg2[1].d = rax_12
                
                if (rax_12 s> *(arg2 + 0xc))
                    sub_140594770(arg2)
                
                r8 = 0xe
                rdx_1 = u"Flying"
            case 6
                *arg2 = 0
                arg2[1] = 0
                sub_1405947f0(arg2, 7)
                int32_t rax_13 = arg2[1].d + 7
                arg2[1].d = rax_13
                
                if (rax_13 s> *(arg2 + 0xc))
                    sub_140594770(arg2)
                
                r8 = 0xe
                rdx_1 = u"Custom"
else
    int64_t* rcx_1 = *(rcx + 0x130)
    char rax_2
    
    if (rcx_1 != 0)
        int64_t arg_8 = 0
        rax_2 = (*(*rcx_1 + 0x3e8))(rcx_1, 0)
    
    if (rcx_1 == 0 || rax_2 == 0)
        if (sub_141dce090(*(arg1 + 0x148)) == 0)
            goto label_141ee5547
        
        *arg2 = 0
        arg2[1] = 0
        sub_1405947f0(arg2, 8)
        int32_t rax_5 = arg2[1].d + 8
        arg2[1].d = rax_5
        
        if (rax_5 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        rdx_1 = u"Matinee"
        r8 = 0x10
    else
        *arg2 = 0
        arg2[1] = 0
        sub_1405947f0(arg2, 0xb)
        int32_t rax_3 = arg2[1].d + 0xb
        arg2[1].d = rax_3
        
        if (rax_3 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        r8 = 0x16
        rdx_1 = u"Rigid Body"

UnDecorator::getReferenceType(*arg2, rdx_1, r8)
return arg2
