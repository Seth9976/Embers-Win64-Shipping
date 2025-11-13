// 函数: sub_140d89510
// 地址: 0x140d89510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax

if (arg2 == 0x2710)
    int64_t* rcx_7 = *(arg1 + 0x10)
    rax = (*(*rcx_7 + 0xa0))(rcx_7, arg2 - 0x2710)
    
    if (rax != 0)
        int64_t rdx_7 = *rax
        
        if ((*(rdx_7 + 8))(rax, rdx_7).b == 0)
            rax.b = 1
            return rax
else if (arg2 == 0x2712)
    int64_t* rcx_5 = *(arg1 + 0x10)
    rax = (*(*rcx_5 + 0xa8))(rcx_5, arg2 - 0x2712)
    
    if (rax != 0)
        int64_t rdx_6 = *rax
        (*(rdx_6 + 0x10))(rax, rdx_6)
        
        if (not(__andps_xmmxud_memxud(arg3, data_142d3f770)[0] f> 9.99999994e-09f))
            rax.b = 1
            return rax
else if (arg2 == 0x2713)
    int64_t* rcx_3 = *(arg1 + 0x10)
    rax = (*(*rcx_3 + 0xa8))(rcx_3, arg2 - 0x2713)
    
    if (rax != 0)
        int64_t rdx_5 = *rax
        (*(rdx_5 + 0x10))(rax, rdx_5)
        
        if (not(arg3[0] f<= 0f))
            rax.b = 1
            return rax
else
    if (arg2 == 0x271e)
        int64_t* rcx_2 = *(arg1 + 0x10)
        int64_t rax_3
        rax_3.b = (*(*rcx_2 + 0xb0))(rcx_2, arg2 - 0x271e) != 0
        return rax_3
    
    if (arg2 == 0x271f)
        int64_t* rcx = *(arg1 + 0x10)
        rax = (*(*rcx + 0xa0))(rcx, arg2 - 0x271e)
        
        if (rax != 0)
            int64_t rdx_4 = *rax
            
            if ((*(rdx_4 + 8))(rax, rdx_4).b != 0)
                rax.b = 1
                return rax

rax.b = 0
return rax
