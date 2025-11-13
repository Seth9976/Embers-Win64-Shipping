// 函数: sub_142648490
// 地址: 0x142648490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg2
void* rax

if (arg2 != 0)
    int64_t var_18 = arg1 + 0x248
    int64_t var_10_1 = arg1 + 0x350
    rax, arg2 = sub_1426482b0(&var_18, arg2)

int32_t i = 0

if (*(rsi + 0xa0) s<= 0)
    return 

int64_t* rdi_1 = nullptr

do
    int64_t* r8_1 = *(rdi_1 + *(rsi + 0x98))
    
    if (r8_1 != 0)
        int32_t rax_3 = *(r8_1 + 0xc)
        void* const rax_7
        
        if (rax_3 s>= data_143e1d9b4)
            rax_7 = nullptr
        else
            uint32_t rdx = zx.d(rax_3.w)
            
            if (rax_3 s< 0)
                rax_3 += 0xffff
                rdx -= 0x10000
            
            rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(rdx) * 0x18
        
        if (((*(rax_7 + 8) u>> 0x1d).b & 1) == 0)
            arg2.b = 1
            rax, arg2 = sub_14266bf60(r8_1, arg2.b)
    
    i += 1
    rdi_1 = &rdi_1[1]
while (i s< *(rsi + 0xa0))
