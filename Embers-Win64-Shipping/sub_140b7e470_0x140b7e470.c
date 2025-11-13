// 函数: sub_140b7e470
// 地址: 0x140b7e470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* i

if (*(arg1 + 0x18) s> 0)
    i = sub_1405a71a0(arg1 + 0x10, arg2)

if (*(arg1 + 0x18) s> 0 && i.b == 0)
labelid_1:
    i.b = 0
else if (sub_1405a71a0(arg1 + 0x20, arg2).b != 0)
labelid_1:
    i.b = 0
else if (*(arg1 + 0x38) s<= 0)
label_140b7e4f1:
    
    for (i = *(arg1 + 0x40); i != &i[sx.q(*(arg1 + 0x48))]; i = &i[1])
        if (*i == arg5)
            goto label_140b7e5fe_3
    
    if (*(arg1 + 0x58) s<= 0)
    label_140b7e542:
        
        for (i = *(arg1 + 0x60); i != &i[sx.q(*(arg1 + 0x68))]; i = &i[1])
            if (*i == arg3)
                goto label_140b7e5fe_3
        
        if (arg5 != 5)
        label_140b7e58f:
            i = sx.q(*(arg1 + 8))
            
            if (i.d u> 0xd)
            labelid_1:
                i.b = 0
            else
                switch (i)
                    case nullptr, 1
                        i.b = arg5 != 5
                    case 2
                        i.b = 1
                    case 3
                        return zx.q(arg7)
                    case 4
                        i.b = arg7 ^ 1
                    case 5, 9
                        i.b = arg5 - 4 u<= 1
                    case 6
                        return zx.q(arg6)
                    case 7, 8
                        i.b = arg5 == 4
                    case 0xa
                        i.b = arg5 == 5
                    case 0xb
                        i.b = ((arg5 - 3) & 0xfd) != 0
                    case 0xc, 0xd
                        if (arg5 == 5 || arg5 == 2)
                        label_140b7e5fe:
                            i.b = 0
                        else
                            i.b = 1
        else
            if (*(arg1 + 0x78) s> 0)
                return sub_1405a71a0(arg1 + 0x70, arg4)
            
            if (sub_1405a71a0(arg1 + 0x80, arg4).b == 0)
                goto label_140b7e58f
            
        label_140b7e5fe_1:
            i.b = 0
    else
        i = *(arg1 + 0x50)
        void* rcx_7 = &i[sx.q(*(arg1 + 0x58))]
        
        if (i != rcx_7)
            while (*i != arg3)
                i = &i[1]
                
                if (i == rcx_7)
                    goto label_140b7e5fe_3
            
            goto label_140b7e542
        
    label_140b7e5fe_2:
        i.b = 0
else
    i = *(arg1 + 0x30)
    void* rcx_3 = &i[sx.q(*(arg1 + 0x38))]
    
    if (i != rcx_3)
        while (*i != arg5)
            i = &i[1]
            
            if (i == rcx_3)
                goto label_140b7e5fe_3
        
        goto label_140b7e4f1
    
label_140b7e5fe_3:
    i.b = 0

return i
