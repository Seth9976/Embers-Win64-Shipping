// 函数: sub_141e49cb0
// 地址: 0x141e49cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = nullptr
int128_t zmm6 = arg3
void* const rdi_1

if (arg1 == 0)
    rdi_1 = nullptr
else
    void* rdi = arg1[4]
    
    if (rdi != 0)
        void* rax_1 = sub_142591550()
        void* rdx = *(rdi + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* r8_1
            r8_1.b = 1
            zmm6 = sub_141f3e990(arg1[4], 1, r8_1.b)
    
    rdi_1 = arg1[0x48]
    
    if (rdi_1 == 0)
        void* rax_5 = (*(*arg1 + 0x300))(arg1)
        arg1[0x48] = rax_5
        rdi_1 = rax_5

int64_t rbx_1 = *arg2
int32_t arg_20 = zmm6.d
int32_t i = *(rdi_1 + 0x6e8)

if (i != *(rdi_1 + 0x714))
    int32_t rax_7 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
    void* r8_2 = rdi_1 + 0x718
    void* rcx_4 = *(r8_2 + 8)
    
    if (rcx_4 != 0)
        r8_2 = rcx_4
    
    i = *(r8_2 + (((sx.q(*(rdi_1 + 0x728)) - 1) & sx.q(rax_7)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_3 = *(rdi_1 + 0x6e0)
        
        do
            int64_t rdx_4 = sx.q(i) * 5
            void* rcx_6 = r8_3 + (rdx_4 << 2)
            
            if (*(r8_3 + (rdx_4 << 2)) == rbx_1)
                if (i != 0xffffffff && rcx_6 != 0)
                    rsi = rcx_6 + 8
                
                break
            
            i = *(rcx_6 + 0xc)
        while (i != 0xffffffff)

if (arg4 != 0 && not(__andps_xmmxud_memxud(arg_20, data_142d3f770)[0] f> 9.99999975e-06f))
    return sub_1405c3480(rdi_1 + 0x6e0, *arg2)

if (rsi != 0)
    *rsi = arg_20[0]
    return i

int64_t* var_48 = arg2
int32_t* var_40 = &arg_20
int32_t arg_18
return sub_1405a8200(rdi_1 + 0x6e0, &arg_18, &var_48, nullptr)
