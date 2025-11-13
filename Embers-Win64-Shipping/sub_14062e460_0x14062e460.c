// 函数: sub_14062e460
// 地址: 0x14062e460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3[1].d = 0

if (*(arg3 + 0xc) != 0)
    sub_140638c50(arg3, 0)

if (arg2 == 0)
    return 

uint64_t rax = sub_141c122a0()

if (rax == 0)
    return 

int64_t rdx = rax + 0x30
rax = sx.q(*(rax + 0x38))

if (rax.d s> *(arg2 + 0x38) || *(*(arg2 + 0x30) + (rax << 3)) != rdx || arg1 == 0)
    return 

rax = sub_1423de540(data_143f5b298, arg1, 0)
uint64_t r12_1 = rax

if (rax == 0)
    return 

int64_t var_48 = 0
int32_t var_40_1 = 0
int32_t var_38_1 = 0xffffffff
sub_140d3cc80(sub_141c122a0(), &var_48, 1, 0x10, 0)
int32_t r8_1 = var_40_1
int32_t i = var_38_1 + 1
int64_t rdx_3 = var_48
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
    
    int64_t* rcx_5 = *(rdx_3 + (sx.q(i) << 3))
    
    if ((*(*rcx_5 + 0x150))(rcx_5) == r12_1)
        void* rsi_1 = *(var_48 + (sx.q(i_1) << 3))
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
        
        void* rdx_5 = *(rsi_1 + 0x10)
        rax = sx.q(*(rax_8 + 0x38))
        
        if (rax.d s<= *(rdx_5 + 0x38) && *(*(rdx_5 + 0x30) + (rax << 3)) == rax_8 + 0x30)
            int64_t i_2 = sx.q(i_1)
            int64_t rax_9 = var_48
            
            if (arg4 == 0)
                goto label_14062e600
            
            if (sub_141bae2b0(*(rax_9 + (i_2 << 3))).b != 0)
                i_2 = sx.q(i_1)
                rax_9 = var_48
            label_14062e600:
                int64_t rsi_2 = sx.q(arg3[1].d)
                int64_t r14_1 = *(rax_9 + (i_2 << 3))
                int32_t rax_10 = (rsi_2 + 1).d
                arg3[1].d = rax_10
                
                if (rax_10 s> *(arg3 + 0xc))
                    sub_140638870(arg3)
                
                *(*arg3 + (rsi_2 << 3)) = r14_1
    
    r8_1 = var_40_1
    i = i_1 + 1
    rdx_3 = var_48
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
