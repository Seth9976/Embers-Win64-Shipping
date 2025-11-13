// 函数: sub_140b4eb90
// 地址: 0x140b4eb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t result = sub_140b33460(*arg4, u"%s\n", *(arg2 + 8))
arg4[2].d += 1

for (int64_t* i = *(arg2 + 0x10); i != 0; i = i[2])
    char rcx_1 = i[5].b
    
    if ((rcx_1 & 1) != 0)
        result = (*(arg3 + 4) u>> 4).b
    
    if ((rcx_1 & 1) == 0 || (result & 1) != 0)
        if ((rcx_1 & 2) != 0)
            result = (*(arg3 + 4) u>> 5).b
        
        if ((rcx_1 & 2) == 0 || (result & 1) != 0)
            int32_t j = 0
            int64_t r15_1 = i[1]
            int64_t rbp_2 = zx.q(i[4].d) + arg1
            
            if (arg4[2].d s> 0)
                do
                    int64_t* rbx_1 = *arg4
                    uint64_t* rcx_2 = rbx_1[1]
                    
                    if (&rcx_2[1] u>= rbx_1[2])
                        sub_140b38e20(rbx_1, 4)
                        rcx_2 = rbx_1[1]
                    
                    j += 1
                    rbx_1[1] = &rcx_2[1]
                    *rcx_2 = 0x20002000200020
                while (j s< arg4[2].d)
            
            sub_140b33460(*arg4, u"%s: ", *i)
            
            if (*(i + 0x29) != 0)
                int64_t* rbx_2 = *arg4
                int64_t rcx_6 = rbx_2[1]
                
                if (rcx_6 + 0x16 u>= rbx_2[2])
                    sub_140b38e20(rbx_2, 0xb)
                    rcx_6 = rbx_2[1]
                
                rbx_2[1] = rcx_6 + 0x16
                __builtin_memcpy(rcx_6, u"(BITFIELD)\n", 0x16)
                result = 0xa
            else
                result = (*(r15_1 + 0x40))(rbp_2, r15_1, arg3, arg4)

arg4[2].d -= 1
return result
