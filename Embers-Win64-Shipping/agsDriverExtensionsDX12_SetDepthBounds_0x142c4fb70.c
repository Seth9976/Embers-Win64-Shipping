// 函数: agsDriverExtensionsDX12_SetDepthBounds
// 地址: 0x142c4fb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1
zmm1.o = arg3

if (arg1 != 0 && arg2 != 0)
    if (*(arg1 + 0x1d8) == 0)
        return 6
    
    if (*(arg1 + 0x1e8) != 0)
        void** r8 = *(arg1 + 0x1e0)
        void** rax_1 = r8
        void** rcx = r8[1]
        
        if (*(rcx + 0x19) != 0)
            rax_1 = r8
        else
            do
                if (rcx[4] u>= arg2)
                    rax_1 = rcx
                    rcx = *rcx
                else
                    rcx = rcx[2]
            while (*(rcx + 0x19) == 0)
            
            if (rax_1 == r8 || arg2 u< rax_1[4])
                rax_1 = r8
        
        if (rax_1 == r8)
            return 1
        
        int64_t* rcx_1 = rax_1[5]
        (*(*rcx_1 + 0x18))(rcx_1, arg2, arg4)
        return 0

return 2
