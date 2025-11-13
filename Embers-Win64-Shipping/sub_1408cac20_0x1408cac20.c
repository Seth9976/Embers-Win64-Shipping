// 函数: sub_1408cac20
// 地址: 0x1408cac20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
rdi.b = 0

if (arg2 != 0)
    void* rax_1 = sub_1408cb160()
    void* rdx = arg2[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38))
        rdi = 0
        
        if (*(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            rdi = 1
    
    void* rax_4 = sub_1425b3af0()
    void* rdx_1 = arg2[2]
    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_5.d s<= *(rdx_1 + 0x38))
        rdi = zx.q(rdi.b)
        
        if (*(*(rdx_1 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
            rdi = 1
    
    void* rax_7 = sub_1425b6f00()
    void* rdx_2 = arg2[2]
    int64_t rax_8 = sx.q(*(rax_7 + 0x38))
    
    if (rax_8.d s<= *(rdx_2 + 0x38))
        rdi = zx.q(rdi.b)
        
        if (*(*(rdx_2 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
            rdi = 1
    
    void* rax_10 = sub_1425b2830()
    void* rdx_3 = arg2[2]
    int64_t rax_11 = sx.q(*(rax_10 + 0x38))
    
    if (rax_11.d s<= *(rdx_3 + 0x38))
        rdi = zx.q(rdi.b)
        
        if (*(*(rdx_3 + 0x30) + (rax_11 << 3)) == rax_10 + 0x30)
            rdi = 1
    
    if ((*(*arg2 + 0x308))(arg2, rdx_3, rax_10 + 0x30) == 0x800)
        int32_t result
        result.b = 1
        return result
    
    if (rdi.b == 0 && *arg3 != u"Invalid texture type")
        int32_t rcx_5 = *(arg3 + 0xc)
        int32_t rdx_4 = 0
        arg3[1].d = 0
        
        if (rcx_5 != 0x15)
            sub_1405947f0(arg3, 0x15)
            rdx_4 = arg3[1].d
            rcx_5 = *(arg3 + 0xc)
        
        arg3[1].d = rdx_4 + 0x15
        
        if (rdx_4 + 0x15 s> rcx_5)
            sub_140594770(arg3)
        
        int64_t rdx_5 = *arg3
        __builtin_memcpy(rdx_5, u"Invalid texture ", 0x20)
        *(rdx_5 + 0x20) = 0x65007000790074
        *(rdx_5 + 0x28) = 0
else if (*arg3 != u"NULL Textue")
    int32_t rcx_8 = *(arg3 + 0xc)
    int32_t rdx_6 = 0
    arg3[1].d = 0
    
    if (rcx_8 != 0xc)
        sub_1405947f0(arg3, 0xc)
        rdx_6 = arg3[1].d
        rcx_8 = *(arg3 + 0xc)
    
    arg3[1].d = rdx_6 + 0xc
    
    if (rdx_6 + 0xc s> rcx_8)
        sub_140594770(arg3)
    
    int128_t* rax_17 = *arg3
    *rax_17 = (*u"NULL Textue")[0].o
    rax_17[1].q = 0x6500750074

return zx.q(rdi.b)
