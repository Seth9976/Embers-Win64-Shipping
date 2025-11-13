// 函数: sub_141e491f0
// 地址: 0x141e491f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg4

if (arg2 != arg1[0x4d])
    arg1[0x4d] = arg2

void* rsi = arg1[4]

if (rsi != 0)
    void* rax_1 = sub_142591550()
    void* rdx = *(rsi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* r8
        r8.b = 1
        zmm6 = sub_141f3e990(arg1[4], 1, r8.b)

int64_t* rsi_1 = arg1[0x48]

if (rsi_1 == 0)
    int64_t* rax_5 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_5
    rsi_1 = rax_5

if (arg2 != 0)
    (*(*arg2 + 0x278))(arg2)

void* r8_1 = arg1[4]

if (r8_1 != 0)
    void* rcx_4 = *(r8_1 + 0x430)
    
    if (rcx_4 == 0)
        arg1[0x4d] = 0
    else
        void* rax_7 = arg1[0x4d]
        
        if (rax_7 != 0 && *(rcx_4 + 0x60) != *(rax_7 + 0x38))
            arg1[0x4d] = 0
    
    *(r8_1 + 0x716) = 2
    r8_1 = arg1[4]

(*(*rsi_1 + 0xa8))(rsi_1, arg2, r8_1, zx.q(arg3), zmm6.d)

if (arg2 != 0)
    void* rax_10 = sub_14245c440()
    void* rdx_2 = arg2[2]
    int64_t rax_11 = sx.q(*(rax_10 + 0x38))
    
    if (rax_11.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_11 << 3)) == rax_10 + 0x30)
        (*(*arg2 + 0x338))(arg2, rdx_2)
    
    void* rax_14 = sub_1424641d0()
    void* rdx_3 = arg2[2]
    int64_t rax_15 = sx.q(*(rax_14 + 0x38))
    
    if (rax_15.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax_15 << 3)) == rax_14 + 0x30)
        sub_141e0b730(rsi_1)
        
        if (arg2[0x2c].d s> 0)
            sub_141e0ae50(rsi_1, arg2[0x2b])
            rsi_1[0xeb] = *arg2[0x2b]
        
        (*(*arg1 + 0x328))(arg1, arg2, 0)
        int64_t* rax_20 = sub_141df83c0(arg1)
        
        if (rax_20 != 0)
            return sub_141e498b0(arg1, rax_20[5].b)
        
        void* rdi_1 = arg1[4]
        
        if (rdi_1 != 0)
            void* rax_22 = sub_142591550()
            void* rdx_7 = *(rdi_1 + 0x10)
            int64_t rax_23 = sx.q(*(rax_22 + 0x38))
            
            if (rax_23.d s<= *(rdx_7 + 0x38) && *(*(rdx_7 + 0x30) + (rax_23 << 3)) == rax_22 + 0x30)
                void* r8_4
                r8_4.b = 1
                sub_141f3e990(arg1[4], 1, r8_4.b)
        
        void* rax_26 = arg1[0x48]
        
        if (rax_26 == 0)
            rax_26 = (*(*arg1 + 0x300))(arg1)
            arg1[0x48] = rax_26
        
        return sub_141e498b0(arg1, *(rax_26 + 0x825))

return sub_141e0d6c0(arg1, 0x3e800000)
