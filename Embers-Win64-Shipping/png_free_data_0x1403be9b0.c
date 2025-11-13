// 函数: png_free_data
// 地址: 0x1403be9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

if ((*(arg2 + 0xec) & arg3 & 0x4000) != 0)
    if (arg4 == 0xffffffff)
        if (*(arg2 + 0x3c) s> 0)
            int32_t i = 0
            
            do
                png_free_data(arg1, arg2, 0x4000, zx.q(i))
                i += 1
            while (i s< *(arg2 + 0x3c))
        
        png_free(arg1, *(arg2 + 0x48))
        *(arg2 + 0x48) = 0
        *(arg2 + 0x3c) = 0
    else
        int64_t rax_3 = *(arg2 + 0x48)
        
        if (rax_3 != 0)
            int64_t rbp_1 = sx.q(arg4) * 0x38
            int64_t rdx = *(rax_3 + rbp_1 + 8)
            
            if (rdx != 0)
                png_free(arg1, rdx)
                *(*(arg2 + 0x48) + rbp_1 + 8) = 0

int32_t rax_5 = *(arg2 + 0xec)

if ((arg3 & rax_5 & 0x2000) != 0)
    png_free(arg1, *(arg2 + 0x68))
    *(arg2 + 0x68) = 0
    *(arg2 + 8) &= 0xef
    rax_5 = *(arg2 + 0xec)

int32_t rcx_8 = rax_5 & arg3

if ((rcx_8 & 0x100) != 0)
    *(arg2 + 9) &= 0xbf

if (rcx_8.b s< 0)
    png_free(arg1, *(arg2 + 0xc8))
    png_free(arg1, *(arg2 + 0xd8))
    *(arg2 + 0xc8) = 0
    *(arg2 + 0xd8) = 0
    int64_t rdx_6 = *(arg2 + 0xe0)
    
    if (rdx_6 != 0)
        if (*(arg2 + 0xe9) != 0)
            int64_t i_1 = 0
            
            do
                png_free(arg1, *(rdx_6 + (i_1 << 3)))
                *(*(arg2 + 0xe0) + (i_1 << 3)) = 0
                i_1 += 1
                rdx_6 = *(arg2 + 0xe0)
            while (i_1 u< zx.q(*(arg2 + 0xe9)))
        
        png_free(arg1, rdx_6)
        *(arg2 + 0xe0) = 0
    
    *(arg2 + 9) &= 0xfb
    rax_5 = *(arg2 + 0xec)

if ((arg3.b & rax_5.b & 0x10) != 0)
    png_free(arg1, *(arg2 + 0x100))
    png_free(arg1, *(arg2 + 0x108))
    *(arg2 + 0x100) = zx.o(0)
    *(arg2 + 9) &= 0xef
    rax_5 = *(arg2 + 0xec)

if ((rax_5.b & arg3.b & 0x20) != 0)
    if (arg4 == 0xffffffff)
        int32_t rax_13 = *(arg2 + 0x120)
        
        if (rax_13 != 0)
            if (rax_13 s> 0)
                int32_t i_2 = 0
                
                do
                    png_free_data(arg1, arg2, 0x20, zx.q(i_2))
                    i_2 += 1
                while (i_2 s< *(arg2 + 0x120))
            
            png_free(arg1, *(arg2 + 0x118))
            *(arg2 + 0x118) = 0
            *(arg2 + 0x120) = 0
        
        *(arg2 + 9) &= 0xdf
    else
        int64_t* rax_9 = *(arg2 + 0x118)
        
        if (rax_9 != 0)
            int64_t rbp_3 = sx.q(arg4) << 5
            png_free(arg1, rax_9[sx.q(arg4) * 4])
            png_free(arg1, *(*(arg2 + 0x118) + rbp_3 + 0x10))
            (*(arg2 + 0x118))[sx.q(arg4) * 4] = 0
            *(*(arg2 + 0x118) + rbp_3 + 0x10) = 0

int64_t rdx_14 = *(arg1 + 0x478)

if (rdx_14 != 0)
    png_free(arg1, rdx_14)
    *(arg1 + 0x478) = 0

if ((*(arg2 + 0xec) & arg3 & 0x200) != 0)
    if (arg4 == 0xffffffff)
        int32_t rax_18 = *(arg2 + 0xf8)
        
        if (rax_18 != 0)
            if (rax_18 s> 0)
                int32_t i_3 = 0
                
                do
                    png_free_data(arg1, arg2, 0x200, zx.q(i_3))
                    i_3 += 1
                while (i_3 s< *(arg2 + 0xf8))
            
            png_free(arg1, *(arg2 + 0xf0))
            *(arg2 + 0xf0) = 0
            *(arg2 + 0xf8) = 0
    else
        int64_t rax_16 = *(arg2 + 0xf0)
        
        if (rax_16 != 0)
            int64_t rbp_5 = sx.q(arg4) << 5
            png_free(arg1, *(rax_16 + rbp_5 + 8))
            *(*(arg2 + 0xf0) + rbp_5 + 8) = 0

int32_t rax = *(arg2 + 0xec)

if ((arg3.b & rax.b & 8) != 0)
    png_free(arg1, *(arg2 + 0xa0))
    *(arg2 + 0xa0) = 0
    *(arg2 + 8) &= 0xbf
    rax = *(arg2 + 0xec)

if ((arg3 & rax & 0x1000) != 0)
    png_free(arg1, *(arg2 + 0x18))
    *(arg2 + 0x18) = 0
    *(arg2 + 8) &= 0xf7
    *(arg2 + 0x20) = 0
    rax = *(arg2 + 0xec)

if ((arg3.b & rax.b & 0x40) != 0)
    int64_t rdx_20 = *(arg2 + 0x138)
    
    if (rdx_20 != 0)
        if (*(arg2 + 4) s> 0)
            int64_t i_4 = 0
            
            do
                png_free(arg1, *(rdx_20 + (i_4 << 3)))
                *(*(arg2 + 0x138) + (i_4 << 3)) = 0
                i_4 += 1
                rdx_20 = *(arg2 + 0x138)
            while (i_4 s< sx.q(*(arg2 + 4)))
        
        png_free(arg1, rdx_20)
        *(arg2 + 0x138) = 0
        rax = *(arg2 + 0xec)
    
    *(arg2 + 9) &= 0x7f

int32_t rcx_36 = arg3 & 0xffffbddf

if (arg4 == 0xffffffff)
    rcx_36 = arg3

*(arg2 + 0xec) = not.d(rcx_36) & rax
