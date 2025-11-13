// 函数: sub_14231dbf0
// 地址: 0x14231dbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x2b4) &= 0xef
*(arg1 + 0x2b4) |= arg2 << 4
*(arg1 + 0x719) = (*(arg1 + 0x719) & 0xbf) | arg2 << 6
void* rax_2 = sub_141f64a80(arg1)

if (rax_2 != 0)
    int32_t i = 0
    
    if (arg1[0x101].d s> 0)
        void** rdi_1 = nullptr
        
        do
            void* rcx_2 = *(rdi_1 + arg1[0x100])
            
            if (rcx_2 != 0)
                void* rdx = *(rdi_1 + *(rax_2 + 0x40))
                
                if (rdx != 0 && *(rdx + 0x88) == 0)
                    arg3, arg4 = sub_142221990(rcx_2, arg2, 0, arg4)
            
            i += 1
            rdi_1 = &rdi_1[1]
        while (i s< arg1[0x101].d)

if ((*(*arg1 + 0x3e8))(arg1, 0) != 0)
    arg3 = sub_141f49140(arg1, arg1[0xf4].d)

sub_141f4dc50(arg1, arg3)
return sub_141f4d2c0(arg1) __tailcall
