// 函数: sub_1403c2ae0
// 地址: 0x1403c2ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0

if (arg1 != 0)
    *(arg1 + 0x3b0) = 1
    int64_t rdx = *(arg1 + 0x3b8)
    
    if (rdx != 0)
        *(arg1 + 0x3b8) = 0
        png_free(arg1, rdx)
    
    int64_t rdx_1 = *(arg1 + 0x3c0)
    
    if (rdx_1 != 0)
        *(arg1 + 0x3c0) = 0
        png_free(arg1, rdx_1)
    
    int64_t rdx_2 = *(arg1 + 0x3c8)
    
    if (rdx_2 != 0)
        *(arg1 + 0x3c8) = 0
        png_free(arg1, rdx_2)
    
    if (arg2 == 2)
        if (arg3 s> 0)
            uint64_t rbx_2 = zx.q(arg3)
            char* rax = png_malloc(arg1, rbx_2)
            *(arg1 + 0x3b8) = rax
            *rax = 0xff
            
            if (arg3 != 1)
                uint64_t rax_2 = zx.q(arg3 - 1) & 3
                int64_t rcx_4 = 1
                
                if (rbx_2 - 2 u>= 3)
                    int64_t i = 0
                    
                    do
                        *(*(arg1 + 0x3b8) + i + 1) = 0xff
                        *(*(arg1 + 0x3b8) + i + 2) = 0xff
                        *(*(arg1 + 0x3b8) + i + 3) = 0xff
                        *(*(arg1 + 0x3b8) + i + 4) = 0xff
                        i += 4
                    while (rbx_2 - 1 - rax_2 != i)
                    
                    rcx_4 = i + 1
                
                if (rax_2.d != 0)
                    int64_t i_3 = neg.q(rax_2)
                    int64_t i_1
                    
                    do
                        (*(arg1 + 0x3b8))[rcx_4] = 0xff
                        rcx_4 += 1
                        i_1 = i_3
                        i_3 += 1
                    while (i_1 != -1)
            
            uint64_t rdi_5 = zx.q(arg3 * 2)
            *(arg1 + 0x3c0) = png_malloc(arg1, rdi_5)
            *(arg1 + 0x3c8) = png_malloc(arg1, rdi_5)
            uint64_t rax_6 = zx.q(rbx_2.d) & 1
            int64_t i_2
            
            if (arg3 != 1)
                i_2 = 0
                
                do
                    *(*(arg1 + 0x3c0) + (i_2 << 1)) = 0x100
                    *(*(arg1 + 0x3c8) + (i_2 << 1)) = 0x100
                    *(*(arg1 + 0x3c0) + (i_2 << 1) + 2) = 0x100
                    *(*(arg1 + 0x3c8) + (i_2 << 1) + 2) = 0x100
                    i_2 += 2
                while (rbx_2 - rax_6 != i_2)
                
                if (rax_6 != 0)
                    *(*(arg1 + 0x3c0) + (i_2 << 1)) = 0x100
                    *(*(arg1 + 0x3c8) + (i_2 << 1)) = 0x100
            else
                i_2 = 0
                
                if (rax_6 != 0)
                    *(*(arg1 + 0x3c0) + (i_2 << 1)) = 0x100
                    *(*(arg1 + 0x3c8) + (i_2 << 1)) = 0x100
            *(arg1 + 0x3b1) = arg3.b
        
        int16_t* rax_11 = *(arg1 + 0x3d0)
        
        if (rax_11 == 0)
            *(arg1 + 0x3d0) = png_malloc(arg1, 0xa)
            *(arg1 + 0x3d8) = png_malloc(arg1, 0xa)
            rax_11 = *(arg1 + 0x3d0)
        
        *rax_11 = 8
        **(arg1 + 0x3d8) = 8
        *(*(arg1 + 0x3d0) + 2) = 8
        *(*(arg1 + 0x3d8) + 2) = 8
        *(*(arg1 + 0x3d0) + 4) = 8
        *(*(arg1 + 0x3d8) + 4) = 8
        *(*(arg1 + 0x3d0) + 6) = 8
        *(*(arg1 + 0x3d8) + 6) = 8
        *(*(arg1 + 0x3d0) + 8) = 8
        *(*(arg1 + 0x3d8) + 8) = 8
        *(arg1 + 0x3b0) = 2
        return 1
    
    result = 1
    
    if (arg2 u>= 2)
        png_warning(arg1, "Unknown filter heuristic method")
        return 0

return result
