// 函数: sub_1420a18f0
// 地址: 0x1420a18f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg2 + 0x28) & 2) != 0 && *(arg2 + 0x40) s< 0x1ed && *(arg1 + 0x90) != 0)
    if (*(arg1 + 0x98) == 0)
        *(arg1 + 0x98) = *(arg1 + 0x90)
    else
        void* rax_1 = sub_14245f6d0()
        
        if (rax_1 == 0)
            *(arg1 + 0x98) = *(arg1 + 0x90)
        else
            void* rdx = *(arg1 + 0x98)
            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
            
            if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30
                    || rdx == 0)
                *(arg1 + 0x98) = *(arg1 + 0x90)

int64_t result = sub_140ce8e10(arg1, arg2)

if ((*(arg2 + 0x28) & 1) != 0 && *(arg2 + 0x40) s< 0x1ed && *(arg1 + 0x90) != 0)
    if (*(arg1 + 0x98) == 0)
        result = *(arg1 + 0x90)
        *(arg1 + 0x98) = result
    else
        void* rax_5 = sub_14245f6d0()
        
        if (rax_5 == 0)
            result = *(arg1 + 0x90)
            *(arg1 + 0x98) = result
        else
            void* rdx_2 = *(arg1 + 0x98)
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s> *(rdx_2 + 0x38))
                result = *(arg1 + 0x90)
                *(arg1 + 0x98) = result
            else
                result = *(rdx_2 + 0x30)
                
                if (*(result + (rax_6 << 3)) != rax_5 + 0x30 || rdx_2 == 0)
                    result = *(arg1 + 0x90)
                    *(arg1 + 0x98) = result

return result
