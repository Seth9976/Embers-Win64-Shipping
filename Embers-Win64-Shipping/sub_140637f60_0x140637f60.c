// 函数: sub_140637f60
// 地址: 0x140637f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t rax = sub_141c122a0()

if (rax == 0)
    return 

int64_t rdx = rax + 0x30
rax = sx.q(*(rax + 0x38))

if (rax.d s> *(arg2 + 0x38) || *(*(arg2 + 0x30) + (rax << 3)) != rdx || arg1 == 0)
    return 

rax = sub_1423de540(data_143f5b298, arg1, 0)
int64_t rsi_1 = rax

if (rax == 0)
    return 

int64_t var_28 = 0
int32_t var_20_1 = 0
int32_t var_18_1 = 0xffffffff
sub_140d3cc80(sub_141c122a0(), &var_28, 1, 0x10, 0)
int32_t r8_2 = var_20_1
int32_t i = var_18_1 + 1
int64_t rdx_3 = var_28
int32_t i_1 = i

if (i s< r8_2)
    while (*(rdx_3 + (sx.q(i) << 3)) == 0)
        rax = zx.q(i + 1)
        i_1 = rax.d
        i = rax.d
        
        if (rax.d s>= r8_2)
            break

while (i s>= 0)
    if (i s>= r8_2)
        break
    
    int64_t* rcx_4 = *(rdx_3 + (sx.q(i) << 3))
    
    if ((*(*rcx_4 + 0x150))(rcx_4) == rsi_1)
        void* rdi_2 = *(var_28 + (sx.q(i_1) << 3))
        void* rax_5 = sub_141c122a0()
        void* const rax_8
        
        if (rax_5 == 0)
            rax_8 = nullptr
        else
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s> *(arg2 + 0x38))
                rax_8 = nullptr
            else
                rax_8 = arg2
                
                if (*(*(arg2 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                    rax_8 = nullptr
        
        void* rdx_5 = *(rdi_2 + 0x10)
        rax = sx.q(*(rax_8 + 0x38))
        
        if (rax.d s<= *(rdx_5 + 0x38) && *(*(rdx_5 + 0x30) + (rax << 3)) == rax_8 + 0x30
                && sub_141bae2b0(*(var_28 + (sx.q(i_1) << 3))).b != 0)
            sub_141bdba40(*(var_28 + (sx.q(i_1) << 3)))
    
    r8_2 = var_20_1
    i = i_1 + 1
    rdx_3 = var_28
    i_1 = i
    
    if (i s< r8_2)
        while (*(rdx_3 + (sx.q(i) << 3)) == 0)
            rax = zx.q(i + 1)
            i_1 = rax.d
            i = rax.d
            
            if (rax.d s>= r8_2)
                break

if (rdx_3 != 0)
    sub_140a74f90(rdx_3)
