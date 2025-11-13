// 函数: sub_141baa740
// 地址: 0x141baa740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_140638c50(arg2, 0)

if (arg3 == 0)
    return 

uint64_t rax = sub_140cbe090()

if (rax == 0)
    return 

int64_t rdx = rax + 0x30
rax = sx.q(*(rax + 0x38))

if (rax.d s> *(arg3 + 0x38) || *(*(arg3 + 0x30) + (rax << 3)) != rdx || arg1 == 0)
    return 

rax = sub_1423de540(data_143f5b298, arg1, 1)
uint64_t r15_1 = rax

if (rax == 0)
    return 

int64_t var_38 = 0
int32_t var_30_1 = 0
int32_t var_28_1 = 0xffffffff
sub_140d3cc80(sub_141c122a0(), &var_38, 1, 0x10, 0)
int32_t r8_1 = var_30_1
int32_t i = var_28_1 + 1
int64_t rdx_3 = var_38
int32_t i_1 = i

if (i s< r8_1)
    while (*(rdx_3 + (sx.q(i) << 3)) == 0)
        rax = zx.q(i + 1)
        i_1 = rax.d
        i = rax.d
        
        if (rax.d s>= r8_1)
            break

while (i s>= 0)
    if (i s>= r8_1)
        break
    
    int64_t* rsi_1 = *(rdx_3 + (sx.q(i) << 3))
    
    if ((*(*rsi_1 + 0x150))(rsi_1) == r15_1)
        void* rax_4 = sub_140cbe090()
        void* const rdx_5
        
        if (rax_4 == 0)
            rdx_5 = nullptr
        else
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> *(arg3 + 0x38))
                rdx_5 = nullptr
            else
                rdx_5 = arg3
                
                if (*(*(arg3 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                    rdx_5 = nullptr
        
        if (sub_140be1130(rsi_1[2], rdx_5).b != 0)
            if (arg4 == 0)
            label_141baa8d0:
                int64_t rbp_1 = sx.q(arg2[1].d)
                int32_t rax_7 = (rbp_1 + 1).d
                arg2[1].d = rax_7
                
                if (rax_7 s> *(arg2 + 0xc))
                    sub_140638870(arg2)
                
                *(*arg2 + (rbp_1 << 3)) = rsi_1
            else if (rsi_1[0x41] != 0)
                rax = rsi_1[0x42]
                
                if (rax != 0 && *(rax + 8) s> 0)
                    goto label_141baa8d0
    
    r8_1 = var_30_1
    i = i_1 + 1
    rdx_3 = var_38
    i_1 = i
    
    if (i s< r8_1)
        while (*(rdx_3 + (sx.q(i) << 3)) == 0)
            rax = zx.q(i + 1)
            i_1 = rax.d
            i = rax.d
            
            if (rax.d s>= r8_1)
                break

if (rdx_3 != 0)
    sub_140a74f90(rdx_3)
