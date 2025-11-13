// 函数: png_write_end
// 地址: 0x1403c19f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int32_t rax = *(arg1 + 0x154)

if ((rax.b & 4) == 0)
    png_error(arg1, "No IDATs written into file")
    noreturn

if (arg2 != 0)
    if ((rax & 0x200) == 0 && (0x200 & *(arg2 + 8)) != 0)
        sub_1403d1dc0(arg1, arg2 + 0x50, arg3, arg4)
    
    if (*(arg2 + 0x3c) s> 0)
        int64_t rbx_1 = 0
        int64_t i = 0
        
        do
            int32_t* rcx_2 = *(arg2 + 0x48)
            int32_t rdx_2 = *(rcx_2 + rbx_1)
            
            if (rdx_2 s> 0)
                sub_1403d14b0(arg1, rdx_2, *(rcx_2 + rbx_1 + 8), *(rcx_2 + rbx_1 + 0x28), 
                    *(rcx_2 + rbx_1 + 0x30), *(rcx_2 + rbx_1 + 0x10))
                *(*(arg2 + 0x48) + rbx_1) = -3
            else if (rdx_2 s>= 0)
                uint8_t* var_38
                var_38.d = rdx_2
                sub_1403d1280(arg1, *(rcx_2 + rbx_1 + 8), *(rcx_2 + rbx_1 + 0x10), 0)
                *(*(arg2 + 0x48) + rbx_1) = -2
            else if (rdx_2 == 0xffffffff)
                sub_1403d10c0(arg1, *(rcx_2 + rbx_1 + 8), *(rcx_2 + rbx_1 + 0x10))
                *(*(arg2 + 0x48) + rbx_1) = -3
            
            i += 1
            rbx_1 += 0x38
        while (i s< sx.q(*(arg2 + 0x3c)))
    
    int32_t rax_6 = *(arg2 + 0xf8)
    
    if (rax_6 != 0 && rax_6 s> 0)
        int32_t* i_1 = *(arg2 + 0xf0)
        
        do
            int32_t rax_7 = png_handle_as_unknown(arg1, i_1)
            
            if (rax_7 != 1 && (i_1[6].b & 8) != 0
                    && (rax_7 == 3 || (*(i_1 + 3) & 0x20) != 0 || (*(arg1 + 0x15a) & 1) != 0))
                png_write_chunk(arg1, i_1, *(i_1 + 8), *(i_1 + 0x10))
            
            i_1 = &i_1[8]
        while (i_1 u< (sx.q(*(arg2 + 0xf8)) << 5) + *(arg2 + 0xf0))

*(arg1 + 0x154) |= 8
return sub_1403cfd80(arg1) __tailcall
