// 函数: sub_142c4eda0
// 地址: 0x142c4eda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = GetProcAddress(*(arg1 + 0x1a8), "AmdExtD3DCreateInterface")

if (rax != 0 && rax(*(arg1 + 0x1b0), &data_1436b0d50, arg1 + 0x1c0) == 0)
    int64_t* rcx_2 = *(arg1 + 0x1c0)
    
    if (rcx_2 != 0)
        if ((*(*rcx_2 + 0x18))(rcx_2, *(arg1 + 0x1b0), &data_1436b0d60, arg1 + 0x1c8) == 0)
            int64_t* rcx_3 = *(arg1 + 0x1c8)
            
            if (rcx_3 != 0)
                if ((*(*rcx_3 + 0x20))(rcx_3, 1) == 0)
                    *(arg3 + 8) |= 1
                
                int64_t* rcx_4 = *(arg1 + 0x1c8)
                
                if ((*(*rcx_4 + 0x20))(rcx_4, 2) == 0)
                    *(arg3 + 8) |= 2
                
                int64_t* rcx_5 = *(arg1 + 0x1c8)
                
                if ((*(*rcx_5 + 0x20))(rcx_5, 3) == 0)
                    *(arg3 + 8) |= 4
                
                int64_t* rcx_6 = *(arg1 + 0x1c8)
                
                if ((*(*rcx_6 + 0x20))(rcx_6, 4) == 0)
                    *(arg3 + 8) |= 8
                
                int64_t* rcx_7 = *(arg1 + 0x1c8)
                
                if ((*(*rcx_7 + 0x20))(rcx_7, 5) == 0)
                    *(arg3 + 8) |= 0x10
                
                int64_t* rcx_8 = *(arg1 + 0x1c8)
                
                if ((*(*rcx_8 + 0x20))(rcx_8, 6) == 0)
                    *(arg3 + 8) |= 0x20
                
                int64_t* rcx_9 = *(arg1 + 0x1c8)
                
                if ((*(*rcx_9 + 0x20))(rcx_9, 7) == 0)
                    *(arg3 + 8) |= 0x40
                
                int64_t* rcx_10 = *(arg1 + 0x1c8)
                
                if ((*(*rcx_10 + 0x20))(rcx_10, 8) == 0)
                    *(arg3 + 8) |= 0x80
                
                int64_t* rcx_11 = *(arg1 + 0x1c8)
                
                if ((*(*rcx_11 + 0x20))(rcx_11, 9) == 0)
                    *(arg3 + 8) |= 0x100
                
                int64_t* rcx_12 = *(arg1 + 0x1c8)
                
                if ((*(*rcx_12 + 0x20))(rcx_12, 0xa) == 0)
                    *(arg3 + 8) |= 0x200
                
                int64_t* rcx_13 = *(arg1 + 0x1c8)
                
                if ((*(*rcx_13 + 0x20))(rcx_13, 0xe) == 0)
                    *(arg3 + 8) |= 0x2000
                
                int64_t* rcx_14 = *(arg1 + 0x1c8)
                
                if ((*(*rcx_14 + 0x20))(rcx_14, 0xf) == 0)
                    *(arg3 + 8) |= 0x4000
                
                int64_t* rcx_15 = *(arg1 + 0x1c0)
                (*(*rcx_15 + 0x18))(rcx_15, *(arg1 + 0x1b0), &data_1436b0d70, arg1 + 0x1d0)
                
                if (*(arg1 + 0x1d0) != 0)
                    *(arg3 + 8) |= 0x1000
                    
                    if (arg2 != 0)
                        int64_t* rcx_16 = *(arg1 + 0x1d0)
                        (*(*rcx_16 + 0x30))(rcx_16, zx.q(arg2), 0)
                
                int64_t* rcx_17 = *(arg1 + 0x1c8)
                
                if ((*(*rcx_17 + 0x28))(rcx_17) != 0)
                    *(arg3 + 8) &= 0xffff9c00
        
        int64_t* rcx_18 = *(arg1 + 0x1c0)
        
        if ((*(*rcx_18 + 0x18))(rcx_18, *(arg1 + 0x1b0), &data_1436b0d80, arg1 + 0x1d8) == 0
                && *(arg1 + 0x1d8) != 0)
            *(arg3 + 8) |= 0x80000400

int32_t result = *(arg3 + 8)
*(arg1 + 0x1b8) = result
return result
